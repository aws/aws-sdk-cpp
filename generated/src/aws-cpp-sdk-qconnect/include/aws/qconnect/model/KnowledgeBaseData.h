/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/KnowledgeBaseType.h>
#include <aws/qconnect/model/KnowledgeBaseStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qconnect/model/VectorIngestionConfiguration.h>
#include <aws/qconnect/model/SourceConfiguration.h>
#include <aws/qconnect/model/RenderingConfiguration.h>
#include <aws/qconnect/model/ServerSideEncryptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/SyncStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about the knowledge base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/KnowledgeBaseData">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseData
  {
  public:
    AWS_QCONNECT_API KnowledgeBaseData() = default;
    AWS_QCONNECT_API KnowledgeBaseData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API KnowledgeBaseData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    KnowledgeBaseData& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    template<typename KnowledgeBaseArnT = Aws::String>
    void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value); }
    template<typename KnowledgeBaseArnT = Aws::String>
    KnowledgeBaseData& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) { SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the knowledge base.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    KnowledgeBaseData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of knowledge base.</p>
     */
    inline KnowledgeBaseType GetKnowledgeBaseType() const { return m_knowledgeBaseType; }
    inline bool KnowledgeBaseTypeHasBeenSet() const { return m_knowledgeBaseTypeHasBeenSet; }
    inline void SetKnowledgeBaseType(KnowledgeBaseType value) { m_knowledgeBaseTypeHasBeenSet = true; m_knowledgeBaseType = value; }
    inline KnowledgeBaseData& WithKnowledgeBaseType(KnowledgeBaseType value) { SetKnowledgeBaseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the knowledge base.</p>
     */
    inline KnowledgeBaseStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(KnowledgeBaseStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline KnowledgeBaseData& WithStatus(KnowledgeBaseStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An epoch timestamp indicating the most recent content modification inside the
     * knowledge base. If no content exists in a knowledge base, this value is
     * unset.</p>
     */
    inline const Aws::Utils::DateTime& GetLastContentModificationTime() const { return m_lastContentModificationTime; }
    inline bool LastContentModificationTimeHasBeenSet() const { return m_lastContentModificationTimeHasBeenSet; }
    template<typename LastContentModificationTimeT = Aws::Utils::DateTime>
    void SetLastContentModificationTime(LastContentModificationTimeT&& value) { m_lastContentModificationTimeHasBeenSet = true; m_lastContentModificationTime = std::forward<LastContentModificationTimeT>(value); }
    template<typename LastContentModificationTimeT = Aws::Utils::DateTime>
    KnowledgeBaseData& WithLastContentModificationTime(LastContentModificationTimeT&& value) { SetLastContentModificationTime(std::forward<LastContentModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about how to ingest the documents in a data source.</p>
     */
    inline const VectorIngestionConfiguration& GetVectorIngestionConfiguration() const { return m_vectorIngestionConfiguration; }
    inline bool VectorIngestionConfigurationHasBeenSet() const { return m_vectorIngestionConfigurationHasBeenSet; }
    template<typename VectorIngestionConfigurationT = VectorIngestionConfiguration>
    void SetVectorIngestionConfiguration(VectorIngestionConfigurationT&& value) { m_vectorIngestionConfigurationHasBeenSet = true; m_vectorIngestionConfiguration = std::forward<VectorIngestionConfigurationT>(value); }
    template<typename VectorIngestionConfigurationT = VectorIngestionConfiguration>
    KnowledgeBaseData& WithVectorIngestionConfiguration(VectorIngestionConfigurationT&& value) { SetVectorIngestionConfiguration(std::forward<VectorIngestionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source configuration information about the knowledge base.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    template<typename SourceConfigurationT = SourceConfiguration>
    void SetSourceConfiguration(SourceConfigurationT&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::forward<SourceConfigurationT>(value); }
    template<typename SourceConfigurationT = SourceConfiguration>
    KnowledgeBaseData& WithSourceConfiguration(SourceConfigurationT&& value) { SetSourceConfiguration(std::forward<SourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how to render the content.</p>
     */
    inline const RenderingConfiguration& GetRenderingConfiguration() const { return m_renderingConfiguration; }
    inline bool RenderingConfigurationHasBeenSet() const { return m_renderingConfigurationHasBeenSet; }
    template<typename RenderingConfigurationT = RenderingConfiguration>
    void SetRenderingConfiguration(RenderingConfigurationT&& value) { m_renderingConfigurationHasBeenSet = true; m_renderingConfiguration = std::forward<RenderingConfigurationT>(value); }
    template<typename RenderingConfigurationT = RenderingConfiguration>
    KnowledgeBaseData& WithRenderingConfiguration(RenderingConfigurationT&& value) { SetRenderingConfiguration(std::forward<RenderingConfigurationT>(value)); return *this;}
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
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const { return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::forward<ServerSideEncryptionConfigurationT>(value); }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    KnowledgeBaseData& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { SetServerSideEncryptionConfiguration(std::forward<ServerSideEncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    KnowledgeBaseData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    KnowledgeBaseData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    KnowledgeBaseData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Status of ingestion on data source.</p>
     */
    inline SyncStatus GetIngestionStatus() const { return m_ingestionStatus; }
    inline bool IngestionStatusHasBeenSet() const { return m_ingestionStatusHasBeenSet; }
    inline void SetIngestionStatus(SyncStatus value) { m_ingestionStatusHasBeenSet = true; m_ingestionStatus = value; }
    inline KnowledgeBaseData& WithIngestionStatus(SyncStatus value) { SetIngestionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of failure reasons on ingestion per file.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIngestionFailureReasons() const { return m_ingestionFailureReasons; }
    inline bool IngestionFailureReasonsHasBeenSet() const { return m_ingestionFailureReasonsHasBeenSet; }
    template<typename IngestionFailureReasonsT = Aws::Vector<Aws::String>>
    void SetIngestionFailureReasons(IngestionFailureReasonsT&& value) { m_ingestionFailureReasonsHasBeenSet = true; m_ingestionFailureReasons = std::forward<IngestionFailureReasonsT>(value); }
    template<typename IngestionFailureReasonsT = Aws::Vector<Aws::String>>
    KnowledgeBaseData& WithIngestionFailureReasons(IngestionFailureReasonsT&& value) { SetIngestionFailureReasons(std::forward<IngestionFailureReasonsT>(value)); return *this;}
    template<typename IngestionFailureReasonsT = Aws::String>
    KnowledgeBaseData& AddIngestionFailureReasons(IngestionFailureReasonsT&& value) { m_ingestionFailureReasonsHasBeenSet = true; m_ingestionFailureReasons.emplace_back(std::forward<IngestionFailureReasonsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    KnowledgeBaseType m_knowledgeBaseType{KnowledgeBaseType::NOT_SET};
    bool m_knowledgeBaseTypeHasBeenSet = false;

    KnowledgeBaseStatus m_status{KnowledgeBaseStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastContentModificationTime{};
    bool m_lastContentModificationTimeHasBeenSet = false;

    VectorIngestionConfiguration m_vectorIngestionConfiguration;
    bool m_vectorIngestionConfigurationHasBeenSet = false;

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;

    RenderingConfiguration m_renderingConfiguration;
    bool m_renderingConfigurationHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    SyncStatus m_ingestionStatus{SyncStatus::NOT_SET};
    bool m_ingestionStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_ingestionFailureReasons;
    bool m_ingestionFailureReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
