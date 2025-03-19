/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/RecommendationReportStatus.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Contains detailed information about a recommendation report. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/RecommendationReportDetails">AWS
   * API Reference</a></p>
   */
  class RecommendationReportDetails
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RecommendationReportDetails() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RecommendationReportDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RecommendationReportDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The time that the recommendation report generation task completes. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    RecommendationReportDetails& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 bucket where the report file is located. </p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    RecommendationReportDetails& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon S3 key name of the report file. </p>
     */
    inline const Aws::Vector<Aws::String>& GetS3Keys() const { return m_s3Keys; }
    inline bool S3KeysHasBeenSet() const { return m_s3KeysHasBeenSet; }
    template<typename S3KeysT = Aws::Vector<Aws::String>>
    void SetS3Keys(S3KeysT&& value) { m_s3KeysHasBeenSet = true; m_s3Keys = std::forward<S3KeysT>(value); }
    template<typename S3KeysT = Aws::Vector<Aws::String>>
    RecommendationReportDetails& WithS3Keys(S3KeysT&& value) { SetS3Keys(std::forward<S3KeysT>(value)); return *this;}
    template<typename S3KeysT = Aws::String>
    RecommendationReportDetails& AddS3Keys(S3KeysT&& value) { m_s3KeysHasBeenSet = true; m_s3Keys.emplace_back(std::forward<S3KeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time that the recommendation report generation task starts. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    RecommendationReportDetails& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the recommendation report generation task. </p>
     */
    inline RecommendationReportStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RecommendationReportStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RecommendationReportDetails& WithStatus(RecommendationReportStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status message for recommendation report generation. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    RecommendationReportDetails& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::Vector<Aws::String> m_s3Keys;
    bool m_s3KeysHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    RecommendationReportStatus m_status{RecommendationReportStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
