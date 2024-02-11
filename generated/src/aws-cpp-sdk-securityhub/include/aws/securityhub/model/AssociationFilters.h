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
    AWS_SECURITYHUB_API AssociationFilters();
    AWS_SECURITYHUB_API AssociationFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AssociationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ARN or UUID of the configuration policy. </p>
     */
    inline const Aws::String& GetConfigurationPolicyId() const{ return m_configurationPolicyId; }

    /**
     * <p> The ARN or UUID of the configuration policy. </p>
     */
    inline bool ConfigurationPolicyIdHasBeenSet() const { return m_configurationPolicyIdHasBeenSet; }

    /**
     * <p> The ARN or UUID of the configuration policy. </p>
     */
    inline void SetConfigurationPolicyId(const Aws::String& value) { m_configurationPolicyIdHasBeenSet = true; m_configurationPolicyId = value; }

    /**
     * <p> The ARN or UUID of the configuration policy. </p>
     */
    inline void SetConfigurationPolicyId(Aws::String&& value) { m_configurationPolicyIdHasBeenSet = true; m_configurationPolicyId = std::move(value); }

    /**
     * <p> The ARN or UUID of the configuration policy. </p>
     */
    inline void SetConfigurationPolicyId(const char* value) { m_configurationPolicyIdHasBeenSet = true; m_configurationPolicyId.assign(value); }

    /**
     * <p> The ARN or UUID of the configuration policy. </p>
     */
    inline AssociationFilters& WithConfigurationPolicyId(const Aws::String& value) { SetConfigurationPolicyId(value); return *this;}

    /**
     * <p> The ARN or UUID of the configuration policy. </p>
     */
    inline AssociationFilters& WithConfigurationPolicyId(Aws::String&& value) { SetConfigurationPolicyId(std::move(value)); return *this;}

    /**
     * <p> The ARN or UUID of the configuration policy. </p>
     */
    inline AssociationFilters& WithConfigurationPolicyId(const char* value) { SetConfigurationPolicyId(value); return *this;}


    /**
     * <p> Indicates whether the association between a target and a configuration was
     * directly applied by the Security Hub delegated administrator or inherited from a
     * parent. </p>
     */
    inline const AssociationType& GetAssociationType() const{ return m_associationType; }

    /**
     * <p> Indicates whether the association between a target and a configuration was
     * directly applied by the Security Hub delegated administrator or inherited from a
     * parent. </p>
     */
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }

    /**
     * <p> Indicates whether the association between a target and a configuration was
     * directly applied by the Security Hub delegated administrator or inherited from a
     * parent. </p>
     */
    inline void SetAssociationType(const AssociationType& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }

    /**
     * <p> Indicates whether the association between a target and a configuration was
     * directly applied by the Security Hub delegated administrator or inherited from a
     * parent. </p>
     */
    inline void SetAssociationType(AssociationType&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }

    /**
     * <p> Indicates whether the association between a target and a configuration was
     * directly applied by the Security Hub delegated administrator or inherited from a
     * parent. </p>
     */
    inline AssociationFilters& WithAssociationType(const AssociationType& value) { SetAssociationType(value); return *this;}

    /**
     * <p> Indicates whether the association between a target and a configuration was
     * directly applied by the Security Hub delegated administrator or inherited from a
     * parent. </p>
     */
    inline AssociationFilters& WithAssociationType(AssociationType&& value) { SetAssociationType(std::move(value)); return *this;}


    /**
     * <p> The current status of the association between a target and a configuration
     * policy. </p>
     */
    inline const ConfigurationPolicyAssociationStatus& GetAssociationStatus() const{ return m_associationStatus; }

    /**
     * <p> The current status of the association between a target and a configuration
     * policy. </p>
     */
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }

    /**
     * <p> The current status of the association between a target and a configuration
     * policy. </p>
     */
    inline void SetAssociationStatus(const ConfigurationPolicyAssociationStatus& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }

    /**
     * <p> The current status of the association between a target and a configuration
     * policy. </p>
     */
    inline void SetAssociationStatus(ConfigurationPolicyAssociationStatus&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }

    /**
     * <p> The current status of the association between a target and a configuration
     * policy. </p>
     */
    inline AssociationFilters& WithAssociationStatus(const ConfigurationPolicyAssociationStatus& value) { SetAssociationStatus(value); return *this;}

    /**
     * <p> The current status of the association between a target and a configuration
     * policy. </p>
     */
    inline AssociationFilters& WithAssociationStatus(ConfigurationPolicyAssociationStatus&& value) { SetAssociationStatus(std::move(value)); return *this;}

  private:

    Aws::String m_configurationPolicyId;
    bool m_configurationPolicyIdHasBeenSet = false;

    AssociationType m_associationType;
    bool m_associationTypeHasBeenSet = false;

    ConfigurationPolicyAssociationStatus m_associationStatus;
    bool m_associationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
