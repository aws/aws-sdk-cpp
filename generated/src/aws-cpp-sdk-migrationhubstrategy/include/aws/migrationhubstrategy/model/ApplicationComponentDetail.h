/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/SrcCodeOrDbAnalysisStatus.h>
#include <aws/migrationhubstrategy/model/S3Object.h>
#include <aws/migrationhubstrategy/model/AntipatternReportStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/AppType.h>
#include <aws/migrationhubstrategy/model/AppUnitError.h>
#include <aws/migrationhubstrategy/model/DatabaseConfigDetail.h>
#include <aws/migrationhubstrategy/model/InclusionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/RecommendationSet.h>
#include <aws/migrationhubstrategy/model/ResourceSubType.h>
#include <aws/migrationhubstrategy/model/RuntimeAnalysisStatus.h>
#include <aws/migrationhubstrategy/model/AntipatternSeveritySummary.h>
#include <aws/migrationhubstrategy/model/Result.h>
#include <aws/migrationhubstrategy/model/SourceCodeRepository.h>
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
   * <p> Contains detailed information about an application component. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ApplicationComponentDetail">AWS
   * API Reference</a></p>
   */
  class ApplicationComponentDetail
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentDetail() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The status of analysis, if the application component has source code or an
     * associated database. </p>
     */
    inline SrcCodeOrDbAnalysisStatus GetAnalysisStatus() const { return m_analysisStatus; }
    inline bool AnalysisStatusHasBeenSet() const { return m_analysisStatusHasBeenSet; }
    inline void SetAnalysisStatus(SrcCodeOrDbAnalysisStatus value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = value; }
    inline ApplicationComponentDetail& WithAnalysisStatus(SrcCodeOrDbAnalysisStatus value) { SetAnalysisStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 bucket name and the Amazon S3 key name for the anti-pattern report.
     * </p>
     */
    inline const S3Object& GetAntipatternReportS3Object() const { return m_antipatternReportS3Object; }
    inline bool AntipatternReportS3ObjectHasBeenSet() const { return m_antipatternReportS3ObjectHasBeenSet; }
    template<typename AntipatternReportS3ObjectT = S3Object>
    void SetAntipatternReportS3Object(AntipatternReportS3ObjectT&& value) { m_antipatternReportS3ObjectHasBeenSet = true; m_antipatternReportS3Object = std::forward<AntipatternReportS3ObjectT>(value); }
    template<typename AntipatternReportS3ObjectT = S3Object>
    ApplicationComponentDetail& WithAntipatternReportS3Object(AntipatternReportS3ObjectT&& value) { SetAntipatternReportS3Object(std::forward<AntipatternReportS3ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the anti-pattern report generation.</p>
     */
    inline AntipatternReportStatus GetAntipatternReportStatus() const { return m_antipatternReportStatus; }
    inline bool AntipatternReportStatusHasBeenSet() const { return m_antipatternReportStatusHasBeenSet; }
    inline void SetAntipatternReportStatus(AntipatternReportStatus value) { m_antipatternReportStatusHasBeenSet = true; m_antipatternReportStatus = value; }
    inline ApplicationComponentDetail& WithAntipatternReportStatus(AntipatternReportStatus value) { SetAntipatternReportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status message for the anti-pattern. </p>
     */
    inline const Aws::String& GetAntipatternReportStatusMessage() const { return m_antipatternReportStatusMessage; }
    inline bool AntipatternReportStatusMessageHasBeenSet() const { return m_antipatternReportStatusMessageHasBeenSet; }
    template<typename AntipatternReportStatusMessageT = Aws::String>
    void SetAntipatternReportStatusMessage(AntipatternReportStatusMessageT&& value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage = std::forward<AntipatternReportStatusMessageT>(value); }
    template<typename AntipatternReportStatusMessageT = Aws::String>
    ApplicationComponentDetail& WithAntipatternReportStatusMessage(AntipatternReportStatusMessageT&& value) { SetAntipatternReportStatusMessage(std::forward<AntipatternReportStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of application component. </p>
     */
    inline AppType GetAppType() const { return m_appType; }
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }
    inline void SetAppType(AppType value) { m_appTypeHasBeenSet = true; m_appType = value; }
    inline ApplicationComponentDetail& WithAppType(AppType value) { SetAppType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error in the analysis of the source code or database.</p>
     */
    inline const AppUnitError& GetAppUnitError() const { return m_appUnitError; }
    inline bool AppUnitErrorHasBeenSet() const { return m_appUnitErrorHasBeenSet; }
    template<typename AppUnitErrorT = AppUnitError>
    void SetAppUnitError(AppUnitErrorT&& value) { m_appUnitErrorHasBeenSet = true; m_appUnitError = std::forward<AppUnitErrorT>(value); }
    template<typename AppUnitErrorT = AppUnitError>
    ApplicationComponentDetail& WithAppUnitError(AppUnitErrorT&& value) { SetAppUnitError(std::forward<AppUnitErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the server that the application component is running on. </p>
     */
    inline const Aws::String& GetAssociatedServerId() const { return m_associatedServerId; }
    inline bool AssociatedServerIdHasBeenSet() const { return m_associatedServerIdHasBeenSet; }
    template<typename AssociatedServerIdT = Aws::String>
    void SetAssociatedServerId(AssociatedServerIdT&& value) { m_associatedServerIdHasBeenSet = true; m_associatedServerId = std::forward<AssociatedServerIdT>(value); }
    template<typename AssociatedServerIdT = Aws::String>
    ApplicationComponentDetail& WithAssociatedServerId(AssociatedServerIdT&& value) { SetAssociatedServerId(std::forward<AssociatedServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration details for the database associated with the application
     * component. </p>
     */
    inline const DatabaseConfigDetail& GetDatabaseConfigDetail() const { return m_databaseConfigDetail; }
    inline bool DatabaseConfigDetailHasBeenSet() const { return m_databaseConfigDetailHasBeenSet; }
    template<typename DatabaseConfigDetailT = DatabaseConfigDetail>
    void SetDatabaseConfigDetail(DatabaseConfigDetailT&& value) { m_databaseConfigDetailHasBeenSet = true; m_databaseConfigDetail = std::forward<DatabaseConfigDetailT>(value); }
    template<typename DatabaseConfigDetailT = DatabaseConfigDetail>
    ApplicationComponentDetail& WithDatabaseConfigDetail(DatabaseConfigDetailT&& value) { SetDatabaseConfigDetail(std::forward<DatabaseConfigDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the application component. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ApplicationComponentDetail& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline InclusionStatus GetInclusionStatus() const { return m_inclusionStatus; }
    inline bool InclusionStatusHasBeenSet() const { return m_inclusionStatusHasBeenSet; }
    inline void SetInclusionStatus(InclusionStatus value) { m_inclusionStatusHasBeenSet = true; m_inclusionStatus = value; }
    inline ApplicationComponentDetail& WithInclusionStatus(InclusionStatus value) { SetInclusionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the application component was assessed. </p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTimestamp() const { return m_lastAnalyzedTimestamp; }
    inline bool LastAnalyzedTimestampHasBeenSet() const { return m_lastAnalyzedTimestampHasBeenSet; }
    template<typename LastAnalyzedTimestampT = Aws::Utils::DateTime>
    void SetLastAnalyzedTimestamp(LastAnalyzedTimestampT&& value) { m_lastAnalyzedTimestampHasBeenSet = true; m_lastAnalyzedTimestamp = std::forward<LastAnalyzedTimestampT>(value); }
    template<typename LastAnalyzedTimestampT = Aws::Utils::DateTime>
    ApplicationComponentDetail& WithLastAnalyzedTimestamp(LastAnalyzedTimestampT&& value) { SetLastAnalyzedTimestamp(std::forward<LastAnalyzedTimestampT>(value)); return *this;}
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
    ApplicationComponentDetail& WithListAntipatternSeveritySummary(ListAntipatternSeveritySummaryT&& value) { SetListAntipatternSeveritySummary(std::forward<ListAntipatternSeveritySummaryT>(value)); return *this;}
    template<typename ListAntipatternSeveritySummaryT = AntipatternSeveritySummary>
    ApplicationComponentDetail& AddListAntipatternSeveritySummary(ListAntipatternSeveritySummaryT&& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary.emplace_back(std::forward<ListAntipatternSeveritySummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Set to true if the application component is running on multiple servers.</p>
     */
    inline bool GetMoreServerAssociationExists() const { return m_moreServerAssociationExists; }
    inline bool MoreServerAssociationExistsHasBeenSet() const { return m_moreServerAssociationExistsHasBeenSet; }
    inline void SetMoreServerAssociationExists(bool value) { m_moreServerAssociationExistsHasBeenSet = true; m_moreServerAssociationExists = value; }
    inline ApplicationComponentDetail& WithMoreServerAssociationExists(bool value) { SetMoreServerAssociationExists(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of application component. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ApplicationComponentDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> OS driver. </p>
     */
    inline const Aws::String& GetOsDriver() const { return m_osDriver; }
    inline bool OsDriverHasBeenSet() const { return m_osDriverHasBeenSet; }
    template<typename OsDriverT = Aws::String>
    void SetOsDriver(OsDriverT&& value) { m_osDriverHasBeenSet = true; m_osDriver = std::forward<OsDriverT>(value); }
    template<typename OsDriverT = Aws::String>
    ApplicationComponentDetail& WithOsDriver(OsDriverT&& value) { SetOsDriver(std::forward<OsDriverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> OS version. </p>
     */
    inline const Aws::String& GetOsVersion() const { return m_osVersion; }
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }
    template<typename OsVersionT = Aws::String>
    void SetOsVersion(OsVersionT&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::forward<OsVersionT>(value); }
    template<typename OsVersionT = Aws::String>
    ApplicationComponentDetail& WithOsVersion(OsVersionT&& value) { SetOsVersion(std::forward<OsVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The top recommendation set for the application component. </p>
     */
    inline const RecommendationSet& GetRecommendationSet() const { return m_recommendationSet; }
    inline bool RecommendationSetHasBeenSet() const { return m_recommendationSetHasBeenSet; }
    template<typename RecommendationSetT = RecommendationSet>
    void SetRecommendationSet(RecommendationSetT&& value) { m_recommendationSetHasBeenSet = true; m_recommendationSet = std::forward<RecommendationSetT>(value); }
    template<typename RecommendationSetT = RecommendationSet>
    ApplicationComponentDetail& WithRecommendationSet(RecommendationSetT&& value) { SetRecommendationSet(std::forward<RecommendationSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The application component subtype.</p>
     */
    inline ResourceSubType GetResourceSubType() const { return m_resourceSubType; }
    inline bool ResourceSubTypeHasBeenSet() const { return m_resourceSubTypeHasBeenSet; }
    inline void SetResourceSubType(ResourceSubType value) { m_resourceSubTypeHasBeenSet = true; m_resourceSubType = value; }
    inline ApplicationComponentDetail& WithResourceSubType(ResourceSubType value) { SetResourceSubType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the analysis results.</p>
     */
    inline const Aws::Vector<Result>& GetResultList() const { return m_resultList; }
    inline bool ResultListHasBeenSet() const { return m_resultListHasBeenSet; }
    template<typename ResultListT = Aws::Vector<Result>>
    void SetResultList(ResultListT&& value) { m_resultListHasBeenSet = true; m_resultList = std::forward<ResultListT>(value); }
    template<typename ResultListT = Aws::Vector<Result>>
    ApplicationComponentDetail& WithResultList(ResultListT&& value) { SetResultList(std::forward<ResultListT>(value)); return *this;}
    template<typename ResultListT = Result>
    ApplicationComponentDetail& AddResultList(ResultListT&& value) { m_resultListHasBeenSet = true; m_resultList.emplace_back(std::forward<ResultListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the application unit.</p>
     */
    inline RuntimeAnalysisStatus GetRuntimeStatus() const { return m_runtimeStatus; }
    inline bool RuntimeStatusHasBeenSet() const { return m_runtimeStatusHasBeenSet; }
    inline void SetRuntimeStatus(RuntimeAnalysisStatus value) { m_runtimeStatusHasBeenSet = true; m_runtimeStatus = value; }
    inline ApplicationComponentDetail& WithRuntimeStatus(RuntimeAnalysisStatus value) { SetRuntimeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the application unit.</p>
     */
    inline const Aws::String& GetRuntimeStatusMessage() const { return m_runtimeStatusMessage; }
    inline bool RuntimeStatusMessageHasBeenSet() const { return m_runtimeStatusMessageHasBeenSet; }
    template<typename RuntimeStatusMessageT = Aws::String>
    void SetRuntimeStatusMessage(RuntimeStatusMessageT&& value) { m_runtimeStatusMessageHasBeenSet = true; m_runtimeStatusMessage = std::forward<RuntimeStatusMessageT>(value); }
    template<typename RuntimeStatusMessageT = Aws::String>
    ApplicationComponentDetail& WithRuntimeStatusMessage(RuntimeStatusMessageT&& value) { SetRuntimeStatusMessage(std::forward<RuntimeStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about the source code repository associated with the application
     * component. </p>
     */
    inline const Aws::Vector<SourceCodeRepository>& GetSourceCodeRepositories() const { return m_sourceCodeRepositories; }
    inline bool SourceCodeRepositoriesHasBeenSet() const { return m_sourceCodeRepositoriesHasBeenSet; }
    template<typename SourceCodeRepositoriesT = Aws::Vector<SourceCodeRepository>>
    void SetSourceCodeRepositories(SourceCodeRepositoriesT&& value) { m_sourceCodeRepositoriesHasBeenSet = true; m_sourceCodeRepositories = std::forward<SourceCodeRepositoriesT>(value); }
    template<typename SourceCodeRepositoriesT = Aws::Vector<SourceCodeRepository>>
    ApplicationComponentDetail& WithSourceCodeRepositories(SourceCodeRepositoriesT&& value) { SetSourceCodeRepositories(std::forward<SourceCodeRepositoriesT>(value)); return *this;}
    template<typename SourceCodeRepositoriesT = SourceCodeRepository>
    ApplicationComponentDetail& AddSourceCodeRepositories(SourceCodeRepositoriesT&& value) { m_sourceCodeRepositoriesHasBeenSet = true; m_sourceCodeRepositories.emplace_back(std::forward<SourceCodeRepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A detailed description of the analysis status and any failure message. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ApplicationComponentDetail& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    SrcCodeOrDbAnalysisStatus m_analysisStatus{SrcCodeOrDbAnalysisStatus::NOT_SET};
    bool m_analysisStatusHasBeenSet = false;

    S3Object m_antipatternReportS3Object;
    bool m_antipatternReportS3ObjectHasBeenSet = false;

    AntipatternReportStatus m_antipatternReportStatus{AntipatternReportStatus::NOT_SET};
    bool m_antipatternReportStatusHasBeenSet = false;

    Aws::String m_antipatternReportStatusMessage;
    bool m_antipatternReportStatusMessageHasBeenSet = false;

    AppType m_appType{AppType::NOT_SET};
    bool m_appTypeHasBeenSet = false;

    AppUnitError m_appUnitError;
    bool m_appUnitErrorHasBeenSet = false;

    Aws::String m_associatedServerId;
    bool m_associatedServerIdHasBeenSet = false;

    DatabaseConfigDetail m_databaseConfigDetail;
    bool m_databaseConfigDetailHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    InclusionStatus m_inclusionStatus{InclusionStatus::NOT_SET};
    bool m_inclusionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastAnalyzedTimestamp{};
    bool m_lastAnalyzedTimestampHasBeenSet = false;

    Aws::Vector<AntipatternSeveritySummary> m_listAntipatternSeveritySummary;
    bool m_listAntipatternSeveritySummaryHasBeenSet = false;

    bool m_moreServerAssociationExists{false};
    bool m_moreServerAssociationExistsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_osDriver;
    bool m_osDriverHasBeenSet = false;

    Aws::String m_osVersion;
    bool m_osVersionHasBeenSet = false;

    RecommendationSet m_recommendationSet;
    bool m_recommendationSetHasBeenSet = false;

    ResourceSubType m_resourceSubType{ResourceSubType::NOT_SET};
    bool m_resourceSubTypeHasBeenSet = false;

    Aws::Vector<Result> m_resultList;
    bool m_resultListHasBeenSet = false;

    RuntimeAnalysisStatus m_runtimeStatus{RuntimeAnalysisStatus::NOT_SET};
    bool m_runtimeStatusHasBeenSet = false;

    Aws::String m_runtimeStatusMessage;
    bool m_runtimeStatusMessageHasBeenSet = false;

    Aws::Vector<SourceCodeRepository> m_sourceCodeRepositories;
    bool m_sourceCodeRepositoriesHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
