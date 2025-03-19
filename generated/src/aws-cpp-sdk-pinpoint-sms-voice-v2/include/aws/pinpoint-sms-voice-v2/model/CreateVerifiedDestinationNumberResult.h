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
    AWS_PINPOINTSMSVOICEV2_API CreateVerifiedDestinationNumberResult() = default;
    AWS_PINPOINTSMSVOICEV2_API CreateVerifiedDestinationNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API CreateVerifiedDestinationNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberArn() const { return m_verifiedDestinationNumberArn; }
    template<typename VerifiedDestinationNumberArnT = Aws::String>
    void SetVerifiedDestinationNumberArn(VerifiedDestinationNumberArnT&& value) { m_verifiedDestinationNumberArnHasBeenSet = true; m_verifiedDestinationNumberArn = std::forward<VerifiedDestinationNumberArnT>(value); }
    template<typename VerifiedDestinationNumberArnT = Aws::String>
    CreateVerifiedDestinationNumberResult& WithVerifiedDestinationNumberArn(VerifiedDestinationNumberArnT&& value) { SetVerifiedDestinationNumberArn(std::forward<VerifiedDestinationNumberArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberId() const { return m_verifiedDestinationNumberId; }
    template<typename VerifiedDestinationNumberIdT = Aws::String>
    void SetVerifiedDestinationNumberId(VerifiedDestinationNumberIdT&& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = std::forward<VerifiedDestinationNumberIdT>(value); }
    template<typename VerifiedDestinationNumberIdT = Aws::String>
    CreateVerifiedDestinationNumberResult& WithVerifiedDestinationNumberId(VerifiedDestinationNumberIdT&& value) { SetVerifiedDestinationNumberId(std::forward<VerifiedDestinationNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const { return m_destinationPhoneNumber; }
    template<typename DestinationPhoneNumberT = Aws::String>
    void SetDestinationPhoneNumber(DestinationPhoneNumberT&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::forward<DestinationPhoneNumberT>(value); }
    template<typename DestinationPhoneNumberT = Aws::String>
    CreateVerifiedDestinationNumberResult& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) { SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the verified destination phone number.</p> <ul> <li> <p>
     * <code>PENDING</code>: The phone number hasn't been verified yet.</p> </li> <li>
     * <p> <code>VERIFIED</code>: The phone number is verified and can receive
     * messages.</p> </li> </ul>
     */
    inline VerificationStatus GetStatus() const { return m_status; }
    inline void SetStatus(VerificationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateVerifiedDestinationNumberResult& WithStatus(VerificationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tags (key and value pairs) to associate with the destination
     * number.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateVerifiedDestinationNumberResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateVerifiedDestinationNumberResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the verified phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    CreateVerifiedDestinationNumberResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateVerifiedDestinationNumberResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedDestinationNumberArn;
    bool m_verifiedDestinationNumberArnHasBeenSet = false;

    Aws::String m_verifiedDestinationNumberId;
    bool m_verifiedDestinationNumberIdHasBeenSet = false;

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    VerificationStatus m_status{VerificationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
