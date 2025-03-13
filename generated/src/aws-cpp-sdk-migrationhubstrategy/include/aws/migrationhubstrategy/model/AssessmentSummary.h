/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/S3Object.h>
#include <aws/migrationhubstrategy/model/AntipatternReportStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/AntipatternSeveritySummary.h>
#include <aws/migrationhubstrategy/model/ApplicationComponentStatusSummary.h>
#include <aws/migrationhubstrategy/model/StrategySummary.h>
#include <aws/migrationhubstrategy/model/ApplicationComponentSummary.h>
#include <aws/migrationhubstrategy/model/ServerStatusSummary.h>
#include <aws/migrationhubstrategy/model/ServerSummary.h>
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
   * <p> Contains the summary of the assessment results. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/AssessmentSummary">AWS
   * API Reference</a></p>
   */
  class AssessmentSummary
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssessmentSummary() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssessmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssessmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon S3 object containing the anti-pattern report. </p>
     */
    inline const S3Object& GetAntipatternReportS3Object() const { return m_antipatternReportS3Object; }
    inline bool AntipatternReportS3ObjectHasBeenSet() const { return m_antipatternReportS3ObjectHasBeenSet; }
    template<typename AntipatternReportS3ObjectT = S3Object>
    void SetAntipatternReportS3Object(AntipatternReportS3ObjectT&& value) { m_antipatternReportS3ObjectHasBeenSet = true; m_antipatternReportS3Object = std::forward<AntipatternReportS3ObjectT>(value); }
    template<typename AntipatternReportS3ObjectT = S3Object>
    AssessmentSummary& WithAntipatternReportS3Object(AntipatternReportS3ObjectT&& value) { SetAntipatternReportS3Object(std::forward<AntipatternReportS3ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the anti-pattern report. </p>
     */
    inline AntipatternReportStatus GetAntipatternReportStatus() const { return m_antipatternReportStatus; }
    inline bool AntipatternReportStatusHasBeenSet() const { return m_antipatternReportStatusHasBeenSet; }
    inline void SetAntipatternReportStatus(AntipatternReportStatus value) { m_antipatternReportStatusHasBeenSet = true; m_antipatternReportStatus = value; }
    inline AssessmentSummary& WithAntipatternReportStatus(AntipatternReportStatus value) { SetAntipatternReportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status message of the anti-pattern report. </p>
     */
    inline const Aws::String& GetAntipatternReportStatusMessage() const { return m_antipatternReportStatusMessage; }
    inline bool AntipatternReportStatusMessageHasBeenSet() const { return m_antipatternReportStatusMessageHasBeenSet; }
    template<typename AntipatternReportStatusMessageT = Aws::String>
    void SetAntipatternReportStatusMessage(AntipatternReportStatusMessageT&& value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage = std::forward<AntipatternReportStatusMessageT>(value); }
    template<typename AntipatternReportStatusMessageT = Aws::String>
    AssessmentSummary& WithAntipatternReportStatusMessage(AntipatternReportStatusMessageT&& value) { SetAntipatternReportStatusMessage(std::forward<AntipatternReportStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the assessment was performed. </p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTimestamp() const { return m_lastAnalyzedTimestamp; }
    inline bool LastAnalyzedTimestampHasBeenSet() const { return m_lastAnalyzedTimestampHasBeenSet; }
    template<typename LastAnalyzedTimestampT = Aws::Utils::DateTime>
    void SetLastAnalyzedTimestamp(LastAnalyzedTimestampT&& value) { m_lastAnalyzedTimestampHasBeenSet = true; m_lastAnalyzedTimestamp = std::forward<LastAnalyzedTimestampT>(value); }
    template<typename LastAnalyzedTimestampT = Aws::Utils::DateTime>
    AssessmentSummary& WithLastAnalyzedTimestamp(LastAnalyzedTimestampT&& value) { SetLastAnalyzedTimestamp(std::forward<LastAnalyzedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of AntipatternSeveritySummary. </p>
     */
    inline const Aws::Vector<AntipatternSeveritySummary>& GetListAntipatternSeveritySummary() const { return m_listAntipatternSeveritySummary; }
    inline bool ListAntipatternSeveritySummaryHasBeenSet() const { return m_listAntipatternSeveritySummaryHasBeenSet; }
    template<typename ListAntipatternSeveritySummaryT = Aws::Vector<AntipatternSeveritySummary>>
    void SetListAntipatternSeveritySummary(ListAntipatternSeveritySummaryT&& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary = std::forward<ListAntipatternSeveritySummaryT>(value); }
    template<typename ListAntipatternSeveritySummaryT = Aws::Vector<AntipatternSeveritySummary>>
    AssessmentSummary& WithListAntipatternSeveritySummary(ListAntipatternSeveritySummaryT&& value) { SetListAntipatternSeveritySummary(std::forward<ListAntipatternSeveritySummaryT>(value)); return *this;}
    template<typename ListAntipatternSeveritySummaryT = AntipatternSeveritySummary>
    AssessmentSummary& AddListAntipatternSeveritySummary(ListAntipatternSeveritySummaryT&& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary.emplace_back(std::forward<ListAntipatternSeveritySummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of status summaries of the analyzed application components.</p>
     */
    inline const Aws::Vector<ApplicationComponentStatusSummary>& GetListApplicationComponentStatusSummary() const { return m_listApplicationComponentStatusSummary; }
    inline bool ListApplicationComponentStatusSummaryHasBeenSet() const { return m_listApplicationComponentStatusSummaryHasBeenSet; }
    template<typename ListApplicationComponentStatusSummaryT = Aws::Vector<ApplicationComponentStatusSummary>>
    void SetListApplicationComponentStatusSummary(ListApplicationComponentStatusSummaryT&& value) { m_listApplicationComponentStatusSummaryHasBeenSet = true; m_listApplicationComponentStatusSummary = std::forward<ListApplicationComponentStatusSummaryT>(value); }
    template<typename ListApplicationComponentStatusSummaryT = Aws::Vector<ApplicationComponentStatusSummary>>
    AssessmentSummary& WithListApplicationComponentStatusSummary(ListApplicationComponentStatusSummaryT&& value) { SetListApplicationComponentStatusSummary(std::forward<ListApplicationComponentStatusSummaryT>(value)); return *this;}
    template<typename ListApplicationComponentStatusSummaryT = ApplicationComponentStatusSummary>
    AssessmentSummary& AddListApplicationComponentStatusSummary(ListApplicationComponentStatusSummaryT&& value) { m_listApplicationComponentStatusSummaryHasBeenSet = true; m_listApplicationComponentStatusSummary.emplace_back(std::forward<ListApplicationComponentStatusSummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> List of ApplicationComponentStrategySummary. </p>
     */
    inline const Aws::Vector<StrategySummary>& GetListApplicationComponentStrategySummary() const { return m_listApplicationComponentStrategySummary; }
    inline bool ListApplicationComponentStrategySummaryHasBeenSet() const { return m_listApplicationComponentStrategySummaryHasBeenSet; }
    template<typename ListApplicationComponentStrategySummaryT = Aws::Vector<StrategySummary>>
    void SetListApplicationComponentStrategySummary(ListApplicationComponentStrategySummaryT&& value) { m_listApplicationComponentStrategySummaryHasBeenSet = true; m_listApplicationComponentStrategySummary = std::forward<ListApplicationComponentStrategySummaryT>(value); }
    template<typename ListApplicationComponentStrategySummaryT = Aws::Vector<StrategySummary>>
    AssessmentSummary& WithListApplicationComponentStrategySummary(ListApplicationComponentStrategySummaryT&& value) { SetListApplicationComponentStrategySummary(std::forward<ListApplicationComponentStrategySummaryT>(value)); return *this;}
    template<typename ListApplicationComponentStrategySummaryT = StrategySummary>
    AssessmentSummary& AddListApplicationComponentStrategySummary(ListApplicationComponentStrategySummaryT&& value) { m_listApplicationComponentStrategySummaryHasBeenSet = true; m_listApplicationComponentStrategySummary.emplace_back(std::forward<ListApplicationComponentStrategySummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> List of ApplicationComponentSummary. </p>
     */
    inline const Aws::Vector<ApplicationComponentSummary>& GetListApplicationComponentSummary() const { return m_listApplicationComponentSummary; }
    inline bool ListApplicationComponentSummaryHasBeenSet() const { return m_listApplicationComponentSummaryHasBeenSet; }
    template<typename ListApplicationComponentSummaryT = Aws::Vector<ApplicationComponentSummary>>
    void SetListApplicationComponentSummary(ListApplicationComponentSummaryT&& value) { m_listApplicationComponentSummaryHasBeenSet = true; m_listApplicationComponentSummary = std::forward<ListApplicationComponentSummaryT>(value); }
    template<typename ListApplicationComponentSummaryT = Aws::Vector<ApplicationComponentSummary>>
    AssessmentSummary& WithListApplicationComponentSummary(ListApplicationComponentSummaryT&& value) { SetListApplicationComponentSummary(std::forward<ListApplicationComponentSummaryT>(value)); return *this;}
    template<typename ListApplicationComponentSummaryT = ApplicationComponentSummary>
    AssessmentSummary& AddListApplicationComponentSummary(ListApplicationComponentSummaryT&& value) { m_listApplicationComponentSummaryHasBeenSet = true; m_listApplicationComponentSummary.emplace_back(std::forward<ListApplicationComponentSummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of status summaries of the analyzed servers.</p>
     */
    inline const Aws::Vector<ServerStatusSummary>& GetListServerStatusSummary() const { return m_listServerStatusSummary; }
    inline bool ListServerStatusSummaryHasBeenSet() const { return m_listServerStatusSummaryHasBeenSet; }
    template<typename ListServerStatusSummaryT = Aws::Vector<ServerStatusSummary>>
    void SetListServerStatusSummary(ListServerStatusSummaryT&& value) { m_listServerStatusSummaryHasBeenSet = true; m_listServerStatusSummary = std::forward<ListServerStatusSummaryT>(value); }
    template<typename ListServerStatusSummaryT = Aws::Vector<ServerStatusSummary>>
    AssessmentSummary& WithListServerStatusSummary(ListServerStatusSummaryT&& value) { SetListServerStatusSummary(std::forward<ListServerStatusSummaryT>(value)); return *this;}
    template<typename ListServerStatusSummaryT = ServerStatusSummary>
    AssessmentSummary& AddListServerStatusSummary(ListServerStatusSummaryT&& value) { m_listServerStatusSummaryHasBeenSet = true; m_listServerStatusSummary.emplace_back(std::forward<ListServerStatusSummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> List of ServerStrategySummary. </p>
     */
    inline const Aws::Vector<StrategySummary>& GetListServerStrategySummary() const { return m_listServerStrategySummary; }
    inline bool ListServerStrategySummaryHasBeenSet() const { return m_listServerStrategySummaryHasBeenSet; }
    template<typename ListServerStrategySummaryT = Aws::Vector<StrategySummary>>
    void SetListServerStrategySummary(ListServerStrategySummaryT&& value) { m_listServerStrategySummaryHasBeenSet = true; m_listServerStrategySummary = std::forward<ListServerStrategySummaryT>(value); }
    template<typename ListServerStrategySummaryT = Aws::Vector<StrategySummary>>
    AssessmentSummary& WithListServerStrategySummary(ListServerStrategySummaryT&& value) { SetListServerStrategySummary(std::forward<ListServerStrategySummaryT>(value)); return *this;}
    template<typename ListServerStrategySummaryT = StrategySummary>
    AssessmentSummary& AddListServerStrategySummary(ListServerStrategySummaryT&& value) { m_listServerStrategySummaryHasBeenSet = true; m_listServerStrategySummary.emplace_back(std::forward<ListServerStrategySummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> List of ServerSummary. </p>
     */
    inline const Aws::Vector<ServerSummary>& GetListServerSummary() const { return m_listServerSummary; }
    inline bool ListServerSummaryHasBeenSet() const { return m_listServerSummaryHasBeenSet; }
    template<typename ListServerSummaryT = Aws::Vector<ServerSummary>>
    void SetListServerSummary(ListServerSummaryT&& value) { m_listServerSummaryHasBeenSet = true; m_listServerSummary = std::forward<ListServerSummaryT>(value); }
    template<typename ListServerSummaryT = Aws::Vector<ServerSummary>>
    AssessmentSummary& WithListServerSummary(ListServerSummaryT&& value) { SetListServerSummary(std::forward<ListServerSummaryT>(value)); return *this;}
    template<typename ListServerSummaryT = ServerSummary>
    AssessmentSummary& AddListServerSummary(ListServerSummaryT&& value) { m_listServerSummaryHasBeenSet = true; m_listServerSummary.emplace_back(std::forward<ListServerSummaryT>(value)); return *this; }
    ///@}
  private:

    S3Object m_antipatternReportS3Object;
    bool m_antipatternReportS3ObjectHasBeenSet = false;

    AntipatternReportStatus m_antipatternReportStatus{AntipatternReportStatus::NOT_SET};
    bool m_antipatternReportStatusHasBeenSet = false;

    Aws::String m_antipatternReportStatusMessage;
    bool m_antipatternReportStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastAnalyzedTimestamp{};
    bool m_lastAnalyzedTimestampHasBeenSet = false;

    Aws::Vector<AntipatternSeveritySummary> m_listAntipatternSeveritySummary;
    bool m_listAntipatternSeveritySummaryHasBeenSet = false;

    Aws::Vector<ApplicationComponentStatusSummary> m_listApplicationComponentStatusSummary;
    bool m_listApplicationComponentStatusSummaryHasBeenSet = false;

    Aws::Vector<StrategySummary> m_listApplicationComponentStrategySummary;
    bool m_listApplicationComponentStrategySummaryHasBeenSet = false;

    Aws::Vector<ApplicationComponentSummary> m_listApplicationComponentSummary;
    bool m_listApplicationComponentSummaryHasBeenSet = false;

    Aws::Vector<ServerStatusSummary> m_listServerStatusSummary;
    bool m_listServerStatusSummaryHasBeenSet = false;

    Aws::Vector<StrategySummary> m_listServerStrategySummary;
    bool m_listServerStrategySummaryHasBeenSet = false;

    Aws::Vector<ServerSummary> m_listServerSummary;
    bool m_listServerSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
