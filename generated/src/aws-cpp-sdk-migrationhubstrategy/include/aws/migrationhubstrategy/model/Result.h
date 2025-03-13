/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/AnalysisStatusUnion.h>
#include <aws/migrationhubstrategy/model/AnalysisType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/AntipatternReportResult.h>
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
   * <p>The error in server analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/Result">AWS
   * API Reference</a></p>
   */
  class Result
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Result() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Result(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Result& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error in server analysis.</p>
     */
    inline const AnalysisStatusUnion& GetAnalysisStatus() const { return m_analysisStatus; }
    inline bool AnalysisStatusHasBeenSet() const { return m_analysisStatusHasBeenSet; }
    template<typename AnalysisStatusT = AnalysisStatusUnion>
    void SetAnalysisStatus(AnalysisStatusT&& value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = std::forward<AnalysisStatusT>(value); }
    template<typename AnalysisStatusT = AnalysisStatusUnion>
    Result& WithAnalysisStatus(AnalysisStatusT&& value) { SetAnalysisStatus(std::forward<AnalysisStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error in server analysis.</p>
     */
    inline AnalysisType GetAnalysisType() const { return m_analysisType; }
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
    inline void SetAnalysisType(AnalysisType value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline Result& WithAnalysisType(AnalysisType value) { SetAnalysisType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error in server analysis.</p>
     */
    inline const Aws::Vector<AntipatternReportResult>& GetAntipatternReportResultList() const { return m_antipatternReportResultList; }
    inline bool AntipatternReportResultListHasBeenSet() const { return m_antipatternReportResultListHasBeenSet; }
    template<typename AntipatternReportResultListT = Aws::Vector<AntipatternReportResult>>
    void SetAntipatternReportResultList(AntipatternReportResultListT&& value) { m_antipatternReportResultListHasBeenSet = true; m_antipatternReportResultList = std::forward<AntipatternReportResultListT>(value); }
    template<typename AntipatternReportResultListT = Aws::Vector<AntipatternReportResult>>
    Result& WithAntipatternReportResultList(AntipatternReportResultListT&& value) { SetAntipatternReportResultList(std::forward<AntipatternReportResultListT>(value)); return *this;}
    template<typename AntipatternReportResultListT = AntipatternReportResult>
    Result& AddAntipatternReportResultList(AntipatternReportResultListT&& value) { m_antipatternReportResultListHasBeenSet = true; m_antipatternReportResultList.emplace_back(std::forward<AntipatternReportResultListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The error in server analysis.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    Result& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    AnalysisStatusUnion m_analysisStatus;
    bool m_analysisStatusHasBeenSet = false;

    AnalysisType m_analysisType{AnalysisType::NOT_SET};
    bool m_analysisTypeHasBeenSet = false;

    Aws::Vector<AntipatternReportResult> m_antipatternReportResultList;
    bool m_antipatternReportResultListHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
