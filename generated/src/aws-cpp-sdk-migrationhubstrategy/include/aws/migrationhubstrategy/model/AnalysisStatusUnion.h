/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/RuntimeAnalysisStatus.h>
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
   * <p>A combination of existing analysis statuses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/AnalysisStatusUnion">AWS
   * API Reference</a></p>
   */
  class AnalysisStatusUnion
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalysisStatusUnion() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalysisStatusUnion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalysisStatusUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the analysis.</p>
     */
    inline RuntimeAnalysisStatus GetRuntimeAnalysisStatus() const { return m_runtimeAnalysisStatus; }
    inline bool RuntimeAnalysisStatusHasBeenSet() const { return m_runtimeAnalysisStatusHasBeenSet; }
    inline void SetRuntimeAnalysisStatus(RuntimeAnalysisStatus value) { m_runtimeAnalysisStatusHasBeenSet = true; m_runtimeAnalysisStatus = value; }
    inline AnalysisStatusUnion& WithRuntimeAnalysisStatus(RuntimeAnalysisStatus value) { SetRuntimeAnalysisStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the source code or database analysis.</p>
     */
    inline SrcCodeOrDbAnalysisStatus GetSrcCodeOrDbAnalysisStatus() const { return m_srcCodeOrDbAnalysisStatus; }
    inline bool SrcCodeOrDbAnalysisStatusHasBeenSet() const { return m_srcCodeOrDbAnalysisStatusHasBeenSet; }
    inline void SetSrcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus value) { m_srcCodeOrDbAnalysisStatusHasBeenSet = true; m_srcCodeOrDbAnalysisStatus = value; }
    inline AnalysisStatusUnion& WithSrcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus value) { SetSrcCodeOrDbAnalysisStatus(value); return *this;}
    ///@}
  private:

    RuntimeAnalysisStatus m_runtimeAnalysisStatus{RuntimeAnalysisStatus::NOT_SET};
    bool m_runtimeAnalysisStatusHasBeenSet = false;

    SrcCodeOrDbAnalysisStatus m_srcCodeOrDbAnalysisStatus{SrcCodeOrDbAnalysisStatus::NOT_SET};
    bool m_srcCodeOrDbAnalysisStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
