/**
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
   * <p>Summary information about the assistant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AssistantSummary">AWS
   * API Reference</a></p>
   */
  class AssistantSummary
  {
  public:
    AWS_QCONNECT_API AssistantSummary();
    AWS_QCONNECT_API AssistantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AssistantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline const Aws::String& GetAssistantArn() const{ return m_assistantArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline bool AssistantArnHasBeenSet() const { return m_assistantArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline void SetAssistantArn(const Aws::String& value) { m_assistantArnHasBeenSet = true; m_assistantArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline void SetAssistantArn(Aws::String&& value) { m_assistantArnHasBeenSet = true; m_assistantArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline void SetAssistantArn(const char* value) { m_assistantArnHasBeenSet = true; m_assistantArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline AssistantSummary& WithAssistantArn(const Aws::String& value) { SetAssistantArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline AssistantSummary& WithAssistantArn(Aws::String&& value) { SetAssistantArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q assistant.</p>
     */
    inline AssistantSummary& WithAssistantArn(const char* value) { SetAssistantArn(value); return *this;}


    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline AssistantSummary& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline AssistantSummary& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q assistant.</p>
     */
    inline AssistantSummary& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}


    /**
     * <p>The configuration information for the Amazon Q assistant capability. </p>
     */
    inline const AssistantCapabilityConfiguration& GetCapabilityConfiguration() const{ return m_capabilityConfiguration; }

    /**
     * <p>The configuration information for the Amazon Q assistant capability. </p>
     */
    inline bool CapabilityConfigurationHasBeenSet() const { return m_capabilityConfigurationHasBeenSet; }

    /**
     * <p>The configuration information for the Amazon Q assistant capability. </p>
     */
    inline void SetCapabilityConfiguration(const AssistantCapabilityConfiguration& value) { m_capabilityConfigurationHasBeenSet = true; m_capabilityConfiguration = value; }

    /**
     * <p>The configuration information for the Amazon Q assistant capability. </p>
     */
    inline void SetCapabilityConfiguration(AssistantCapabilityConfiguration&& value) { m_capabilityConfigurationHasBeenSet = true; m_capabilityConfiguration = std::move(value); }

    /**
     * <p>The configuration information for the Amazon Q assistant capability. </p>
     */
    inline AssistantSummary& WithCapabilityConfiguration(const AssistantCapabilityConfiguration& value) { SetCapabilityConfiguration(value); return *this;}

    /**
     * <p>The configuration information for the Amazon Q assistant capability. </p>
     */
    inline AssistantSummary& WithCapabilityConfiguration(AssistantCapabilityConfiguration&& value) { SetCapabilityConfiguration(std::move(value)); return *this;}


    /**
     * <p>The description of the assistant.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the assistant.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the assistant.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the assistant.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the assistant.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the assistant.</p>
     */
    inline AssistantSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the assistant.</p>
     */
    inline AssistantSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the assistant.</p>
     */
    inline AssistantSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The configuration information for the Amazon Q assistant integration.</p>
     */
    inline const AssistantIntegrationConfiguration& GetIntegrationConfiguration() const{ return m_integrationConfiguration; }

    /**
     * <p>The configuration information for the Amazon Q assistant integration.</p>
     */
    inline bool IntegrationConfigurationHasBeenSet() const { return m_integrationConfigurationHasBeenSet; }

    /**
     * <p>The configuration information for the Amazon Q assistant integration.</p>
     */
    inline void SetIntegrationConfiguration(const AssistantIntegrationConfiguration& value) { m_integrationConfigurationHasBeenSet = true; m_integrationConfiguration = value; }

    /**
     * <p>The configuration information for the Amazon Q assistant integration.</p>
     */
    inline void SetIntegrationConfiguration(AssistantIntegrationConfiguration&& value) { m_integrationConfigurationHasBeenSet = true; m_integrationConfiguration = std::move(value); }

    /**
     * <p>The configuration information for the Amazon Q assistant integration.</p>
     */
    inline AssistantSummary& WithIntegrationConfiguration(const AssistantIntegrationConfiguration& value) { SetIntegrationConfiguration(value); return *this;}

    /**
     * <p>The configuration information for the Amazon Q assistant integration.</p>
     */
    inline AssistantSummary& WithIntegrationConfiguration(AssistantIntegrationConfiguration&& value) { SetIntegrationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name of the assistant.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the assistant.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the assistant.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the assistant.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the assistant.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the assistant.</p>
     */
    inline AssistantSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the assistant.</p>
     */
    inline AssistantSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the assistant.</p>
     */
    inline AssistantSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The configuration information for the customer managed key used for
     * encryption. </p> <p>This KMS key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code>kms:DescribeKey</code>,
     * <code>kms:Decrypt</code>, and <code>kms:GenerateDataKey*</code> permissions to
     * the IAM identity using the key to invoke Amazon Q. To use Amazon Q with chat,
     * the key policy must also allow <code>kms:Decrypt</code>,
     * <code>kms:GenerateDataKey*</code>, and <code>kms:DescribeKey</code> permissions
     * to the <code>connect.amazonaws.com</code> service principal. </p> <p>For more
     * information about setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }

    /**
     * <p>The configuration information for the customer managed key used for
     * encryption. </p> <p>This KMS key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code>kms:DescribeKey</code>,
     * <code>kms:Decrypt</code>, and <code>kms:GenerateDataKey*</code> permissions to
     * the IAM identity using the key to invoke Amazon Q. To use Amazon Q with chat,
     * the key policy must also allow <code>kms:Decrypt</code>,
     * <code>kms:GenerateDataKey*</code>, and <code>kms:DescribeKey</code> permissions
     * to the <code>connect.amazonaws.com</code> service principal. </p> <p>For more
     * information about setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>.</p>
     */
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }

    /**
     * <p>The configuration information for the customer managed key used for
     * encryption. </p> <p>This KMS key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code>kms:DescribeKey</code>,
     * <code>kms:Decrypt</code>, and <code>kms:GenerateDataKey*</code> permissions to
     * the IAM identity using the key to invoke Amazon Q. To use Amazon Q with chat,
     * the key policy must also allow <code>kms:Decrypt</code>,
     * <code>kms:GenerateDataKey*</code>, and <code>kms:DescribeKey</code> permissions
     * to the <code>connect.amazonaws.com</code> service principal. </p> <p>For more
     * information about setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>.</p>
     */
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }

    /**
     * <p>The configuration information for the customer managed key used for
     * encryption. </p> <p>This KMS key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code>kms:DescribeKey</code>,
     * <code>kms:Decrypt</code>, and <code>kms:GenerateDataKey*</code> permissions to
     * the IAM identity using the key to invoke Amazon Q. To use Amazon Q with chat,
     * the key policy must also allow <code>kms:Decrypt</code>,
     * <code>kms:GenerateDataKey*</code>, and <code>kms:DescribeKey</code> permissions
     * to the <code>connect.amazonaws.com</code> service principal. </p> <p>For more
     * information about setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>.</p>
     */
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }

    /**
     * <p>The configuration information for the customer managed key used for
     * encryption. </p> <p>This KMS key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code>kms:DescribeKey</code>,
     * <code>kms:Decrypt</code>, and <code>kms:GenerateDataKey*</code> permissions to
     * the IAM identity using the key to invoke Amazon Q. To use Amazon Q with chat,
     * the key policy must also allow <code>kms:Decrypt</code>,
     * <code>kms:GenerateDataKey*</code>, and <code>kms:DescribeKey</code> permissions
     * to the <code>connect.amazonaws.com</code> service principal. </p> <p>For more
     * information about setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>.</p>
     */
    inline AssistantSummary& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}

    /**
     * <p>The configuration information for the customer managed key used for
     * encryption. </p> <p>This KMS key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code>kms:DescribeKey</code>,
     * <code>kms:Decrypt</code>, and <code>kms:GenerateDataKey*</code> permissions to
     * the IAM identity using the key to invoke Amazon Q. To use Amazon Q with chat,
     * the key policy must also allow <code>kms:Decrypt</code>,
     * <code>kms:GenerateDataKey*</code>, and <code>kms:DescribeKey</code> permissions
     * to the <code>connect.amazonaws.com</code> service principal. </p> <p>For more
     * information about setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>.</p>
     */
    inline AssistantSummary& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The status of the assistant.</p>
     */
    inline const AssistantStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the assistant.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the assistant.</p>
     */
    inline void SetStatus(const AssistantStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the assistant.</p>
     */
    inline void SetStatus(AssistantStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the assistant.</p>
     */
    inline AssistantSummary& WithStatus(const AssistantStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the assistant.</p>
     */
    inline AssistantSummary& WithStatus(AssistantStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline AssistantSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline AssistantSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline AssistantSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline AssistantSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline AssistantSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline AssistantSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline AssistantSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline AssistantSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline AssistantSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of the assistant.</p>
     */
    inline const AssistantType& GetType() const{ return m_type; }

    /**
     * <p>The type of the assistant.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the assistant.</p>
     */
    inline void SetType(const AssistantType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the assistant.</p>
     */
    inline void SetType(AssistantType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the assistant.</p>
     */
    inline AssistantSummary& WithType(const AssistantType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the assistant.</p>
     */
    inline AssistantSummary& WithType(AssistantType&& value) { SetType(std::move(value)); return *this;}

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
