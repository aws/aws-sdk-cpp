
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <streambuf>
#include <cstring>

#include <aws/core/utils/logging/LogMacros.h>

namespace Aws
{
namespace Utils
{
namespace Stream
{
    /**
    * AwsStreamBuf with pre-allocation / write size announcement feature
    */
    class AWS_CORE_API AwsStreamBuf : public std::streambuf
    {

    public:
        virtual ~AwsStreamBuf(){}
        AwsStreamBuf(){}

        explicit AwsStreamBuf(const Aws::String& value)
        {
            str(value);
        }

        using char_type = typename std::streambuf::char_type;
        using int_type = typename std::streambuf::int_type;
        using pos_type = typename std::streambuf::pos_type;
        using off_type = typename std::streambuf::off_type;
        using ios_base = std::ios_base;
        using streamsize = std::streamsize;

        static const int_type eof;// = static_cast<int_type>(EOF);

        Aws::String str() const
        {
            char_type* pBuffer = m_userBuffer ? m_userBuffer : m_buffer.get();
            return pBuffer ? Aws::String(pBuffer, pptr()) : Aws::String();
        }

        void str(const Aws::String& value)
        {
            if (m_userBuffer && m_bufferSz < (streamsize) value.size())
            {
                AWS_LOGSTREAM_ERROR(AWS_STREAM_BUF_ALLOC_TAG, "Custom user buffer can't hold provided string");
            }
            char_type* pBuffer = m_userBuffer ? m_userBuffer : m_buffer.get();
            streamsize bufferSz = m_bufferSz;

            setp(pBuffer, pBuffer + bufferSz);
            setg(pBuffer, pBuffer, pBuffer + bufferSz);

            xsputn(value.c_str(), value.size());
        }

//        Aws::UniqueArrayPtr<char_type> buffer() &&
//        {
//            return std::move(m_buffer);
//        }

    protected:
        static streamsize MIN_BUFFER_SIZE;
        static streamsize MAX_BUFFER_SIZE;
        static const char* AWS_STREAM_BUF_ALLOC_TAG;

        Aws::UniqueArrayPtr<char_type> m_buffer;
        streamsize m_bufferSz = 0;
        // Aws::Vector<char_type> m_buffer;

        char_type* m_userBuffer = nullptr;
        // streamsize m_userBufferSz = 0;

        AwsStreamBuf(const AwsStreamBuf& _Right);
        AwsStreamBuf& operator=(const AwsStreamBuf& _Right);

        void swap(AwsStreamBuf& _Right) noexcept;

        // Locales
        // Changes the associated locale
        virtual void imbue(const std::locale&) {
            /* do nothing */
        }

        // Positioning
        virtual AwsStreamBuf* setbuf(char_type* s, streamsize n) {
            assert((s && n) || (!s && !n));
            m_buffer.reset();

            m_userBuffer = s;
            m_bufferSz = n;

            setg(nullptr, nullptr, nullptr);
            setp(m_userBuffer, m_userBuffer + m_bufferSz);

            return this;
        }

        // ???
        virtual pos_type seekoff(
                std::streamoff off, std::ios_base::seekdir dir, std::ios_base::openmode which) {
            char_type* pBuffer = m_userBuffer ? m_userBuffer : m_buffer.get();
            if (dir == std::ios_base::beg)
            {
                return seekpos(off, which);
            }
            else if (dir == std::ios_base::end)
            {
                return seekpos((pptr() - pBuffer) - off, which);
            }
            else if (dir == std::ios_base::cur)
            {
                if(which == std::ios_base::in)
                {
                    return seekpos((gptr() - pBuffer) + off, which);
                }
                else
                {
                    return seekpos((pptr() - pBuffer) + off, which);
                }
            }

            return off_type(-1);
        }

        virtual pos_type seekpos(std::streampos pos, std::ios_base::openmode which) {
            char_type* pBuffer = m_userBuffer ? m_userBuffer : m_buffer.get();
            if (!pBuffer) {
                return pos_type(off_type(-1));
            }

            size_t maxSeek = pptr() ? pptr() - pBuffer : 0;
            assert(static_cast<size_t>(pos) <= maxSeek);
            if (static_cast<size_t>(pos) > maxSeek)
            {
                return pos_type(off_type(-1));
            }

            if (which == std::ios_base::in)
            {
                setg(pBuffer, pBuffer + static_cast<size_t>(pos), pptr());
            }

            if (which == std::ios_base::out)
            {
                setp(pBuffer + static_cast<size_t>(pos), epptr());
            }

            return pos;
        }

        virtual int sync() { // synchronize with external agent (do nothing)
            return 0;
        }
        // Get area
        virtual streamsize showmanyc() {
            return 0;
        }

        virtual int_type underflow() {
            char_type* pBuffer = m_userBuffer ? m_userBuffer : m_buffer.get();
            // streamsize bufferSz = m_bufferSz;

            if (!pBuffer) {
                return eof;
            }
            if (pptr()) {
                assert(pBuffer);
                char_type* new_curr = gptr() ? gptr() : pBuffer;

                if (pptr() > egptr()) {
                    /* new data has been written -> update get area */
                    assert(pBuffer <= pptr());
                    assert(pBuffer + bufferSz > pptr());
                    setg(pBuffer, new_curr, pptr());
                }
            }

            if (egptr() > gptr())
            {
                /* get area has a read position copy_size */
                return traits_type::to_int_type(*this->gptr());
            }

            return eof;
        }

        virtual int_type uflow() {
            // get a character from stream, point past it
            if (underflow() == eof) {
                return eof;
            }
            auto ret = traits_type::to_int_type(*this->gptr());
            this->gbump(1);
            return ret;
        }

        virtual streamsize xsgetn(char_type* s, streamsize count) {
            // get count characters from stream
            const streamsize start_count = count;

            underflow(); // update get pointers

            while (0 < count) {
                streamsize copy_size = gptr() && gptr() < egptr() ? egptr() - gptr() : 0;
                if (0 < copy_size) { // copy from read buffer
                    if (count < copy_size) {
                        copy_size = count;
                    }
                    std::memcpy(s, gptr(), copy_size);
                    s += copy_size;
                    count -= copy_size;
                    gbump(static_cast<int>(copy_size));
                } else {
                    const int_type res = uflow();
                    if (eof == res) {
                        break;
                    }
                    // get a single character
                    *s++ = traits_type::to_char_type(res);
                    --count;
                }
            }

            return start_count - count;
        }

        // Put area
        virtual streamsize xsputn(const char_type* s, streamsize count) {
            if (!s || !count) {
                return 0;
            }
            // put count characters to stream
            char_type* pBuffer = m_userBuffer ? m_userBuffer : m_buffer.get();

            // Attempt to allocate whole buffer at once
            if (!pBuffer || (pptr() && epptr() - pptr() < count)) {
                streamsize new_size = count + (pptr() ? pBuffer - pptr() : 0);
                grow_buffer(new_size);
            }

            streamsize write_count = 0;
            while(write_count < count)
            {
                pBuffer = m_userBuffer ? m_userBuffer : m_buffer.get();
                char* current_pptr = pptr();
                char* current_epptr = epptr();

                if (current_pptr < current_epptr)
                {
                    std::size_t copy_size = (std::min)(static_cast< std::size_t >(count - write_count),
                                                       static_cast< std::size_t >(current_epptr - current_pptr));

                    std::memcpy(current_pptr, s + write_count, copy_size);
                    write_count += copy_size;
                    setp(current_pptr + copy_size, current_epptr);
                    setg(pBuffer, gptr(), pptr());
                }
                else if (overflow(std::char_traits< char >::to_int_type(*(s + write_count))) != std::char_traits<char>::eof())
                {
                    write_count++;
                }
                else
                {
                    return write_count;
                }
            }

            return write_count;
        }

        virtual bool grow_buffer(streamsize newSize = -1) {
            if (m_userBuffer) {
                AWS_LOGSTREAM_ERROR(AWS_STREAM_BUF_ALLOC_TAG, "Unable to allocate while a user buffer is set");
                return false;
            }

            const streamsize currentSize = m_bufferSz;
            if (currentSize == MAX_BUFFER_SIZE)
            {
                AWS_LOGSTREAM_FATAL(AWS_STREAM_BUF_ALLOC_TAG, "Unable to allocate buffer bigger than " << MAX_BUFFER_SIZE);
            }
            if (newSize == -1 || newSize < m_bufferSz) {
                newSize = (std::min)((std::max)(currentSize * 2, MIN_BUFFER_SIZE), MAX_BUFFER_SIZE);
            }
            if (currentSize >= newSize) {
                return true;
            }

            auto newBufferPtr = Aws::MakeUniqueArray<char_type>(newSize, "AwsStreamBuf");
            if(newBufferPtr.get() == nullptr)
            {
                AWS_LOGSTREAM_FATAL(AWS_STREAM_BUF_ALLOC_TAG, "Unable to allocate memory for a new buffer");
                return false;
            }

            streamsize put_position = 0;
            streamsize get_position = 0;
            if(currentSize > 0)
            {
                if(m_buffer)
                {
                    put_position = pptr() ? pptr() - m_buffer.get() : 0;
                    get_position = gptr() ? gptr() - m_buffer.get() : 0;
                    std::memcpy(newBufferPtr.get(), m_buffer.get(), currentSize);
                }
                else
                {
                    AWS_LOGSTREAM_FATAL(AWS_STREAM_BUF_ALLOC_TAG, "Unexpected empty current buffer");
                }
            }
            m_buffer = std::move(newBufferPtr);
            m_bufferSz = newSize;

            char_type* new_begin = m_buffer.get();
            char_type* new_end = new_begin + m_bufferSz;

            setp(new_begin + put_position, new_end);
            setg(new_begin, new_begin + get_position, new_begin + put_position);

            return true;
        }

        virtual int_type overflow(int_type c = eof) {
            if(c == eof || m_userBuffer)
            {
                return eof;
            }

            if(!grow_buffer())
            {
                setp(nullptr, nullptr);
                return eof;
            }

            *pptr() = static_cast<char>(traits_type::to_char_type(c));
            pbump(1);

            return c;
        }

        // Putback
        virtual int_type pbackfail(int_type c = eof) {
            // put a character back to stream
            char_type* pBuffer = m_userBuffer ? m_userBuffer : m_buffer.get();

            if (!pBuffer) {
                return eof;
            }

            if (gptr() || gptr() > pBuffer) {
                this->pbump(-1);
                if (eof == c) {
                    return c;
                } else {
                    *gptr() = traits_type::to_char_type(c);;
                    return traits_type::not_eof(c);
                }
            }
            return eof;
        }

    };

}
}
}
