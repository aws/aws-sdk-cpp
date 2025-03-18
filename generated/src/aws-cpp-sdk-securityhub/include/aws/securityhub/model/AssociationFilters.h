/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AssociationType.h>
#include <aws/securityhub/model/ConfigurationPolicyAssociationStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Options for filtering the <code>ListConfigurationPolicyAssociations</code>
   * response. You can filter by the Amazon Resource Name (ARN) or universally unique
   * identifier (UUID) of a configuration policy, <code>AssociationType</code>, or
   * <code>AssociationStatus</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AssociationFilters">AWS
   * API Reference</a></p>
   */
  class AssociationFilters
  {
  public:
    AWS_SECURITYHUB_API AssociationFilters() = default;
    AWS_SECURITYHUB_API AssociationFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AssociationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN or UUID of the configuration policy. </p>
     */
    inline const Aws::String& GetConfigurationPolicyId() const { return m_configurationPolicyId; }
    inline bool ConfigurationPolicyIdHasBeenSet() const { return m_configurationPolicyIdHasBeenSet; }
    template<typename ConfigurationPolicyIdT = Aws::String>
    void SetConfigurationPolicyId(ConfigurationPolicyIdT&& value) { m_configurationPolicyIdHasBeenSet = true; m_configurationPolicyId = std::forward<ConfigurationPolicyIdT>(value); }
    template<typename ConfigurationPolicyIdT = Aws::String>
    AssociationFilters& WithConfigurationPolicyId(ConfigurationPolicyIdT&& value) { SetConfigurationPolicyId(std::forward<ConfigurationPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the association between a target and a configuration was
     * directly applied by the Security Hub delegated administrator or inherited from a
     * parent. </p>
     */
    inline AssociationType GetAssociationType() const { return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(AssociationType value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline AssociationFilters& WithAssociationType(AssociationType value) { SetAssociationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the association between a target and a configuration
     * policy. </p>
     */
    inline ConfigurationPolicyAssociationStatus GetAssociationStatus() const { return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(ConfigurationPolicyAssociationStatus value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline AssociationFilters& WithAssociationStatus(ConfigurationPolicyAssociationStatus value) { SetAssociationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationPolicyId;
    bool m_configurationPolicyIdHasBeenSet = false;

    AssociationType m_associationType{AssociationType::NOT_SET};
    bool m_associationTypeHasBeenSet = false;

    ConfigurationPolicyAssociationStatus m_associationStatus{ConfigurationPolicyAssociationStatus::NOT_SET};
    bool m_associationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
