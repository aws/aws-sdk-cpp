﻿/**
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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssessmentSummary();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssessmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssessmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon S3 object containing the anti-pattern report. </p>
     */
    inline const S3Object& GetAntipatternReportS3Object() const{ return m_antipatternReportS3Object; }
    inline bool AntipatternReportS3ObjectHasBeenSet() const { return m_antipatternReportS3ObjectHasBeenSet; }
    inline void SetAntipatternReportS3Object(const S3Object& value) { m_antipatternReportS3ObjectHasBeenSet = true; m_antipatternReportS3Object = value; }
    inline void SetAntipatternReportS3Object(S3Object&& value) { m_antipatternReportS3ObjectHasBeenSet = true; m_antipatternReportS3Object = std::move(value); }
    inline AssessmentSummary& WithAntipatternReportS3Object(const S3Object& value) { SetAntipatternReportS3Object(value); return *this;}
    inline AssessmentSummary& WithAntipatternReportS3Object(S3Object&& value) { SetAntipatternReportS3Object(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the anti-pattern report. </p>
     */
    inline const AntipatternReportStatus& GetAntipatternReportStatus() const{ return m_antipatternReportStatus; }
    inline bool AntipatternReportStatusHasBeenSet() const { return m_antipatternReportStatusHasBeenSet; }
    inline void SetAntipatternReportStatus(const AntipatternReportStatus& value) { m_antipatternReportStatusHasBeenSet = true; m_antipatternReportStatus = value; }
    inline void SetAntipatternReportStatus(AntipatternReportStatus&& value) { m_antipatternReportStatusHasBeenSet = true; m_antipatternReportStatus = std::move(value); }
    inline AssessmentSummary& WithAntipatternReportStatus(const AntipatternReportStatus& value) { SetAntipatternReportStatus(value); return *this;}
    inline AssessmentSummary& WithAntipatternReportStatus(AntipatternReportStatus&& value) { SetAntipatternReportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status message of the anti-pattern report. </p>
     */
    inline const Aws::String& GetAntipatternReportStatusMessage() const{ return m_antipatternReportStatusMessage; }
    inline bool AntipatternReportStatusMessageHasBeenSet() const { return m_antipatternReportStatusMessageHasBeenSet; }
    inline void SetAntipatternReportStatusMessage(const Aws::String& value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage = value; }
    inline void SetAntipatternReportStatusMessage(Aws::String&& value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage = std::move(value); }
    inline void SetAntipatternReportStatusMessage(const char* value) { m_antipatternReportStatusMessageHasBeenSet = true; m_antipatternReportStatusMessage.assign(value); }
    inline AssessmentSummary& WithAntipatternReportStatusMessage(const Aws::String& value) { SetAntipatternReportStatusMessage(value); return *this;}
    inline AssessmentSummary& WithAntipatternReportStatusMessage(Aws::String&& value) { SetAntipatternReportStatusMessage(std::move(value)); return *this;}
    inline AssessmentSummary& WithAntipatternReportStatusMessage(const char* value) { SetAntipatternReportStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the assessment was performed. </p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTimestamp() const{ return m_lastAnalyzedTimestamp; }
    inline bool LastAnalyzedTimestampHasBeenSet() const { return m_lastAnalyzedTimestampHasBeenSet; }
    inline void SetLastAnalyzedTimestamp(const Aws::Utils::DateTime& value) { m_lastAnalyzedTimestampHasBeenSet = true; m_lastAnalyzedTimestamp = value; }
    inline void SetLastAnalyzedTimestamp(Aws::Utils::DateTime&& value) { m_lastAnalyzedTimestampHasBeenSet = true; m_lastAnalyzedTimestamp = std::move(value); }
    inline AssessmentSummary& WithLastAnalyzedTimestamp(const Aws::Utils::DateTime& value) { SetLastAnalyzedTimestamp(value); return *this;}
    inline AssessmentSummary& WithLastAnalyzedTimestamp(Aws::Utils::DateTime&& value) { SetLastAnalyzedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of AntipatternSeveritySummary. </p>
     */
    inline const Aws::Vector<AntipatternSeveritySummary>& GetListAntipatternSeveritySummary() const{ return m_listAntipatternSeveritySummary; }
    inline bool ListAntipatternSeveritySummaryHasBeenSet() const { return m_listAntipatternSeveritySummaryHasBeenSet; }
    inline void SetListAntipatternSeveritySummary(const Aws::Vector<AntipatternSeveritySummary>& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary = value; }
    inline void SetListAntipatternSeveritySummary(Aws::Vector<AntipatternSeveritySummary>&& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary = std::move(value); }
    inline AssessmentSummary& WithListAntipatternSeveritySummary(const Aws::Vector<AntipatternSeveritySummary>& value) { SetListAntipatternSeveritySummary(value); return *this;}
    inline AssessmentSummary& WithListAntipatternSeveritySummary(Aws::Vector<AntipatternSeveritySummary>&& value) { SetListAntipatternSeveritySummary(std::move(value)); return *this;}
    inline AssessmentSummary& AddListAntipatternSeveritySummary(const AntipatternSeveritySummary& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary.push_back(value); return *this; }
    inline AssessmentSummary& AddListAntipatternSeveritySummary(AntipatternSeveritySummary&& value) { m_listAntipatternSeveritySummaryHasBeenSet = true; m_listAntipatternSeveritySummary.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of status summaries of the analyzed application components.</p>
     */
    inline const Aws::Vector<ApplicationComponentStatusSummary>& GetListApplicationComponentStatusSummary() const{ return m_listApplicationComponentStatusSummary; }
    inline bool ListApplicationComponentStatusSummaryHasBeenSet() const { return m_listApplicationComponentStatusSummaryHasBeenSet; }
    inline void SetListApplicationComponentStatusSummary(const Aws::Vector<ApplicationComponentStatusSummary>& value) { m_listApplicationComponentStatusSummaryHasBeenSet = true; m_listApplicationComponentStatusSummary = value; }
    inline void SetListApplicationComponentStatusSummary(Aws::Vector<ApplicationComponentStatusSummary>&& value) { m_listApplicationComponentStatusSummaryHasBeenSet = true; m_listApplicationComponentStatusSummary = std::move(value); }
    inline AssessmentSummary& WithListApplicationComponentStatusSummary(const Aws::Vector<ApplicationComponentStatusSummary>& value) { SetListApplicationComponentStatusSummary(value); return *this;}
    inline AssessmentSummary& WithListApplicationComponentStatusSummary(Aws::Vector<ApplicationComponentStatusSummary>&& value) { SetListApplicationComponentStatusSummary(std::move(value)); return *this;}
    inline AssessmentSummary& AddListApplicationComponentStatusSummary(const ApplicationComponentStatusSummary& value) { m_listApplicationComponentStatusSummaryHasBeenSet = true; m_listApplicationComponentStatusSummary.push_back(value); return *this; }
    inline AssessmentSummary& AddListApplicationComponentStatusSummary(ApplicationComponentStatusSummary&& value) { m_listApplicationComponentStatusSummaryHasBeenSet = true; m_listApplicationComponentStatusSummary.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> List of ApplicationComponentStrategySummary. </p>
     */
    inline const Aws::Vector<StrategySummary>& GetListApplicationComponentStrategySummary() const{ return m_listApplicationComponentStrategySummary; }
    inline bool ListApplicationComponentStrategySummaryHasBeenSet() const { return m_listApplicationComponentStrategySummaryHasBeenSet; }
    inline void SetListApplicationComponentStrategySummary(const Aws::Vector<StrategySummary>& value) { m_listApplicationComponentStrategySummaryHasBeenSet = true; m_listApplicationComponentStrategySummary = value; }
    inline void SetListApplicationComponentStrategySummary(Aws::Vector<StrategySummary>&& value) { m_listApplicationComponentStrategySummaryHasBeenSet = true; m_listApplicationComponentStrategySummary = std::move(value); }
    inline AssessmentSummary& WithListApplicationComponentStrategySummary(const Aws::Vector<StrategySummary>& value) { SetListApplicationComponentStrategySummary(value); return *this;}
    inline AssessmentSummary& WithListApplicationComponentStrategySummary(Aws::Vector<StrategySummary>&& value) { SetListApplicationComponentStrategySummary(std::move(value)); return *this;}
    inline AssessmentSummary& AddListApplicationComponentStrategySummary(const StrategySummary& value) { m_listApplicationComponentStrategySummaryHasBeenSet = true; m_listApplicationComponentStrategySummary.push_back(value); return *this; }
    inline AssessmentSummary& AddListApplicationComponentStrategySummary(StrategySummary&& value) { m_listApplicationComponentStrategySummaryHasBeenSet = true; m_listApplicationComponentStrategySummary.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> List of ApplicationComponentSummary. </p>
     */
    inline const Aws::Vector<ApplicationComponentSummary>& GetListApplicationComponentSummary() const{ return m_listApplicationComponentSummary; }
    inline bool ListApplicationComponentSummaryHasBeenSet() const { return m_listApplicationComponentSummaryHasBeenSet; }
    inline void SetListApplicationComponentSummary(const Aws::Vector<ApplicationComponentSummary>& value) { m_listApplicationComponentSummaryHasBeenSet = true; m_listApplicationComponentSummary = value; }
    inline void SetListApplicationComponentSummary(Aws::Vector<ApplicationComponentSummary>&& value) { m_listApplicationComponentSummaryHasBeenSet = true; m_listApplicationComponentSummary = std::move(value); }
    inline AssessmentSummary& WithListApplicationComponentSummary(const Aws::Vector<ApplicationComponentSummary>& value) { SetListApplicationComponentSummary(value); return *this;}
    inline AssessmentSummary& WithListApplicationComponentSummary(Aws::Vector<ApplicationComponentSummary>&& value) { SetListApplicationComponentSummary(std::move(value)); return *this;}
    inline AssessmentSummary& AddListApplicationComponentSummary(const ApplicationComponentSummary& value) { m_listApplicationComponentSummaryHasBeenSet = true; m_listApplicationComponentSummary.push_back(value); return *this; }
    inline AssessmentSummary& AddListApplicationComponentSummary(ApplicationComponentSummary&& value) { m_listApplicationComponentSummaryHasBeenSet = true; m_listApplicationComponentSummary.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of status summaries of the analyzed servers.</p>
     */
    inline const Aws::Vector<ServerStatusSummary>& GetListServerStatusSummary() const{ return m_listServerStatusSummary; }
    inline bool ListServerStatusSummaryHasBeenSet() const { return m_listServerStatusSummaryHasBeenSet; }
    inline void SetListServerStatusSummary(const Aws::Vector<ServerStatusSummary>& value) { m_listServerStatusSummaryHasBeenSet = true; m_listServerStatusSummary = value; }
    inline void SetListServerStatusSummary(Aws::Vector<ServerStatusSummary>&& value) { m_listServerStatusSummaryHasBeenSet = true; m_listServerStatusSummary = std::move(value); }
    inline AssessmentSummary& WithListServerStatusSummary(const Aws::Vector<ServerStatusSummary>& value) { SetListServerStatusSummary(value); return *this;}
    inline AssessmentSummary& WithListServerStatusSummary(Aws::Vector<ServerStatusSummary>&& value) { SetListServerStatusSummary(std::move(value)); return *this;}
    inline AssessmentSummary& AddListServerStatusSummary(const ServerStatusSummary& value) { m_listServerStatusSummaryHasBeenSet = true; m_listServerStatusSummary.push_back(value); return *this; }
    inline AssessmentSummary& AddListServerStatusSummary(ServerStatusSummary&& value) { m_listServerStatusSummaryHasBeenSet = true; m_listServerStatusSummary.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> List of ServerStrategySummary. </p>
     */
    inline const Aws::Vector<StrategySummary>& GetListServerStrategySummary() const{ return m_listServerStrategySummary; }
    inline bool ListServerStrategySummaryHasBeenSet() const { return m_listServerStrategySummaryHasBeenSet; }
    inline void SetListServerStrategySummary(const Aws::Vector<StrategySummary>& value) { m_listServerStrategySummaryHasBeenSet = true; m_listServerStrategySummary = value; }
    inline void SetListServerStrategySummary(Aws::Vector<StrategySummary>&& value) { m_listServerStrategySummaryHasBeenSet = true; m_listServerStrategySummary = std::move(value); }
    inline AssessmentSummary& WithListServerStrategySummary(const Aws::Vector<StrategySummary>& value) { SetListServerStrategySummary(value); return *this;}
    inline AssessmentSummary& WithListServerStrategySummary(Aws::Vector<StrategySummary>&& value) { SetListServerStrategySummary(std::move(value)); return *this;}
    inline AssessmentSummary& AddListServerStrategySummary(const StrategySummary& value) { m_listServerStrategySummaryHasBeenSet = true; m_listServerStrategySummary.push_back(value); return *this; }
    inline AssessmentSummary& AddListServerStrategySummary(StrategySummary&& value) { m_listServerStrategySummaryHasBeenSet = true; m_listServerStrategySummary.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> List of ServerSummary. </p>
     */
    inline const Aws::Vector<ServerSummary>& GetListServerSummary() const{ return m_listServerSummary; }
    inline bool ListServerSummaryHasBeenSet() const { return m_listServerSummaryHasBeenSet; }
    inline void SetListServerSummary(const Aws::Vector<ServerSummary>& value) { m_listServerSummaryHasBeenSet = true; m_listServerSummary = value; }
    inline void SetListServerSummary(Aws::Vector<ServerSummary>&& value) { m_listServerSummaryHasBeenSet = true; m_listServerSummary = std::move(value); }
    inline AssessmentSummary& WithListServerSummary(const Aws::Vector<ServerSummary>& value) { SetListServerSummary(value); return *this;}
    inline AssessmentSummary& WithListServerSummary(Aws::Vector<ServerSummary>&& value) { SetListServerSummary(std::move(value)); return *this;}
    inline AssessmentSummary& AddListServerSummary(const ServerSummary& value) { m_listServerSummaryHasBeenSet = true; m_listServerSummary.push_back(value); return *this; }
    inline AssessmentSummary& AddListServerSummary(ServerSummary&& value) { m_listServerSummaryHasBeenSet = true; m_listServerSummary.push_back(std::move(value)); return *this; }
    ///@}
  private:

    S3Object m_antipatternReportS3Object;
    bool m_antipatternReportS3ObjectHasBeenSet = false;

    AntipatternReportStatus m_antipatternReportStatus;
    bool m_antipatternReportStatusHasBeenSet = false;

    Aws::String m_antipatternReportStatusMessage;
    bool m_antipatternReportStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastAnalyzedTimestamp;
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
