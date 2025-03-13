/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/APNSSandboxChannelRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class UpdateApnsSandboxChannelRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateApnsSandboxChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApnsSandboxChannel"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const APNSSandboxChannelRequest& GetAPNSSandboxChannelRequest() const { return m_aPNSSandboxChannelRequest; }
    inline bool APNSSandboxChannelRequestHasBeenSet() const { return m_aPNSSandboxChannelRequestHasBeenSet; }
    template<typename APNSSandboxChannelRequestT = APNSSandboxChannelRequest>
    void SetAPNSSandboxChannelRequest(APNSSandboxChannelRequestT&& value) { m_aPNSSandboxChannelRequestHasBeenSet = true; m_aPNSSandboxChannelRequest = std::forward<APNSSandboxChannelRequestT>(value); }
    template<typename APNSSandboxChannelRequestT = APNSSandboxChannelRequest>
    UpdateApnsSandboxChannelRequest& WithAPNSSandboxChannelRequest(APNSSandboxChannelRequestT&& value) { SetAPNSSandboxChannelRequest(std::forward<APNSSandboxChannelRequestT>(value)); return *this;}
    ///@}

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
    UpdateApnsSandboxChannelRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}
  private:

    APNSSandboxChannelRequest m_aPNSSandboxChannelRequest;
    bool m_aPNSSandboxChannelRequestHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
