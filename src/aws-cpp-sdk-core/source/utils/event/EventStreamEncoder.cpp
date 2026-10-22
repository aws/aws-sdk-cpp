/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/event/EventHeader.h>
#include <aws/core/utils/event/EventMessage.h>
#include <aws/core/utils/event/EventStreamEncoder.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/common/byte_order.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <cassert>

namespace Aws
{
    namespace Utils
    {
        namespace Event
        {
            static const char TAG[] = "EventStreamEncoder";

            static const size_t UUID_HEADER_VALUE_LEN = 16;

            static bool EncodeHeaders(const Aws::Utils::Event::Message& msg, aws_array_list* headers)
            {
                aws_array_list_init_dynamic(headers, get_aws_allocator(), msg.GetEventHeaders().size(), sizeof(aws_event_stream_header_value_pair));
                for (auto&& header : msg.GetEventHeaders())
                {
                    if (header.first.empty() || header.first.length() > AWS_EVENT_STREAM_HEADER_NAME_LEN_MAX)
                    {
                        AWS_LOGSTREAM_ERROR(TAG, "Event header name length " << header.first.length() << " is out of range [1, "
                            << AWS_EVENT_STREAM_HEADER_NAME_LEN_MAX << "].");
                        return false;
                    }
                    const uint8_t headerKeyLen = static_cast<uint8_t>(header.first.length());
                    int result = AWS_OP_ERR;
                    switch(header.second.GetType())
                    {
                        case EventHeaderValue::EventHeaderType::BOOL_TRUE:
                        case EventHeaderValue::EventHeaderType::BOOL_FALSE:
                            result = aws_event_stream_add_bool_header(headers, header.first.c_str(), headerKeyLen, header.second.GetEventHeaderValueAsBoolean());
                            break;
                        case EventHeaderValue::EventHeaderType::BYTE:
                            result = aws_event_stream_add_byte_header(headers, header.first.c_str(), headerKeyLen, header.second.GetEventHeaderValueAsByte());
                            break;
                        case EventHeaderValue::EventHeaderType::INT16:
                            result = aws_event_stream_add_int16_header(headers, header.first.c_str(), headerKeyLen, header.second.GetEventHeaderValueAsInt16());
                            break;
                        case EventHeaderValue::EventHeaderType::INT32:
                            result = aws_event_stream_add_int32_header(headers, header.first.c_str(), headerKeyLen, header.second.GetEventHeaderValueAsInt32());
                            break;
                        case EventHeaderValue::EventHeaderType::INT64:
                            result = aws_event_stream_add_int64_header(headers, header.first.c_str(), headerKeyLen, header.second.GetEventHeaderValueAsInt64());
                            break;
                        case EventHeaderValue::EventHeaderType::BYTE_BUF:
                            {
                                const auto& bytes = header.second.GetEventHeaderValueAsBytebuf();
                                if (bytes.GetLength() > AWS_EVENT_STREAM_HEADER_VALUE_LEN_MAX)
                                {
                                    AWS_LOGSTREAM_ERROR(TAG, "Event header " << header.first << " value length " << bytes.GetLength()
                                        << " exceeds " << AWS_EVENT_STREAM_HEADER_VALUE_LEN_MAX << " bytes.");
                                    return false;
                                }
                                result = aws_event_stream_add_bytebuf_header(headers, header.first.c_str(), headerKeyLen, bytes.GetUnderlyingData(), static_cast<uint16_t>(bytes.GetLength()), 1 /*copy*/);
                            }
                            break;
                        case EventHeaderValue::EventHeaderType::STRING:
                            {
                                const auto& bytes = header.second.GetUnderlyingBuffer();
                                if (bytes.GetLength() > AWS_EVENT_STREAM_HEADER_VALUE_LEN_MAX)
                                {
                                    AWS_LOGSTREAM_ERROR(TAG, "Event header " << header.first << " value length " << bytes.GetLength()
                                        << " exceeds " << AWS_EVENT_STREAM_HEADER_VALUE_LEN_MAX << " bytes.");
                                    return false;
                                }
                                result = aws_event_stream_add_string_header(headers, header.first.c_str(), headerKeyLen, reinterpret_cast<char*>(bytes.GetUnderlyingData()), static_cast<uint16_t>(bytes.GetLength()), 0 /*copy*/);
                            }
                            break;
                        case EventHeaderValue::EventHeaderType::TIMESTAMP:
                            result = aws_event_stream_add_timestamp_header(headers, header.first.c_str(), headerKeyLen, header.second.GetEventHeaderValueAsTimestamp());
                            break;
                        case EventHeaderValue::EventHeaderType::UUID:
                            {
                                if (header.second.GetUnderlyingBuffer().GetLength() != UUID_HEADER_VALUE_LEN)
                                {
                                    AWS_LOGSTREAM_ERROR(TAG, "Event header " << header.first << " UUID value length "
                                        << header.second.GetUnderlyingBuffer().GetLength() << " is not " << UUID_HEADER_VALUE_LEN << " bytes.");
                                    return false;
                                }
                                ByteBuffer uuidBytes = header.second.GetEventHeaderValueAsUuid();
                                result = aws_event_stream_add_uuid_header(headers, header.first.c_str(), headerKeyLen, uuidBytes.GetUnderlyingData());
                            }
                            break;
                        default:
                            AWS_LOG_ERROR(TAG, "Encountered unknown type of header.");
                            return false;
                    }
                    if (result != AWS_OP_SUCCESS)
                    {
                        AWS_LOGSTREAM_ERROR(TAG, "Failed to add event header " << header.first << ": " << aws_error_debug_str(aws_last_error()));
                        return false;
                    }
                }
                return true;
            }

            EventStreamEncoder::EventStreamEncoder(Client::AWSAuthSigner* signer) : m_signer(signer)
            {
            }


            Aws::Vector<unsigned char> EventStreamEncoder::EncodeAndSign(const Aws::Utils::Event::Message& msg)
            {
                Aws::Vector<unsigned char> outputBits;

                aws_event_stream_message encoded;
                AWS_ZERO_STRUCT(encoded);
                aws_event_stream_message* encodedPayload = nullptr;
                if (!msg.GetEventHeaders().empty() || !msg.GetEventPayload().empty())
                {
                    if (!InitEncodedStruct(msg, &encoded))
                    {
                        AWS_LOGSTREAM_ERROR(TAG, "Failed to encode event message; nothing will be signed or sent.");
                        return outputBits;
                    }
                    encodedPayload = &encoded;
                }

                aws_event_stream_message signedMessage;
                if (InitSignedStruct(encodedPayload, &signedMessage))
                {
                    // success!
                    const auto signedMessageBuffer = aws_event_stream_message_buffer(&signedMessage);
                    const auto signedMessageLength = aws_event_stream_message_total_length(&signedMessage);
                    outputBits.reserve(signedMessageLength);
                    outputBits.insert(outputBits.end(), signedMessageBuffer, signedMessageBuffer + signedMessageLength);

                    aws_event_stream_message_clean_up(&signedMessage);
                }
                if (encodedPayload)
                {
                    aws_event_stream_message_clean_up(encodedPayload);
                }

                return outputBits;
            }

            bool EventStreamEncoder::InitEncodedStruct(const Aws::Utils::Event::Message& msg, aws_event_stream_message* encoded)
            {
                bool success = false;

                aws_array_list headers;
                if (!EncodeHeaders(msg, &headers))
                {
                    aws_event_stream_headers_list_cleanup(&headers);
                    return false;
                }

                aws_byte_buf payload = aws_byte_buf_from_array(msg.GetEventPayload().data(), msg.GetEventPayload().size());

                if(aws_event_stream_message_init(encoded, get_aws_allocator(), &headers, &payload) == AWS_OP_SUCCESS)
                {
                    success = true;
                }
                else
                {
                    AWS_LOGSTREAM_ERROR(TAG, "Error creating event-stream message from payload.");
                }

                aws_event_stream_headers_list_cleanup(&headers);
                return success;
            }

            bool EventStreamEncoder::InitSignedStruct(const aws_event_stream_message* payload, aws_event_stream_message* signedmsg)
            {
                bool success = false;

                Event::Message signedMessage;
                if (payload)
                {
                    const auto msgbuf = aws_event_stream_message_buffer(payload);
                    const auto msglen = aws_event_stream_message_total_length(payload);
                    signedMessage.WriteEventPayload(msgbuf, msglen);
                }
                if (m_signingCallback(signedMessage, m_signatureSeed))
                {
                    aws_array_list headers;
                    if (!EncodeHeaders(signedMessage, &headers))
                    {
                        aws_event_stream_headers_list_cleanup(&headers);
                        return false;
                    }

                    aws_byte_buf signedPayload = aws_byte_buf_from_array(signedMessage.GetEventPayload().data(), signedMessage.GetEventPayload().size());

                    if(aws_event_stream_message_init(signedmsg, get_aws_allocator(), &headers, &signedPayload) == AWS_OP_SUCCESS)
                    {
                        success = true;
                    }
                    else
                    {
                        AWS_LOGSTREAM_ERROR(TAG, "Error creating event-stream message from payload.");
                    }
                    aws_event_stream_headers_list_cleanup(&headers);
                }
                else
                {
                    AWS_LOGSTREAM_ERROR(TAG, "Failed to sign event message frame.");
                }

                return success;
            }

        } // namespace Event
    } // namespace Utils
} // namespace Aws

