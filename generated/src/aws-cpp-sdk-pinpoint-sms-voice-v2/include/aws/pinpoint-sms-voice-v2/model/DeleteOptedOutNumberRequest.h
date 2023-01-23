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
  class DeleteOptedOutNumberRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteOptedOutNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOptedOutNumber"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The OptOutListName or OptOutListArn to remove the phone number from.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }

    /**
     * <p>The OptOutListName or OptOutListArn to remove the phone number from.</p>
     */
    inline bool OptOutListNameHasBeenSet() const { return m_optOutListNameHasBeenSet; }

    /**
     * <p>The OptOutListName or OptOutListArn to remove the phone number from.</p>
     */
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = value; }

    /**
     * <p>The OptOutListName or OptOutListArn to remove the phone number from.</p>
     */
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::move(value); }

    /**
     * <p>The OptOutListName or OptOutListArn to remove the phone number from.</p>
     */
    inline void SetOptOutListName(const char* value) { m_optOutListNameHasBeenSet = true; m_optOutListName.assign(value); }

    /**
     * <p>The OptOutListName or OptOutListArn to remove the phone number from.</p>
     */
    inline DeleteOptedOutNumberRequest& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}

    /**
     * <p>The OptOutListName or OptOutListArn to remove the phone number from.</p>
     */
    inline DeleteOptedOutNumberRequest& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}

    /**
     * <p>The OptOutListName or OptOutListArn to remove the phone number from.</p>
     */
    inline DeleteOptedOutNumberRequest& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}


    /**
     * <p>The phone number, in E.164 format, to remove from the OptOutList.</p>
     */
    inline const Aws::String& GetOptedOutNumber() const{ return m_optedOutNumber; }

    /**
     * <p>The phone number, in E.164 format, to remove from the OptOutList.</p>
     */
    inline bool OptedOutNumberHasBeenSet() const { return m_optedOutNumberHasBeenSet; }

    /**
     * <p>The phone number, in E.164 format, to remove from the OptOutList.</p>
     */
    inline void SetOptedOutNumber(const Aws::String& value) { m_optedOutNumberHasBeenSet = true; m_optedOutNumber = value; }

    /**
     * <p>The phone number, in E.164 format, to remove from the OptOutList.</p>
     */
    inline void SetOptedOutNumber(Aws::String&& value) { m_optedOutNumberHasBeenSet = true; m_optedOutNumber = std::move(value); }

    /**
     * <p>The phone number, in E.164 format, to remove from the OptOutList.</p>
     */
    inline void SetOptedOutNumber(const char* value) { m_optedOutNumberHasBeenSet = true; m_optedOutNumber.assign(value); }

    /**
     * <p>The phone number, in E.164 format, to remove from the OptOutList.</p>
     */
    inline DeleteOptedOutNumberRequest& WithOptedOutNumber(const Aws::String& value) { SetOptedOutNumber(value); return *this;}

    /**
     * <p>The phone number, in E.164 format, to remove from the OptOutList.</p>
     */
    inline DeleteOptedOutNumberRequest& WithOptedOutNumber(Aws::String&& value) { SetOptedOutNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number, in E.164 format, to remove from the OptOutList.</p>
     */
    inline DeleteOptedOutNumberRequest& WithOptedOutNumber(const char* value) { SetOptedOutNumber(value); return *this;}

  private:

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    Aws::String m_optedOutNumber;
    bool m_optedOutNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
