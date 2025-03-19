/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/AnalyzerNameUnion.h>
#include <aws/migrationhubstrategy/model/S3Object.h>
#include <aws/migrationhubstrategy/model/AntipatternReportStatus.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p>The anti-pattern report result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/AntipatternReportResult">AWS
   * API Reference</a></p>
   */
  class AntipatternReportResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AntipatternReportResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AntipatternReportResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AntipatternReportResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The analyzer name.</p>
     */
    inline const AnalyzerNameUnion& GetAnalyzerName() const { return m_analyzerName; }
    inline bool AnalyzerNameHasBeenSet() const { return m_analyzerNameHasBeenSet; }
    template<typename AnalyzerNameT = AnalyzerNameUnion>
    void SetAnalyzerName(AnalyzerNameT&& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = std::forward<AnalyzerNameT>(value); }
    template<typename AnalyzerNameT = AnalyzerNameUnion>
    AntipatternReportResult& WithAnalyzerName(AnalyzerNameT&& value) { SetAnalyzerName(std::forward<AnalyzerNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3Object& GetAntiPatternReportS3Object() const { return m_antiPatternReportS3Object; }
    inline bool AntiPatternReportS3ObjectHasBeenSet() const { return m_antiPatternReportS3ObjectHasBeenSet; }
    template<typename AntiPatternReportS3ObjectT = S3Object>
    void SetAntiPatternReportS3Object(AntiPatternReportS3ObjectT&& value) { m_antiPatternReportS3ObjectHasBeenSet = true; m_antiPatternReportS3Object = std::forward<AntiPatternReportS3ObjectT>(value); }
    template<typename AntiPatternReportS3ObjectT = S3Object>
    AntipatternReportResult& WithAntiPatternReportS3Object(AntiPatternReportS3ObjectT&& value) { SetAntiPatternReportS3Object(std::forward<AntiPatternReportS3ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the anti-pattern report generation.</p>
     */
    inline AntipatternReportStatus GetAntipatternReportStatus() const { return m_antipatternReportStatus; }
    inline bool AntipatternReportStatusHasBeenSet() const { return m_antipatternReportStatusHasBeenSet; }
    inline void SetAntipatternReportStatus(AntipatternReportStatus value) { m_antipatternReportStatusHasBeenSet = true; m_antipatternReportStatus = value; }
    inline AntipatternReportResult& WithAntipatternReportStatus(AntipatternReportStatus value) { SetAntipatternReportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the anti-pattern.</p>
     */
    inline const Aws::String& GetAntipatternReportStatusMessage() const { return m_antipatternReportStatusMessage; }
    inline bool AntipatternReportStatusMessageHasBeenSet() const { return m_antipatternReportStatusMessageHasBeenSet; }
    template<typename AntipatternReportStatusMessageT = Aws::String>
    void SetAntipatternReportStatusMessage(AntipatternReportStatusMessageT&& value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage = std::forward<AntipatternReportStatusMessageT>(value); }
    template<typename AntipatternReportStatusMessageT = Aws::String>
    AntipatternReportResult& WithAntipatternReportStatusMessage(AntipatternReportStatusMessageT&& value) { SetAntipatternReportStatusMessage(std::forward<AntipatternReportStatusMessageT>(value)); return *this;}
    ///@}
  private:

    AnalyzerNameUnion m_analyzerName;
    bool m_analyzerNameHasBeenSet = false;

    S3Object m_antiPatternReportS3Object;
    bool m_antiPatternReportS3ObjectHasBeenSet = false;

    AntipatternReportStatus m_antipatternReportStatus{AntipatternReportStatus::NOT_SET};
    bool m_antipatternReportStatusHasBeenSet = false;

    Aws::String m_antipatternReportStatusMessage;
    bool m_antipatternReportStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
