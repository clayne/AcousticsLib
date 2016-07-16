/*
 * ALSound.h
 *
 * This file is part of the "AcousticsLib" project (Copyright (c) 2016 by Lukas Hermanns)
 * See "LICENSE.txt" for license information.
 */

#ifndef __AC_AL_SOUND_H__
#define __AC_AL_SOUND_H__


#include "ALSourceObj.h"
#include "ALBufferObj.h"

#include <Ac/Sound.h>
#include <vector>


namespace Ac
{


class ALSound : public Sound
{

    public:

        ALSound();
        ~ALSound();

        void Play() override;
        void Pause() override;
        void Stop() override;

        void SetVolume(float volume) override;
        float GetVolume() const override;

        void SetBalance(float balance) override;
        float GetBalance() const override;

        void SetFrequencyRatio(float ratio) override;
        float GetFrequencyRatio() const override;

        bool IsPlaying() const override;
        bool IsPaused() const override;

        void SetSeek(double position) override;
        double GetSeek() const override;

        double TotalTime() const override;

        void AttachBuffer(const std::shared_ptr<ALBufferObj>& bufferObj);

    private:

        ALSourceObj                     sourceObj_;
        std::shared_ptr<ALBufferObj>    bufferObj_;

};


} // /namespace Ac


#endif



// ================================================================================
