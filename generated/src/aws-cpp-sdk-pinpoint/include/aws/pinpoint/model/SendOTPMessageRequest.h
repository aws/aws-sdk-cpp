/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/SendOTPMessageRequestParameters.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class SendOTPMessageRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API SendOTPMessageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendOTPMessage"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of your Amazon Pinpoint application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    SendOTPMessageRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SendOTPMessageRequestParameters& GetSendOTPMessageRequestParameters() const { return m_sendOTPMessageRequestParameters; }
    inline bool SendOTPMessageRequestParametersHasBeenSet() const { return m_sendOTPMessageRequestParametersHasBeenSet; }
    template<typename SendOTPMessageRequestParametersT = SendOTPMessageRequestParameters>
    void SetSendOTPMessageRequestParameters(SendOTPMessageRequestParametersT&& value) { m_sendOTPMessageRequestParametersHasBeenSet = true; m_sendOTPMessageRequestParameters = std::forward<SendOTPMessageRequestParametersT>(value); }
    template<typename SendOTPMessageRequestParametersT = SendOTPMessageRequestParameters>
    SendOTPMessageRequest& WithSendOTPMessageRequestParameters(SendOTPMessageRequestParametersT&& value) { SetSendOTPMessageRequestParameters(std::forward<SendOTPMessageRequestParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    SendOTPMessageRequestParameters m_sendOTPMessageRequestParameters;
    bool m_sendOTPMessageRequestParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
