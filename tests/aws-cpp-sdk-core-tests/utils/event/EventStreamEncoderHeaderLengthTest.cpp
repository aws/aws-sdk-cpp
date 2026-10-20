/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/event-stream/event_stream.h>
#include <aws/core/utils/event/EventHeader.h>
#include <aws/core/utils/event/EventMessage.h>
#include <aws/core/utils/event/EventStreamEncoder.h>
#include <aws/core/utils/event/EventEncoderStream.h>
#include <aws/core/auth/signer/AWSNullSigner.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/StringUtils.h>

namespace
{
    using namespace Aws::Utils;
    using namespace Aws::Utils::Event;
    using HeaderType = EventHeaderValue::EventHeaderType;

    const char EVENT_TYPE_HEADER[] = ":event-type";
    const char EVENT_TYPE_VALUE[] = "Records";
    const char DATA_HEADER[] = "DataType";

    struct DecodedMessage
    {
        bool ok = false;
        Aws::Vector<std::pair<Aws::String, EventHeaderValue>> headers;
        Aws::Vector<unsigned char> payload;
    };

    DecodedMessage Decode(const unsigned char* data, size_t len)
    {
        DecodedMessage out;
        aws_byte_buf buf = aws_byte_buf_from_array(data, len);
        aws_event_stream_message msg;
        AWS_ZERO_STRUCT(msg);
        if (aws_event_stream_message_from_buffer(&msg, Aws::get_aws_allocator(), &buf) != AWS_OP_SUCCESS)
        {
            return out;
        }
        aws_array_list headers;
        aws_event_stream_headers_list_init(&headers, Aws::get_aws_allocator());
        if (aws_event_stream_message_headers(&msg, &headers) == AWS_OP_SUCCESS)
        {
            for (size_t i = 0; i < aws_array_list_length(&headers); ++i)
            {
                aws_event_stream_header_value_pair* header = nullptr;
                aws_array_list_get_at_ptr(&headers, reinterpret_cast<void**>(&header), i);
                out.headers.emplace_back(Aws::String(header->header_name, header->header_name_len), EventHeaderValue(header));
            }
            const unsigned char* payload = aws_event_stream_message_payload(&msg);
            out.payload.assign(payload, payload + aws_event_stream_message_payload_len(&msg));
            out.ok = true;
        }
        aws_event_stream_headers_list_cleanup(&headers);
        aws_event_stream_message_clean_up(&msg);
        return out;
    }

    struct EncodeResult
    {
        Aws::Vector<unsigned char> frame;
        unsigned signCalls = 0;
        DecodedMessage inner;
    };

    EncodeResult Encode(const Message& msg)
    {
        EncodeResult r;
        EventStreamEncoder encoder;
        encoder.SetSigningCallback([&r](Message&, Aws::String&) -> bool {
            ++r.signCalls;
            return true;
        });
        r.frame = encoder.EncodeAndSign(msg);
        if (!r.frame.empty())
        {
            const DecodedMessage outer = Decode(r.frame.data(), r.frame.size());
            EXPECT_TRUE(outer.ok);
            r.inner = Decode(outer.payload.data(), outer.payload.size());
        }
        return r;
    }

    Message BaseMessage()
    {
        Message msg;
        msg.InsertEventHeader(EVENT_TYPE_HEADER, EventHeaderValue(Aws::String(EVENT_TYPE_VALUE)));
        msg.WriteEventPayload(Aws::String("payload"));
        return msg;
    }

    const EventHeaderValue* Find(const DecodedMessage& m, const Aws::String& name)
    {
        for (const auto& header : m.headers)
        {
            if (header.first == name) return &header.second;
        }
        return nullptr;
    }

    ByteBuffer ToByteBuffer(const Aws::String& s)
    {
        return ByteBuffer(reinterpret_cast<const unsigned char*>(s.data()), s.size());
    }

    EventHeaderValue MakeValue(HeaderType type, const Aws::String& bytes)
    {
        return type == HeaderType::STRING ? EventHeaderValue(bytes) : EventHeaderValue(ToByteBuffer(bytes));
    }

    void ExpectRejected(const Message& msg, const Aws::String& label)
    {
        const EncodeResult r = Encode(msg);
        EXPECT_TRUE(r.frame.empty()) << label << ": expected no frame, got " << r.frame.size() << " bytes";
        EXPECT_EQ(0u, r.signCalls) << label << ": signer must not be invoked";
    }

    void ExpectAccepted(const Message& msg, const Aws::String& name, HeaderType type, const Aws::String& bytes, const Aws::String& label)
    {
        const EncodeResult r = Encode(msg);
        ASSERT_FALSE(r.frame.empty()) << label;
        EXPECT_EQ(1u, r.signCalls) << label;
        ASSERT_TRUE(r.inner.ok) << label;
        const EventHeaderValue* eventType = Find(r.inner, EVENT_TYPE_HEADER);
        ASSERT_NE(nullptr, eventType) << label;
        EXPECT_EQ(EVENT_TYPE_VALUE, eventType->GetEventHeaderValueAsString()) << label;
        const EventHeaderValue* value = Find(r.inner, name);
        ASSERT_NE(nullptr, value) << label << ": header missing";
        EXPECT_EQ(type, value->GetType()) << label;
        EXPECT_TRUE(value->GetUnderlyingBuffer() == ToByteBuffer(bytes)) << label << ": value differs";
    }

    // Header bytes produced by the CRT for :event-type = "Override".
    Aws::String EncodedEventTypeHeader()
    {
        aws_array_list headers;
        aws_event_stream_headers_list_init(&headers, Aws::get_aws_allocator());
        const char value[] = "Override";
        aws_event_stream_add_string_header(&headers, EVENT_TYPE_HEADER, sizeof(EVENT_TYPE_HEADER) - 1, value, sizeof(value) - 1, 1);
        aws_byte_buf buf;
        aws_byte_buf_init(&buf, Aws::get_aws_allocator(), aws_event_stream_compute_headers_required_buffer_len(&headers));
        aws_event_stream_write_headers_to_buffer_safe(&headers, &buf);
        Aws::String out(reinterpret_cast<const char*>(buf.buffer), buf.len);
        aws_byte_buf_clean_up(&buf);
        aws_event_stream_headers_list_cleanup(&headers);
        return out;
    }

    class EventStreamEncoderHeaderLengthTest : public Aws::Testing::AwsCppSdkGTestSuite
    {
    };

    TEST_F(EventStreamEncoderHeaderLengthTest, HeaderNameLength)
    {
        {
            const Aws::String name(255, 'n');
            Message msg = BaseMessage();
            msg.InsertEventHeader(name, EventHeaderValue(Aws::String("v")));
            ExpectAccepted(msg, name, HeaderType::STRING, "v", "255-byte name");
        }
        for (const Aws::String& name : {Aws::String(), Aws::String(256, 'n'), Aws::String(EVENT_TYPE_HEADER) + Aws::String(256, 'n')})
        {
            Message msg = BaseMessage();
            msg.InsertEventHeader(name, EventHeaderValue(Aws::String("v")));
            ExpectRejected(msg, "name of " + StringUtils::to_string(name.size()) + " bytes");
        }
        const EventHeaderValue nonStringValues[] = {
            EventHeaderValue(true),
            EventHeaderValue(static_cast<unsigned char>(1)),
            EventHeaderValue(static_cast<int16_t>(1)),
            EventHeaderValue(static_cast<int32_t>(1)),
            EventHeaderValue(static_cast<int64_t>(1)),
            EventHeaderValue(static_cast<int64_t>(1), HeaderType::TIMESTAMP),
            EventHeaderValue(ToByteBuffer("v")),
        };
        for (const auto& value : nonStringValues)
        {
            Message msg = BaseMessage();
            msg.InsertEventHeader(Aws::String(256, 'n'), value);
            ExpectRejected(msg, "256-byte name, " + EventHeaderValue::GetNameForEventHeaderType(value.GetType()));
        }
    }

    TEST_F(EventStreamEncoderHeaderLengthTest, ValueLength)
    {
        struct Case { size_t length; bool accepted; };
        const Case cases[] = {{32767, true}, {32768, false}, {65535, false}, {65536, false}, {98304, false}};
        for (HeaderType type : {HeaderType::STRING, HeaderType::BYTE_BUF})
        {
            for (const auto& c : cases)
            {
                const Aws::String bytes(c.length, 'a');
                const Aws::String label = EventHeaderValue::GetNameForEventHeaderType(type) + " value of " + StringUtils::to_string(c.length) + " bytes";
                Message msg = BaseMessage();
                msg.InsertEventHeader(DATA_HEADER, MakeValue(type, bytes));
                if (c.accepted)
                {
                    ExpectAccepted(msg, DATA_HEADER, type, bytes, label);
                }
                else
                {
                    ExpectRejected(msg, label);
                }
            }
        }
    }

    TEST_F(EventStreamEncoderHeaderLengthTest, MultibyteStringUsesByteLength)
    {
        auto repeat = [](const char* s, size_t count) {
            Aws::String out;
            for (size_t i = 0; i < count; ++i) out += s;
            return out;
        };
        {
            const Aws::String value = repeat("\xC3\xA9", 16383);
            Message msg = BaseMessage();
            msg.InsertEventHeader(DATA_HEADER, EventHeaderValue(value));
            ExpectAccepted(msg, DATA_HEADER, HeaderType::STRING, value, "32766-byte UTF-8 string");
        }
        for (const Aws::String& value : {repeat("\xC3\xA9", 16384), repeat("\xE2\x82\xAC", 21846)})
        {
            Message msg = BaseMessage();
            msg.InsertEventHeader(DATA_HEADER, EventHeaderValue(value));
            ExpectRejected(msg, "UTF-8 string of " + StringUtils::to_string(value.size()) + " bytes");
        }
    }

    TEST_F(EventStreamEncoderHeaderLengthTest, OversizedValueContainingEncodedHeaderProducesNoFrame)
    {
        const Aws::String encodedHeader = EncodedEventTypeHeader();
        ASSERT_FALSE(encodedHeader.empty());
        for (const Aws::String& value : {Aws::String(65536, 'a') + encodedHeader, encodedHeader + Aws::String(65536, 'a')})
        {
            for (HeaderType type : {HeaderType::STRING, HeaderType::BYTE_BUF})
            {
                Message msg = BaseMessage();
                msg.InsertEventHeader(DATA_HEADER, MakeValue(type, value));
                ExpectRejected(msg, EventHeaderValue::GetNameForEventHeaderType(type) + " value with embedded header bytes");
            }
        }
    }

    TEST_F(EventStreamEncoderHeaderLengthTest, FailedEncodeProducesNoFrame)
    {
        {
            Message msg = BaseMessage();
            msg.InsertEventHeader("a-valid", EventHeaderValue(Aws::String("v")));
            msg.InsertEventHeader(DATA_HEADER, EventHeaderValue(Aws::String(32768, 'a')));
            msg.InsertEventHeader("z-valid", EventHeaderValue(static_cast<int32_t>(7)));
            ExpectRejected(msg, "one oversized header among valid ones");
        }
        {
            Message msg = BaseMessage();
            msg.WriteEventPayload(Aws::Vector<unsigned char>(AWS_EVENT_STREAM_MAX_MESSAGE_SIZE + 1, 'p'));
            ExpectRejected(msg, "message larger than the maximum message size");
        }
        {
            EventStreamEncoder encoder;
            unsigned calls = 0;
            encoder.SetSigningCallback([&calls](Message&, Aws::String&) -> bool { ++calls; return true; });
            Message bad = BaseMessage();
            bad.InsertEventHeader(DATA_HEADER, EventHeaderValue(Aws::String(32768, 'a')));
            EXPECT_TRUE(encoder.EncodeAndSign(bad).empty());
            EXPECT_FALSE(encoder.EncodeAndSign(BaseMessage()).empty());
            EXPECT_EQ(1u, calls);
        }
    }

    TEST_F(EventStreamEncoderHeaderLengthTest, EmptyMessageStillProducesFrame)
    {
        const EncodeResult r = Encode(Message());
        EXPECT_FALSE(r.frame.empty());
        EXPECT_EQ(1u, r.signCalls);
    }

    TEST_F(EventStreamEncoderHeaderLengthTest, AllHeaderTypesRoundTrip)
    {
        aws_event_stream_header_value_pair uuidPair;
        AWS_ZERO_STRUCT(uuidPair);
        uuidPair.header_value_type = AWS_EVENT_STREAM_HEADER_UUID;
        uuidPair.header_value_len = 16;
        for (uint8_t i = 0; i < 16; ++i) uuidPair.header_value.static_val[i] = static_cast<uint8_t>(0xA0 + i);
        const EventHeaderValue uuid(&uuidPair);

        Message msg = BaseMessage();
        msg.InsertEventHeader("bool-true", EventHeaderValue(true));
        msg.InsertEventHeader("bool-false", EventHeaderValue(false));
        msg.InsertEventHeader("byte", EventHeaderValue(static_cast<unsigned char>(0x7F)));
        msg.InsertEventHeader("byte-high", EventHeaderValue(static_cast<unsigned char>(0x80)));
        msg.InsertEventHeader("int16", EventHeaderValue(static_cast<int16_t>(-12345)));
        msg.InsertEventHeader("int32", EventHeaderValue(static_cast<int32_t>(-123456789)));
        msg.InsertEventHeader("int64", EventHeaderValue(static_cast<int64_t>(-1234567890123LL)));
        msg.InsertEventHeader("timestamp", EventHeaderValue(static_cast<int64_t>(1700000000123LL), HeaderType::TIMESTAMP));
        msg.InsertEventHeader("uuid", uuid);
        msg.InsertEventHeader("string", EventHeaderValue(Aws::String("value")));
        msg.InsertEventHeader("bytes", EventHeaderValue(ToByteBuffer(Aws::String("\x00\x01\xFF", 3))));
        const EncodeResult r = Encode(msg);
        ASSERT_TRUE(r.inner.ok);
        EXPECT_EQ(12u, r.inner.headers.size());

        auto get = [&r](const char* name) {
            const EventHeaderValue* value = Find(r.inner, name);
            EXPECT_NE(nullptr, value) << name;
            return value ? *value : EventHeaderValue();
        };
        EXPECT_EQ(HeaderType::BOOL_TRUE, get("bool-true").GetType());
        EXPECT_EQ(HeaderType::BOOL_FALSE, get("bool-false").GetType());
        EXPECT_EQ(HeaderType::BYTE, get("byte").GetType());
        EXPECT_EQ(0x7F, get("byte").GetEventHeaderValueAsByte());
        EXPECT_EQ(HeaderType::BYTE, get("byte-high").GetType());
        EXPECT_EQ(0x80, get("byte-high").GetEventHeaderValueAsByte());
        EXPECT_EQ(HeaderType::INT16, get("int16").GetType());
        EXPECT_EQ(-12345, get("int16").GetEventHeaderValueAsInt16());
        EXPECT_EQ(HeaderType::INT32, get("int32").GetType());
        EXPECT_EQ(-123456789, get("int32").GetEventHeaderValueAsInt32());
        EXPECT_EQ(HeaderType::INT64, get("int64").GetType());
        EXPECT_EQ(-1234567890123LL, get("int64").GetEventHeaderValueAsInt64());
        EXPECT_EQ(HeaderType::TIMESTAMP, get("timestamp").GetType());
        EXPECT_EQ(1700000000123LL, get("timestamp").GetEventHeaderValueAsTimestamp());
        EXPECT_EQ(HeaderType::UUID, get("uuid").GetType());
        EXPECT_TRUE(uuid.GetUnderlyingBuffer() == get("uuid").GetUnderlyingBuffer());
        EXPECT_EQ(HeaderType::STRING, get("string").GetType());
        EXPECT_EQ("value", get("string").GetEventHeaderValueAsString());
        EXPECT_EQ(HeaderType::BYTE_BUF, get("bytes").GetType());
        EXPECT_TRUE(ToByteBuffer(Aws::String("\x00\x01\xFF", 3)) == get("bytes").GetEventHeaderValueAsBytebuf());
    }

    class FailingSigner : public Aws::Client::AWSNullSigner
    {
    public:
        bool SignEventMessage(Message&, Aws::String&) const override { return false; }
    };

    TEST_F(EventStreamEncoderHeaderLengthTest, WriteEventFailsStreamWhenEncodingFails)
    {
        Aws::Client::AWSNullSigner nullSigner;
        EventEncoderStream io;
        io.SetSigner(&nullSigner);
        io.WriteEvent(BaseMessage());
        ASSERT_TRUE(io);

        Message bad = BaseMessage();
        bad.InsertEventHeader(DATA_HEADER, EventHeaderValue(Aws::String(32768, 'a')));
        io.WriteEvent(bad);
        EXPECT_TRUE(io.fail());

        io.clear();
        unsigned char output[1024];
        const auto bytesRead = io.readsome(reinterpret_cast<char*>(output), sizeof(output));
        ASSERT_GT(bytesRead, 0);
        EXPECT_TRUE(Decode(output, static_cast<size_t>(bytesRead)).ok) << "stream should hold exactly one complete frame";
        io.Close();
    }

    TEST_F(EventStreamEncoderHeaderLengthTest, WriteEventFailsStreamWhenSigningFails)
    {
        FailingSigner signer;
        EventEncoderStream io;
        io.SetSigner(&signer);
        io.WriteEvent(BaseMessage());
        EXPECT_TRUE(io.fail());

        io.clear();
        char output[64];
        EXPECT_EQ(0, io.readsome(output, sizeof(output)));
        io.Close();
    }
}
