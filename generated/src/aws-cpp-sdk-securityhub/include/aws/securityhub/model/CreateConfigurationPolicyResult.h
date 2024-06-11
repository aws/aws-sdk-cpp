﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/securityhub/model/Policy.h>
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
  class CreateConfigurationPolicyResult
  {
  public:
    AWS_SECURITYHUB_API CreateConfigurationPolicyResult();
    AWS_SECURITYHUB_API CreateConfigurationPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API CreateConfigurationPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the configuration policy. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateConfigurationPolicyResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateConfigurationPolicyResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateConfigurationPolicyResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The universally unique identifier (UUID) of the configuration policy. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateConfigurationPolicyResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateConfigurationPolicyResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateConfigurationPolicyResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the configuration policy. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateConfigurationPolicyResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateConfigurationPolicyResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateConfigurationPolicyResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the configuration policy. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateConfigurationPolicyResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateConfigurationPolicyResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateConfigurationPolicyResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline CreateConfigurationPolicyResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline CreateConfigurationPolicyResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time, in UTC and ISO 8601 format, that the configuration policy
     * was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateConfigurationPolicyResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateConfigurationPolicyResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that defines how Security Hub is configured. It includes whether
     * Security Hub is enabled or disabled, a list of enabled security standards, a
     * list of enabled or disabled security controls, and a list of custom parameter
     * values for specified controls. If the request included a list of security
     * controls that are enabled in the configuration policy, Security Hub disables all
     * other controls (including newly released controls). If the request included a
     * list of security controls that are disabled in the configuration policy,
     * Security Hub enables all other controls (including newly released controls).
     * </p>
     */
    inline const Policy& GetConfigurationPolicy() const{ return m_configurationPolicy; }
    inline void SetConfigurationPolicy(const Policy& value) { m_configurationPolicy = value; }
    inline void SetConfigurationPolicy(Policy&& value) { m_configurationPolicy = std::move(value); }
    inline CreateConfigurationPolicyResult& WithConfigurationPolicy(const Policy& value) { SetConfigurationPolicy(value); return *this;}
    inline CreateConfigurationPolicyResult& WithConfigurationPolicy(Policy&& value) { SetConfigurationPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateConfigurationPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateConfigurationPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateConfigurationPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Utils::DateTime m_createdAt;

    Policy m_configurationPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
