/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/TargetType.h>
#include <aws/securityhub/model/AssociationType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> An object that contains the details of a configuration policy association
   * that’s returned in a <code>ListConfigurationPolicyAssociations</code> request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ConfigurationPolicyAssociationSummary">AWS
   * API Reference</a></p>
   */
  class ConfigurationPolicyAssociationSummary
  {
  public:
    AWS_SECURITYHUB_API ConfigurationPolicyAssociationSummary() = default;
    AWS_SECURITYHUB_API ConfigurationPolicyAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ConfigurationPolicyAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The universally unique identifier (UUID) of the configuration policy. </p>
     */
    inline const Aws::String& GetConfigurationPolicyId() const { return m_configurationPolicyId; }
    inline bool ConfigurationPolicyIdHasBeenSet() const { return m_configurationPolicyIdHasBeenSet; }
    template<typename ConfigurationPolicyIdT = Aws::String>
    void SetConfigurationPolicyId(ConfigurationPolicyIdT&& value) { m_configurationPolicyIdHasBeenSet = true; m_configurationPolicyId = std::forward<ConfigurationPolicyIdT>(value); }
    template<typename ConfigurationPolicyIdT = Aws::String>
    ConfigurationPolicyAssociationSummary& WithConfigurationPolicyId(ConfigurationPolicyIdT&& value) { SetConfigurationPolicyId(std::forward<ConfigurationPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the target account, organizational unit, or the root. </p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    ConfigurationPolicyAssociationSummary& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the target is an Amazon Web Services account,
     * organizational unit, or the root. </p>
     */
    inline TargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(TargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline ConfigurationPolicyAssociationSummary& WithTargetType(TargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the association between the specified target and the
     * configuration was directly applied by the Security Hub delegated administrator
     * or inherited from a parent. </p>
     */
    inline AssociationType GetAssociationType() const { return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(AssociationType value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline ConfigurationPolicyAssociationSummary& WithAssociationType(AssociationType value) { SetAssociationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * association was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ConfigurationPolicyAssociationSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the association between the specified target and the
     * configuration. </p>
     */
    inline ConfigurationPolicyAssociationStatus GetAssociationStatus() const { return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(ConfigurationPolicyAssociationStatus value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline ConfigurationPolicyAssociationSummary& WithAssociationStatus(ConfigurationPolicyAssociationStatus value) { SetAssociationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The explanation for a <code>FAILED</code> value for
     * <code>AssociationStatus</code>. </p>
     */
    inline const Aws::String& GetAssociationStatusMessage() const { return m_associationStatusMessage; }
    inline bool AssociationStatusMessageHasBeenSet() const { return m_associationStatusMessageHasBeenSet; }
    template<typename AssociationStatusMessageT = Aws::String>
    void SetAssociationStatusMessage(AssociationStatusMessageT&& value) { m_associationStatusMessageHasBeenSet = true; m_associationStatusMessage = std::forward<AssociationStatusMessageT>(value); }
    template<typename AssociationStatusMessageT = Aws::String>
    ConfigurationPolicyAssociationSummary& WithAssociationStatusMessage(AssociationStatusMessageT&& value) { SetAssociationStatusMessage(std::forward<AssociationStatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationPolicyId;
    bool m_configurationPolicyIdHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    TargetType m_targetType{TargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    AssociationType m_associationType{AssociationType::NOT_SET};
    bool m_associationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    ConfigurationPolicyAssociationStatus m_associationStatus{ConfigurationPolicyAssociationStatus::NOT_SET};
    bool m_associationStatusHasBeenSet = false;

    Aws::String m_associationStatusMessage;
    bool m_associationStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
