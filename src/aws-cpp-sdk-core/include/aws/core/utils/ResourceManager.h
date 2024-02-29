/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
#include <mutex>
#include <condition_variable>
#include <atomic>
#include <cassert>

namespace Aws
{
    namespace Utils
    {
        /**
         * Generic resource manager with Acquire/Release semantics. Acquire will block waiting on a an available resource. Release will
         * cause one blocked acquisition to unblock.
         *
         * You must call ShutdownAndWait() when finished with this container, this unblocks the listening thread and gives you a chance to
         * clean up the resource if needed.
         * After calling ShutdownAndWait(), you must not call Acquire any more.
         */
        template< typename RESOURCE_TYPE>
        class ExclusiveOwnershipResourceManager
        {
        public:
            ExclusiveOwnershipResourceManager() : m_shutdown(false) {}

            /**
             * Returns a resource with exclusive ownership. You must call Release on the resource when you are finished or other
             * threads will block waiting to acquire it.
             *
             * @return instance of RESOURCE_TYPE
             */
            RESOURCE_TYPE Acquire()
            {
                std::unique_lock<std::mutex> locker(m_queueLock);
                while(!m_shutdown && m_resources.size() == 0)
                {
                    m_signal.wait(locker, [&](){ return m_shutdown || m_resources.size() > 0; });
                }

                assert(!m_shutdown);

                RESOURCE_TYPE resource = m_resources.back();
                m_resources.pop_back();

                return resource;
            }

            /**
             * Returns a optional resource with exclusive ownership. You must call Release on the resource when you are
             * finished or other threads will block waiting to acquire it. Will return empty if resource has been shutdwon
             * when attempting to aquire.
             *
             * @return A optional of the resoutce, if not present it will fail.
             */
            Crt::Optional<RESOURCE_TYPE> TryAquire()
            {
              std::unique_lock<std::mutex> locker(m_queueLock);
              while(!m_shutdown && m_resources.size() == 0)
              {
                m_signal.wait(locker, [&](){ return m_shutdown || m_resources.size() > 0; });
              }

              if (m_shutdown) {
                return {};
              }

              RESOURCE_TYPE resource = m_resources.back();
              m_resources.pop_back();

              return resource;
            }

            /**
             * Returns whether or not resources are currently available for acquisition
             *
             * @return true means that at this instant some resources are available (though another thread may grab them from under you),
             * this is only a hint.
             */
            bool HasResourcesAvailable()
            {
                std::lock_guard<std::mutex> locker(m_queueLock);
                return m_resources.size() > 0 && !m_shutdown;
            }

            /**
             * Releases a resource back to the pool. This will unblock one waiting Acquire call if any are waiting.
             *
             * @param resource resource to release back to the pool
             */
            void Release(RESOURCE_TYPE resource)
            {
                std::unique_lock<std::mutex> locker(m_queueLock);
                m_resources.push_back(resource);
            }

            /**
             * Does not block or even touch the semaphores. This is intended for setup only, do not use this after Acquire has been called for the first time.
             *
             * @param resource resource to be managed.
             */
            void PutResource(RESOURCE_TYPE resource)
            {
                m_resources.push_back(resource);
            }

            /**
             * Waits for all acquired resources to be released, then empties the queue.
             * You must call ShutdownAndWait() when finished with this container, this unblocks the listening thread and gives you a chance to
             * clean up the resource if needed.
             * After calling ShutdownAndWait(), you must not call Acquire any more.
             *
             * @params resourceCount the number of resources you've added to the resource manager.
             * @return the previously managed resources that are now available for cleanup.
             */
            Aws::Vector<RESOURCE_TYPE> ShutdownAndWait(size_t resourceCount)
            {
                std::unique_lock<std::mutex> locker(m_queueLock);
                m_shutdown = true;

                //wait for all acquired resources to be released.
                while (m_resources.size() < resourceCount)
                {
                    m_signal.wait(locker, [&]() { return m_resources.size() == resourceCount; });
                }

                Aws::Vector<RESOURCE_TYPE> resources{std::move(m_resources)};
                m_signal.notify_one();
                return resources;
            }

        private:
            Aws::Vector<RESOURCE_TYPE> m_resources;
            std::mutex m_queueLock;
            std::condition_variable m_signal;
            bool m_shutdown;
        };
    }
}
