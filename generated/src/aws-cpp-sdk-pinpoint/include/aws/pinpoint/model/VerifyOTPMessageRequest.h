/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/VerifyOTPMessageRequestParameters.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class VerifyOTPMessageRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API VerifyOTPMessageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyOTPMessage"; }

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
    VerifyOTPMessageRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VerifyOTPMessageRequestParameters& GetVerifyOTPMessageRequestParameters() const { return m_verifyOTPMessageRequestParameters; }
    inline bool VerifyOTPMessageRequestParametersHasBeenSet() const { return m_verifyOTPMessageRequestParametersHasBeenSet; }
    template<typename VerifyOTPMessageRequestParametersT = VerifyOTPMessageRequestParameters>
    void SetVerifyOTPMessageRequestParameters(VerifyOTPMessageRequestParametersT&& value) { m_verifyOTPMessageRequestParametersHasBeenSet = true; m_verifyOTPMessageRequestParameters = std::forward<VerifyOTPMessageRequestParametersT>(value); }
    template<typename VerifyOTPMessageRequestParametersT = VerifyOTPMessageRequestParameters>
    VerifyOTPMessageRequest& WithVerifyOTPMessageRequestParameters(VerifyOTPMessageRequestParametersT&& value) { SetVerifyOTPMessageRequestParameters(std::forward<VerifyOTPMessageRequestParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    VerifyOTPMessageRequestParameters m_verifyOTPMessageRequestParameters;
    bool m_verifyOTPMessageRequestParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
