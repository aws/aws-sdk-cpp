/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/SrcCodeOrDbAnalysisStatus.h>
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
   * <p>Summary of the analysis status of the application component.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ApplicationComponentStatusSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationComponentStatusSummary
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentStatusSummary() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of application components successfully analyzed, partially
     * successful or failed analysis.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline ApplicationComponentStatusSummary& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of database analysis.</p>
     */
    inline SrcCodeOrDbAnalysisStatus GetSrcCodeOrDbAnalysisStatus() const { return m_srcCodeOrDbAnalysisStatus; }
    inline bool SrcCodeOrDbAnalysisStatusHasBeenSet() const { return m_srcCodeOrDbAnalysisStatusHasBeenSet; }
    inline void SetSrcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus value) { m_srcCodeOrDbAnalysisStatusHasBeenSet = true; m_srcCodeOrDbAnalysisStatus = value; }
    inline ApplicationComponentStatusSummary& WithSrcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus value) { SetSrcCodeOrDbAnalysisStatus(value); return *this;}
    ///@}
  private:

    int m_count{0};
    bool m_countHasBeenSet = false;

    SrcCodeOrDbAnalysisStatus m_srcCodeOrDbAnalysisStatus{SrcCodeOrDbAnalysisStatus::NOT_SET};
    bool m_srcCodeOrDbAnalysisStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
