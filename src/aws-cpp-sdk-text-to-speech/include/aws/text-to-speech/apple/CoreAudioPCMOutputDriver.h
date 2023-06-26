/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/text-to-speech/PCMOutputDriver.h>
#include <aws/core/utils/memory/stl/AWSQueue.h>
#include <aws/core/utils/Array.h>
#include <AudioQueue.h>

#include <mutex>
#include <condition_variable>

namespace Aws
{
    namespace TextToSpeech
    {
        /**
         * Apple implementation for PCM output.
         */
        class CoreAudioPCMOutputDriver : public PCMOutputDriver
        {
        public:
            CoreAudioPCMOutputDriver();
            virtual ~CoreAudioPCMOutputDriver();

            CoreAudioPCMOutputDriver(const CoreAudioPCMOutputDriver&) = delete;
            CoreAudioPCMOutputDriver& operator=(const CoreAudioPCMOutputDriver&) = delete;
            CoreAudioPCMOutputDriver(CoreAudioPCMOutputDriver&&) = delete;
            CoreAudioPCMOutputDriver& operator=(CoreAudioPCMOutputDriver&&) = delete;

            bool WriteBufferToDevice(const unsigned char* buffer, size_t bufferSize) override;
            Aws::Vector<DeviceInfo> EnumerateDevices() const override;
            void SetActiveDevice(const DeviceInfo& device, const CapabilityInfo& capability) override;
            const char* GetName() const override;

            void Prime() override;
            void Flush() override;

        private:
            void InitDevice();
            void CleanUp();
            static void OnBufferReady(void *custom_data, AudioQueueRef queue, AudioQueueBufferRef buffer);


            AudioStreamBasicDescription m_selectedCaps;
            AudioQueueRef m_audioQueue;
            Aws::Queue<AudioQueueBufferRef> m_bufferQueue;
            size_t m_maxBufferSize;
            size_t m_bufferCount;
            std::mutex m_queueBufferLock;
            std::condition_variable m_queueReadySemaphore;
        };
    }
}
