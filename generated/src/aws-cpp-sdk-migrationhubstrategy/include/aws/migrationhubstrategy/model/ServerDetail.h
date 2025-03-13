/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/S3Object.h>
#include <aws/migrationhubstrategy/model/AntipatternReportStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/RunTimeAssessmentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migrationhubstrategy/model/RecommendationSet.h>
#include <aws/migrationhubstrategy/model/ServerError.h>
#include <aws/migrationhubstrategy/model/SystemInfo.h>
#include <aws/migrationhubstrategy/model/StrategySummary.h>
#include <aws/migrationhubstrategy/model/AntipatternSeveritySummary.h>
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
   * <p> Detailed information about a server. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ServerDetail">AWS
   * API Reference</a></p>
   */
  class ServerDetail
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerDetail() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The S3 bucket name and Amazon S3 key name for anti-pattern report. </p>
     */
    inline const S3Object& GetAntipatternReportS3Object() const { return m_antipatternReportS3Object; }
    inline bool AntipatternReportS3ObjectHasBeenSet() const { return m_antipatternReportS3ObjectHasBeenSet; }
    template<typename AntipatternReportS3ObjectT = S3Object>
    void SetAntipatternReportS3Object(AntipatternReportS3ObjectT&& value) { m_antipatternReportS3ObjectHasBeenSet = true; m_antipatternReportS3Object = std::forward<AntipatternReportS3ObjectT>(value); }
    template<typename AntipatternReportS3ObjectT = S3Object>
    ServerDetail& WithAntipatternReportS3Object(AntipatternReportS3ObjectT&& value) { SetAntipatternReportS3Object(std::forward<AntipatternReportS3ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the anti-pattern report generation. </p>
     */
    inline AntipatternReportStatus GetAntipatternReportStatus() const { return m_antipatternReportStatus; }
    inline bool AntipatternReportStatusHasBeenSet() const { return m_antipatternReportStatusHasBeenSet; }
    inline void SetAntipatternReportStatus(AntipatternReportStatus value) { m_antipatternReportStatusHasBeenSet = true; m_antipatternReportStatus = value; }
    inline ServerDetail& WithAntipatternReportStatus(AntipatternReportStatus value) { SetAntipatternReportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A message about the status of the anti-pattern report generation. </p>
     */
    inline const Aws::String& GetAntipatternReportStatusMessage() const { return m_antipatternReportStatusMessage; }
    inline bool AntipatternReportStatusMessageHasBeenSet() const { return m_antipatternReportStatusMessageHasBeenSet; }
    template<typename AntipatternReportStatusMessageT = Aws::String>
    void SetAntipatternReportStatusMessage(AntipatternReportStatusMessageT&& value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage = std::forward<AntipatternReportStatusMessageT>(value); }
    template<typename AntipatternReportStatusMessageT = Aws::String>
    ServerDetail& WithAntipatternReportStatusMessage(AntipatternReportStatusMessageT&& value) { SetAntipatternReportStatusMessage(std::forward<AntipatternReportStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of strategy summaries. </p>
     */
    inline const Aws::Vector<StrategySummary>& GetApplicationComponentStrategySummary() const { return m_applicationComponentStrategySummary; }
    inline bool ApplicationComponentStrategySummaryHasBeenSet() const { return m_applicationComponentStrategySummaryHasBeenSet; }
    template<typename ApplicationComponentStrategySummaryT = Aws::Vector<StrategySummary>>
    void SetApplicationComponentStrategySummary(ApplicationComponentStrategySummaryT&& value) { m_applicationComponentStrategySummaryHasBeenSet = true; m_applicationComponentStrategySummary = std::forward<ApplicationComponentStrategySummaryT>(value); }
    template<typename ApplicationComponentStrategySummaryT = Aws::Vector<StrategySummary>>
    ServerDetail& WithApplicationComponentStrategySummary(ApplicationComponentStrategySummaryT&& value) { SetApplicationComponentStrategySummary(std::forward<ApplicationComponentStrategySummaryT>(value)); return *this;}
    template<typename ApplicationComponentStrategySummaryT = StrategySummary>
    ServerDetail& AddApplicationComponentStrategySummary(ApplicationComponentStrategySummaryT&& value) { m_applicationComponentStrategySummaryHasBeenSet = true; m_applicationComponentStrategySummary.emplace_back(std::forward<ApplicationComponentStrategySummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The status of assessment for the server. </p>
     */
    inline RunTimeAssessmentStatus GetDataCollectionStatus() const { return m_dataCollectionStatus; }
    inline bool DataCollectionStatusHasBeenSet() const { return m_dataCollectionStatusHasBeenSet; }
    inline void SetDataCollectionStatus(RunTimeAssessmentStatus value) { m_dataCollectionStatusHasBeenSet = true; m_dataCollectionStatus = value; }
    inline ServerDetail& WithDataCollectionStatus(RunTimeAssessmentStatus value) { SetDataCollectionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The server ID. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ServerDetail& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the server was assessed. </p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTimestamp() const { return m_lastAnalyzedTimestamp; }
    inline bool LastAnalyzedTimestampHasBeenSet() const { return m_lastAnalyzedTimestampHasBeenSet; }
    template<typename LastAnalyzedTimestampT = Aws::Utils::DateTime>
    void SetLastAnalyzedTimestamp(LastAnalyzedTimestampT&& value) { m_lastAnalyzedTimestampHasBeenSet = true; m_lastAnalyzedTimestamp = std::forward<LastAnalyzedTimestampT>(value); }
    template<typename LastAnalyzedTimestampT = Aws::Utils::DateTime>
    ServerDetail& WithLastAnalyzedTimestamp(LastAnalyzedTimestampT&& value) { SetLastAnalyzedTimestamp(std::forward<LastAnalyzedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of anti-pattern severity summaries. </p>
     */
    inline const Aws::Vector<AntipatternSeveritySummary>& GetListAntipatternSeveritySummary() const { return m_listAntipatternSeveritySummary; }
    inline bool ListAntipatternSeveritySummaryHasBeenSet() const { return m_listAntipatternSeveritySummaryHasBeenSet; }
    template<typename ListAntipatternSeveritySummaryT = Aws::Vector<AntipatternSeveritySummary>>
    void SetListAntipatternSeveritySummary(ListAntipatternSeveritySummaryT&& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary = std::forward<ListAntipatternSeveritySummaryT>(value); }
    template<typename ListAntipatternSeveritySummaryT = Aws::Vector<AntipatternSeveritySummary>>
    ServerDetail& WithListAntipatternSeveritySummary(ListAntipatternSeveritySummaryT&& value) { SetListAntipatternSeveritySummary(std::forward<ListAntipatternSeveritySummaryT>(value)); return *this;}
    template<typename ListAntipatternSeveritySummaryT = AntipatternSeveritySummary>
    ServerDetail& AddListAntipatternSeveritySummary(ListAntipatternSeveritySummaryT&& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary.emplace_back(std::forward<ListAntipatternSeveritySummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the server. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ServerDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of recommendations. </p>
     */
    inline const RecommendationSet& GetRecommendationSet() const { return m_recommendationSet; }
    inline bool RecommendationSetHasBeenSet() const { return m_recommendationSetHasBeenSet; }
    template<typename RecommendationSetT = RecommendationSet>
    void SetRecommendationSet(RecommendationSetT&& value) { m_recommendationSetHasBeenSet = true; m_recommendationSet = std::forward<RecommendationSetT>(value); }
    template<typename RecommendationSetT = RecommendationSet>
    ServerDetail& WithRecommendationSet(RecommendationSetT&& value) { SetRecommendationSet(std::forward<RecommendationSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error in server analysis.</p>
     */
    inline const ServerError& GetServerError() const { return m_serverError; }
    inline bool ServerErrorHasBeenSet() const { return m_serverErrorHasBeenSet; }
    template<typename ServerErrorT = ServerError>
    void SetServerError(ServerErrorT&& value) { m_serverErrorHasBeenSet = true; m_serverError = std::forward<ServerErrorT>(value); }
    template<typename ServerErrorT = ServerError>
    ServerDetail& WithServerError(ServerErrorT&& value) { SetServerError(std::forward<ServerErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of server. </p>
     */
    inline const Aws::String& GetServerType() const { return m_serverType; }
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }
    template<typename ServerTypeT = Aws::String>
    void SetServerType(ServerTypeT&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::forward<ServerTypeT>(value); }
    template<typename ServerTypeT = Aws::String>
    ServerDetail& WithServerType(ServerTypeT&& value) { SetServerType(std::forward<ServerTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A message about the status of data collection, which contains detailed
     * descriptions of any error messages. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ServerDetail& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> System information about the server. </p>
     */
    inline const SystemInfo& GetSystemInfo() const { return m_systemInfo; }
    inline bool SystemInfoHasBeenSet() const { return m_systemInfoHasBeenSet; }
    template<typename SystemInfoT = SystemInfo>
    void SetSystemInfo(SystemInfoT&& value) { m_systemInfoHasBeenSet = true; m_systemInfo = std::forward<SystemInfoT>(value); }
    template<typename SystemInfoT = SystemInfo>
    ServerDetail& WithSystemInfo(SystemInfoT&& value) { SetSystemInfo(std::forward<SystemInfoT>(value)); return *this;}
    ///@}
  private:

    S3Object m_antipatternReportS3Object;
    bool m_antipatternReportS3ObjectHasBeenSet = false;

    AntipatternReportStatus m_antipatternReportStatus{AntipatternReportStatus::NOT_SET};
    bool m_antipatternReportStatusHasBeenSet = false;

    Aws::String m_antipatternReportStatusMessage;
    bool m_antipatternReportStatusMessageHasBeenSet = false;

    Aws::Vector<StrategySummary> m_applicationComponentStrategySummary;
    bool m_applicationComponentStrategySummaryHasBeenSet = false;

    RunTimeAssessmentStatus m_dataCollectionStatus{RunTimeAssessmentStatus::NOT_SET};
    bool m_dataCollectionStatusHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastAnalyzedTimestamp{};
    bool m_lastAnalyzedTimestampHasBeenSet = false;

    Aws::Vector<AntipatternSeveritySummary> m_listAntipatternSeveritySummary;
    bool m_listAntipatternSeveritySummaryHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RecommendationSet m_recommendationSet;
    bool m_recommendationSetHasBeenSet = false;

    ServerError m_serverError;
    bool m_serverErrorHasBeenSet = false;

    Aws::String m_serverType;
    bool m_serverTypeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    SystemInfo m_systemInfo;
    bool m_systemInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
