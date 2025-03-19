/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/ADMChannelRequest.h>
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
  class UpdateAdmChannelRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateAdmChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAdmChannel"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const ADMChannelRequest& GetADMChannelRequest() const { return m_aDMChannelRequest; }
    inline bool ADMChannelRequestHasBeenSet() const { return m_aDMChannelRequestHasBeenSet; }
    template<typename ADMChannelRequestT = ADMChannelRequest>
    void SetADMChannelRequest(ADMChannelRequestT&& value) { m_aDMChannelRequestHasBeenSet = true; m_aDMChannelRequest = std::forward<ADMChannelRequestT>(value); }
    template<typename ADMChannelRequestT = ADMChannelRequest>
    UpdateAdmChannelRequest& WithADMChannelRequest(ADMChannelRequestT&& value) { SetADMChannelRequest(std::forward<ADMChannelRequestT>(value)); return *this;}
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
    UpdateAdmChannelRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}
  private:

    ADMChannelRequest m_aDMChannelRequest;
    bool m_aDMChannelRequestHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
