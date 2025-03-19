/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/ssm-quicksetup/SSMQuickSetupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSMQuickSetup
{
namespace Model
{

  /**
   */
  class GetConfigurationRequest : public SSMQuickSetupRequest
  {
  public:
    AWS_SSMQUICKSETUP_API GetConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConfiguration"; }

    AWS_SSMQUICKSETUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A service generated identifier for the configuration.</p>
     */
    inline const Aws::String& GetConfigurationId() const { return m_configurationId; }
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }
    template<typename ConfigurationIdT = Aws::String>
    void SetConfigurationId(ConfigurationIdT&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::forward<ConfigurationIdT>(value); }
    template<typename ConfigurationIdT = Aws::String>
    GetConfigurationRequest& WithConfigurationId(ConfigurationIdT&& value) { SetConfigurationId(std::forward<ConfigurationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
