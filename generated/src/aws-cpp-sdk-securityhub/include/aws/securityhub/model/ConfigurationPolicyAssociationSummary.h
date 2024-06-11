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
    AWS_SECURITYHUB_API ConfigurationPolicyAssociationSummary();
    AWS_SECURITYHUB_API ConfigurationPolicyAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ConfigurationPolicyAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The universally unique identifier (UUID) of the configuration policy. </p>
     */
    inline const Aws::String& GetConfigurationPolicyId() const{ return m_configurationPolicyId; }
    inline bool ConfigurationPolicyIdHasBeenSet() const { return m_configurationPolicyIdHasBeenSet; }
    inline void SetConfigurationPolicyId(const Aws::String& value) { m_configurationPolicyIdHasBeenSet = true; m_configurationPolicyId = value; }
    inline void SetConfigurationPolicyId(Aws::String&& value) { m_configurationPolicyIdHasBeenSet = true; m_configurationPolicyId = std::move(value); }
    inline void SetConfigurationPolicyId(const char* value) { m_configurationPolicyIdHasBeenSet = true; m_configurationPolicyId.assign(value); }
    inline ConfigurationPolicyAssociationSummary& WithConfigurationPolicyId(const Aws::String& value) { SetConfigurationPolicyId(value); return *this;}
    inline ConfigurationPolicyAssociationSummary& WithConfigurationPolicyId(Aws::String&& value) { SetConfigurationPolicyId(std::move(value)); return *this;}
    inline ConfigurationPolicyAssociationSummary& WithConfigurationPolicyId(const char* value) { SetConfigurationPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the target account, organizational unit, or the root. </p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }
    inline ConfigurationPolicyAssociationSummary& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}
    inline ConfigurationPolicyAssociationSummary& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}
    inline ConfigurationPolicyAssociationSummary& WithTargetId(const char* value) { SetTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the target is an Amazon Web Services account,
     * organizational unit, or the root. </p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline ConfigurationPolicyAssociationSummary& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}
    inline ConfigurationPolicyAssociationSummary& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the association between the specified target and the
     * configuration was directly applied by the Security Hub delegated administrator
     * or inherited from a parent. </p>
     */
    inline const AssociationType& GetAssociationType() const{ return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(const AssociationType& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline void SetAssociationType(AssociationType&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }
    inline ConfigurationPolicyAssociationSummary& WithAssociationType(const AssociationType& value) { SetAssociationType(value); return *this;}
    inline ConfigurationPolicyAssociationSummary& WithAssociationType(AssociationType&& value) { SetAssociationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * association was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline ConfigurationPolicyAssociationSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline ConfigurationPolicyAssociationSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the association between the specified target and the
     * configuration. </p>
     */
    inline const ConfigurationPolicyAssociationStatus& GetAssociationStatus() const{ return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(const ConfigurationPolicyAssociationStatus& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline void SetAssociationStatus(ConfigurationPolicyAssociationStatus&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }
    inline ConfigurationPolicyAssociationSummary& WithAssociationStatus(const ConfigurationPolicyAssociationStatus& value) { SetAssociationStatus(value); return *this;}
    inline ConfigurationPolicyAssociationSummary& WithAssociationStatus(ConfigurationPolicyAssociationStatus&& value) { SetAssociationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The explanation for a <code>FAILED</code> value for
     * <code>AssociationStatus</code>. </p>
     */
    inline const Aws::String& GetAssociationStatusMessage() const{ return m_associationStatusMessage; }
    inline bool AssociationStatusMessageHasBeenSet() const { return m_associationStatusMessageHasBeenSet; }
    inline void SetAssociationStatusMessage(const Aws::String& value) { m_associationStatusMessageHasBeenSet = true; m_associationStatusMessage = value; }
    inline void SetAssociationStatusMessage(Aws::String&& value) { m_associationStatusMessageHasBeenSet = true; m_associationStatusMessage = std::move(value); }
    inline void SetAssociationStatusMessage(const char* value) { m_associationStatusMessageHasBeenSet = true; m_associationStatusMessage.assign(value); }
    inline ConfigurationPolicyAssociationSummary& WithAssociationStatusMessage(const Aws::String& value) { SetAssociationStatusMessage(value); return *this;}
    inline ConfigurationPolicyAssociationSummary& WithAssociationStatusMessage(Aws::String&& value) { SetAssociationStatusMessage(std::move(value)); return *this;}
    inline ConfigurationPolicyAssociationSummary& WithAssociationStatusMessage(const char* value) { SetAssociationStatusMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationPolicyId;
    bool m_configurationPolicyIdHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    TargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;

    AssociationType m_associationType;
    bool m_associationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    ConfigurationPolicyAssociationStatus m_associationStatus;
    bool m_associationStatusHasBeenSet = false;

    Aws::String m_associationStatusMessage;
    bool m_associationStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
