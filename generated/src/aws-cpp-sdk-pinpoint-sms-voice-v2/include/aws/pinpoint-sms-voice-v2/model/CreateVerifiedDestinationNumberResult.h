/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/VerificationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-sms-voice-v2/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class CreateVerifiedDestinationNumberResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API CreateVerifiedDestinationNumberResult();
    AWS_PINPOINTSMSVOICEV2_API CreateVerifiedDestinationNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API CreateVerifiedDestinationNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberArn() const{ return m_verifiedDestinationNumberArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberArn(const Aws::String& value) { m_verifiedDestinationNumberArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberArn(Aws::String&& value) { m_verifiedDestinationNumberArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberArn(const char* value) { m_verifiedDestinationNumberArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithVerifiedDestinationNumberArn(const Aws::String& value) { SetVerifiedDestinationNumberArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithVerifiedDestinationNumberArn(Aws::String&& value) { SetVerifiedDestinationNumberArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithVerifiedDestinationNumberArn(const char* value) { SetVerifiedDestinationNumberArn(value); return *this;}


    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberId() const{ return m_verifiedDestinationNumberId; }

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberId(const Aws::String& value) { m_verifiedDestinationNumberId = value; }

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberId(Aws::String&& value) { m_verifiedDestinationNumberId = std::move(value); }

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberId(const char* value) { m_verifiedDestinationNumberId.assign(value); }

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithVerifiedDestinationNumberId(const Aws::String& value) { SetVerifiedDestinationNumberId(value); return *this;}

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithVerifiedDestinationNumberId(Aws::String&& value) { SetVerifiedDestinationNumberId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithVerifiedDestinationNumberId(const char* value) { SetVerifiedDestinationNumberId(value); return *this;}


    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumber = value; }

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumber = std::move(value); }

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumber.assign(value); }

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}


    /**
     * <p>The status of the verified destination phone number.</p> <ul> <li> <p>
     * <code>PENDING</code>: The phone number hasn't been verified yet.</p> </li> <li>
     * <p> <code>VERIFIED</code>: The phone number is verified and can receive
     * messages.</p> </li> </ul>
     */
    inline const VerificationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the verified destination phone number.</p> <ul> <li> <p>
     * <code>PENDING</code>: The phone number hasn't been verified yet.</p> </li> <li>
     * <p> <code>VERIFIED</code>: The phone number is verified and can receive
     * messages.</p> </li> </ul>
     */
    inline void SetStatus(const VerificationStatus& value) { m_status = value; }

    /**
     * <p>The status of the verified destination phone number.</p> <ul> <li> <p>
     * <code>PENDING</code>: The phone number hasn't been verified yet.</p> </li> <li>
     * <p> <code>VERIFIED</code>: The phone number is verified and can receive
     * messages.</p> </li> </ul>
     */
    inline void SetStatus(VerificationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the verified destination phone number.</p> <ul> <li> <p>
     * <code>PENDING</code>: The phone number hasn't been verified yet.</p> </li> <li>
     * <p> <code>VERIFIED</code>: The phone number is verified and can receive
     * messages.</p> </li> </ul>
     */
    inline CreateVerifiedDestinationNumberResult& WithStatus(const VerificationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the verified destination phone number.</p> <ul> <li> <p>
     * <code>PENDING</code>: The phone number hasn't been verified yet.</p> </li> <li>
     * <p> <code>VERIFIED</code>: The phone number is verified and can receive
     * messages.</p> </li> </ul>
     */
    inline CreateVerifiedDestinationNumberResult& WithStatus(VerificationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An array of tags (key and value pairs) to associate with the destination
     * number.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of tags (key and value pairs) to associate with the destination
     * number.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>An array of tags (key and value pairs) to associate with the destination
     * number.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>An array of tags (key and value pairs) to associate with the destination
     * number.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of tags (key and value pairs) to associate with the destination
     * number.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of tags (key and value pairs) to associate with the destination
     * number.</p>
     */
    inline CreateVerifiedDestinationNumberResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>An array of tags (key and value pairs) to associate with the destination
     * number.</p>
     */
    inline CreateVerifiedDestinationNumberResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when the verified phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time when the verified phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The time when the verified phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The time when the verified phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the verified phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline CreateVerifiedDestinationNumberResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateVerifiedDestinationNumberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateVerifiedDestinationNumberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateVerifiedDestinationNumberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_verifiedDestinationNumberArn;

    Aws::String m_verifiedDestinationNumberId;

    Aws::String m_destinationPhoneNumber;

    VerificationStatus m_status;

    Aws::Vector<Tag> m_tags;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
