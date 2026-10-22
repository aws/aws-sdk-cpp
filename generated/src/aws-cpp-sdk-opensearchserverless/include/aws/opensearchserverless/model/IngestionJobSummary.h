/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/IngestionJobStatus.h>

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
 * <p>Summary information about an ingestion job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/IngestionJobSummary">AWS
 * API Reference</a></p>
 */
class IngestionJobSummary {
 public:
  AWS_OPENSEARCHSERVERLESS_API IngestionJobSummary() = default;
  AWS_OPENSEARCHSERVERLESS_API IngestionJobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API IngestionJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the ingestion job.</p>
   */
  inline const Aws::String& GetIngestionJobId() const { return m_ingestionJobId; }
  inline bool IngestionJobIdHasBeenSet() const { return m_ingestionJobIdHasBeenSet; }
  template <typename IngestionJobIdT = Aws::String>
  void SetIngestionJobId(IngestionJobIdT&& value) {
    m_ingestionJobIdHasBeenSet = true;
    m_ingestionJobId = std::forward<IngestionJobIdT>(value);
  }
  template <typename IngestionJobIdT = Aws::String>
  IngestionJobSummary& WithIngestionJobId(IngestionJobIdT&& value) {
    SetIngestionJobId(std::forward<IngestionJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ingestion job.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  IngestionJobSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the ingestion job.</p>
   */
  inline const Aws::String& GetIngestionJobName() const { return m_ingestionJobName; }
  inline bool IngestionJobNameHasBeenSet() const { return m_ingestionJobNameHasBeenSet; }
  template <typename IngestionJobNameT = Aws::String>
  void SetIngestionJobName(IngestionJobNameT&& value) {
    m_ingestionJobNameHasBeenSet = true;
    m_ingestionJobName = std::forward<IngestionJobNameT>(value);
  }
  template <typename IngestionJobNameT = Aws::String>
  IngestionJobSummary& WithIngestionJobName(IngestionJobNameT&& value) {
    SetIngestionJobName(std::forward<IngestionJobNameT>(value));
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
  IngestionJobSummary& WithIndexName(IndexNameT&& value) {
    SetIndexName(std::forward<IndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the ingestion job.</p>
   */
  inline IngestionJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IngestionJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline IngestionJobSummary& WithStatus(IngestionJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the ingestion job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  IngestionJobSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the ingestion job was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  IngestionJobSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ingestionJobId;

  Aws::String m_arn;

  Aws::String m_ingestionJobName;

  Aws::String m_indexName;

  IngestionJobStatus m_status{IngestionJobStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_ingestionJobIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_ingestionJobNameHasBeenSet = false;
  bool m_indexNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
