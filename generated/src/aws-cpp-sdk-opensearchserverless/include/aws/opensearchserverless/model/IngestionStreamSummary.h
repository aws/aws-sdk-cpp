/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/IngestionStreamStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchServerless {
namespace Model {

/**
 * <p>Summary information about an ingestion stream.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/IngestionStreamSummary">AWS
 * API Reference</a></p>
 */
class IngestionStreamSummary {
 public:
  AWS_OPENSEARCHSERVERLESS_API IngestionStreamSummary() = default;
  AWS_OPENSEARCHSERVERLESS_API IngestionStreamSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API IngestionStreamSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the ingestion stream.</p>
   */
  inline const Aws::String& GetIngestionStreamId() const { return m_ingestionStreamId; }
  inline bool IngestionStreamIdHasBeenSet() const { return m_ingestionStreamIdHasBeenSet; }
  template <typename IngestionStreamIdT = Aws::String>
  void SetIngestionStreamId(IngestionStreamIdT&& value) {
    m_ingestionStreamIdHasBeenSet = true;
    m_ingestionStreamId = std::forward<IngestionStreamIdT>(value);
  }
  template <typename IngestionStreamIdT = Aws::String>
  IngestionStreamSummary& WithIngestionStreamId(IngestionStreamIdT&& value) {
    SetIngestionStreamId(std::forward<IngestionStreamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ingestion stream.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  IngestionStreamSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the ingestion stream.</p>
   */
  inline const Aws::String& GetIngestionStreamName() const { return m_ingestionStreamName; }
  inline bool IngestionStreamNameHasBeenSet() const { return m_ingestionStreamNameHasBeenSet; }
  template <typename IngestionStreamNameT = Aws::String>
  void SetIngestionStreamName(IngestionStreamNameT&& value) {
    m_ingestionStreamNameHasBeenSet = true;
    m_ingestionStreamName = std::forward<IngestionStreamNameT>(value);
  }
  template <typename IngestionStreamNameT = Aws::String>
  IngestionStreamSummary& WithIngestionStreamName(IngestionStreamNameT&& value) {
    SetIngestionStreamName(std::forward<IngestionStreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the index that documents are ingested into.</p>
   */
  inline const Aws::String& GetIndexName() const { return m_indexName; }
  inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
  template <typename IndexNameT = Aws::String>
  void SetIndexName(IndexNameT&& value) {
    m_indexNameHasBeenSet = true;
    m_indexName = std::forward<IndexNameT>(value);
  }
  template <typename IndexNameT = Aws::String>
  IngestionStreamSummary& WithIndexName(IndexNameT&& value) {
    SetIndexName(std::forward<IndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the ingestion stream.</p>
   */
  inline IngestionStreamStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IngestionStreamStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline IngestionStreamSummary& WithStatus(IngestionStreamStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the ingestion stream was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  IngestionStreamSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the ingestion stream was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  IngestionStreamSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ingestionStreamId;

  Aws::String m_arn;

  Aws::String m_ingestionStreamName;

  Aws::String m_indexName;

  IngestionStreamStatus m_status{IngestionStreamStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_ingestionStreamIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_ingestionStreamNameHasBeenSet = false;
  bool m_indexNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
