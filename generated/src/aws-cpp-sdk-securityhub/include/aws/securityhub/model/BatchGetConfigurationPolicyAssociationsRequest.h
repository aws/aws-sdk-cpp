/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/ConfigurationPolicyAssociation.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class BatchGetConfigurationPolicyAssociationsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API BatchGetConfigurationPolicyAssociationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetConfigurationPolicyAssociations"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Specifies one or more target account IDs, organizational unit (OU) IDs, or
     * the root ID to retrieve associations for. </p>
     */
    inline const Aws::Vector<ConfigurationPolicyAssociation>& GetConfigurationPolicyAssociationIdentifiers() const { return m_configurationPolicyAssociationIdentifiers; }
    inline bool ConfigurationPolicyAssociationIdentifiersHasBeenSet() const { return m_configurationPolicyAssociationIdentifiersHasBeenSet; }
    template<typename ConfigurationPolicyAssociationIdentifiersT = Aws::Vector<ConfigurationPolicyAssociation>>
    void SetConfigurationPolicyAssociationIdentifiers(ConfigurationPolicyAssociationIdentifiersT&& value) { m_configurationPolicyAssociationIdentifiersHasBeenSet = true; m_configurationPolicyAssociationIdentifiers = std::forward<ConfigurationPolicyAssociationIdentifiersT>(value); }
    template<typename ConfigurationPolicyAssociationIdentifiersT = Aws::Vector<ConfigurationPolicyAssociation>>
    BatchGetConfigurationPolicyAssociationsRequest& WithConfigurationPolicyAssociationIdentifiers(ConfigurationPolicyAssociationIdentifiersT&& value) { SetConfigurationPolicyAssociationIdentifiers(std::forward<ConfigurationPolicyAssociationIdentifiersT>(value)); return *this;}
    template<typename ConfigurationPolicyAssociationIdentifiersT = ConfigurationPolicyAssociation>
    BatchGetConfigurationPolicyAssociationsRequest& AddConfigurationPolicyAssociationIdentifiers(ConfigurationPolicyAssociationIdentifiersT&& value) { m_configurationPolicyAssociationIdentifiersHasBeenSet = true; m_configurationPolicyAssociationIdentifiers.emplace_back(std::forward<ConfigurationPolicyAssociationIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ConfigurationPolicyAssociation> m_configurationPolicyAssociationIdentifiers;
    bool m_configurationPolicyAssociationIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
