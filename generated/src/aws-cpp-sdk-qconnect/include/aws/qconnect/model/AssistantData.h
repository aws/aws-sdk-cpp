﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AssistantCapabilityConfiguration.h>
#include <aws/qconnect/model/AssistantIntegrationConfiguration.h>
#include <aws/qconnect/model/ServerSideEncryptionConfiguration.h>
#include <aws/qconnect/model/AssistantStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/AssistantType.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The assistant data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AssistantData">AWS
   * API Reference</a></p>
   */
  class AssistantData
  {
  public:
    AWS_QCONNECT_API AssistantData();
    AWS_QCONNECT_API AssistantData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AssistantData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantArn() const{ return m_assistantArn; }
    inline bool AssistantArnHasBeenSet() const { return m_assistantArnHasBeenSet; }
    inline void SetAssistantArn(const Aws::String& value) { m_assistantArnHasBeenSet = true; m_assistantArn = value; }
    inline void SetAssistantArn(Aws::String&& value) { m_assistantArnHasBeenSet = true; m_assistantArn = std::move(value); }
    inline void SetAssistantArn(const char* value) { m_assistantArnHasBeenSet = true; m_assistantArn.assign(value); }
    inline AssistantData& WithAssistantArn(const Aws::String& value) { SetAssistantArn(value); return *this;}
    inline AssistantData& WithAssistantArn(Aws::String&& value) { SetAssistantArn(std::move(value)); return *this;}
    inline AssistantData& WithAssistantArn(const char* value) { SetAssistantArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }
    inline AssistantData& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline AssistantData& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline AssistantData& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the Amazon Q in Connect assistant
     * capability. </p>
     */
    inline const AssistantCapabilityConfiguration& GetCapabilityConfiguration() const{ return m_capabilityConfiguration; }
    inline bool CapabilityConfigurationHasBeenSet() const { return m_capabilityConfigurationHasBeenSet; }
    inline void SetCapabilityConfiguration(const AssistantCapabilityConfiguration& value) { m_capabilityConfigurationHasBeenSet = true; m_capabilityConfiguration = value; }
    inline void SetCapabilityConfiguration(AssistantCapabilityConfiguration&& value) { m_capabilityConfigurationHasBeenSet = true; m_capabilityConfiguration = std::move(value); }
    inline AssistantData& WithCapabilityConfiguration(const AssistantCapabilityConfiguration& value) { SetCapabilityConfiguration(value); return *this;}
    inline AssistantData& WithCapabilityConfiguration(AssistantCapabilityConfiguration&& value) { SetCapabilityConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AssistantData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AssistantData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AssistantData& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the Amazon Q in Connect assistant
     * integration.</p>
     */
    inline const AssistantIntegrationConfiguration& GetIntegrationConfiguration() const{ return m_integrationConfiguration; }
    inline bool IntegrationConfigurationHasBeenSet() const { return m_integrationConfigurationHasBeenSet; }
    inline void SetIntegrationConfiguration(const AssistantIntegrationConfiguration& value) { m_integrationConfigurationHasBeenSet = true; m_integrationConfiguration = value; }
    inline void SetIntegrationConfiguration(AssistantIntegrationConfiguration&& value) { m_integrationConfigurationHasBeenSet = true; m_integrationConfiguration = std::move(value); }
    inline AssistantData& WithIntegrationConfiguration(const AssistantIntegrationConfiguration& value) { SetIntegrationConfiguration(value); return *this;}
    inline AssistantData& WithIntegrationConfiguration(AssistantIntegrationConfiguration&& value) { SetIntegrationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssistantData& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssistantData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssistantData& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the customer managed key used for
     * encryption. </p> <p>This KMS key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code>kms:DescribeKey</code>,
     * <code>kms:Decrypt</code>, and <code>kms:GenerateDataKey*</code> permissions to
     * the IAM identity using the key to invoke Amazon Q in Connect. To use Amazon Q in
     * Connect with chat, the key policy must also allow <code>kms:Decrypt</code>,
     * <code>kms:GenerateDataKey*</code>, and <code>kms:DescribeKey</code> permissions
     * to the <code>connect.amazonaws.com</code> service principal. </p> <p>For more
     * information about setting up a customer managed key for Amazon Q in Connect, see
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }
    inline AssistantData& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}
    inline AssistantData& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the assistant.</p>
     */
    inline const AssistantStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AssistantStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AssistantStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AssistantData& WithStatus(const AssistantStatus& value) { SetStatus(value); return *this;}
    inline AssistantData& WithStatus(AssistantStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AssistantData& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline AssistantData& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline AssistantData& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline AssistantData& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AssistantData& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AssistantData& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline AssistantData& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AssistantData& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AssistantData& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of assistant.</p>
     */
    inline const AssistantType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AssistantType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AssistantType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AssistantData& WithType(const AssistantType& value) { SetType(value); return *this;}
    inline AssistantData& WithType(AssistantType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_assistantArn;
    bool m_assistantArnHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    AssistantCapabilityConfiguration m_capabilityConfiguration;
    bool m_capabilityConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AssistantIntegrationConfiguration m_integrationConfiguration;
    bool m_integrationConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    AssistantStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AssistantType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
