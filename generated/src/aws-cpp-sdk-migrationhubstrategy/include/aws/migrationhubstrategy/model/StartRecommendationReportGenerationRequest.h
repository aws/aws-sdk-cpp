/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/OutputFormat.h>
#include <aws/migrationhubstrategy/model/Group.h>
#include <utility>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   */
  class StartRecommendationReportGenerationRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StartRecommendationReportGenerationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRecommendationReportGeneration"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Groups the resources in the recommendation report with a unique name. </p>
     */
    inline const Aws::Vector<Group>& GetGroupIdFilter() const{ return m_groupIdFilter; }
    inline bool GroupIdFilterHasBeenSet() const { return m_groupIdFilterHasBeenSet; }
    inline void SetGroupIdFilter(const Aws::Vector<Group>& value) { m_groupIdFilterHasBeenSet = true; m_groupIdFilter = value; }
    inline void SetGroupIdFilter(Aws::Vector<Group>&& value) { m_groupIdFilterHasBeenSet = true; m_groupIdFilter = std::move(value); }
    inline StartRecommendationReportGenerationRequest& WithGroupIdFilter(const Aws::Vector<Group>& value) { SetGroupIdFilter(value); return *this;}
    inline StartRecommendationReportGenerationRequest& WithGroupIdFilter(Aws::Vector<Group>&& value) { SetGroupIdFilter(std::move(value)); return *this;}
    inline StartRecommendationReportGenerationRequest& AddGroupIdFilter(const Group& value) { m_groupIdFilterHasBeenSet = true; m_groupIdFilter.push_back(value); return *this; }
    inline StartRecommendationReportGenerationRequest& AddGroupIdFilter(Group&& value) { m_groupIdFilterHasBeenSet = true; m_groupIdFilter.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The output format for the recommendation report file. The default format is
     * Microsoft Excel. </p>
     */
    inline const OutputFormat& GetOutputFormat() const{ return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(const OutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline void SetOutputFormat(OutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }
    inline StartRecommendationReportGenerationRequest& WithOutputFormat(const OutputFormat& value) { SetOutputFormat(value); return *this;}
    inline StartRecommendationReportGenerationRequest& WithOutputFormat(OutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Group> m_groupIdFilter;
    bool m_groupIdFilterHasBeenSet = false;

    OutputFormat m_outputFormat;
    bool m_outputFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
