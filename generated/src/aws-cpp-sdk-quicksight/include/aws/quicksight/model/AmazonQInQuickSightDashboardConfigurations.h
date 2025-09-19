/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ExecutiveSummaryConfigurations.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A collection of Amazon Q feature configurations in an embedded QuickSight
   * dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AmazonQInQuickSightDashboardConfigurations">AWS
   * API Reference</a></p>
   */
  class AmazonQInQuickSightDashboardConfigurations
  {
  public:
    AWS_QUICKSIGHT_API AmazonQInQuickSightDashboardConfigurations() = default;
    AWS_QUICKSIGHT_API AmazonQInQuickSightDashboardConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AmazonQInQuickSightDashboardConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A generated executive summary of an embedded QuickSight dashboard.</p>
     */
    inline const ExecutiveSummaryConfigurations& GetExecutiveSummary() const { return m_executiveSummary; }
    inline bool ExecutiveSummaryHasBeenSet() const { return m_executiveSummaryHasBeenSet; }
    template<typename ExecutiveSummaryT = ExecutiveSummaryConfigurations>
    void SetExecutiveSummary(ExecutiveSummaryT&& value) { m_executiveSummaryHasBeenSet = true; m_executiveSummary = std::forward<ExecutiveSummaryT>(value); }
    template<typename ExecutiveSummaryT = ExecutiveSummaryConfigurations>
    AmazonQInQuickSightDashboardConfigurations& WithExecutiveSummary(ExecutiveSummaryT&& value) { SetExecutiveSummary(std::forward<ExecutiveSummaryT>(value)); return *this;}
    ///@}
  private:

    ExecutiveSummaryConfigurations m_executiveSummary;
    bool m_executiveSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
