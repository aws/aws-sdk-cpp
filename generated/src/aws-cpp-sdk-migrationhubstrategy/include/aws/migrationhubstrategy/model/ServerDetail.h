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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerDetail();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The S3 bucket name and Amazon S3 key name for anti-pattern report. </p>
     */
    inline const S3Object& GetAntipatternReportS3Object() const{ return m_antipatternReportS3Object; }
    inline bool AntipatternReportS3ObjectHasBeenSet() const { return m_antipatternReportS3ObjectHasBeenSet; }
    inline void SetAntipatternReportS3Object(const S3Object& value) { m_antipatternReportS3ObjectHasBeenSet = true; m_antipatternReportS3Object = value; }
    inline void SetAntipatternReportS3Object(S3Object&& value) { m_antipatternReportS3ObjectHasBeenSet = true; m_antipatternReportS3Object = std::move(value); }
    inline ServerDetail& WithAntipatternReportS3Object(const S3Object& value) { SetAntipatternReportS3Object(value); return *this;}
    inline ServerDetail& WithAntipatternReportS3Object(S3Object&& value) { SetAntipatternReportS3Object(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the anti-pattern report generation. </p>
     */
    inline const AntipatternReportStatus& GetAntipatternReportStatus() const{ return m_antipatternReportStatus; }
    inline bool AntipatternReportStatusHasBeenSet() const { return m_antipatternReportStatusHasBeenSet; }
    inline void SetAntipatternReportStatus(const AntipatternReportStatus& value) { m_antipatternReportStatusHasBeenSet = true; m_antipatternReportStatus = value; }
    inline void SetAntipatternReportStatus(AntipatternReportStatus&& value) { m_antipatternReportStatusHasBeenSet = true; m_antipatternReportStatus = std::move(value); }
    inline ServerDetail& WithAntipatternReportStatus(const AntipatternReportStatus& value) { SetAntipatternReportStatus(value); return *this;}
    inline ServerDetail& WithAntipatternReportStatus(AntipatternReportStatus&& value) { SetAntipatternReportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A message about the status of the anti-pattern report generation. </p>
     */
    inline const Aws::String& GetAntipatternReportStatusMessage() const{ return m_antipatternReportStatusMessage; }
    inline bool AntipatternReportStatusMessageHasBeenSet() const { return m_antipatternReportStatusMessageHasBeenSet; }
    inline void SetAntipatternReportStatusMessage(const Aws::String& value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage = value; }
    inline void SetAntipatternReportStatusMessage(Aws::String&& value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage = std::move(value); }
    inline void SetAntipatternReportStatusMessage(const char* value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage.assign(value); }
    inline ServerDetail& WithAntipatternReportStatusMessage(const Aws::String& value) { SetAntipatternReportStatusMessage(value); return *this;}
    inline ServerDetail& WithAntipatternReportStatusMessage(Aws::String&& value) { SetAntipatternReportStatusMessage(std::move(value)); return *this;}
    inline ServerDetail& WithAntipatternReportStatusMessage(const char* value) { SetAntipatternReportStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of strategy summaries. </p>
     */
    inline const Aws::Vector<StrategySummary>& GetApplicationComponentStrategySummary() const{ return m_applicationComponentStrategySummary; }
    inline bool ApplicationComponentStrategySummaryHasBeenSet() const { return m_applicationComponentStrategySummaryHasBeenSet; }
    inline void SetApplicationComponentStrategySummary(const Aws::Vector<StrategySummary>& value) { m_applicationComponentStrategySummaryHasBeenSet = true; m_applicationComponentStrategySummary = value; }
    inline void SetApplicationComponentStrategySummary(Aws::Vector<StrategySummary>&& value) { m_applicationComponentStrategySummaryHasBeenSet = true; m_applicationComponentStrategySummary = std::move(value); }
    inline ServerDetail& WithApplicationComponentStrategySummary(const Aws::Vector<StrategySummary>& value) { SetApplicationComponentStrategySummary(value); return *this;}
    inline ServerDetail& WithApplicationComponentStrategySummary(Aws::Vector<StrategySummary>&& value) { SetApplicationComponentStrategySummary(std::move(value)); return *this;}
    inline ServerDetail& AddApplicationComponentStrategySummary(const StrategySummary& value) { m_applicationComponentStrategySummaryHasBeenSet = true; m_applicationComponentStrategySummary.push_back(value); return *this; }
    inline ServerDetail& AddApplicationComponentStrategySummary(StrategySummary&& value) { m_applicationComponentStrategySummaryHasBeenSet = true; m_applicationComponentStrategySummary.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The status of assessment for the server. </p>
     */
    inline const RunTimeAssessmentStatus& GetDataCollectionStatus() const{ return m_dataCollectionStatus; }
    inline bool DataCollectionStatusHasBeenSet() const { return m_dataCollectionStatusHasBeenSet; }
    inline void SetDataCollectionStatus(const RunTimeAssessmentStatus& value) { m_dataCollectionStatusHasBeenSet = true; m_dataCollectionStatus = value; }
    inline void SetDataCollectionStatus(RunTimeAssessmentStatus&& value) { m_dataCollectionStatusHasBeenSet = true; m_dataCollectionStatus = std::move(value); }
    inline ServerDetail& WithDataCollectionStatus(const RunTimeAssessmentStatus& value) { SetDataCollectionStatus(value); return *this;}
    inline ServerDetail& WithDataCollectionStatus(RunTimeAssessmentStatus&& value) { SetDataCollectionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The server ID. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ServerDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ServerDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ServerDetail& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the server was assessed. </p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTimestamp() const{ return m_lastAnalyzedTimestamp; }
    inline bool LastAnalyzedTimestampHasBeenSet() const { return m_lastAnalyzedTimestampHasBeenSet; }
    inline void SetLastAnalyzedTimestamp(const Aws::Utils::DateTime& value) { m_lastAnalyzedTimestampHasBeenSet = true; m_lastAnalyzedTimestamp = value; }
    inline void SetLastAnalyzedTimestamp(Aws::Utils::DateTime&& value) { m_lastAnalyzedTimestampHasBeenSet = true; m_lastAnalyzedTimestamp = std::move(value); }
    inline ServerDetail& WithLastAnalyzedTimestamp(const Aws::Utils::DateTime& value) { SetLastAnalyzedTimestamp(value); return *this;}
    inline ServerDetail& WithLastAnalyzedTimestamp(Aws::Utils::DateTime&& value) { SetLastAnalyzedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of anti-pattern severity summaries. </p>
     */
    inline const Aws::Vector<AntipatternSeveritySummary>& GetListAntipatternSeveritySummary() const{ return m_listAntipatternSeveritySummary; }
    inline bool ListAntipatternSeveritySummaryHasBeenSet() const { return m_listAntipatternSeveritySummaryHasBeenSet; }
    inline void SetListAntipatternSeveritySummary(const Aws::Vector<AntipatternSeveritySummary>& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary = value; }
    inline void SetListAntipatternSeveritySummary(Aws::Vector<AntipatternSeveritySummary>&& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary = std::move(value); }
    inline ServerDetail& WithListAntipatternSeveritySummary(const Aws::Vector<AntipatternSeveritySummary>& value) { SetListAntipatternSeveritySummary(value); return *this;}
    inline ServerDetail& WithListAntipatternSeveritySummary(Aws::Vector<AntipatternSeveritySummary>&& value) { SetListAntipatternSeveritySummary(std::move(value)); return *this;}
    inline ServerDetail& AddListAntipatternSeveritySummary(const AntipatternSeveritySummary& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary.push_back(value); return *this; }
    inline ServerDetail& AddListAntipatternSeveritySummary(AntipatternSeveritySummary&& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the server. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServerDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServerDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServerDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of recommendations. </p>
     */
    inline const RecommendationSet& GetRecommendationSet() const{ return m_recommendationSet; }
    inline bool RecommendationSetHasBeenSet() const { return m_recommendationSetHasBeenSet; }
    inline void SetRecommendationSet(const RecommendationSet& value) { m_recommendationSetHasBeenSet = true; m_recommendationSet = value; }
    inline void SetRecommendationSet(RecommendationSet&& value) { m_recommendationSetHasBeenSet = true; m_recommendationSet = std::move(value); }
    inline ServerDetail& WithRecommendationSet(const RecommendationSet& value) { SetRecommendationSet(value); return *this;}
    inline ServerDetail& WithRecommendationSet(RecommendationSet&& value) { SetRecommendationSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error in server analysis.</p>
     */
    inline const ServerError& GetServerError() const{ return m_serverError; }
    inline bool ServerErrorHasBeenSet() const { return m_serverErrorHasBeenSet; }
    inline void SetServerError(const ServerError& value) { m_serverErrorHasBeenSet = true; m_serverError = value; }
    inline void SetServerError(ServerError&& value) { m_serverErrorHasBeenSet = true; m_serverError = std::move(value); }
    inline ServerDetail& WithServerError(const ServerError& value) { SetServerError(value); return *this;}
    inline ServerDetail& WithServerError(ServerError&& value) { SetServerError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of server. </p>
     */
    inline const Aws::String& GetServerType() const{ return m_serverType; }
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }
    inline void SetServerType(const Aws::String& value) { m_serverTypeHasBeenSet = true; m_serverType = value; }
    inline void SetServerType(Aws::String&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::move(value); }
    inline void SetServerType(const char* value) { m_serverTypeHasBeenSet = true; m_serverType.assign(value); }
    inline ServerDetail& WithServerType(const Aws::String& value) { SetServerType(value); return *this;}
    inline ServerDetail& WithServerType(Aws::String&& value) { SetServerType(std::move(value)); return *this;}
    inline ServerDetail& WithServerType(const char* value) { SetServerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A message about the status of data collection, which contains detailed
     * descriptions of any error messages. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ServerDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ServerDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ServerDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> System information about the server. </p>
     */
    inline const SystemInfo& GetSystemInfo() const{ return m_systemInfo; }
    inline bool SystemInfoHasBeenSet() const { return m_systemInfoHasBeenSet; }
    inline void SetSystemInfo(const SystemInfo& value) { m_systemInfoHasBeenSet = true; m_systemInfo = value; }
    inline void SetSystemInfo(SystemInfo&& value) { m_systemInfoHasBeenSet = true; m_systemInfo = std::move(value); }
    inline ServerDetail& WithSystemInfo(const SystemInfo& value) { SetSystemInfo(value); return *this;}
    inline ServerDetail& WithSystemInfo(SystemInfo&& value) { SetSystemInfo(std::move(value)); return *this;}
    ///@}
  private:

    S3Object m_antipatternReportS3Object;
    bool m_antipatternReportS3ObjectHasBeenSet = false;

    AntipatternReportStatus m_antipatternReportStatus;
    bool m_antipatternReportStatusHasBeenSet = false;

    Aws::String m_antipatternReportStatusMessage;
    bool m_antipatternReportStatusMessageHasBeenSet = false;

    Aws::Vector<StrategySummary> m_applicationComponentStrategySummary;
    bool m_applicationComponentStrategySummaryHasBeenSet = false;

    RunTimeAssessmentStatus m_dataCollectionStatus;
    bool m_dataCollectionStatusHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastAnalyzedTimestamp;
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
