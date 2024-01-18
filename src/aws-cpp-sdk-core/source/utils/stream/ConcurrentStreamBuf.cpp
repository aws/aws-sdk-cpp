/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/stream/ConcurrentStreamBuf.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <cstdint>
#include <cassert>

namespace Aws
{
    namespace Utils
    {
        namespace Stream
        {
            const char TAG[] = "ConcurrentStreamBuf";
            ConcurrentStreamBuf::ConcurrentStreamBuf(size_t bufferLength) :
                m_putArea(bufferLength), // we access [0] of the put area below so we must initialize it.
                m_eofInput(false),
                m_eofOutput(false)
            {
                m_getArea.reserve(bufferLength);
                m_backbuf.reserve(bufferLength);

                char* pbegin = reinterpret_cast<char*>(&m_putArea[0]);
                setp(pbegin, pbegin + bufferLength);
            }

            void ConcurrentStreamBuf::SetEofInput(Aws::IOStream* pStreamToClose)
            {
                bool closeStream = false;
                {
                    std::unique_lock<std::mutex> lock(m_lock);
                    m_eofInput = true;
                }
                FlushPutArea();
                if (pStreamToClose)
                {
                    m_pStreamToClose = pStreamToClose;
                    if (m_backbuf.empty())
                    {
                        closeStream = true;
                    }
                }
                if (closeStream)
                {
                    CloseStream();
                }
                m_signal.notify_all();
            }

            void ConcurrentStreamBuf::CloseStream()
            {
                {
                    std::unique_lock<std::mutex> lock(m_lock);
                    m_eofOutput = true;
                    if (m_pStreamToClose)
                    {
                        m_pStreamToClose->setstate(Aws::IOStream::eofbit);
                        m_pStreamToClose = nullptr;
                    }
                }
                m_signal.notify_all();
            }

            void ConcurrentStreamBuf::FlushPutArea()
            {
                const size_t bitslen = pptr() - pbase();
                if (bitslen)
                {
                    // scope the lock
                    {
                        std::unique_lock<std::mutex> lock(m_lock);
                        m_signal.wait(lock, [this, bitslen]{ return m_eofInput || bitslen <= (m_backbuf.capacity() - m_backbuf.size()); });

                        std::copy(pbase(), pptr(), std::back_inserter(m_backbuf));
                    }
                    m_signal.notify_one();
                    char* pbegin = reinterpret_cast<char*>(&m_putArea[0]);
                    setp(pbegin, pbegin + m_putArea.size());
                }
            }

            std::streampos ConcurrentStreamBuf::seekoff(std::streamoff, std::ios_base::seekdir, std::ios_base::openmode)
            {
                return std::streamoff(-1); // Seeking is not supported.
            }

            std::streampos ConcurrentStreamBuf::seekpos(std::streampos, std::ios_base::openmode)
            {
                return std::streamoff(-1); // Seeking is not supported.
            }

            int ConcurrentStreamBuf::underflow()
            {
                bool closeStream = false;
                {
                    std::unique_lock<std::mutex> lock(m_lock);

                    if (!m_eofInput)
                    {
                        m_signal.wait_for(lock, std::chrono::milliseconds(1000), [this] { return m_backbuf.empty() == false || m_eofInput; });
                    }

                    if (m_eofInput && m_backbuf.empty())
                    {
                        closeStream = true;
                    }
                    else
                    {
                        m_getArea.clear(); // keep the get-area from growing unbounded.
                        std::copy(m_backbuf.begin(), m_backbuf.end(), std::back_inserter(m_getArea));
                        m_backbuf.clear();
                    }
                }
                if (closeStream)
                {
                    CloseStream();
                    return std::char_traits<char>::eof();
                }

                m_signal.notify_one();
                char* gbegin = reinterpret_cast<char*>(&m_getArea[0]);
                setg(gbegin, gbegin, gbegin + m_getArea.size());
                return std::char_traits<char>::to_int_type(*gptr());
            }

            std::streamsize ConcurrentStreamBuf::showmanyc()
            {
                std::unique_lock<std::mutex> lock(m_lock);
                if (!m_backbuf.empty())
                {
                    AWS_LOGSTREAM_TRACE(TAG, "Stream characters in buffer: " << m_backbuf.size());
                }
                return m_backbuf.size();
            }

            int ConcurrentStreamBuf::overflow(int ch)
            {
                const auto eof = std::char_traits<char>::eof();

                if (ch == eof)
                {
                    FlushPutArea();
                    return eof;
                }

                FlushPutArea();
                {
                    std::unique_lock<std::mutex> lock(m_lock);
                    if (m_eofInput)
                    {
                        return eof;
                    }
                    *pptr() = static_cast<char>(ch);
                    pbump(1);
                    return ch;
                }
            }

            int ConcurrentStreamBuf::sync()
            {
                FlushPutArea();
                return 0;
            }
        }
    }
}
