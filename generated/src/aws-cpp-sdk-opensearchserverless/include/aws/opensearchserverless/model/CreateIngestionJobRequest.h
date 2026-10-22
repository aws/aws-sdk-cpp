/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/IngestionJobSource.h>
#include <aws/opensearchserverless/model/Tag.h>

#include <utility>

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

/**
 */
class CreateIngestionJobRequest : public OpenSearchServerlessRequest {
 public:
  AWS_OPENSEARCHSERVERLESS_API CreateIngestionJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateIngestionJob"; }

  AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the collection to ingest data into.</p>
   */
  inline const Aws::String& GetCollectionId() const { return m_collectionId; }
  inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }
  template <typename CollectionIdT = Aws::String>
  void SetCollectionId(CollectionIdT&& value) {
    m_collectionIdHasBeenSet = true;
    m_collectionId = std::forward<CollectionIdT>(value);
  }
  template <typename CollectionIdT = Aws::String>
  CreateIngestionJobRequest& WithCollectionId(CollectionIdT&& value) {
    SetCollectionId(std::forward<CollectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the ingestion job. The name must be unique within the
   * collection.</p>
   */
  inline const Aws::String& GetIngestionJobName() const { return m_ingestionJobName; }
  inline bool IngestionJobNameHasBeenSet() const { return m_ingestionJobNameHasBeenSet; }
  template <typename IngestionJobNameT = Aws::String>
  void SetIngestionJobName(IngestionJobNameT&& value) {
    m_ingestionJobNameHasBeenSet = true;
    m_ingestionJobName = std::forward<IngestionJobNameT>(value);
  }
  template <typename IngestionJobNameT = Aws::String>
  CreateIngestionJobRequest& WithIngestionJobName(IngestionJobNameT&& value) {
    SetIngestionJobName(std::forward<IngestionJobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the index to ingest documents into.</p>
   */
  inline const Aws::String& GetIndexName() const { return m_indexName; }
  inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
  template <typename IndexNameT = Aws::String>
  void SetIndexName(IndexNameT&& value) {
    m_indexNameHasBeenSet = true;
    m_indexName = std::forward<IndexNameT>(value);
  }
  template <typename IndexNameT = Aws::String>
  CreateIngestionJobRequest& WithIndexName(IndexNameT&& value) {
    SetIndexName(std::forward<IndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the index where documents that fail to be ingested are
   * recorded.</p>
   */
  inline const Aws::String& GetFailureIndexName() const { return m_failureIndexName; }
  inline bool FailureIndexNameHasBeenSet() const { return m_failureIndexNameHasBeenSet; }
  template <typename FailureIndexNameT = Aws::String>
  void SetFailureIndexName(FailureIndexNameT&& value) {
    m_failureIndexNameHasBeenSet = true;
    m_failureIndexName = std::forward<FailureIndexNameT>(value);
  }
  template <typename FailureIndexNameT = Aws::String>
  CreateIngestionJobRequest& WithFailureIndexName(FailureIndexNameT&& value) {
    SetFailureIndexName(std::forward<FailureIndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 source to ingest data from.</p>
   */
  inline const IngestionJobSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = IngestionJobSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = IngestionJobSource>
  CreateIngestionJobRequest& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An arbitrary set of tags (key–value pairs) to associate with the ingestion
   * job.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateIngestionJobRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateIngestionJobRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateIngestionJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_collectionId;

  Aws::String m_ingestionJobName;

  Aws::String m_indexName;

  Aws::String m_failureIndexName;

  IngestionJobSource m_source;

  Aws::Vector<Tag> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_collectionIdHasBeenSet = false;
  bool m_ingestionJobNameHasBeenSet = false;
  bool m_indexNameHasBeenSet = false;
  bool m_failureIndexNameHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
