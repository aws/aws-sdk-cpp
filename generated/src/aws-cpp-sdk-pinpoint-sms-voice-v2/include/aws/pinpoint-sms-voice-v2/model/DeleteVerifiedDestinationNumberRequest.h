﻿/**
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
  class DeleteVerifiedDestinationNumberRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteVerifiedDestinationNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVerifiedDestinationNumber"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for the verified destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberId() const{ return m_verifiedDestinationNumberId; }
    inline bool VerifiedDestinationNumberIdHasBeenSet() const { return m_verifiedDestinationNumberIdHasBeenSet; }
    inline void SetVerifiedDestinationNumberId(const Aws::String& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = value; }
    inline void SetVerifiedDestinationNumberId(Aws::String&& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = std::move(value); }
    inline void SetVerifiedDestinationNumberId(const char* value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId.assign(value); }
    inline DeleteVerifiedDestinationNumberRequest& WithVerifiedDestinationNumberId(const Aws::String& value) { SetVerifiedDestinationNumberId(value); return *this;}
    inline DeleteVerifiedDestinationNumberRequest& WithVerifiedDestinationNumberId(Aws::String&& value) { SetVerifiedDestinationNumberId(std::move(value)); return *this;}
    inline DeleteVerifiedDestinationNumberRequest& WithVerifiedDestinationNumberId(const char* value) { SetVerifiedDestinationNumberId(value); return *this;}
    ///@}
  private:

    Aws::String m_verifiedDestinationNumberId;
    bool m_verifiedDestinationNumberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
