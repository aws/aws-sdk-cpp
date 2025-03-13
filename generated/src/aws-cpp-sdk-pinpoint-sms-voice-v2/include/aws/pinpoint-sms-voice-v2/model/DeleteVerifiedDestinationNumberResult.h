/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteVerifiedDestinationNumberResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteVerifiedDestinationNumberResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DeleteVerifiedDestinationNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteVerifiedDestinationNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberArn() const { return m_verifiedDestinationNumberArn; }
    template<typename VerifiedDestinationNumberArnT = Aws::String>
    void SetVerifiedDestinationNumberArn(VerifiedDestinationNumberArnT&& value) { m_verifiedDestinationNumberArnHasBeenSet = true; m_verifiedDestinationNumberArn = std::forward<VerifiedDestinationNumberArnT>(value); }
    template<typename VerifiedDestinationNumberArnT = Aws::String>
    DeleteVerifiedDestinationNumberResult& WithVerifiedDestinationNumberArn(VerifiedDestinationNumberArnT&& value) { SetVerifiedDestinationNumberArn(std::forward<VerifiedDestinationNumberArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberId() const { return m_verifiedDestinationNumberId; }
    template<typename VerifiedDestinationNumberIdT = Aws::String>
    void SetVerifiedDestinationNumberId(VerifiedDestinationNumberIdT&& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = std::forward<VerifiedDestinationNumberIdT>(value); }
    template<typename VerifiedDestinationNumberIdT = Aws::String>
    DeleteVerifiedDestinationNumberResult& WithVerifiedDestinationNumberId(VerifiedDestinationNumberIdT&& value) { SetVerifiedDestinationNumberId(std::forward<VerifiedDestinationNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const { return m_destinationPhoneNumber; }
    template<typename DestinationPhoneNumberT = Aws::String>
    void SetDestinationPhoneNumber(DestinationPhoneNumberT&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::forward<DestinationPhoneNumberT>(value); }
    template<typename DestinationPhoneNumberT = Aws::String>
    DeleteVerifiedDestinationNumberResult& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) { SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the destination phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    DeleteVerifiedDestinationNumberResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteVerifiedDestinationNumberResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedDestinationNumberArn;
    bool m_verifiedDestinationNumberArnHasBeenSet = false;

    Aws::String m_verifiedDestinationNumberId;
    bool m_verifiedDestinationNumberIdHasBeenSet = false;

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
