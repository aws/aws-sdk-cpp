/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/SMSChannelRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class UpdateSmsChannelRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateSmsChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSmsChannel"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateSmsChannelRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SMSChannelRequest& GetSMSChannelRequest() const { return m_sMSChannelRequest; }
    inline bool SMSChannelRequestHasBeenSet() const { return m_sMSChannelRequestHasBeenSet; }
    template<typename SMSChannelRequestT = SMSChannelRequest>
    void SetSMSChannelRequest(SMSChannelRequestT&& value) { m_sMSChannelRequestHasBeenSet = true; m_sMSChannelRequest = std::forward<SMSChannelRequestT>(value); }
    template<typename SMSChannelRequestT = SMSChannelRequest>
    UpdateSmsChannelRequest& WithSMSChannelRequest(SMSChannelRequestT&& value) { SetSMSChannelRequest(std::forward<SMSChannelRequestT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    SMSChannelRequest m_sMSChannelRequest;
    bool m_sMSChannelRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
