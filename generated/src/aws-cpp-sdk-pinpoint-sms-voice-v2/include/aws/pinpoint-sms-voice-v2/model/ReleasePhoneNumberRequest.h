/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class ReleasePhoneNumberRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ReleasePhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReleasePhoneNumber"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The PhoneNumberId or PhoneNumberArn of the phone number to release. You can
     * use <a>DescribePhoneNumbers</a> to get the values for PhoneNumberId and
     * PhoneNumberArn.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    /**
     * <p>The PhoneNumberId or PhoneNumberArn of the phone number to release. You can
     * use <a>DescribePhoneNumbers</a> to get the values for PhoneNumberId and
     * PhoneNumberArn.</p>
     */
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }

    /**
     * <p>The PhoneNumberId or PhoneNumberArn of the phone number to release. You can
     * use <a>DescribePhoneNumbers</a> to get the values for PhoneNumberId and
     * PhoneNumberArn.</p>
     */
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }

    /**
     * <p>The PhoneNumberId or PhoneNumberArn of the phone number to release. You can
     * use <a>DescribePhoneNumbers</a> to get the values for PhoneNumberId and
     * PhoneNumberArn.</p>
     */
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }

    /**
     * <p>The PhoneNumberId or PhoneNumberArn of the phone number to release. You can
     * use <a>DescribePhoneNumbers</a> to get the values for PhoneNumberId and
     * PhoneNumberArn.</p>
     */
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }

    /**
     * <p>The PhoneNumberId or PhoneNumberArn of the phone number to release. You can
     * use <a>DescribePhoneNumbers</a> to get the values for PhoneNumberId and
     * PhoneNumberArn.</p>
     */
    inline ReleasePhoneNumberRequest& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    /**
     * <p>The PhoneNumberId or PhoneNumberArn of the phone number to release. You can
     * use <a>DescribePhoneNumbers</a> to get the values for PhoneNumberId and
     * PhoneNumberArn.</p>
     */
    inline ReleasePhoneNumberRequest& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    /**
     * <p>The PhoneNumberId or PhoneNumberArn of the phone number to release. You can
     * use <a>DescribePhoneNumbers</a> to get the values for PhoneNumberId and
     * PhoneNumberArn.</p>
     */
    inline ReleasePhoneNumberRequest& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}

  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
