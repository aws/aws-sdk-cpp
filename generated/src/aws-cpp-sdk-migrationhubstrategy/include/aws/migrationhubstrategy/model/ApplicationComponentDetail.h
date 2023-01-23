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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentDetail();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The status of analysis, if the application component has source code or an
     * associated database. </p>
     */
    inline const SrcCodeOrDbAnalysisStatus& GetAnalysisStatus() const{ return m_analysisStatus; }

    /**
     * <p> The status of analysis, if the application component has source code or an
     * associated database. </p>
     */
    inline bool AnalysisStatusHasBeenSet() const { return m_analysisStatusHasBeenSet; }

    /**
     * <p> The status of analysis, if the application component has source code or an
     * associated database. </p>
     */
    inline void SetAnalysisStatus(const SrcCodeOrDbAnalysisStatus& value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = value; }

    /**
     * <p> The status of analysis, if the application component has source code or an
     * associated database. </p>
     */
    inline void SetAnalysisStatus(SrcCodeOrDbAnalysisStatus&& value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = std::move(value); }

    /**
     * <p> The status of analysis, if the application component has source code or an
     * associated database. </p>
     */
    inline ApplicationComponentDetail& WithAnalysisStatus(const SrcCodeOrDbAnalysisStatus& value) { SetAnalysisStatus(value); return *this;}

    /**
     * <p> The status of analysis, if the application component has source code or an
     * associated database. </p>
     */
    inline ApplicationComponentDetail& WithAnalysisStatus(SrcCodeOrDbAnalysisStatus&& value) { SetAnalysisStatus(std::move(value)); return *this;}


    /**
     * <p> The S3 bucket name and the Amazon S3 key name for the anti-pattern report.
     * </p>
     */
    inline const S3Object& GetAntipatternReportS3Object() const{ return m_antipatternReportS3Object; }

    /**
     * <p> The S3 bucket name and the Amazon S3 key name for the anti-pattern report.
     * </p>
     */
    inline bool AntipatternReportS3ObjectHasBeenSet() const { return m_antipatternReportS3ObjectHasBeenSet; }

    /**
     * <p> The S3 bucket name and the Amazon S3 key name for the anti-pattern report.
     * </p>
     */
    inline void SetAntipatternReportS3Object(const S3Object& value) { m_antipatternReportS3ObjectHasBeenSet = true; m_antipatternReportS3Object = value; }

    /**
     * <p> The S3 bucket name and the Amazon S3 key name for the anti-pattern report.
     * </p>
     */
    inline void SetAntipatternReportS3Object(S3Object&& value) { m_antipatternReportS3ObjectHasBeenSet = true; m_antipatternReportS3Object = std::move(value); }

    /**
     * <p> The S3 bucket name and the Amazon S3 key name for the anti-pattern report.
     * </p>
     */
    inline ApplicationComponentDetail& WithAntipatternReportS3Object(const S3Object& value) { SetAntipatternReportS3Object(value); return *this;}

    /**
     * <p> The S3 bucket name and the Amazon S3 key name for the anti-pattern report.
     * </p>
     */
    inline ApplicationComponentDetail& WithAntipatternReportS3Object(S3Object&& value) { SetAntipatternReportS3Object(std::move(value)); return *this;}


    /**
     * <p> The status of the anti-pattern report generation.</p>
     */
    inline const AntipatternReportStatus& GetAntipatternReportStatus() const{ return m_antipatternReportStatus; }

    /**
     * <p> The status of the anti-pattern report generation.</p>
     */
    inline bool AntipatternReportStatusHasBeenSet() const { return m_antipatternReportStatusHasBeenSet; }

    /**
     * <p> The status of the anti-pattern report generation.</p>
     */
    inline void SetAntipatternReportStatus(const AntipatternReportStatus& value) { m_antipatternReportStatusHasBeenSet = true; m_antipatternReportStatus = value; }

    /**
     * <p> The status of the anti-pattern report generation.</p>
     */
    inline void SetAntipatternReportStatus(AntipatternReportStatus&& value) { m_antipatternReportStatusHasBeenSet = true; m_antipatternReportStatus = std::move(value); }

    /**
     * <p> The status of the anti-pattern report generation.</p>
     */
    inline ApplicationComponentDetail& WithAntipatternReportStatus(const AntipatternReportStatus& value) { SetAntipatternReportStatus(value); return *this;}

    /**
     * <p> The status of the anti-pattern report generation.</p>
     */
    inline ApplicationComponentDetail& WithAntipatternReportStatus(AntipatternReportStatus&& value) { SetAntipatternReportStatus(std::move(value)); return *this;}


    /**
     * <p> The status message for the anti-pattern. </p>
     */
    inline const Aws::String& GetAntipatternReportStatusMessage() const{ return m_antipatternReportStatusMessage; }

    /**
     * <p> The status message for the anti-pattern. </p>
     */
    inline bool AntipatternReportStatusMessageHasBeenSet() const { return m_antipatternReportStatusMessageHasBeenSet; }

    /**
     * <p> The status message for the anti-pattern. </p>
     */
    inline void SetAntipatternReportStatusMessage(const Aws::String& value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage = value; }

    /**
     * <p> The status message for the anti-pattern. </p>
     */
    inline void SetAntipatternReportStatusMessage(Aws::String&& value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage = std::move(value); }

    /**
     * <p> The status message for the anti-pattern. </p>
     */
    inline void SetAntipatternReportStatusMessage(const char* value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage.assign(value); }

    /**
     * <p> The status message for the anti-pattern. </p>
     */
    inline ApplicationComponentDetail& WithAntipatternReportStatusMessage(const Aws::String& value) { SetAntipatternReportStatusMessage(value); return *this;}

    /**
     * <p> The status message for the anti-pattern. </p>
     */
    inline ApplicationComponentDetail& WithAntipatternReportStatusMessage(Aws::String&& value) { SetAntipatternReportStatusMessage(std::move(value)); return *this;}

    /**
     * <p> The status message for the anti-pattern. </p>
     */
    inline ApplicationComponentDetail& WithAntipatternReportStatusMessage(const char* value) { SetAntipatternReportStatusMessage(value); return *this;}


    /**
     * <p> The type of application component. </p>
     */
    inline const AppType& GetAppType() const{ return m_appType; }

    /**
     * <p> The type of application component. </p>
     */
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }

    /**
     * <p> The type of application component. </p>
     */
    inline void SetAppType(const AppType& value) { m_appTypeHasBeenSet = true; m_appType = value; }

    /**
     * <p> The type of application component. </p>
     */
    inline void SetAppType(AppType&& value) { m_appTypeHasBeenSet = true; m_appType = std::move(value); }

    /**
     * <p> The type of application component. </p>
     */
    inline ApplicationComponentDetail& WithAppType(const AppType& value) { SetAppType(value); return *this;}

    /**
     * <p> The type of application component. </p>
     */
    inline ApplicationComponentDetail& WithAppType(AppType&& value) { SetAppType(std::move(value)); return *this;}


    /**
     * <p>The error in the analysis of the source code or database.</p>
     */
    inline const AppUnitError& GetAppUnitError() const{ return m_appUnitError; }

    /**
     * <p>The error in the analysis of the source code or database.</p>
     */
    inline bool AppUnitErrorHasBeenSet() const { return m_appUnitErrorHasBeenSet; }

    /**
     * <p>The error in the analysis of the source code or database.</p>
     */
    inline void SetAppUnitError(const AppUnitError& value) { m_appUnitErrorHasBeenSet = true; m_appUnitError = value; }

    /**
     * <p>The error in the analysis of the source code or database.</p>
     */
    inline void SetAppUnitError(AppUnitError&& value) { m_appUnitErrorHasBeenSet = true; m_appUnitError = std::move(value); }

    /**
     * <p>The error in the analysis of the source code or database.</p>
     */
    inline ApplicationComponentDetail& WithAppUnitError(const AppUnitError& value) { SetAppUnitError(value); return *this;}

    /**
     * <p>The error in the analysis of the source code or database.</p>
     */
    inline ApplicationComponentDetail& WithAppUnitError(AppUnitError&& value) { SetAppUnitError(std::move(value)); return *this;}


    /**
     * <p> The ID of the server that the application component is running on. </p>
     */
    inline const Aws::String& GetAssociatedServerId() const{ return m_associatedServerId; }

    /**
     * <p> The ID of the server that the application component is running on. </p>
     */
    inline bool AssociatedServerIdHasBeenSet() const { return m_associatedServerIdHasBeenSet; }

    /**
     * <p> The ID of the server that the application component is running on. </p>
     */
    inline void SetAssociatedServerId(const Aws::String& value) { m_associatedServerIdHasBeenSet = true; m_associatedServerId = value; }

    /**
     * <p> The ID of the server that the application component is running on. </p>
     */
    inline void SetAssociatedServerId(Aws::String&& value) { m_associatedServerIdHasBeenSet = true; m_associatedServerId = std::move(value); }

    /**
     * <p> The ID of the server that the application component is running on. </p>
     */
    inline void SetAssociatedServerId(const char* value) { m_associatedServerIdHasBeenSet = true; m_associatedServerId.assign(value); }

    /**
     * <p> The ID of the server that the application component is running on. </p>
     */
    inline ApplicationComponentDetail& WithAssociatedServerId(const Aws::String& value) { SetAssociatedServerId(value); return *this;}

    /**
     * <p> The ID of the server that the application component is running on. </p>
     */
    inline ApplicationComponentDetail& WithAssociatedServerId(Aws::String&& value) { SetAssociatedServerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the server that the application component is running on. </p>
     */
    inline ApplicationComponentDetail& WithAssociatedServerId(const char* value) { SetAssociatedServerId(value); return *this;}


    /**
     * <p> Configuration details for the database associated with the application
     * component. </p>
     */
    inline const DatabaseConfigDetail& GetDatabaseConfigDetail() const{ return m_databaseConfigDetail; }

    /**
     * <p> Configuration details for the database associated with the application
     * component. </p>
     */
    inline bool DatabaseConfigDetailHasBeenSet() const { return m_databaseConfigDetailHasBeenSet; }

    /**
     * <p> Configuration details for the database associated with the application
     * component. </p>
     */
    inline void SetDatabaseConfigDetail(const DatabaseConfigDetail& value) { m_databaseConfigDetailHasBeenSet = true; m_databaseConfigDetail = value; }

    /**
     * <p> Configuration details for the database associated with the application
     * component. </p>
     */
    inline void SetDatabaseConfigDetail(DatabaseConfigDetail&& value) { m_databaseConfigDetailHasBeenSet = true; m_databaseConfigDetail = std::move(value); }

    /**
     * <p> Configuration details for the database associated with the application
     * component. </p>
     */
    inline ApplicationComponentDetail& WithDatabaseConfigDetail(const DatabaseConfigDetail& value) { SetDatabaseConfigDetail(value); return *this;}

    /**
     * <p> Configuration details for the database associated with the application
     * component. </p>
     */
    inline ApplicationComponentDetail& WithDatabaseConfigDetail(DatabaseConfigDetail&& value) { SetDatabaseConfigDetail(std::move(value)); return *this;}


    /**
     * <p> The ID of the application component. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The ID of the application component. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The ID of the application component. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The ID of the application component. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The ID of the application component. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The ID of the application component. </p>
     */
    inline ApplicationComponentDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The ID of the application component. </p>
     */
    inline ApplicationComponentDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the application component. </p>
     */
    inline ApplicationComponentDetail& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline const InclusionStatus& GetInclusionStatus() const{ return m_inclusionStatus; }

    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline bool InclusionStatusHasBeenSet() const { return m_inclusionStatusHasBeenSet; }

    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline void SetInclusionStatus(const InclusionStatus& value) { m_inclusionStatusHasBeenSet = true; m_inclusionStatus = value; }

    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline void SetInclusionStatus(InclusionStatus&& value) { m_inclusionStatusHasBeenSet = true; m_inclusionStatus = std::move(value); }

    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline ApplicationComponentDetail& WithInclusionStatus(const InclusionStatus& value) { SetInclusionStatus(value); return *this;}

    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline ApplicationComponentDetail& WithInclusionStatus(InclusionStatus&& value) { SetInclusionStatus(std::move(value)); return *this;}


    /**
     * <p> The timestamp of when the application component was assessed. </p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTimestamp() const{ return m_lastAnalyzedTimestamp; }

    /**
     * <p> The timestamp of when the application component was assessed. </p>
     */
    inline bool LastAnalyzedTimestampHasBeenSet() const { return m_lastAnalyzedTimestampHasBeenSet; }

    /**
     * <p> The timestamp of when the application component was assessed. </p>
     */
    inline void SetLastAnalyzedTimestamp(const Aws::Utils::DateTime& value) { m_lastAnalyzedTimestampHasBeenSet = true; m_lastAnalyzedTimestamp = value; }

    /**
     * <p> The timestamp of when the application component was assessed. </p>
     */
    inline void SetLastAnalyzedTimestamp(Aws::Utils::DateTime&& value) { m_lastAnalyzedTimestampHasBeenSet = true; m_lastAnalyzedTimestamp = std::move(value); }

    /**
     * <p> The timestamp of when the application component was assessed. </p>
     */
    inline ApplicationComponentDetail& WithLastAnalyzedTimestamp(const Aws::Utils::DateTime& value) { SetLastAnalyzedTimestamp(value); return *this;}

    /**
     * <p> The timestamp of when the application component was assessed. </p>
     */
    inline ApplicationComponentDetail& WithLastAnalyzedTimestamp(Aws::Utils::DateTime&& value) { SetLastAnalyzedTimestamp(std::move(value)); return *this;}


    /**
     * <p> A list of anti-pattern severity summaries. </p>
     */
    inline const Aws::Vector<AntipatternSeveritySummary>& GetListAntipatternSeveritySummary() const{ return m_listAntipatternSeveritySummary; }

    /**
     * <p> A list of anti-pattern severity summaries. </p>
     */
    inline bool ListAntipatternSeveritySummaryHasBeenSet() const { return m_listAntipatternSeveritySummaryHasBeenSet; }

    /**
     * <p> A list of anti-pattern severity summaries. </p>
     */
    inline void SetListAntipatternSeveritySummary(const Aws::Vector<AntipatternSeveritySummary>& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary = value; }

    /**
     * <p> A list of anti-pattern severity summaries. </p>
     */
    inline void SetListAntipatternSeveritySummary(Aws::Vector<AntipatternSeveritySummary>&& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary = std::move(value); }

    /**
     * <p> A list of anti-pattern severity summaries. </p>
     */
    inline ApplicationComponentDetail& WithListAntipatternSeveritySummary(const Aws::Vector<AntipatternSeveritySummary>& value) { SetListAntipatternSeveritySummary(value); return *this;}

    /**
     * <p> A list of anti-pattern severity summaries. </p>
     */
    inline ApplicationComponentDetail& WithListAntipatternSeveritySummary(Aws::Vector<AntipatternSeveritySummary>&& value) { SetListAntipatternSeveritySummary(std::move(value)); return *this;}

    /**
     * <p> A list of anti-pattern severity summaries. </p>
     */
    inline ApplicationComponentDetail& AddListAntipatternSeveritySummary(const AntipatternSeveritySummary& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary.push_back(value); return *this; }

    /**
     * <p> A list of anti-pattern severity summaries. </p>
     */
    inline ApplicationComponentDetail& AddListAntipatternSeveritySummary(AntipatternSeveritySummary&& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary.push_back(std::move(value)); return *this; }


    /**
     * <p> Set to true if the application component is running on multiple servers.</p>
     */
    inline bool GetMoreServerAssociationExists() const{ return m_moreServerAssociationExists; }

    /**
     * <p> Set to true if the application component is running on multiple servers.</p>
     */
    inline bool MoreServerAssociationExistsHasBeenSet() const { return m_moreServerAssociationExistsHasBeenSet; }

    /**
     * <p> Set to true if the application component is running on multiple servers.</p>
     */
    inline void SetMoreServerAssociationExists(bool value) { m_moreServerAssociationExistsHasBeenSet = true; m_moreServerAssociationExists = value; }

    /**
     * <p> Set to true if the application component is running on multiple servers.</p>
     */
    inline ApplicationComponentDetail& WithMoreServerAssociationExists(bool value) { SetMoreServerAssociationExists(value); return *this;}


    /**
     * <p> The name of application component. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of application component. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of application component. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of application component. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of application component. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of application component. </p>
     */
    inline ApplicationComponentDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of application component. </p>
     */
    inline ApplicationComponentDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of application component. </p>
     */
    inline ApplicationComponentDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> OS driver. </p>
     */
    inline const Aws::String& GetOsDriver() const{ return m_osDriver; }

    /**
     * <p> OS driver. </p>
     */
    inline bool OsDriverHasBeenSet() const { return m_osDriverHasBeenSet; }

    /**
     * <p> OS driver. </p>
     */
    inline void SetOsDriver(const Aws::String& value) { m_osDriverHasBeenSet = true; m_osDriver = value; }

    /**
     * <p> OS driver. </p>
     */
    inline void SetOsDriver(Aws::String&& value) { m_osDriverHasBeenSet = true; m_osDriver = std::move(value); }

    /**
     * <p> OS driver. </p>
     */
    inline void SetOsDriver(const char* value) { m_osDriverHasBeenSet = true; m_osDriver.assign(value); }

    /**
     * <p> OS driver. </p>
     */
    inline ApplicationComponentDetail& WithOsDriver(const Aws::String& value) { SetOsDriver(value); return *this;}

    /**
     * <p> OS driver. </p>
     */
    inline ApplicationComponentDetail& WithOsDriver(Aws::String&& value) { SetOsDriver(std::move(value)); return *this;}

    /**
     * <p> OS driver. </p>
     */
    inline ApplicationComponentDetail& WithOsDriver(const char* value) { SetOsDriver(value); return *this;}


    /**
     * <p> OS version. </p>
     */
    inline const Aws::String& GetOsVersion() const{ return m_osVersion; }

    /**
     * <p> OS version. </p>
     */
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }

    /**
     * <p> OS version. </p>
     */
    inline void SetOsVersion(const Aws::String& value) { m_osVersionHasBeenSet = true; m_osVersion = value; }

    /**
     * <p> OS version. </p>
     */
    inline void SetOsVersion(Aws::String&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::move(value); }

    /**
     * <p> OS version. </p>
     */
    inline void SetOsVersion(const char* value) { m_osVersionHasBeenSet = true; m_osVersion.assign(value); }

    /**
     * <p> OS version. </p>
     */
    inline ApplicationComponentDetail& WithOsVersion(const Aws::String& value) { SetOsVersion(value); return *this;}

    /**
     * <p> OS version. </p>
     */
    inline ApplicationComponentDetail& WithOsVersion(Aws::String&& value) { SetOsVersion(std::move(value)); return *this;}

    /**
     * <p> OS version. </p>
     */
    inline ApplicationComponentDetail& WithOsVersion(const char* value) { SetOsVersion(value); return *this;}


    /**
     * <p> The top recommendation set for the application component. </p>
     */
    inline const RecommendationSet& GetRecommendationSet() const{ return m_recommendationSet; }

    /**
     * <p> The top recommendation set for the application component. </p>
     */
    inline bool RecommendationSetHasBeenSet() const { return m_recommendationSetHasBeenSet; }

    /**
     * <p> The top recommendation set for the application component. </p>
     */
    inline void SetRecommendationSet(const RecommendationSet& value) { m_recommendationSetHasBeenSet = true; m_recommendationSet = value; }

    /**
     * <p> The top recommendation set for the application component. </p>
     */
    inline void SetRecommendationSet(RecommendationSet&& value) { m_recommendationSetHasBeenSet = true; m_recommendationSet = std::move(value); }

    /**
     * <p> The top recommendation set for the application component. </p>
     */
    inline ApplicationComponentDetail& WithRecommendationSet(const RecommendationSet& value) { SetRecommendationSet(value); return *this;}

    /**
     * <p> The top recommendation set for the application component. </p>
     */
    inline ApplicationComponentDetail& WithRecommendationSet(RecommendationSet&& value) { SetRecommendationSet(std::move(value)); return *this;}


    /**
     * <p> The application component subtype.</p>
     */
    inline const ResourceSubType& GetResourceSubType() const{ return m_resourceSubType; }

    /**
     * <p> The application component subtype.</p>
     */
    inline bool ResourceSubTypeHasBeenSet() const { return m_resourceSubTypeHasBeenSet; }

    /**
     * <p> The application component subtype.</p>
     */
    inline void SetResourceSubType(const ResourceSubType& value) { m_resourceSubTypeHasBeenSet = true; m_resourceSubType = value; }

    /**
     * <p> The application component subtype.</p>
     */
    inline void SetResourceSubType(ResourceSubType&& value) { m_resourceSubTypeHasBeenSet = true; m_resourceSubType = std::move(value); }

    /**
     * <p> The application component subtype.</p>
     */
    inline ApplicationComponentDetail& WithResourceSubType(const ResourceSubType& value) { SetResourceSubType(value); return *this;}

    /**
     * <p> The application component subtype.</p>
     */
    inline ApplicationComponentDetail& WithResourceSubType(ResourceSubType&& value) { SetResourceSubType(std::move(value)); return *this;}


    /**
     * <p>The status of the application unit.</p>
     */
    inline const RuntimeAnalysisStatus& GetRuntimeStatus() const{ return m_runtimeStatus; }

    /**
     * <p>The status of the application unit.</p>
     */
    inline bool RuntimeStatusHasBeenSet() const { return m_runtimeStatusHasBeenSet; }

    /**
     * <p>The status of the application unit.</p>
     */
    inline void SetRuntimeStatus(const RuntimeAnalysisStatus& value) { m_runtimeStatusHasBeenSet = true; m_runtimeStatus = value; }

    /**
     * <p>The status of the application unit.</p>
     */
    inline void SetRuntimeStatus(RuntimeAnalysisStatus&& value) { m_runtimeStatusHasBeenSet = true; m_runtimeStatus = std::move(value); }

    /**
     * <p>The status of the application unit.</p>
     */
    inline ApplicationComponentDetail& WithRuntimeStatus(const RuntimeAnalysisStatus& value) { SetRuntimeStatus(value); return *this;}

    /**
     * <p>The status of the application unit.</p>
     */
    inline ApplicationComponentDetail& WithRuntimeStatus(RuntimeAnalysisStatus&& value) { SetRuntimeStatus(std::move(value)); return *this;}


    /**
     * <p>The status message for the application unit.</p>
     */
    inline const Aws::String& GetRuntimeStatusMessage() const{ return m_runtimeStatusMessage; }

    /**
     * <p>The status message for the application unit.</p>
     */
    inline bool RuntimeStatusMessageHasBeenSet() const { return m_runtimeStatusMessageHasBeenSet; }

    /**
     * <p>The status message for the application unit.</p>
     */
    inline void SetRuntimeStatusMessage(const Aws::String& value) { m_runtimeStatusMessageHasBeenSet = true; m_runtimeStatusMessage = value; }

    /**
     * <p>The status message for the application unit.</p>
     */
    inline void SetRuntimeStatusMessage(Aws::String&& value) { m_runtimeStatusMessageHasBeenSet = true; m_runtimeStatusMessage = std::move(value); }

    /**
     * <p>The status message for the application unit.</p>
     */
    inline void SetRuntimeStatusMessage(const char* value) { m_runtimeStatusMessageHasBeenSet = true; m_runtimeStatusMessage.assign(value); }

    /**
     * <p>The status message for the application unit.</p>
     */
    inline ApplicationComponentDetail& WithRuntimeStatusMessage(const Aws::String& value) { SetRuntimeStatusMessage(value); return *this;}

    /**
     * <p>The status message for the application unit.</p>
     */
    inline ApplicationComponentDetail& WithRuntimeStatusMessage(Aws::String&& value) { SetRuntimeStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for the application unit.</p>
     */
    inline ApplicationComponentDetail& WithRuntimeStatusMessage(const char* value) { SetRuntimeStatusMessage(value); return *this;}


    /**
     * <p> Details about the source code repository associated with the application
     * component. </p>
     */
    inline const Aws::Vector<SourceCodeRepository>& GetSourceCodeRepositories() const{ return m_sourceCodeRepositories; }

    /**
     * <p> Details about the source code repository associated with the application
     * component. </p>
     */
    inline bool SourceCodeRepositoriesHasBeenSet() const { return m_sourceCodeRepositoriesHasBeenSet; }

    /**
     * <p> Details about the source code repository associated with the application
     * component. </p>
     */
    inline void SetSourceCodeRepositories(const Aws::Vector<SourceCodeRepository>& value) { m_sourceCodeRepositoriesHasBeenSet = true; m_sourceCodeRepositories = value; }

    /**
     * <p> Details about the source code repository associated with the application
     * component. </p>
     */
    inline void SetSourceCodeRepositories(Aws::Vector<SourceCodeRepository>&& value) { m_sourceCodeRepositoriesHasBeenSet = true; m_sourceCodeRepositories = std::move(value); }

    /**
     * <p> Details about the source code repository associated with the application
     * component. </p>
     */
    inline ApplicationComponentDetail& WithSourceCodeRepositories(const Aws::Vector<SourceCodeRepository>& value) { SetSourceCodeRepositories(value); return *this;}

    /**
     * <p> Details about the source code repository associated with the application
     * component. </p>
     */
    inline ApplicationComponentDetail& WithSourceCodeRepositories(Aws::Vector<SourceCodeRepository>&& value) { SetSourceCodeRepositories(std::move(value)); return *this;}

    /**
     * <p> Details about the source code repository associated with the application
     * component. </p>
     */
    inline ApplicationComponentDetail& AddSourceCodeRepositories(const SourceCodeRepository& value) { m_sourceCodeRepositoriesHasBeenSet = true; m_sourceCodeRepositories.push_back(value); return *this; }

    /**
     * <p> Details about the source code repository associated with the application
     * component. </p>
     */
    inline ApplicationComponentDetail& AddSourceCodeRepositories(SourceCodeRepository&& value) { m_sourceCodeRepositoriesHasBeenSet = true; m_sourceCodeRepositories.push_back(std::move(value)); return *this; }


    /**
     * <p> A detailed description of the analysis status and any failure message. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p> A detailed description of the analysis status and any failure message. </p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p> A detailed description of the analysis status and any failure message. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p> A detailed description of the analysis status and any failure message. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p> A detailed description of the analysis status and any failure message. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p> A detailed description of the analysis status and any failure message. </p>
     */
    inline ApplicationComponentDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p> A detailed description of the analysis status and any failure message. </p>
     */
    inline ApplicationComponentDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p> A detailed description of the analysis status and any failure message. </p>
     */
    inline ApplicationComponentDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    SrcCodeOrDbAnalysisStatus m_analysisStatus;
    bool m_analysisStatusHasBeenSet = false;

    S3Object m_antipatternReportS3Object;
    bool m_antipatternReportS3ObjectHasBeenSet = false;

    AntipatternReportStatus m_antipatternReportStatus;
    bool m_antipatternReportStatusHasBeenSet = false;

    Aws::String m_antipatternReportStatusMessage;
    bool m_antipatternReportStatusMessageHasBeenSet = false;

    AppType m_appType;
    bool m_appTypeHasBeenSet = false;

    AppUnitError m_appUnitError;
    bool m_appUnitErrorHasBeenSet = false;

    Aws::String m_associatedServerId;
    bool m_associatedServerIdHasBeenSet = false;

    DatabaseConfigDetail m_databaseConfigDetail;
    bool m_databaseConfigDetailHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    InclusionStatus m_inclusionStatus;
    bool m_inclusionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastAnalyzedTimestamp;
    bool m_lastAnalyzedTimestampHasBeenSet = false;

    Aws::Vector<AntipatternSeveritySummary> m_listAntipatternSeveritySummary;
    bool m_listAntipatternSeveritySummaryHasBeenSet = false;

    bool m_moreServerAssociationExists;
    bool m_moreServerAssociationExistsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_osDriver;
    bool m_osDriverHasBeenSet = false;

    Aws::String m_osVersion;
    bool m_osVersionHasBeenSet = false;

    RecommendationSet m_recommendationSet;
    bool m_recommendationSetHasBeenSet = false;

    ResourceSubType m_resourceSubType;
    bool m_resourceSubTypeHasBeenSet = false;

    RuntimeAnalysisStatus m_runtimeStatus;
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
