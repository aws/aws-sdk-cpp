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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Provides information about the requested verified destintion phone
   * number.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/VerifiedDestinationNumberInformation">AWS
   * API Reference</a></p>
   */
  class VerifiedDestinationNumberInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API VerifiedDestinationNumberInformation() = default;
    AWS_PINPOINTSMSVOICEV2_API VerifiedDestinationNumberInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API VerifiedDestinationNumberInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberArn() const { return m_verifiedDestinationNumberArn; }
    inline bool VerifiedDestinationNumberArnHasBeenSet() const { return m_verifiedDestinationNumberArnHasBeenSet; }
    template<typename VerifiedDestinationNumberArnT = Aws::String>
    void SetVerifiedDestinationNumberArn(VerifiedDestinationNumberArnT&& value) { m_verifiedDestinationNumberArnHasBeenSet = true; m_verifiedDestinationNumberArn = std::forward<VerifiedDestinationNumberArnT>(value); }
    template<typename VerifiedDestinationNumberArnT = Aws::String>
    VerifiedDestinationNumberInformation& WithVerifiedDestinationNumberArn(VerifiedDestinationNumberArnT&& value) { SetVerifiedDestinationNumberArn(std::forward<VerifiedDestinationNumberArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberId() const { return m_verifiedDestinationNumberId; }
    inline bool VerifiedDestinationNumberIdHasBeenSet() const { return m_verifiedDestinationNumberIdHasBeenSet; }
    template<typename VerifiedDestinationNumberIdT = Aws::String>
    void SetVerifiedDestinationNumberId(VerifiedDestinationNumberIdT&& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = std::forward<VerifiedDestinationNumberIdT>(value); }
    template<typename VerifiedDestinationNumberIdT = Aws::String>
    VerifiedDestinationNumberInformation& WithVerifiedDestinationNumberId(VerifiedDestinationNumberIdT&& value) { SetVerifiedDestinationNumberId(std::forward<VerifiedDestinationNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const { return m_destinationPhoneNumber; }
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
    template<typename DestinationPhoneNumberT = Aws::String>
    void SetDestinationPhoneNumber(DestinationPhoneNumberT&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::forward<DestinationPhoneNumberT>(value); }
    template<typename DestinationPhoneNumberT = Aws::String>
    VerifiedDestinationNumberInformation& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) { SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the verified destination phone number.</p> <ul> <li> <p>
     * <code>PENDING</code>: The phone number hasn't been verified yet.</p> </li> <li>
     * <p> <code>VERIFIED</code>: The phone number is verified and can receive
     * messages.</p> </li> </ul>
     */
    inline VerificationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(VerificationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline VerifiedDestinationNumberInformation& WithStatus(VerificationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the destination phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    VerifiedDestinationNumberInformation& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
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

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
