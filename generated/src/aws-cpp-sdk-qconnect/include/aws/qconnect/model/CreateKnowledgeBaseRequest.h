/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/KnowledgeBaseType.h>
#include <aws/qconnect/model/RenderingConfiguration.h>
#include <aws/qconnect/model/ServerSideEncryptionConfiguration.h>
#include <aws/qconnect/model/SourceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/VectorIngestionConfiguration.h>
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
  class CreateKnowledgeBaseRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API CreateKnowledgeBaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKnowledgeBase"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="http://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateKnowledgeBaseRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateKnowledgeBaseRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateKnowledgeBaseRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline CreateKnowledgeBaseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateKnowledgeBaseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateKnowledgeBaseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of knowledge base. Only CUSTOM knowledge bases allow you to upload
     * your own content. EXTERNAL knowledge bases support integrations with third-party
     * systems whose content is synchronized automatically. </p>
     */
    inline const KnowledgeBaseType& GetKnowledgeBaseType() const{ return m_knowledgeBaseType; }
    inline bool KnowledgeBaseTypeHasBeenSet() const { return m_knowledgeBaseTypeHasBeenSet; }
    inline void SetKnowledgeBaseType(const KnowledgeBaseType& value) { m_knowledgeBaseTypeHasBeenSet = true; m_knowledgeBaseType = value; }
    inline void SetKnowledgeBaseType(KnowledgeBaseType&& value) { m_knowledgeBaseTypeHasBeenSet = true; m_knowledgeBaseType = std::move(value); }
    inline CreateKnowledgeBaseRequest& WithKnowledgeBaseType(const KnowledgeBaseType& value) { SetKnowledgeBaseType(value); return *this;}
    inline CreateKnowledgeBaseRequest& WithKnowledgeBaseType(KnowledgeBaseType&& value) { SetKnowledgeBaseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the knowledge base.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateKnowledgeBaseRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateKnowledgeBaseRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateKnowledgeBaseRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how to render the content.</p>
     */
    inline const RenderingConfiguration& GetRenderingConfiguration() const{ return m_renderingConfiguration; }
    inline bool RenderingConfigurationHasBeenSet() const { return m_renderingConfigurationHasBeenSet; }
    inline void SetRenderingConfiguration(const RenderingConfiguration& value) { m_renderingConfigurationHasBeenSet = true; m_renderingConfiguration = value; }
    inline void SetRenderingConfiguration(RenderingConfiguration&& value) { m_renderingConfigurationHasBeenSet = true; m_renderingConfiguration = std::move(value); }
    inline CreateKnowledgeBaseRequest& WithRenderingConfiguration(const RenderingConfiguration& value) { SetRenderingConfiguration(value); return *this;}
    inline CreateKnowledgeBaseRequest& WithRenderingConfiguration(RenderingConfiguration&& value) { SetRenderingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the customer managed key used for
     * encryption. </p> <p>This KMS key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code>kms:DescribeKey</code>,
     * <code>kms:Decrypt</code>, and <code>kms:GenerateDataKey*</code> permissions to
     * the IAM identity using the key to invoke Amazon Q in Connect.</p> <p>For more
     * information about setting up a customer managed key for Amazon Q in Connect, see
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }
    inline CreateKnowledgeBaseRequest& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}
    inline CreateKnowledgeBaseRequest& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the knowledge base content. Only set this argument for EXTERNAL
     * or Managed knowledge bases.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    inline void SetSourceConfiguration(const SourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }
    inline void SetSourceConfiguration(SourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }
    inline CreateKnowledgeBaseRequest& WithSourceConfiguration(const SourceConfiguration& value) { SetSourceConfiguration(value); return *this;}
    inline CreateKnowledgeBaseRequest& WithSourceConfiguration(SourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateKnowledgeBaseRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateKnowledgeBaseRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateKnowledgeBaseRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateKnowledgeBaseRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateKnowledgeBaseRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateKnowledgeBaseRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateKnowledgeBaseRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateKnowledgeBaseRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateKnowledgeBaseRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains details about how to ingest the documents in a data source.</p>
     */
    inline const VectorIngestionConfiguration& GetVectorIngestionConfiguration() const{ return m_vectorIngestionConfiguration; }
    inline bool VectorIngestionConfigurationHasBeenSet() const { return m_vectorIngestionConfigurationHasBeenSet; }
    inline void SetVectorIngestionConfiguration(const VectorIngestionConfiguration& value) { m_vectorIngestionConfigurationHasBeenSet = true; m_vectorIngestionConfiguration = value; }
    inline void SetVectorIngestionConfiguration(VectorIngestionConfiguration&& value) { m_vectorIngestionConfigurationHasBeenSet = true; m_vectorIngestionConfiguration = std::move(value); }
    inline CreateKnowledgeBaseRequest& WithVectorIngestionConfiguration(const VectorIngestionConfiguration& value) { SetVectorIngestionConfiguration(value); return *this;}
    inline CreateKnowledgeBaseRequest& WithVectorIngestionConfiguration(VectorIngestionConfiguration&& value) { SetVectorIngestionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    KnowledgeBaseType m_knowledgeBaseType;
    bool m_knowledgeBaseTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RenderingConfiguration m_renderingConfiguration;
    bool m_renderingConfigurationHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VectorIngestionConfiguration m_vectorIngestionConfiguration;
    bool m_vectorIngestionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
