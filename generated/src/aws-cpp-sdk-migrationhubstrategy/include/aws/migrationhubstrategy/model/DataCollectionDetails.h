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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DataCollectionDetails();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DataCollectionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DataCollectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The time the assessment completes. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }
    inline DataCollectionDetails& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline DataCollectionDetails& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of failed servers in the assessment. </p>
     */
    inline int GetFailed() const{ return m_failed; }
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }
    inline DataCollectionDetails& WithFailed(int value) { SetFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of servers with the assessment status <code>IN_PROGESS</code>.
     * </p>
     */
    inline int GetInProgress() const{ return m_inProgress; }
    inline bool InProgressHasBeenSet() const { return m_inProgressHasBeenSet; }
    inline void SetInProgress(int value) { m_inProgressHasBeenSet = true; m_inProgress = value; }
    inline DataCollectionDetails& WithInProgress(int value) { SetInProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of servers in the assessment. </p>
     */
    inline int GetServers() const{ return m_servers; }
    inline bool ServersHasBeenSet() const { return m_serversHasBeenSet; }
    inline void SetServers(int value) { m_serversHasBeenSet = true; m_servers = value; }
    inline DataCollectionDetails& WithServers(int value) { SetServers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start time of assessment. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline DataCollectionDetails& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline DataCollectionDetails& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the assessment. </p>
     */
    inline const AssessmentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AssessmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AssessmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DataCollectionDetails& WithStatus(const AssessmentStatus& value) { SetStatus(value); return *this;}
    inline DataCollectionDetails& WithStatus(AssessmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the assessment.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline DataCollectionDetails& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline DataCollectionDetails& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline DataCollectionDetails& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of successful servers in the assessment. </p>
     */
    inline int GetSuccess() const{ return m_success; }
    inline bool SuccessHasBeenSet() const { return m_successHasBeenSet; }
    inline void SetSuccess(int value) { m_successHasBeenSet = true; m_success = value; }
    inline DataCollectionDetails& WithSuccess(int value) { SetSuccess(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    int m_failed;
    bool m_failedHasBeenSet = false;

    int m_inProgress;
    bool m_inProgressHasBeenSet = false;

    int m_servers;
    bool m_serversHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    AssessmentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    int m_success;
    bool m_successHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
