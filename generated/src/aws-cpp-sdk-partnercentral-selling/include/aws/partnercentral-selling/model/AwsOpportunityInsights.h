/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementScore.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Contains insights provided by AWS for the opportunity, offering
   * recommendations and analysis that can help the partner optimize their engagement
   * and strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsOpportunityInsights">AWS
   * API Reference</a></p>
   */
  class AwsOpportunityInsights
  {
  public:
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityInsights();
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityInsights(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents a score assigned by AWS to indicate the level of engagement and
     * potential success for the opportunity. This score helps partners prioritize
     * their efforts.</p>
     */
    inline const EngagementScore& GetEngagementScore() const{ return m_engagementScore; }
    inline bool EngagementScoreHasBeenSet() const { return m_engagementScoreHasBeenSet; }
    inline void SetEngagementScore(const EngagementScore& value) { m_engagementScoreHasBeenSet = true; m_engagementScore = value; }
    inline void SetEngagementScore(EngagementScore&& value) { m_engagementScoreHasBeenSet = true; m_engagementScore = std::move(value); }
    inline AwsOpportunityInsights& WithEngagementScore(const EngagementScore& value) { SetEngagementScore(value); return *this;}
    inline AwsOpportunityInsights& WithEngagementScore(EngagementScore&& value) { SetEngagementScore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides recommendations from AWS on the next best actions to take in order
     * to move the opportunity forward and increase the likelihood of success.</p>
     */
    inline const Aws::String& GetNextBestActions() const{ return m_nextBestActions; }
    inline bool NextBestActionsHasBeenSet() const { return m_nextBestActionsHasBeenSet; }
    inline void SetNextBestActions(const Aws::String& value) { m_nextBestActionsHasBeenSet = true; m_nextBestActions = value; }
    inline void SetNextBestActions(Aws::String&& value) { m_nextBestActionsHasBeenSet = true; m_nextBestActions = std::move(value); }
    inline void SetNextBestActions(const char* value) { m_nextBestActionsHasBeenSet = true; m_nextBestActions.assign(value); }
    inline AwsOpportunityInsights& WithNextBestActions(const Aws::String& value) { SetNextBestActions(value); return *this;}
    inline AwsOpportunityInsights& WithNextBestActions(Aws::String&& value) { SetNextBestActions(std::move(value)); return *this;}
    inline AwsOpportunityInsights& WithNextBestActions(const char* value) { SetNextBestActions(value); return *this;}
    ///@}
  private:

    EngagementScore m_engagementScore;
    bool m_engagementScoreHasBeenSet = false;

    Aws::String m_nextBestActions;
    bool m_nextBestActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
