/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ExportStatus.h>
#include <aws/mgn/model/ExportTaskSummary.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Export task.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ExportTask">AWS API
 * Reference</a></p>
 */
class ExportTask {
 public:
  AWS_MGN_API ExportTask() = default;
  AWS_MGN_API ExportTask(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API ExportTask& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Export task id.</p>
   */
  inline const Aws::String& GetExportID() const { return m_exportID; }
  inline bool ExportIDHasBeenSet() const { return m_exportIDHasBeenSet; }
  template <typename ExportIDT = Aws::String>
  void SetExportID(ExportIDT&& value) {
    m_exportIDHasBeenSet = true;
    m_exportID = std::forward<ExportIDT>(value);
  }
  template <typename ExportIDT = Aws::String>
  ExportTask& WithExportID(ExportIDT&& value) {
    SetExportID(std::forward<ExportIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ExportTask arn.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ExportTask& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Export task s3 bucket.</p>
   */
  inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
  inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
  template <typename S3BucketT = Aws::String>
  void SetS3Bucket(S3BucketT&& value) {
    m_s3BucketHasBeenSet = true;
    m_s3Bucket = std::forward<S3BucketT>(value);
  }
  template <typename S3BucketT = Aws::String>
  ExportTask& WithS3Bucket(S3BucketT&& value) {
    SetS3Bucket(std::forward<S3BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Export task s3 key.</p>
   */
  inline const Aws::String& GetS3Key() const { return m_s3Key; }
  inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
  template <typename S3KeyT = Aws::String>
  void SetS3Key(S3KeyT&& value) {
    m_s3KeyHasBeenSet = true;
    m_s3Key = std::forward<S3KeyT>(value);
  }
  template <typename S3KeyT = Aws::String>
  ExportTask& WithS3Key(S3KeyT&& value) {
    SetS3Key(std::forward<S3KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Export task s3 bucket owner.</p>
   */
  inline const Aws::String& GetS3BucketOwner() const { return m_s3BucketOwner; }
  inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
  template <typename S3BucketOwnerT = Aws::String>
  void SetS3BucketOwner(S3BucketOwnerT&& value) {
    m_s3BucketOwnerHasBeenSet = true;
    m_s3BucketOwner = std::forward<S3BucketOwnerT>(value);
  }
  template <typename S3BucketOwnerT = Aws::String>
  ExportTask& WithS3BucketOwner(S3BucketOwnerT&& value) {
    SetS3BucketOwner(std::forward<S3BucketOwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Export task creation datetime.</p>
   */
  inline const Aws::String& GetCreationDateTime() const { return m_creationDateTime; }
  inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
  template <typename CreationDateTimeT = Aws::String>
  void SetCreationDateTime(CreationDateTimeT&& value) {
    m_creationDateTimeHasBeenSet = true;
    m_creationDateTime = std::forward<CreationDateTimeT>(value);
  }
  template <typename CreationDateTimeT = Aws::String>
  ExportTask& WithCreationDateTime(CreationDateTimeT&& value) {
    SetCreationDateTime(std::forward<CreationDateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Export task end datetime.</p>
   */
  inline const Aws::String& GetEndDateTime() const { return m_endDateTime; }
  inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
  template <typename EndDateTimeT = Aws::String>
  void SetEndDateTime(EndDateTimeT&& value) {
    m_endDateTimeHasBeenSet = true;
    m_endDateTime = std::forward<EndDateTimeT>(value);
  }
  template <typename EndDateTimeT = Aws::String>
  ExportTask& WithEndDateTime(EndDateTimeT&& value) {
    SetEndDateTime(std::forward<EndDateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Export task status.</p>
   */
  inline ExportStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ExportTask& WithStatus(ExportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Export task progress percentage.</p>
   */
  inline double GetProgressPercentage() const { return m_progressPercentage; }
  inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }
  inline void SetProgressPercentage(double value) {
    m_progressPercentageHasBeenSet = true;
    m_progressPercentage = value;
  }
  inline ExportTask& WithProgressPercentage(double value) {
    SetProgressPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Export task summary.</p>
   */
  inline const ExportTaskSummary& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = ExportTaskSummary>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = ExportTaskSummary>
  ExportTask& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Export task tags.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  ExportTask& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  ExportTask& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_exportID;

  Aws::String m_arn;

  Aws::String m_s3Bucket;

  Aws::String m_s3Key;

  Aws::String m_s3BucketOwner;

  Aws::String m_creationDateTime;

  Aws::String m_endDateTime;

  ExportStatus m_status{ExportStatus::NOT_SET};

  double m_progressPercentage{0.0};

  ExportTaskSummary m_summary;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_exportIDHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_s3BucketHasBeenSet = false;
  bool m_s3KeyHasBeenSet = false;
  bool m_s3BucketOwnerHasBeenSet = false;
  bool m_creationDateTimeHasBeenSet = false;
  bool m_endDateTimeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_progressPercentageHasBeenSet = false;
  bool m_summaryHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
