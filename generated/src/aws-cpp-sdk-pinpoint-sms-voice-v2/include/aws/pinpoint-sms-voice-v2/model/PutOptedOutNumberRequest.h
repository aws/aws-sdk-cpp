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
  class PutOptedOutNumberRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PutOptedOutNumberRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutOptedOutNumber"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The OptOutListName or OptOutListArn to add the phone number to.</p>
     *  <p>If you are using a shared AWS End User Messaging SMS and Voice
     * resource then you must use the full Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetOptOutListName() const { return m_optOutListName; }
    inline bool OptOutListNameHasBeenSet() const { return m_optOutListNameHasBeenSet; }
    template<typename OptOutListNameT = Aws::String>
    void SetOptOutListName(OptOutListNameT&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::forward<OptOutListNameT>(value); }
    template<typename OptOutListNameT = Aws::String>
    PutOptedOutNumberRequest& WithOptOutListName(OptOutListNameT&& value) { SetOptOutListName(std::forward<OptOutListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number to add to the OptOutList in E.164 format.</p>
     */
    inline const Aws::String& GetOptedOutNumber() const { return m_optedOutNumber; }
    inline bool OptedOutNumberHasBeenSet() const { return m_optedOutNumberHasBeenSet; }
    template<typename OptedOutNumberT = Aws::String>
    void SetOptedOutNumber(OptedOutNumberT&& value) { m_optedOutNumberHasBeenSet = true; m_optedOutNumber = std::forward<OptedOutNumberT>(value); }
    template<typename OptedOutNumberT = Aws::String>
    PutOptedOutNumberRequest& WithOptedOutNumber(OptedOutNumberT&& value) { SetOptedOutNumber(std::forward<OptedOutNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    Aws::String m_optedOutNumber;
    bool m_optedOutNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
