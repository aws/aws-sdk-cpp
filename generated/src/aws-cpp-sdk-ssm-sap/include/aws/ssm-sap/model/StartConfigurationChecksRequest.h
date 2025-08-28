/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/SsmSapRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-sap/model/ConfigurationCheckType.h>
#include <utility>

namespace Aws
{
namespace SsmSap
{
namespace Model
{

  /**
   */
  class StartConfigurationChecksRequest : public SsmSapRequest
  {
  public:
    AWS_SSMSAP_API StartConfigurationChecksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartConfigurationChecks"; }

    AWS_SSMSAP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    StartConfigurationChecksRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of configuration checks to perform.</p>
     */
    inline const Aws::Vector<ConfigurationCheckType>& GetConfigurationCheckIds() const { return m_configurationCheckIds; }
    inline bool ConfigurationCheckIdsHasBeenSet() const { return m_configurationCheckIdsHasBeenSet; }
    template<typename ConfigurationCheckIdsT = Aws::Vector<ConfigurationCheckType>>
    void SetConfigurationCheckIds(ConfigurationCheckIdsT&& value) { m_configurationCheckIdsHasBeenSet = true; m_configurationCheckIds = std::forward<ConfigurationCheckIdsT>(value); }
    template<typename ConfigurationCheckIdsT = Aws::Vector<ConfigurationCheckType>>
    StartConfigurationChecksRequest& WithConfigurationCheckIds(ConfigurationCheckIdsT&& value) { SetConfigurationCheckIds(std::forward<ConfigurationCheckIdsT>(value)); return *this;}
    inline StartConfigurationChecksRequest& AddConfigurationCheckIds(ConfigurationCheckType value) { m_configurationCheckIdsHasBeenSet = true; m_configurationCheckIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Vector<ConfigurationCheckType> m_configurationCheckIds;
    bool m_configurationCheckIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
