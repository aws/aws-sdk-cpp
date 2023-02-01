/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/RunTimeAssessmentStatus.h>
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
   * <p>The status summary of the server analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ServerStatusSummary">AWS
   * API Reference</a></p>
   */
  class ServerStatusSummary
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerStatusSummary();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of servers successfully analyzed, partially successful or failed
     * analysis.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of servers successfully analyzed, partially successful or failed
     * analysis.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of servers successfully analyzed, partially successful or failed
     * analysis.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of servers successfully analyzed, partially successful or failed
     * analysis.</p>
     */
    inline ServerStatusSummary& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The status of the run time.</p>
     */
    inline const RunTimeAssessmentStatus& GetRunTimeAssessmentStatus() const{ return m_runTimeAssessmentStatus; }

    /**
     * <p>The status of the run time.</p>
     */
    inline bool RunTimeAssessmentStatusHasBeenSet() const { return m_runTimeAssessmentStatusHasBeenSet; }

    /**
     * <p>The status of the run time.</p>
     */
    inline void SetRunTimeAssessmentStatus(const RunTimeAssessmentStatus& value) { m_runTimeAssessmentStatusHasBeenSet = true; m_runTimeAssessmentStatus = value; }

    /**
     * <p>The status of the run time.</p>
     */
    inline void SetRunTimeAssessmentStatus(RunTimeAssessmentStatus&& value) { m_runTimeAssessmentStatusHasBeenSet = true; m_runTimeAssessmentStatus = std::move(value); }

    /**
     * <p>The status of the run time.</p>
     */
    inline ServerStatusSummary& WithRunTimeAssessmentStatus(const RunTimeAssessmentStatus& value) { SetRunTimeAssessmentStatus(value); return *this;}

    /**
     * <p>The status of the run time.</p>
     */
    inline ServerStatusSummary& WithRunTimeAssessmentStatus(RunTimeAssessmentStatus&& value) { SetRunTimeAssessmentStatus(std::move(value)); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet = false;

    RunTimeAssessmentStatus m_runTimeAssessmentStatus;
    bool m_runTimeAssessmentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
