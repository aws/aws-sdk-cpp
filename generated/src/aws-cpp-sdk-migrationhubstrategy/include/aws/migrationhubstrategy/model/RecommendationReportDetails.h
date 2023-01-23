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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RecommendationReportDetails();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RecommendationReportDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RecommendationReportDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The time that the recommendation report generation task completes. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p> The time that the recommendation report generation task completes. </p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p> The time that the recommendation report generation task completes. </p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p> The time that the recommendation report generation task completes. </p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p> The time that the recommendation report generation task completes. </p>
     */
    inline RecommendationReportDetails& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p> The time that the recommendation report generation task completes. </p>
     */
    inline RecommendationReportDetails& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p> The S3 bucket where the report file is located. </p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p> The S3 bucket where the report file is located. </p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p> The S3 bucket where the report file is located. </p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p> The S3 bucket where the report file is located. </p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p> The S3 bucket where the report file is located. </p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p> The S3 bucket where the report file is located. </p>
     */
    inline RecommendationReportDetails& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p> The S3 bucket where the report file is located. </p>
     */
    inline RecommendationReportDetails& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p> The S3 bucket where the report file is located. </p>
     */
    inline RecommendationReportDetails& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p> The Amazon S3 key name of the report file. </p>
     */
    inline const Aws::Vector<Aws::String>& GetS3Keys() const{ return m_s3Keys; }

    /**
     * <p> The Amazon S3 key name of the report file. </p>
     */
    inline bool S3KeysHasBeenSet() const { return m_s3KeysHasBeenSet; }

    /**
     * <p> The Amazon S3 key name of the report file. </p>
     */
    inline void SetS3Keys(const Aws::Vector<Aws::String>& value) { m_s3KeysHasBeenSet = true; m_s3Keys = value; }

    /**
     * <p> The Amazon S3 key name of the report file. </p>
     */
    inline void SetS3Keys(Aws::Vector<Aws::String>&& value) { m_s3KeysHasBeenSet = true; m_s3Keys = std::move(value); }

    /**
     * <p> The Amazon S3 key name of the report file. </p>
     */
    inline RecommendationReportDetails& WithS3Keys(const Aws::Vector<Aws::String>& value) { SetS3Keys(value); return *this;}

    /**
     * <p> The Amazon S3 key name of the report file. </p>
     */
    inline RecommendationReportDetails& WithS3Keys(Aws::Vector<Aws::String>&& value) { SetS3Keys(std::move(value)); return *this;}

    /**
     * <p> The Amazon S3 key name of the report file. </p>
     */
    inline RecommendationReportDetails& AddS3Keys(const Aws::String& value) { m_s3KeysHasBeenSet = true; m_s3Keys.push_back(value); return *this; }

    /**
     * <p> The Amazon S3 key name of the report file. </p>
     */
    inline RecommendationReportDetails& AddS3Keys(Aws::String&& value) { m_s3KeysHasBeenSet = true; m_s3Keys.push_back(std::move(value)); return *this; }

    /**
     * <p> The Amazon S3 key name of the report file. </p>
     */
    inline RecommendationReportDetails& AddS3Keys(const char* value) { m_s3KeysHasBeenSet = true; m_s3Keys.push_back(value); return *this; }


    /**
     * <p> The time that the recommendation report generation task starts. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The time that the recommendation report generation task starts. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The time that the recommendation report generation task starts. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The time that the recommendation report generation task starts. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The time that the recommendation report generation task starts. </p>
     */
    inline RecommendationReportDetails& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The time that the recommendation report generation task starts. </p>
     */
    inline RecommendationReportDetails& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The status of the recommendation report generation task. </p>
     */
    inline const RecommendationReportStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the recommendation report generation task. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the recommendation report generation task. </p>
     */
    inline void SetStatus(const RecommendationReportStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the recommendation report generation task. </p>
     */
    inline void SetStatus(RecommendationReportStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the recommendation report generation task. </p>
     */
    inline RecommendationReportDetails& WithStatus(const RecommendationReportStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the recommendation report generation task. </p>
     */
    inline RecommendationReportDetails& WithStatus(RecommendationReportStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The status message for recommendation report generation. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p> The status message for recommendation report generation. </p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p> The status message for recommendation report generation. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p> The status message for recommendation report generation. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p> The status message for recommendation report generation. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p> The status message for recommendation report generation. </p>
     */
    inline RecommendationReportDetails& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p> The status message for recommendation report generation. </p>
     */
    inline RecommendationReportDetails& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p> The status message for recommendation report generation. </p>
     */
    inline RecommendationReportDetails& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::Vector<Aws::String> m_s3Keys;
    bool m_s3KeysHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    RecommendationReportStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
