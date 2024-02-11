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
    AWS_SECURITYHUB_API GetConfigurationPolicyAssociationResult();
    AWS_SECURITYHUB_API GetConfigurationPolicyAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetConfigurationPolicyAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The universally unique identifier (UUID) of a configuration policy. For
     * self-managed behavior, the value is <code>SELF_MANAGED_SECURITY_HUB</code>. </p>
     */
    inline const Aws::String& GetConfigurationPolicyId() const{ return m_configurationPolicyId; }

    /**
     * <p> The universally unique identifier (UUID) of a configuration policy. For
     * self-managed behavior, the value is <code>SELF_MANAGED_SECURITY_HUB</code>. </p>
     */
    inline void SetConfigurationPolicyId(const Aws::String& value) { m_configurationPolicyId = value; }

    /**
     * <p> The universally unique identifier (UUID) of a configuration policy. For
     * self-managed behavior, the value is <code>SELF_MANAGED_SECURITY_HUB</code>. </p>
     */
    inline void SetConfigurationPolicyId(Aws::String&& value) { m_configurationPolicyId = std::move(value); }

    /**
     * <p> The universally unique identifier (UUID) of a configuration policy. For
     * self-managed behavior, the value is <code>SELF_MANAGED_SECURITY_HUB</code>. </p>
     */
    inline void SetConfigurationPolicyId(const char* value) { m_configurationPolicyId.assign(value); }

    /**
     * <p> The universally unique identifier (UUID) of a configuration policy. For
     * self-managed behavior, the value is <code>SELF_MANAGED_SECURITY_HUB</code>. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithConfigurationPolicyId(const Aws::String& value) { SetConfigurationPolicyId(value); return *this;}

    /**
     * <p> The universally unique identifier (UUID) of a configuration policy. For
     * self-managed behavior, the value is <code>SELF_MANAGED_SECURITY_HUB</code>. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithConfigurationPolicyId(Aws::String&& value) { SetConfigurationPolicyId(std::move(value)); return *this;}

    /**
     * <p> The universally unique identifier (UUID) of a configuration policy. For
     * self-managed behavior, the value is <code>SELF_MANAGED_SECURITY_HUB</code>. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithConfigurationPolicyId(const char* value) { SetConfigurationPolicyId(value); return *this;}


    /**
     * <p> The target account ID, organizational unit ID, or the root ID for which the
     * association is retrieved. </p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p> The target account ID, organizational unit ID, or the root ID for which the
     * association is retrieved. </p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetId = value; }

    /**
     * <p> The target account ID, organizational unit ID, or the root ID for which the
     * association is retrieved. </p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetId = std::move(value); }

    /**
     * <p> The target account ID, organizational unit ID, or the root ID for which the
     * association is retrieved. </p>
     */
    inline void SetTargetId(const char* value) { m_targetId.assign(value); }

    /**
     * <p> The target account ID, organizational unit ID, or the root ID for which the
     * association is retrieved. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p> The target account ID, organizational unit ID, or the root ID for which the
     * association is retrieved. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p> The target account ID, organizational unit ID, or the root ID for which the
     * association is retrieved. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p> Specifies whether the target is an Amazon Web Services account,
     * organizational unit, or the organization root. </p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p> Specifies whether the target is an Amazon Web Services account,
     * organizational unit, or the organization root. </p>
     */
    inline void SetTargetType(const TargetType& value) { m_targetType = value; }

    /**
     * <p> Specifies whether the target is an Amazon Web Services account,
     * organizational unit, or the organization root. </p>
     */
    inline void SetTargetType(TargetType&& value) { m_targetType = std::move(value); }

    /**
     * <p> Specifies whether the target is an Amazon Web Services account,
     * organizational unit, or the organization root. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p> Specifies whether the target is an Amazon Web Services account,
     * organizational unit, or the organization root. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}


    /**
     * <p> Indicates whether the association between the specified target and the
     * configuration was directly applied by the Security Hub delegated administrator
     * or inherited from a parent. </p>
     */
    inline const AssociationType& GetAssociationType() const{ return m_associationType; }

    /**
     * <p> Indicates whether the association between the specified target and the
     * configuration was directly applied by the Security Hub delegated administrator
     * or inherited from a parent. </p>
     */
    inline void SetAssociationType(const AssociationType& value) { m_associationType = value; }

    /**
     * <p> Indicates whether the association between the specified target and the
     * configuration was directly applied by the Security Hub delegated administrator
     * or inherited from a parent. </p>
     */
    inline void SetAssociationType(AssociationType&& value) { m_associationType = std::move(value); }

    /**
     * <p> Indicates whether the association between the specified target and the
     * configuration was directly applied by the Security Hub delegated administrator
     * or inherited from a parent. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithAssociationType(const AssociationType& value) { SetAssociationType(value); return *this;}

    /**
     * <p> Indicates whether the association between the specified target and the
     * configuration was directly applied by the Security Hub delegated administrator
     * or inherited from a parent. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithAssociationType(AssociationType&& value) { SetAssociationType(std::move(value)); return *this;}


    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * association was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * association was last updated. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * association was last updated. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * association was last updated. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * association was last updated. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p> The current status of the association between the specified target and the
     * configuration. </p>
     */
    inline const ConfigurationPolicyAssociationStatus& GetAssociationStatus() const{ return m_associationStatus; }

    /**
     * <p> The current status of the association between the specified target and the
     * configuration. </p>
     */
    inline void SetAssociationStatus(const ConfigurationPolicyAssociationStatus& value) { m_associationStatus = value; }

    /**
     * <p> The current status of the association between the specified target and the
     * configuration. </p>
     */
    inline void SetAssociationStatus(ConfigurationPolicyAssociationStatus&& value) { m_associationStatus = std::move(value); }

    /**
     * <p> The current status of the association between the specified target and the
     * configuration. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithAssociationStatus(const ConfigurationPolicyAssociationStatus& value) { SetAssociationStatus(value); return *this;}

    /**
     * <p> The current status of the association between the specified target and the
     * configuration. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithAssociationStatus(ConfigurationPolicyAssociationStatus&& value) { SetAssociationStatus(std::move(value)); return *this;}


    /**
     * <p> The explanation for a <code>FAILED</code> value for
     * <code>AssociationStatus</code>. </p>
     */
    inline const Aws::String& GetAssociationStatusMessage() const{ return m_associationStatusMessage; }

    /**
     * <p> The explanation for a <code>FAILED</code> value for
     * <code>AssociationStatus</code>. </p>
     */
    inline void SetAssociationStatusMessage(const Aws::String& value) { m_associationStatusMessage = value; }

    /**
     * <p> The explanation for a <code>FAILED</code> value for
     * <code>AssociationStatus</code>. </p>
     */
    inline void SetAssociationStatusMessage(Aws::String&& value) { m_associationStatusMessage = std::move(value); }

    /**
     * <p> The explanation for a <code>FAILED</code> value for
     * <code>AssociationStatus</code>. </p>
     */
    inline void SetAssociationStatusMessage(const char* value) { m_associationStatusMessage.assign(value); }

    /**
     * <p> The explanation for a <code>FAILED</code> value for
     * <code>AssociationStatus</code>. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithAssociationStatusMessage(const Aws::String& value) { SetAssociationStatusMessage(value); return *this;}

    /**
     * <p> The explanation for a <code>FAILED</code> value for
     * <code>AssociationStatus</code>. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithAssociationStatusMessage(Aws::String&& value) { SetAssociationStatusMessage(std::move(value)); return *this;}

    /**
     * <p> The explanation for a <code>FAILED</code> value for
     * <code>AssociationStatus</code>. </p>
     */
    inline GetConfigurationPolicyAssociationResult& WithAssociationStatusMessage(const char* value) { SetAssociationStatusMessage(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConfigurationPolicyAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConfigurationPolicyAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConfigurationPolicyAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_configurationPolicyId;

    Aws::String m_targetId;

    TargetType m_targetType;

    AssociationType m_associationType;

    Aws::Utils::DateTime m_updatedAt;

    ConfigurationPolicyAssociationStatus m_associationStatus;

    Aws::String m_associationStatusMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
