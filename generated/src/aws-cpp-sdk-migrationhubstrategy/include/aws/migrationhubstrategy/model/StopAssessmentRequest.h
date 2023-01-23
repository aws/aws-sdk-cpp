/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   */
  class StopAssessmentRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StopAssessmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopAssessment"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    /**
     * <p> The <code>assessmentId</code> returned by <a>StartAssessment</a>. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The <code>assessmentId</code> returned by <a>StartAssessment</a>. </p>
     */
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }

    /**
     * <p> The <code>assessmentId</code> returned by <a>StartAssessment</a>. </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }

    /**
     * <p> The <code>assessmentId</code> returned by <a>StartAssessment</a>. </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }

    /**
     * <p> The <code>assessmentId</code> returned by <a>StartAssessment</a>. </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }

    /**
     * <p> The <code>assessmentId</code> returned by <a>StartAssessment</a>. </p>
     */
    inline StopAssessmentRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The <code>assessmentId</code> returned by <a>StartAssessment</a>. </p>
     */
    inline StopAssessmentRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The <code>assessmentId</code> returned by <a>StartAssessment</a>. </p>
     */
    inline StopAssessmentRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}

  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
