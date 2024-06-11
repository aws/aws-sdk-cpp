/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/VerificationStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class VerifyDestinationNumberResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API VerifyDestinationNumberResult();
    AWS_PINPOINTSMSVOICEV2_API VerifyDestinationNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API VerifyDestinationNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberArn() const{ return m_verifiedDestinationNumberArn; }
    inline void SetVerifiedDestinationNumberArn(const Aws::String& value) { m_verifiedDestinationNumberArn = value; }
    inline void SetVerifiedDestinationNumberArn(Aws::String&& value) { m_verifiedDestinationNumberArn = std::move(value); }
    inline void SetVerifiedDestinationNumberArn(const char* value) { m_verifiedDestinationNumberArn.assign(value); }
    inline VerifyDestinationNumberResult& WithVerifiedDestinationNumberArn(const Aws::String& value) { SetVerifiedDestinationNumberArn(value); return *this;}
    inline VerifyDestinationNumberResult& WithVerifiedDestinationNumberArn(Aws::String&& value) { SetVerifiedDestinationNumberArn(std::move(value)); return *this;}
    inline VerifyDestinationNumberResult& WithVerifiedDestinationNumberArn(const char* value) { SetVerifiedDestinationNumberArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberId() const{ return m_verifiedDestinationNumberId; }
    inline void SetVerifiedDestinationNumberId(const Aws::String& value) { m_verifiedDestinationNumberId = value; }
    inline void SetVerifiedDestinationNumberId(Aws::String&& value) { m_verifiedDestinationNumberId = std::move(value); }
    inline void SetVerifiedDestinationNumberId(const char* value) { m_verifiedDestinationNumberId.assign(value); }
    inline VerifyDestinationNumberResult& WithVerifiedDestinationNumberId(const Aws::String& value) { SetVerifiedDestinationNumberId(value); return *this;}
    inline VerifyDestinationNumberResult& WithVerifiedDestinationNumberId(Aws::String&& value) { SetVerifiedDestinationNumberId(std::move(value)); return *this;}
    inline VerifyDestinationNumberResult& WithVerifiedDestinationNumberId(const char* value) { SetVerifiedDestinationNumberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumber = value; }
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumber = std::move(value); }
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumber.assign(value); }
    inline VerifyDestinationNumberResult& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}
    inline VerifyDestinationNumberResult& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}
    inline VerifyDestinationNumberResult& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for being able to send messages to the phone number.</p>
     */
    inline const VerificationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const VerificationStatus& value) { m_status = value; }
    inline void SetStatus(VerificationStatus&& value) { m_status = std::move(value); }
    inline VerifyDestinationNumberResult& WithStatus(const VerificationStatus& value) { SetStatus(value); return *this;}
    inline VerifyDestinationNumberResult& WithStatus(VerificationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the destination phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline VerifyDestinationNumberResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline VerifyDestinationNumberResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline VerifyDestinationNumberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline VerifyDestinationNumberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline VerifyDestinationNumberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_verifiedDestinationNumberArn;

    Aws::String m_verifiedDestinationNumberId;

    Aws::String m_destinationPhoneNumber;

    VerificationStatus m_status;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
