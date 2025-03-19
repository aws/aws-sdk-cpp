/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migrationhubstrategy/model/AssessmentStatus.h>
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
   * <p> Detailed information about an assessment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/DataCollectionDetails">AWS
   * API Reference</a></p>
   */
  class DataCollectionDetails
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DataCollectionDetails() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DataCollectionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DataCollectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The time the assessment completes. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    DataCollectionDetails& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of failed servers in the assessment. </p>
     */
    inline int GetFailed() const { return m_failed; }
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }
    inline DataCollectionDetails& WithFailed(int value) { SetFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of servers with the assessment status <code>IN_PROGESS</code>.
     * </p>
     */
    inline int GetInProgress() const { return m_inProgress; }
    inline bool InProgressHasBeenSet() const { return m_inProgressHasBeenSet; }
    inline void SetInProgress(int value) { m_inProgressHasBeenSet = true; m_inProgress = value; }
    inline DataCollectionDetails& WithInProgress(int value) { SetInProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of servers in the assessment. </p>
     */
    inline int GetServers() const { return m_servers; }
    inline bool ServersHasBeenSet() const { return m_serversHasBeenSet; }
    inline void SetServers(int value) { m_serversHasBeenSet = true; m_servers = value; }
    inline DataCollectionDetails& WithServers(int value) { SetServers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start time of assessment. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DataCollectionDetails& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the assessment. </p>
     */
    inline AssessmentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AssessmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataCollectionDetails& WithStatus(AssessmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the assessment.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    DataCollectionDetails& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of successful servers in the assessment. </p>
     */
    inline int GetSuccess() const { return m_success; }
    inline bool SuccessHasBeenSet() const { return m_successHasBeenSet; }
    inline void SetSuccess(int value) { m_successHasBeenSet = true; m_success = value; }
    inline DataCollectionDetails& WithSuccess(int value) { SetSuccess(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    int m_failed{0};
    bool m_failedHasBeenSet = false;

    int m_inProgress{0};
    bool m_inProgressHasBeenSet = false;

    int m_servers{0};
    bool m_serversHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    AssessmentStatus m_status{AssessmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    int m_success{0};
    bool m_successHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
