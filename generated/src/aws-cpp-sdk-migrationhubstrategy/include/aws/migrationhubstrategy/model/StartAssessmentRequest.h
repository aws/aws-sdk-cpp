/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/AssessmentTarget.h>
#include <utility>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   */
  class StartAssessmentRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StartAssessmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAssessment"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    /**
     * <p>List of criteria for assessment.</p>
     */
    inline const Aws::Vector<AssessmentTarget>& GetAssessmentTargets() const{ return m_assessmentTargets; }

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline bool AssessmentTargetsHasBeenSet() const { return m_assessmentTargetsHasBeenSet; }

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline void SetAssessmentTargets(const Aws::Vector<AssessmentTarget>& value) { m_assessmentTargetsHasBeenSet = true; m_assessmentTargets = value; }

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline void SetAssessmentTargets(Aws::Vector<AssessmentTarget>&& value) { m_assessmentTargetsHasBeenSet = true; m_assessmentTargets = std::move(value); }

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline StartAssessmentRequest& WithAssessmentTargets(const Aws::Vector<AssessmentTarget>& value) { SetAssessmentTargets(value); return *this;}

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline StartAssessmentRequest& WithAssessmentTargets(Aws::Vector<AssessmentTarget>&& value) { SetAssessmentTargets(std::move(value)); return *this;}

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline StartAssessmentRequest& AddAssessmentTargets(const AssessmentTarget& value) { m_assessmentTargetsHasBeenSet = true; m_assessmentTargets.push_back(value); return *this; }

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline StartAssessmentRequest& AddAssessmentTargets(AssessmentTarget&& value) { m_assessmentTargetsHasBeenSet = true; m_assessmentTargets.push_back(std::move(value)); return *this; }


    /**
     * <p> The S3 bucket used by the collectors to send analysis data to the service.
     * The bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline const Aws::String& GetS3bucketForAnalysisData() const{ return m_s3bucketForAnalysisData; }

    /**
     * <p> The S3 bucket used by the collectors to send analysis data to the service.
     * The bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline bool S3bucketForAnalysisDataHasBeenSet() const { return m_s3bucketForAnalysisDataHasBeenSet; }

    /**
     * <p> The S3 bucket used by the collectors to send analysis data to the service.
     * The bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline void SetS3bucketForAnalysisData(const Aws::String& value) { m_s3bucketForAnalysisDataHasBeenSet = true; m_s3bucketForAnalysisData = value; }

    /**
     * <p> The S3 bucket used by the collectors to send analysis data to the service.
     * The bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline void SetS3bucketForAnalysisData(Aws::String&& value) { m_s3bucketForAnalysisDataHasBeenSet = true; m_s3bucketForAnalysisData = std::move(value); }

    /**
     * <p> The S3 bucket used by the collectors to send analysis data to the service.
     * The bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline void SetS3bucketForAnalysisData(const char* value) { m_s3bucketForAnalysisDataHasBeenSet = true; m_s3bucketForAnalysisData.assign(value); }

    /**
     * <p> The S3 bucket used by the collectors to send analysis data to the service.
     * The bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline StartAssessmentRequest& WithS3bucketForAnalysisData(const Aws::String& value) { SetS3bucketForAnalysisData(value); return *this;}

    /**
     * <p> The S3 bucket used by the collectors to send analysis data to the service.
     * The bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline StartAssessmentRequest& WithS3bucketForAnalysisData(Aws::String&& value) { SetS3bucketForAnalysisData(std::move(value)); return *this;}

    /**
     * <p> The S3 bucket used by the collectors to send analysis data to the service.
     * The bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline StartAssessmentRequest& WithS3bucketForAnalysisData(const char* value) { SetS3bucketForAnalysisData(value); return *this;}


    /**
     * <p> The S3 bucket where all the reports generated by the service are stored. The
     * bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline const Aws::String& GetS3bucketForReportData() const{ return m_s3bucketForReportData; }

    /**
     * <p> The S3 bucket where all the reports generated by the service are stored. The
     * bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline bool S3bucketForReportDataHasBeenSet() const { return m_s3bucketForReportDataHasBeenSet; }

    /**
     * <p> The S3 bucket where all the reports generated by the service are stored. The
     * bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline void SetS3bucketForReportData(const Aws::String& value) { m_s3bucketForReportDataHasBeenSet = true; m_s3bucketForReportData = value; }

    /**
     * <p> The S3 bucket where all the reports generated by the service are stored. The
     * bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline void SetS3bucketForReportData(Aws::String&& value) { m_s3bucketForReportDataHasBeenSet = true; m_s3bucketForReportData = std::move(value); }

    /**
     * <p> The S3 bucket where all the reports generated by the service are stored. The
     * bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline void SetS3bucketForReportData(const char* value) { m_s3bucketForReportDataHasBeenSet = true; m_s3bucketForReportData.assign(value); }

    /**
     * <p> The S3 bucket where all the reports generated by the service are stored. The
     * bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline StartAssessmentRequest& WithS3bucketForReportData(const Aws::String& value) { SetS3bucketForReportData(value); return *this;}

    /**
     * <p> The S3 bucket where all the reports generated by the service are stored. The
     * bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline StartAssessmentRequest& WithS3bucketForReportData(Aws::String&& value) { SetS3bucketForReportData(std::move(value)); return *this;}

    /**
     * <p> The S3 bucket where all the reports generated by the service are stored. The
     * bucket name must begin with <code>migrationhub-strategy-</code>. </p>
     */
    inline StartAssessmentRequest& WithS3bucketForReportData(const char* value) { SetS3bucketForReportData(value); return *this;}

  private:

    Aws::Vector<AssessmentTarget> m_assessmentTargets;
    bool m_assessmentTargetsHasBeenSet = false;

    Aws::String m_s3bucketForAnalysisData;
    bool m_s3bucketForAnalysisDataHasBeenSet = false;

    Aws::String m_s3bucketForReportData;
    bool m_s3bucketForReportDataHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
