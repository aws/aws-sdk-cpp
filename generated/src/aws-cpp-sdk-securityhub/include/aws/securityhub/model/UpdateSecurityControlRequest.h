/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/ParameterConfiguration.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateSecurityControlRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateSecurityControlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityControl"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) or ID of the control to update. </p>
     */
    inline const Aws::String& GetSecurityControlId() const { return m_securityControlId; }
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }
    template<typename SecurityControlIdT = Aws::String>
    void SetSecurityControlId(SecurityControlIdT&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::forward<SecurityControlIdT>(value); }
    template<typename SecurityControlIdT = Aws::String>
    UpdateSecurityControlRequest& WithSecurityControlId(SecurityControlIdT&& value) { SetSecurityControlId(std::forward<SecurityControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline const Aws::Map<Aws::String, ParameterConfiguration>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, ParameterConfiguration>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, ParameterConfiguration>>
    UpdateSecurityControlRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = ParameterConfiguration>
    UpdateSecurityControlRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The most recent reason for updating the properties of the security control.
     * This field accepts alphanumeric characters in addition to white spaces, dashes,
     * and underscores. </p>
     */
    inline const Aws::String& GetLastUpdateReason() const { return m_lastUpdateReason; }
    inline bool LastUpdateReasonHasBeenSet() const { return m_lastUpdateReasonHasBeenSet; }
    template<typename LastUpdateReasonT = Aws::String>
    void SetLastUpdateReason(LastUpdateReasonT&& value) { m_lastUpdateReasonHasBeenSet = true; m_lastUpdateReason = std::forward<LastUpdateReasonT>(value); }
    template<typename LastUpdateReasonT = Aws::String>
    UpdateSecurityControlRequest& WithLastUpdateReason(LastUpdateReasonT&& value) { SetLastUpdateReason(std::forward<LastUpdateReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    Aws::Map<Aws::String, ParameterConfiguration> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_lastUpdateReason;
    bool m_lastUpdateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
