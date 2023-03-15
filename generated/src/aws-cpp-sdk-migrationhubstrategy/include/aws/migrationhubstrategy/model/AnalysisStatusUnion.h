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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalysisStatusUnion();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalysisStatusUnion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalysisStatusUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the analysis.</p>
     */
    inline const RuntimeAnalysisStatus& GetRuntimeAnalysisStatus() const{ return m_runtimeAnalysisStatus; }

    /**
     * <p>The status of the analysis.</p>
     */
    inline bool RuntimeAnalysisStatusHasBeenSet() const { return m_runtimeAnalysisStatusHasBeenSet; }

    /**
     * <p>The status of the analysis.</p>
     */
    inline void SetRuntimeAnalysisStatus(const RuntimeAnalysisStatus& value) { m_runtimeAnalysisStatusHasBeenSet = true; m_runtimeAnalysisStatus = value; }

    /**
     * <p>The status of the analysis.</p>
     */
    inline void SetRuntimeAnalysisStatus(RuntimeAnalysisStatus&& value) { m_runtimeAnalysisStatusHasBeenSet = true; m_runtimeAnalysisStatus = std::move(value); }

    /**
     * <p>The status of the analysis.</p>
     */
    inline AnalysisStatusUnion& WithRuntimeAnalysisStatus(const RuntimeAnalysisStatus& value) { SetRuntimeAnalysisStatus(value); return *this;}

    /**
     * <p>The status of the analysis.</p>
     */
    inline AnalysisStatusUnion& WithRuntimeAnalysisStatus(RuntimeAnalysisStatus&& value) { SetRuntimeAnalysisStatus(std::move(value)); return *this;}


    /**
     * <p>The status of the source code or database analysis.</p>
     */
    inline const SrcCodeOrDbAnalysisStatus& GetSrcCodeOrDbAnalysisStatus() const{ return m_srcCodeOrDbAnalysisStatus; }

    /**
     * <p>The status of the source code or database analysis.</p>
     */
    inline bool SrcCodeOrDbAnalysisStatusHasBeenSet() const { return m_srcCodeOrDbAnalysisStatusHasBeenSet; }

    /**
     * <p>The status of the source code or database analysis.</p>
     */
    inline void SetSrcCodeOrDbAnalysisStatus(const SrcCodeOrDbAnalysisStatus& value) { m_srcCodeOrDbAnalysisStatusHasBeenSet = true; m_srcCodeOrDbAnalysisStatus = value; }

    /**
     * <p>The status of the source code or database analysis.</p>
     */
    inline void SetSrcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus&& value) { m_srcCodeOrDbAnalysisStatusHasBeenSet = true; m_srcCodeOrDbAnalysisStatus = std::move(value); }

    /**
     * <p>The status of the source code or database analysis.</p>
     */
    inline AnalysisStatusUnion& WithSrcCodeOrDbAnalysisStatus(const SrcCodeOrDbAnalysisStatus& value) { SetSrcCodeOrDbAnalysisStatus(value); return *this;}

    /**
     * <p>The status of the source code or database analysis.</p>
     */
    inline AnalysisStatusUnion& WithSrcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus&& value) { SetSrcCodeOrDbAnalysisStatus(std::move(value)); return *this;}

  private:

    RuntimeAnalysisStatus m_runtimeAnalysisStatus;
    bool m_runtimeAnalysisStatusHasBeenSet = false;

    SrcCodeOrDbAnalysisStatus m_srcCodeOrDbAnalysisStatus;
    bool m_srcCodeOrDbAnalysisStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
