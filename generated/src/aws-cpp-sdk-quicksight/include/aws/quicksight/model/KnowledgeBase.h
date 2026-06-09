/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSetStatus.h>
#include <aws/quicksight/model/KnowledgeBaseConfiguration.h>
#include <aws/quicksight/model/KnowledgeBaseIngestionSummary.h>
#include <aws/quicksight/model/MediaExtractionConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A knowledge base resource that provides data from connected sources for
 * AI-powered experiences in Amazon QuickSight.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KnowledgeBase">AWS
 * API Reference</a></p>
 */
class KnowledgeBase {
 public:
  AWS_QUICKSIGHT_API KnowledgeBase() = default;
  AWS_QUICKSIGHT_API KnowledgeBase(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API KnowledgeBase& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
  inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
  template <typename KnowledgeBaseArnT = Aws::String>
  void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    m_knowledgeBaseArnHasBeenSet = true;
    m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value);
  }
  template <typename KnowledgeBaseArnT = Aws::String>
  KnowledgeBase& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  KnowledgeBase& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the knowledge base.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  KnowledgeBase& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the knowledge base.</p>
   */
  inline DataSetStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DataSetStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline KnowledgeBase& WithStatus(DataSetStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the data source associated with the knowledge base.</p>
   */
  inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
  inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
  template <typename DataSourceArnT = Aws::String>
  void SetDataSourceArn(DataSourceArnT&& value) {
    m_dataSourceArnHasBeenSet = true;
    m_dataSourceArn = std::forward<DataSourceArnT>(value);
  }
  template <typename DataSourceArnT = Aws::String>
  KnowledgeBase& WithDataSourceArn(DataSourceArnT&& value) {
    SetDataSourceArn(std::forward<DataSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the knowledge base.</p>
   */
  inline const KnowledgeBaseConfiguration& GetKnowledgeBaseConfiguration() const { return m_knowledgeBaseConfiguration; }
  inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }
  template <typename KnowledgeBaseConfigurationT = KnowledgeBaseConfiguration>
  void SetKnowledgeBaseConfiguration(KnowledgeBaseConfigurationT&& value) {
    m_knowledgeBaseConfigurationHasBeenSet = true;
    m_knowledgeBaseConfiguration = std::forward<KnowledgeBaseConfigurationT>(value);
  }
  template <typename KnowledgeBaseConfigurationT = KnowledgeBaseConfiguration>
  KnowledgeBase& WithKnowledgeBaseConfiguration(KnowledgeBaseConfigurationT&& value) {
    SetKnowledgeBaseConfiguration(std::forward<KnowledgeBaseConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The media extraction configuration for the knowledge base.</p>
   */
  inline const MediaExtractionConfiguration& GetMediaExtractionConfiguration() const { return m_mediaExtractionConfiguration; }
  inline bool MediaExtractionConfigurationHasBeenSet() const { return m_mediaExtractionConfigurationHasBeenSet; }
  template <typename MediaExtractionConfigurationT = MediaExtractionConfiguration>
  void SetMediaExtractionConfiguration(MediaExtractionConfigurationT&& value) {
    m_mediaExtractionConfigurationHasBeenSet = true;
    m_mediaExtractionConfiguration = std::forward<MediaExtractionConfigurationT>(value);
  }
  template <typename MediaExtractionConfigurationT = MediaExtractionConfiguration>
  KnowledgeBase& WithMediaExtractionConfiguration(MediaExtractionConfigurationT&& value) {
    SetMediaExtractionConfiguration(std::forward<MediaExtractionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the knowledge base.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  KnowledgeBase& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the knowledge base was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  KnowledgeBase& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the knowledge base was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  KnowledgeBase& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the knowledge base.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  KnowledgeBase& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether email notifications are enabled for ingestion failures.</p>
   */
  inline bool GetIsEmailNotificationOptedForIngestionFailures() const { return m_isEmailNotificationOptedForIngestionFailures; }
  inline bool IsEmailNotificationOptedForIngestionFailuresHasBeenSet() const {
    return m_isEmailNotificationOptedForIngestionFailuresHasBeenSet;
  }
  inline void SetIsEmailNotificationOptedForIngestionFailures(bool value) {
    m_isEmailNotificationOptedForIngestionFailuresHasBeenSet = true;
    m_isEmailNotificationOptedForIngestionFailures = value;
  }
  inline KnowledgeBase& WithIsEmailNotificationOptedForIngestionFailures(bool value) {
    SetIsEmailNotificationOptedForIngestionFailures(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the first completed ingestion for the knowledge base.</p>
   */
  inline const KnowledgeBaseIngestionSummary& GetFirstCompletedIngestionSummary() const { return m_firstCompletedIngestionSummary; }
  inline bool FirstCompletedIngestionSummaryHasBeenSet() const { return m_firstCompletedIngestionSummaryHasBeenSet; }
  template <typename FirstCompletedIngestionSummaryT = KnowledgeBaseIngestionSummary>
  void SetFirstCompletedIngestionSummary(FirstCompletedIngestionSummaryT&& value) {
    m_firstCompletedIngestionSummaryHasBeenSet = true;
    m_firstCompletedIngestionSummary = std::forward<FirstCompletedIngestionSummaryT>(value);
  }
  template <typename FirstCompletedIngestionSummaryT = KnowledgeBaseIngestionSummary>
  KnowledgeBase& WithFirstCompletedIngestionSummary(FirstCompletedIngestionSummaryT&& value) {
    SetFirstCompletedIngestionSummary(std::forward<FirstCompletedIngestionSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the first incomplete ingestion for the knowledge base.</p>
   */
  inline const KnowledgeBaseIngestionSummary& GetFirstIncompleteIngestionSummary() const { return m_firstIncompleteIngestionSummary; }
  inline bool FirstIncompleteIngestionSummaryHasBeenSet() const { return m_firstIncompleteIngestionSummaryHasBeenSet; }
  template <typename FirstIncompleteIngestionSummaryT = KnowledgeBaseIngestionSummary>
  void SetFirstIncompleteIngestionSummary(FirstIncompleteIngestionSummaryT&& value) {
    m_firstIncompleteIngestionSummaryHasBeenSet = true;
    m_firstIncompleteIngestionSummary = std::forward<FirstIncompleteIngestionSummaryT>(value);
  }
  template <typename FirstIncompleteIngestionSummaryT = KnowledgeBaseIngestionSummary>
  KnowledgeBase& WithFirstIncompleteIngestionSummary(FirstIncompleteIngestionSummaryT&& value) {
    SetFirstIncompleteIngestionSummary(std::forward<FirstIncompleteIngestionSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the most recent ingestion for the knowledge base.</p>
   */
  inline const KnowledgeBaseIngestionSummary& GetLatestIngestionSummary() const { return m_latestIngestionSummary; }
  inline bool LatestIngestionSummaryHasBeenSet() const { return m_latestIngestionSummaryHasBeenSet; }
  template <typename LatestIngestionSummaryT = KnowledgeBaseIngestionSummary>
  void SetLatestIngestionSummary(LatestIngestionSummaryT&& value) {
    m_latestIngestionSummaryHasBeenSet = true;
    m_latestIngestionSummary = std::forward<LatestIngestionSummaryT>(value);
  }
  template <typename LatestIngestionSummaryT = KnowledgeBaseIngestionSummary>
  KnowledgeBase& WithLatestIngestionSummary(LatestIngestionSummaryT&& value) {
    SetLatestIngestionSummary(std::forward<LatestIngestionSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the knowledge base in bytes.</p>
   */
  inline long long GetKnowledgeBaseSizeBytes() const { return m_knowledgeBaseSizeBytes; }
  inline bool KnowledgeBaseSizeBytesHasBeenSet() const { return m_knowledgeBaseSizeBytesHasBeenSet; }
  inline void SetKnowledgeBaseSizeBytes(long long value) {
    m_knowledgeBaseSizeBytesHasBeenSet = true;
    m_knowledgeBaseSizeBytes = value;
  }
  inline KnowledgeBase& WithKnowledgeBaseSizeBytes(long long value) {
    SetKnowledgeBaseSizeBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of documents in the knowledge base.</p>
   */
  inline long long GetDocumentCount() const { return m_documentCount; }
  inline bool DocumentCountHasBeenSet() const { return m_documentCountHasBeenSet; }
  inline void SetDocumentCount(long long value) {
    m_documentCountHasBeenSet = true;
    m_documentCount = value;
  }
  inline KnowledgeBase& WithDocumentCount(long long value) {
    SetDocumentCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the primary owner of the knowledge base.</p>
   */
  inline const Aws::String& GetPrimaryOwnerArn() const { return m_primaryOwnerArn; }
  inline bool PrimaryOwnerArnHasBeenSet() const { return m_primaryOwnerArnHasBeenSet; }
  template <typename PrimaryOwnerArnT = Aws::String>
  void SetPrimaryOwnerArn(PrimaryOwnerArnT&& value) {
    m_primaryOwnerArnHasBeenSet = true;
    m_primaryOwnerArn = std::forward<PrimaryOwnerArnT>(value);
  }
  template <typename PrimaryOwnerArnT = Aws::String>
  KnowledgeBase& WithPrimaryOwnerArn(PrimaryOwnerArnT&& value) {
    SetPrimaryOwnerArn(std::forward<PrimaryOwnerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username of the primary owner of the knowledge base.</p>
   */
  inline const Aws::String& GetPrimaryOwnerUsername() const { return m_primaryOwnerUsername; }
  inline bool PrimaryOwnerUsernameHasBeenSet() const { return m_primaryOwnerUsernameHasBeenSet; }
  template <typename PrimaryOwnerUsernameT = Aws::String>
  void SetPrimaryOwnerUsername(PrimaryOwnerUsernameT&& value) {
    m_primaryOwnerUsernameHasBeenSet = true;
    m_primaryOwnerUsername = std::forward<PrimaryOwnerUsernameT>(value);
  }
  template <typename PrimaryOwnerUsernameT = Aws::String>
  KnowledgeBase& WithPrimaryOwnerUsername(PrimaryOwnerUsernameT&& value) {
    SetPrimaryOwnerUsername(std::forward<PrimaryOwnerUsernameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_knowledgeBaseArn;

  Aws::String m_knowledgeBaseId;

  Aws::String m_name;

  DataSetStatus m_status{DataSetStatus::NOT_SET};

  Aws::String m_dataSourceArn;

  KnowledgeBaseConfiguration m_knowledgeBaseConfiguration;

  MediaExtractionConfiguration m_mediaExtractionConfiguration;

  Aws::String m_type;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_description;

  bool m_isEmailNotificationOptedForIngestionFailures{false};

  KnowledgeBaseIngestionSummary m_firstCompletedIngestionSummary;

  KnowledgeBaseIngestionSummary m_firstIncompleteIngestionSummary;

  KnowledgeBaseIngestionSummary m_latestIngestionSummary;

  long long m_knowledgeBaseSizeBytes{0};

  long long m_documentCount{0};

  Aws::String m_primaryOwnerArn;

  Aws::String m_primaryOwnerUsername;
  bool m_knowledgeBaseArnHasBeenSet = false;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_dataSourceArnHasBeenSet = false;
  bool m_knowledgeBaseConfigurationHasBeenSet = false;
  bool m_mediaExtractionConfigurationHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_isEmailNotificationOptedForIngestionFailuresHasBeenSet = false;
  bool m_firstCompletedIngestionSummaryHasBeenSet = false;
  bool m_firstIncompleteIngestionSummaryHasBeenSet = false;
  bool m_latestIngestionSummaryHasBeenSet = false;
  bool m_knowledgeBaseSizeBytesHasBeenSet = false;
  bool m_documentCountHasBeenSet = false;
  bool m_primaryOwnerArnHasBeenSet = false;
  bool m_primaryOwnerUsernameHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
