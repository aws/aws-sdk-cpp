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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Result();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Result(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Result& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error in server analysis.</p>
     */
    inline const AnalysisStatusUnion& GetAnalysisStatus() const{ return m_analysisStatus; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline bool AnalysisStatusHasBeenSet() const { return m_analysisStatusHasBeenSet; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline void SetAnalysisStatus(const AnalysisStatusUnion& value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = value; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline void SetAnalysisStatus(AnalysisStatusUnion&& value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = std::move(value); }

    /**
     * <p>The error in server analysis.</p>
     */
    inline Result& WithAnalysisStatus(const AnalysisStatusUnion& value) { SetAnalysisStatus(value); return *this;}

    /**
     * <p>The error in server analysis.</p>
     */
    inline Result& WithAnalysisStatus(AnalysisStatusUnion&& value) { SetAnalysisStatus(std::move(value)); return *this;}


    /**
     * <p>The error in server analysis.</p>
     */
    inline const AnalysisType& GetAnalysisType() const{ return m_analysisType; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline void SetAnalysisType(const AnalysisType& value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline void SetAnalysisType(AnalysisType&& value) { m_analysisTypeHasBeenSet = true; m_analysisType = std::move(value); }

    /**
     * <p>The error in server analysis.</p>
     */
    inline Result& WithAnalysisType(const AnalysisType& value) { SetAnalysisType(value); return *this;}

    /**
     * <p>The error in server analysis.</p>
     */
    inline Result& WithAnalysisType(AnalysisType&& value) { SetAnalysisType(std::move(value)); return *this;}


    /**
     * <p>The error in server analysis.</p>
     */
    inline const Aws::Vector<AntipatternReportResult>& GetAntipatternReportResultList() const{ return m_antipatternReportResultList; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline bool AntipatternReportResultListHasBeenSet() const { return m_antipatternReportResultListHasBeenSet; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline void SetAntipatternReportResultList(const Aws::Vector<AntipatternReportResult>& value) { m_antipatternReportResultListHasBeenSet = true; m_antipatternReportResultList = value; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline void SetAntipatternReportResultList(Aws::Vector<AntipatternReportResult>&& value) { m_antipatternReportResultListHasBeenSet = true; m_antipatternReportResultList = std::move(value); }

    /**
     * <p>The error in server analysis.</p>
     */
    inline Result& WithAntipatternReportResultList(const Aws::Vector<AntipatternReportResult>& value) { SetAntipatternReportResultList(value); return *this;}

    /**
     * <p>The error in server analysis.</p>
     */
    inline Result& WithAntipatternReportResultList(Aws::Vector<AntipatternReportResult>&& value) { SetAntipatternReportResultList(std::move(value)); return *this;}

    /**
     * <p>The error in server analysis.</p>
     */
    inline Result& AddAntipatternReportResultList(const AntipatternReportResult& value) { m_antipatternReportResultListHasBeenSet = true; m_antipatternReportResultList.push_back(value); return *this; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline Result& AddAntipatternReportResultList(AntipatternReportResult&& value) { m_antipatternReportResultListHasBeenSet = true; m_antipatternReportResultList.push_back(std::move(value)); return *this; }


    /**
     * <p>The error in server analysis.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The error in server analysis.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The error in server analysis.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The error in server analysis.</p>
     */
    inline Result& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The error in server analysis.</p>
     */
    inline Result& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The error in server analysis.</p>
     */
    inline Result& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    AnalysisStatusUnion m_analysisStatus;
    bool m_analysisStatusHasBeenSet = false;

    AnalysisType m_analysisType;
    bool m_analysisTypeHasBeenSet = false;

    Aws::Vector<AntipatternReportResult> m_antipatternReportResultList;
    bool m_antipatternReportResultListHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
