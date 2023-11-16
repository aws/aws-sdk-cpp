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
    AWS_PINPOINTSMSVOICEV2_API VerifiedDestinationNumberInformation();
    AWS_PINPOINTSMSVOICEV2_API VerifiedDestinationNumberInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API VerifiedDestinationNumberInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberArn() const{ return m_verifiedDestinationNumberArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline bool VerifiedDestinationNumberArnHasBeenSet() const { return m_verifiedDestinationNumberArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberArn(const Aws::String& value) { m_verifiedDestinationNumberArnHasBeenSet = true; m_verifiedDestinationNumberArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberArn(Aws::String&& value) { m_verifiedDestinationNumberArnHasBeenSet = true; m_verifiedDestinationNumberArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberArn(const char* value) { m_verifiedDestinationNumberArnHasBeenSet = true; m_verifiedDestinationNumberArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline VerifiedDestinationNumberInformation& WithVerifiedDestinationNumberArn(const Aws::String& value) { SetVerifiedDestinationNumberArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline VerifiedDestinationNumberInformation& WithVerifiedDestinationNumberArn(Aws::String&& value) { SetVerifiedDestinationNumberArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the verified destination phone number.</p>
     */
    inline VerifiedDestinationNumberInformation& WithVerifiedDestinationNumberArn(const char* value) { SetVerifiedDestinationNumberArn(value); return *this;}


    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberId() const{ return m_verifiedDestinationNumberId; }

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline bool VerifiedDestinationNumberIdHasBeenSet() const { return m_verifiedDestinationNumberIdHasBeenSet; }

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberId(const Aws::String& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = value; }

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberId(Aws::String&& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = std::move(value); }

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberId(const char* value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId.assign(value); }

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline VerifiedDestinationNumberInformation& WithVerifiedDestinationNumberId(const Aws::String& value) { SetVerifiedDestinationNumberId(value); return *this;}

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline VerifiedDestinationNumberInformation& WithVerifiedDestinationNumberId(Aws::String&& value) { SetVerifiedDestinationNumberId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline VerifiedDestinationNumberInformation& WithVerifiedDestinationNumberId(const char* value) { SetVerifiedDestinationNumberId(value); return *this;}


    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = value; }

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::move(value); }

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber.assign(value); }

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline VerifiedDestinationNumberInformation& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline VerifiedDestinationNumberInformation& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The verified destination phone number, in E.164 format.</p>
     */
    inline VerifiedDestinationNumberInformation& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}


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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the verified destination phone number.</p> <ul> <li> <p>
     * <code>PENDING</code>: The phone number hasn't been verified yet.</p> </li> <li>
     * <p> <code>VERIFIED</code>: The phone number is verified and can receive
     * messages.</p> </li> </ul>
     */
    inline void SetStatus(const VerificationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the verified destination phone number.</p> <ul> <li> <p>
     * <code>PENDING</code>: The phone number hasn't been verified yet.</p> </li> <li>
     * <p> <code>VERIFIED</code>: The phone number is verified and can receive
     * messages.</p> </li> </ul>
     */
    inline void SetStatus(VerificationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the verified destination phone number.</p> <ul> <li> <p>
     * <code>PENDING</code>: The phone number hasn't been verified yet.</p> </li> <li>
     * <p> <code>VERIFIED</code>: The phone number is verified and can receive
     * messages.</p> </li> </ul>
     */
    inline VerifiedDestinationNumberInformation& WithStatus(const VerificationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the verified destination phone number.</p> <ul> <li> <p>
     * <code>PENDING</code>: The phone number hasn't been verified yet.</p> </li> <li>
     * <p> <code>VERIFIED</code>: The phone number is verified and can receive
     * messages.</p> </li> </ul>
     */
    inline VerifiedDestinationNumberInformation& WithStatus(VerificationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time when the destination phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time when the destination phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time when the destination phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time when the destination phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time when the destination phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline VerifiedDestinationNumberInformation& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the destination phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline VerifiedDestinationNumberInformation& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_verifiedDestinationNumberArn;
    bool m_verifiedDestinationNumberArnHasBeenSet = false;

    Aws::String m_verifiedDestinationNumberId;
    bool m_verifiedDestinationNumberIdHasBeenSet = false;

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    VerificationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
