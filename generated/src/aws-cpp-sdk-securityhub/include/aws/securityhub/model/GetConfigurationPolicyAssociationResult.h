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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{
  class GetConfigurationPolicyAssociationResult
  {
  public:
    AWS_SECURITYHUB_API GetConfigurationPolicyAssociationResult() = default;
    AWS_SECURITYHUB_API GetConfigurationPolicyAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetConfigurationPolicyAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The universally unique identifier (UUID) of a configuration policy. For
     * self-managed behavior, the value is <code>SELF_MANAGED_SECURITY_HUB</code>. </p>
     */
    inline const Aws::String& GetConfigurationPolicyId() const { return m_configurationPolicyId; }
    template<typename ConfigurationPolicyIdT = Aws::String>
    void SetConfigurationPolicyId(ConfigurationPolicyIdT&& value) { m_configurationPolicyIdHasBeenSet = true; m_configurationPolicyId = std::forward<ConfigurationPolicyIdT>(value); }
    template<typename ConfigurationPolicyIdT = Aws::String>
    GetConfigurationPolicyAssociationResult& WithConfigurationPolicyId(ConfigurationPolicyIdT&& value) { SetConfigurationPolicyId(std::forward<ConfigurationPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The target account ID, organizational unit ID, or the root ID for which the
     * association is retrieved. </p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    GetConfigurationPolicyAssociationResult& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the target is an Amazon Web Services account,
     * organizational unit, or the organization root. </p>
     */
    inline TargetType GetTargetType() const { return m_targetType; }
    inline void SetTargetType(TargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline GetConfigurationPolicyAssociationResult& WithTargetType(TargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the association between the specified target and the
     * configuration was directly applied by the Security Hub delegated administrator
     * or inherited from a parent. </p>
     */
    inline AssociationType GetAssociationType() const { return m_associationType; }
    inline void SetAssociationType(AssociationType value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline GetConfigurationPolicyAssociationResult& WithAssociationType(AssociationType value) { SetAssociationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * association was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetConfigurationPolicyAssociationResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the association between the specified target and the
     * configuration. </p>
     */
    inline ConfigurationPolicyAssociationStatus GetAssociationStatus() const { return m_associationStatus; }
    inline void SetAssociationStatus(ConfigurationPolicyAssociationStatus value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline GetConfigurationPolicyAssociationResult& WithAssociationStatus(ConfigurationPolicyAssociationStatus value) { SetAssociationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The explanation for a <code>FAILED</code> value for
     * <code>AssociationStatus</code>. </p>
     */
    inline const Aws::String& GetAssociationStatusMessage() const { return m_associationStatusMessage; }
    template<typename AssociationStatusMessageT = Aws::String>
    void SetAssociationStatusMessage(AssociationStatusMessageT&& value) { m_associationStatusMessageHasBeenSet = true; m_associationStatusMessage = std::forward<AssociationStatusMessageT>(value); }
    template<typename AssociationStatusMessageT = Aws::String>
    GetConfigurationPolicyAssociationResult& WithAssociationStatusMessage(AssociationStatusMessageT&& value) { SetAssociationStatusMessage(std::forward<AssociationStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConfigurationPolicyAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
