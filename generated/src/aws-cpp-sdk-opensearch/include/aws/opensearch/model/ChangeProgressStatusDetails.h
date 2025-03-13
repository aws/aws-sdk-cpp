/**
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
    AWS_OPENSEARCHSERVICE_API ChangeProgressStatusDetails() = default;
    AWS_OPENSEARCHSERVICE_API ChangeProgressStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ChangeProgressStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline const Aws::String& GetChangeId() const { return m_changeId; }
    inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }
    template<typename ChangeIdT = Aws::String>
    void SetChangeId(ChangeIdT&& value) { m_changeIdHasBeenSet = true; m_changeId = std::forward<ChangeIdT>(value); }
    template<typename ChangeIdT = Aws::String>
    ChangeProgressStatusDetails& WithChangeId(ChangeIdT&& value) { SetChangeId(std::forward<ChangeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the configuration change is made on the domain.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ChangeProgressStatusDetails& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the domain configuration change.</p>
     */
    inline OverallChangeStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OverallChangeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ChangeProgressStatusDetails& WithStatus(OverallChangeStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of properties in the domain configuration change that are still
     * pending.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPendingProperties() const { return m_pendingProperties; }
    inline bool PendingPropertiesHasBeenSet() const { return m_pendingPropertiesHasBeenSet; }
    template<typename PendingPropertiesT = Aws::Vector<Aws::String>>
    void SetPendingProperties(PendingPropertiesT&& value) { m_pendingPropertiesHasBeenSet = true; m_pendingProperties = std::forward<PendingPropertiesT>(value); }
    template<typename PendingPropertiesT = Aws::Vector<Aws::String>>
    ChangeProgressStatusDetails& WithPendingProperties(PendingPropertiesT&& value) { SetPendingProperties(std::forward<PendingPropertiesT>(value)); return *this;}
    template<typename PendingPropertiesT = Aws::String>
    ChangeProgressStatusDetails& AddPendingProperties(PendingPropertiesT&& value) { m_pendingPropertiesHasBeenSet = true; m_pendingProperties.emplace_back(std::forward<PendingPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of properties in the domain configuration change that have
     * completed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCompletedProperties() const { return m_completedProperties; }
    inline bool CompletedPropertiesHasBeenSet() const { return m_completedPropertiesHasBeenSet; }
    template<typename CompletedPropertiesT = Aws::Vector<Aws::String>>
    void SetCompletedProperties(CompletedPropertiesT&& value) { m_completedPropertiesHasBeenSet = true; m_completedProperties = std::forward<CompletedPropertiesT>(value); }
    template<typename CompletedPropertiesT = Aws::Vector<Aws::String>>
    ChangeProgressStatusDetails& WithCompletedProperties(CompletedPropertiesT&& value) { SetCompletedProperties(std::forward<CompletedPropertiesT>(value)); return *this;}
    template<typename CompletedPropertiesT = Aws::String>
    ChangeProgressStatusDetails& AddCompletedProperties(CompletedPropertiesT&& value) { m_completedPropertiesHasBeenSet = true; m_completedProperties.emplace_back(std::forward<CompletedPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of stages required for the configuration change.</p>
     */
    inline int GetTotalNumberOfStages() const { return m_totalNumberOfStages; }
    inline bool TotalNumberOfStagesHasBeenSet() const { return m_totalNumberOfStagesHasBeenSet; }
    inline void SetTotalNumberOfStages(int value) { m_totalNumberOfStagesHasBeenSet = true; m_totalNumberOfStages = value; }
    inline ChangeProgressStatusDetails& WithTotalNumberOfStages(int value) { SetTotalNumberOfStages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific stages that the domain is going through to perform the
     * configuration change.</p>
     */
    inline const Aws::Vector<ChangeProgressStage>& GetChangeProgressStages() const { return m_changeProgressStages; }
    inline bool ChangeProgressStagesHasBeenSet() const { return m_changeProgressStagesHasBeenSet; }
    template<typename ChangeProgressStagesT = Aws::Vector<ChangeProgressStage>>
    void SetChangeProgressStages(ChangeProgressStagesT&& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages = std::forward<ChangeProgressStagesT>(value); }
    template<typename ChangeProgressStagesT = Aws::Vector<ChangeProgressStage>>
    ChangeProgressStatusDetails& WithChangeProgressStages(ChangeProgressStagesT&& value) { SetChangeProgressStages(std::forward<ChangeProgressStagesT>(value)); return *this;}
    template<typename ChangeProgressStagesT = ChangeProgressStage>
    ChangeProgressStatusDetails& AddChangeProgressStages(ChangeProgressStagesT&& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages.emplace_back(std::forward<ChangeProgressStagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last time that the status of the configuration change was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ChangeProgressStatusDetails& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the configuration change.</p>
     */
    inline ConfigChangeStatus GetConfigChangeStatus() const { return m_configChangeStatus; }
    inline bool ConfigChangeStatusHasBeenSet() const { return m_configChangeStatusHasBeenSet; }
    inline void SetConfigChangeStatus(ConfigChangeStatus value) { m_configChangeStatusHasBeenSet = true; m_configChangeStatus = value; }
    inline ChangeProgressStatusDetails& WithConfigChangeStatus(ConfigChangeStatus value) { SetConfigChangeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline InitiatedBy GetInitiatedBy() const { return m_initiatedBy; }
    inline bool InitiatedByHasBeenSet() const { return m_initiatedByHasBeenSet; }
    inline void SetInitiatedBy(InitiatedBy value) { m_initiatedByHasBeenSet = true; m_initiatedBy = value; }
    inline ChangeProgressStatusDetails& WithInitiatedBy(InitiatedBy value) { SetInitiatedBy(value); return *this;}
    ///@}
  private:

    Aws::String m_changeId;
    bool m_changeIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    OverallChangeStatus m_status{OverallChangeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_pendingProperties;
    bool m_pendingPropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_completedProperties;
    bool m_completedPropertiesHasBeenSet = false;

    int m_totalNumberOfStages{0};
    bool m_totalNumberOfStagesHasBeenSet = false;

    Aws::Vector<ChangeProgressStage> m_changeProgressStages;
    bool m_changeProgressStagesHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    ConfigChangeStatus m_configChangeStatus{ConfigChangeStatus::NOT_SET};
    bool m_configChangeStatusHasBeenSet = false;

    InitiatedBy m_initiatedBy{InitiatedBy::NOT_SET};
    bool m_initiatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
