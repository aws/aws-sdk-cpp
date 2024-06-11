﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/OverallChangeStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/ConfigChangeStatus.h>
#include <aws/opensearch/model/InitiatedBy.h>
#include <aws/opensearch/model/ChangeProgressStage.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The progress details of a specific domain configuration change.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ChangeProgressStatusDetails">AWS
   * API Reference</a></p>
   */
  class ChangeProgressStatusDetails
  {
  public:
    AWS_OPENSEARCHSERVICE_API ChangeProgressStatusDetails();
    AWS_OPENSEARCHSERVICE_API ChangeProgressStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ChangeProgressStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline const Aws::String& GetChangeId() const{ return m_changeId; }
    inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }
    inline void SetChangeId(const Aws::String& value) { m_changeIdHasBeenSet = true; m_changeId = value; }
    inline void SetChangeId(Aws::String&& value) { m_changeIdHasBeenSet = true; m_changeId = std::move(value); }
    inline void SetChangeId(const char* value) { m_changeIdHasBeenSet = true; m_changeId.assign(value); }
    inline ChangeProgressStatusDetails& WithChangeId(const Aws::String& value) { SetChangeId(value); return *this;}
    inline ChangeProgressStatusDetails& WithChangeId(Aws::String&& value) { SetChangeId(std::move(value)); return *this;}
    inline ChangeProgressStatusDetails& WithChangeId(const char* value) { SetChangeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the configuration change is made on the domain.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ChangeProgressStatusDetails& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ChangeProgressStatusDetails& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the domain configuration change.</p>
     */
    inline const OverallChangeStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OverallChangeStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OverallChangeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ChangeProgressStatusDetails& WithStatus(const OverallChangeStatus& value) { SetStatus(value); return *this;}
    inline ChangeProgressStatusDetails& WithStatus(OverallChangeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of properties in the domain configuration change that are still
     * pending.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPendingProperties() const{ return m_pendingProperties; }
    inline bool PendingPropertiesHasBeenSet() const { return m_pendingPropertiesHasBeenSet; }
    inline void SetPendingProperties(const Aws::Vector<Aws::String>& value) { m_pendingPropertiesHasBeenSet = true; m_pendingProperties = value; }
    inline void SetPendingProperties(Aws::Vector<Aws::String>&& value) { m_pendingPropertiesHasBeenSet = true; m_pendingProperties = std::move(value); }
    inline ChangeProgressStatusDetails& WithPendingProperties(const Aws::Vector<Aws::String>& value) { SetPendingProperties(value); return *this;}
    inline ChangeProgressStatusDetails& WithPendingProperties(Aws::Vector<Aws::String>&& value) { SetPendingProperties(std::move(value)); return *this;}
    inline ChangeProgressStatusDetails& AddPendingProperties(const Aws::String& value) { m_pendingPropertiesHasBeenSet = true; m_pendingProperties.push_back(value); return *this; }
    inline ChangeProgressStatusDetails& AddPendingProperties(Aws::String&& value) { m_pendingPropertiesHasBeenSet = true; m_pendingProperties.push_back(std::move(value)); return *this; }
    inline ChangeProgressStatusDetails& AddPendingProperties(const char* value) { m_pendingPropertiesHasBeenSet = true; m_pendingProperties.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of properties in the domain configuration change that have
     * completed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCompletedProperties() const{ return m_completedProperties; }
    inline bool CompletedPropertiesHasBeenSet() const { return m_completedPropertiesHasBeenSet; }
    inline void SetCompletedProperties(const Aws::Vector<Aws::String>& value) { m_completedPropertiesHasBeenSet = true; m_completedProperties = value; }
    inline void SetCompletedProperties(Aws::Vector<Aws::String>&& value) { m_completedPropertiesHasBeenSet = true; m_completedProperties = std::move(value); }
    inline ChangeProgressStatusDetails& WithCompletedProperties(const Aws::Vector<Aws::String>& value) { SetCompletedProperties(value); return *this;}
    inline ChangeProgressStatusDetails& WithCompletedProperties(Aws::Vector<Aws::String>&& value) { SetCompletedProperties(std::move(value)); return *this;}
    inline ChangeProgressStatusDetails& AddCompletedProperties(const Aws::String& value) { m_completedPropertiesHasBeenSet = true; m_completedProperties.push_back(value); return *this; }
    inline ChangeProgressStatusDetails& AddCompletedProperties(Aws::String&& value) { m_completedPropertiesHasBeenSet = true; m_completedProperties.push_back(std::move(value)); return *this; }
    inline ChangeProgressStatusDetails& AddCompletedProperties(const char* value) { m_completedPropertiesHasBeenSet = true; m_completedProperties.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of stages required for the configuration change.</p>
     */
    inline int GetTotalNumberOfStages() const{ return m_totalNumberOfStages; }
    inline bool TotalNumberOfStagesHasBeenSet() const { return m_totalNumberOfStagesHasBeenSet; }
    inline void SetTotalNumberOfStages(int value) { m_totalNumberOfStagesHasBeenSet = true; m_totalNumberOfStages = value; }
    inline ChangeProgressStatusDetails& WithTotalNumberOfStages(int value) { SetTotalNumberOfStages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific stages that the domain is going through to perform the
     * configuration change.</p>
     */
    inline const Aws::Vector<ChangeProgressStage>& GetChangeProgressStages() const{ return m_changeProgressStages; }
    inline bool ChangeProgressStagesHasBeenSet() const { return m_changeProgressStagesHasBeenSet; }
    inline void SetChangeProgressStages(const Aws::Vector<ChangeProgressStage>& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages = value; }
    inline void SetChangeProgressStages(Aws::Vector<ChangeProgressStage>&& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages = std::move(value); }
    inline ChangeProgressStatusDetails& WithChangeProgressStages(const Aws::Vector<ChangeProgressStage>& value) { SetChangeProgressStages(value); return *this;}
    inline ChangeProgressStatusDetails& WithChangeProgressStages(Aws::Vector<ChangeProgressStage>&& value) { SetChangeProgressStages(std::move(value)); return *this;}
    inline ChangeProgressStatusDetails& AddChangeProgressStages(const ChangeProgressStage& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages.push_back(value); return *this; }
    inline ChangeProgressStatusDetails& AddChangeProgressStages(ChangeProgressStage&& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last time that the status of the configuration change was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline ChangeProgressStatusDetails& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline ChangeProgressStatusDetails& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the configuration change.</p>
     */
    inline const ConfigChangeStatus& GetConfigChangeStatus() const{ return m_configChangeStatus; }
    inline bool ConfigChangeStatusHasBeenSet() const { return m_configChangeStatusHasBeenSet; }
    inline void SetConfigChangeStatus(const ConfigChangeStatus& value) { m_configChangeStatusHasBeenSet = true; m_configChangeStatus = value; }
    inline void SetConfigChangeStatus(ConfigChangeStatus&& value) { m_configChangeStatusHasBeenSet = true; m_configChangeStatus = std::move(value); }
    inline ChangeProgressStatusDetails& WithConfigChangeStatus(const ConfigChangeStatus& value) { SetConfigChangeStatus(value); return *this;}
    inline ChangeProgressStatusDetails& WithConfigChangeStatus(ConfigChangeStatus&& value) { SetConfigChangeStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline const InitiatedBy& GetInitiatedBy() const{ return m_initiatedBy; }
    inline bool InitiatedByHasBeenSet() const { return m_initiatedByHasBeenSet; }
    inline void SetInitiatedBy(const InitiatedBy& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = value; }
    inline void SetInitiatedBy(InitiatedBy&& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = std::move(value); }
    inline ChangeProgressStatusDetails& WithInitiatedBy(const InitiatedBy& value) { SetInitiatedBy(value); return *this;}
    inline ChangeProgressStatusDetails& WithInitiatedBy(InitiatedBy&& value) { SetInitiatedBy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_changeId;
    bool m_changeIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    OverallChangeStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_pendingProperties;
    bool m_pendingPropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_completedProperties;
    bool m_completedPropertiesHasBeenSet = false;

    int m_totalNumberOfStages;
    bool m_totalNumberOfStagesHasBeenSet = false;

    Aws::Vector<ChangeProgressStage> m_changeProgressStages;
    bool m_changeProgressStagesHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    ConfigChangeStatus m_configChangeStatus;
    bool m_configChangeStatusHasBeenSet = false;

    InitiatedBy m_initiatedBy;
    bool m_initiatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
