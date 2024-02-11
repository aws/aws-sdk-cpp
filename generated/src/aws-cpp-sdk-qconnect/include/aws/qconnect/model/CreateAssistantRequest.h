/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ServerSideEncryptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/AssistantType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class CreateAssistantRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API CreateAssistantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssistant"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline CreateAssistantRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline CreateAssistantRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline CreateAssistantRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline CreateAssistantRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the assistant.</p>
     */
    inline CreateAssistantRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the assistant.</p>
     */
    inline CreateAssistantRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateAssistantRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the assistant.</p>
     */
    inline CreateAssistantRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the assistant.</p>
     */
    inline CreateAssistantRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The configuration information for the customer managed key used for
     * encryption. </p> <p>The customer managed key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code> kms:DescribeKey</code>,
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
     * encryption. </p> <p>The customer managed key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code> kms:DescribeKey</code>,
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
     * encryption. </p> <p>The customer managed key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code> kms:DescribeKey</code>,
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
     * encryption. </p> <p>The customer managed key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code> kms:DescribeKey</code>,
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
     * encryption. </p> <p>The customer managed key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code> kms:DescribeKey</code>,
     * <code>kms:Decrypt</code>, and <code>kms:GenerateDataKey*</code> permissions to
     * the IAM identity using the key to invoke Amazon Q. To use Amazon Q with chat,
     * the key policy must also allow <code>kms:Decrypt</code>,
     * <code>kms:GenerateDataKey*</code>, and <code>kms:DescribeKey</code> permissions
     * to the <code>connect.amazonaws.com</code> service principal. </p> <p>For more
     * information about setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>.</p>
     */
    inline CreateAssistantRequest& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}

    /**
     * <p>The configuration information for the customer managed key used for
     * encryption. </p> <p>The customer managed key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code> kms:DescribeKey</code>,
     * <code>kms:Decrypt</code>, and <code>kms:GenerateDataKey*</code> permissions to
     * the IAM identity using the key to invoke Amazon Q. To use Amazon Q with chat,
     * the key policy must also allow <code>kms:Decrypt</code>,
     * <code>kms:GenerateDataKey*</code>, and <code>kms:DescribeKey</code> permissions
     * to the <code>connect.amazonaws.com</code> service principal. </p> <p>For more
     * information about setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>.</p>
     */
    inline CreateAssistantRequest& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}


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
    inline CreateAssistantRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateAssistantRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateAssistantRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateAssistantRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateAssistantRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateAssistantRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateAssistantRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateAssistantRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateAssistantRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of assistant.</p>
     */
    inline const AssistantType& GetType() const{ return m_type; }

    /**
     * <p>The type of assistant.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of assistant.</p>
     */
    inline void SetType(const AssistantType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of assistant.</p>
     */
    inline void SetType(AssistantType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of assistant.</p>
     */
    inline CreateAssistantRequest& WithType(const AssistantType& value) { SetType(value); return *this;}

    /**
     * <p>The type of assistant.</p>
     */
    inline CreateAssistantRequest& WithType(AssistantType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AssistantType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
