/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/text-to-speech/TextToSpeech_EXPORTS.h>
#include <aws/text-to-speech/PCMOutputDriver.h>

#include <mutex>

#include <Windows.h>

namespace Aws
{
    namespace TextToSpeech
    {
        /**
         * Win32 implementation for PCM output.
         */
        class AWS_TEXT_TO_SPEECH_API WaveOutPCMOutputDriver : public PCMOutputDriver
        {
        public:
            WaveOutPCMOutputDriver();
            virtual ~WaveOutPCMOutputDriver();

            WaveOutPCMOutputDriver(const WaveOutPCMOutputDriver&) = delete;
            WaveOutPCMOutputDriver& operator=(const WaveOutPCMOutputDriver&) = delete;
            WaveOutPCMOutputDriver(WaveOutPCMOutputDriver&&) = delete;
            WaveOutPCMOutputDriver& operator=(WaveOutPCMOutputDriver&&) = delete;

            virtual bool WriteBufferToDevice(const unsigned char* buffer, size_t bufferSize) override;
            virtual Aws::Vector<DeviceInfo> EnumerateDevices() const override;
            virtual void SetActiveDevice(const DeviceInfo& device, const CapabilityInfo& caps) override; 
            const char* GetName() const override;

        private:
            void InitDevice();

            DeviceInfo m_activeDevice;
            CapabilityInfo m_selectedCaps;
            HWAVEOUT m_waveOut;
            bool m_isInit;
            std::recursive_mutex m_driverLock;
        };
    }
}