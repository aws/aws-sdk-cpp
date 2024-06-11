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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AntipatternReportResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AntipatternReportResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AntipatternReportResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The analyzer name.</p>
     */
    inline const AnalyzerNameUnion& GetAnalyzerName() const{ return m_analyzerName; }
    inline bool AnalyzerNameHasBeenSet() const { return m_analyzerNameHasBeenSet; }
    inline void SetAnalyzerName(const AnalyzerNameUnion& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = value; }
    inline void SetAnalyzerName(AnalyzerNameUnion&& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = std::move(value); }
    inline AntipatternReportResult& WithAnalyzerName(const AnalyzerNameUnion& value) { SetAnalyzerName(value); return *this;}
    inline AntipatternReportResult& WithAnalyzerName(AnalyzerNameUnion&& value) { SetAnalyzerName(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3Object& GetAntiPatternReportS3Object() const{ return m_antiPatternReportS3Object; }
    inline bool AntiPatternReportS3ObjectHasBeenSet() const { return m_antiPatternReportS3ObjectHasBeenSet; }
    inline void SetAntiPatternReportS3Object(const S3Object& value) { m_antiPatternReportS3ObjectHasBeenSet = true; m_antiPatternReportS3Object = value; }
    inline void SetAntiPatternReportS3Object(S3Object&& value) { m_antiPatternReportS3ObjectHasBeenSet = true; m_antiPatternReportS3Object = std::move(value); }
    inline AntipatternReportResult& WithAntiPatternReportS3Object(const S3Object& value) { SetAntiPatternReportS3Object(value); return *this;}
    inline AntipatternReportResult& WithAntiPatternReportS3Object(S3Object&& value) { SetAntiPatternReportS3Object(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the anti-pattern report generation.</p>
     */
    inline const AntipatternReportStatus& GetAntipatternReportStatus() const{ return m_antipatternReportStatus; }
    inline bool AntipatternReportStatusHasBeenSet() const { return m_antipatternReportStatusHasBeenSet; }
    inline void SetAntipatternReportStatus(const AntipatternReportStatus& value) { m_antipatternReportStatusHasBeenSet = true; m_antipatternReportStatus = value; }
    inline void SetAntipatternReportStatus(AntipatternReportStatus&& value) { m_antipatternReportStatusHasBeenSet = true; m_antipatternReportStatus = std::move(value); }
    inline AntipatternReportResult& WithAntipatternReportStatus(const AntipatternReportStatus& value) { SetAntipatternReportStatus(value); return *this;}
    inline AntipatternReportResult& WithAntipatternReportStatus(AntipatternReportStatus&& value) { SetAntipatternReportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the anti-pattern.</p>
     */
    inline const Aws::String& GetAntipatternReportStatusMessage() const{ return m_antipatternReportStatusMessage; }
    inline bool AntipatternReportStatusMessageHasBeenSet() const { return m_antipatternReportStatusMessageHasBeenSet; }
    inline void SetAntipatternReportStatusMessage(const Aws::String& value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage = value; }
    inline void SetAntipatternReportStatusMessage(Aws::String&& value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage = std::move(value); }
    inline void SetAntipatternReportStatusMessage(const char* value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage.assign(value); }
    inline AntipatternReportResult& WithAntipatternReportStatusMessage(const Aws::String& value) { SetAntipatternReportStatusMessage(value); return *this;}
    inline AntipatternReportResult& WithAntipatternReportStatusMessage(Aws::String&& value) { SetAntipatternReportStatusMessage(std::move(value)); return *this;}
    inline AntipatternReportResult& WithAntipatternReportStatusMessage(const char* value) { SetAntipatternReportStatusMessage(value); return *this;}
    ///@}
  private:

    AnalyzerNameUnion m_analyzerName;
    bool m_analyzerNameHasBeenSet = false;

    S3Object m_antiPatternReportS3Object;
    bool m_antiPatternReportS3ObjectHasBeenSet = false;

    AntipatternReportStatus m_antipatternReportStatus;
    bool m_antipatternReportStatusHasBeenSet = false;

    Aws::String m_antipatternReportStatusMessage;
    bool m_antipatternReportStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
