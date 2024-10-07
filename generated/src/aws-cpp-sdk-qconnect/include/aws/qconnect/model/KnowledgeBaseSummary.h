/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/KnowledgeBaseType.h>
#include <aws/qconnect/model/RenderingConfiguration.h>
#include <aws/qconnect/model/ServerSideEncryptionConfiguration.h>
#include <aws/qconnect/model/SourceConfiguration.h>
#include <aws/qconnect/model/KnowledgeBaseStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/VectorIngestionConfiguration.h>
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
   * <p>Summary information about the knowledge base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/KnowledgeBaseSummary">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseSummary
  {
  public:
    AWS_QCONNECT_API KnowledgeBaseSummary();
    AWS_QCONNECT_API KnowledgeBaseSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API KnowledgeBaseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the knowledge base.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline KnowledgeBaseSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline KnowledgeBaseSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline KnowledgeBaseSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const{ return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    inline void SetKnowledgeBaseArn(const Aws::String& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = value; }
    inline void SetKnowledgeBaseArn(Aws::String&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::move(value); }
    inline void SetKnowledgeBaseArn(const char* value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn.assign(value); }
    inline KnowledgeBaseSummary& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}
    inline KnowledgeBaseSummary& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}
    inline KnowledgeBaseSummary& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline KnowledgeBaseSummary& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline KnowledgeBaseSummary& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline KnowledgeBaseSummary& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of knowledge base.</p>
     */
    inline const KnowledgeBaseType& GetKnowledgeBaseType() const{ return m_knowledgeBaseType; }
    inline bool KnowledgeBaseTypeHasBeenSet() const { return m_knowledgeBaseTypeHasBeenSet; }
    inline void SetKnowledgeBaseType(const KnowledgeBaseType& value) { m_knowledgeBaseTypeHasBeenSet = true; m_knowledgeBaseType = value; }
    inline void SetKnowledgeBaseType(KnowledgeBaseType&& value) { m_knowledgeBaseTypeHasBeenSet = true; m_knowledgeBaseType = std::move(value); }
    inline KnowledgeBaseSummary& WithKnowledgeBaseType(const KnowledgeBaseType& value) { SetKnowledgeBaseType(value); return *this;}
    inline KnowledgeBaseSummary& WithKnowledgeBaseType(KnowledgeBaseType&& value) { SetKnowledgeBaseType(std::move(value)); return *this;}
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
    inline KnowledgeBaseSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline KnowledgeBaseSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline KnowledgeBaseSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how to render the content.</p>
     */
    inline const RenderingConfiguration& GetRenderingConfiguration() const{ return m_renderingConfiguration; }
    inline bool RenderingConfigurationHasBeenSet() const { return m_renderingConfigurationHasBeenSet; }
    inline void SetRenderingConfiguration(const RenderingConfiguration& value) { m_renderingConfigurationHasBeenSet = true; m_renderingConfiguration = value; }
    inline void SetRenderingConfiguration(RenderingConfiguration&& value) { m_renderingConfigurationHasBeenSet = true; m_renderingConfiguration = std::move(value); }
    inline KnowledgeBaseSummary& WithRenderingConfiguration(const RenderingConfiguration& value) { SetRenderingConfiguration(value); return *this;}
    inline KnowledgeBaseSummary& WithRenderingConfiguration(RenderingConfiguration&& value) { SetRenderingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the customer managed key used for
     * encryption. </p> <p>This KMS key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code>kms:DescribeKey</code>,
     * <code>kms:Decrypt</code>, and <code>kms:GenerateDataKey*</code> permissions to
     * the IAM identity using the key to invoke Amazon Q in Connect. </p> <p>For more
     * information about setting up a customer managed key for Amazon Q in Connect, see
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }
    inline KnowledgeBaseSummary& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}
    inline KnowledgeBaseSummary& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information about the external data source.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    inline void SetSourceConfiguration(const SourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }
    inline void SetSourceConfiguration(SourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }
    inline KnowledgeBaseSummary& WithSourceConfiguration(const SourceConfiguration& value) { SetSourceConfiguration(value); return *this;}
    inline KnowledgeBaseSummary& WithSourceConfiguration(SourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the knowledge base summary.</p>
     */
    inline const KnowledgeBaseStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const KnowledgeBaseStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(KnowledgeBaseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline KnowledgeBaseSummary& WithStatus(const KnowledgeBaseStatus& value) { SetStatus(value); return *this;}
    inline KnowledgeBaseSummary& WithStatus(KnowledgeBaseStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline KnowledgeBaseSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline KnowledgeBaseSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline KnowledgeBaseSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline KnowledgeBaseSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline KnowledgeBaseSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline KnowledgeBaseSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline KnowledgeBaseSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline KnowledgeBaseSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline KnowledgeBaseSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains details about how to ingest the documents in a data source.</p>
     */
    inline const VectorIngestionConfiguration& GetVectorIngestionConfiguration() const{ return m_vectorIngestionConfiguration; }
    inline bool VectorIngestionConfigurationHasBeenSet() const { return m_vectorIngestionConfigurationHasBeenSet; }
    inline void SetVectorIngestionConfiguration(const VectorIngestionConfiguration& value) { m_vectorIngestionConfigurationHasBeenSet = true; m_vectorIngestionConfiguration = value; }
    inline void SetVectorIngestionConfiguration(VectorIngestionConfiguration&& value) { m_vectorIngestionConfigurationHasBeenSet = true; m_vectorIngestionConfiguration = std::move(value); }
    inline KnowledgeBaseSummary& WithVectorIngestionConfiguration(const VectorIngestionConfiguration& value) { SetVectorIngestionConfiguration(value); return *this;}
    inline KnowledgeBaseSummary& WithVectorIngestionConfiguration(VectorIngestionConfiguration&& value) { SetVectorIngestionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

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

    KnowledgeBaseStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VectorIngestionConfiguration m_vectorIngestionConfiguration;
    bool m_vectorIngestionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
