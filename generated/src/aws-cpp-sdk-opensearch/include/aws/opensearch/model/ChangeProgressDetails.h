/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/ConfigChangeStatus.h>
#include <aws/opensearch/model/InitiatedBy.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Container for information about a configuration change happening on a
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ChangeProgressDetails">AWS
   * API Reference</a></p>
   */
  class ChangeProgressDetails
  {
  public:
    AWS_OPENSEARCHSERVICE_API ChangeProgressDetails() = default;
    AWS_OPENSEARCHSERVICE_API ChangeProgressDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ChangeProgressDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the configuration change.</p>
     */
    inline const Aws::String& GetChangeId() const { return m_changeId; }
    inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }
    template<typename ChangeIdT = Aws::String>
    void SetChangeId(ChangeIdT&& value) { m_changeIdHasBeenSet = true; m_changeId = std::forward<ChangeIdT>(value); }
    template<typename ChangeIdT = Aws::String>
    ChangeProgressDetails& WithChangeId(ChangeIdT&& value) { SetChangeId(std::forward<ChangeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message corresponding to the status of the configuration change.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ChangeProgressDetails& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the configuration change.</p>
     */
    inline ConfigChangeStatus GetConfigChangeStatus() const { return m_configChangeStatus; }
    inline bool ConfigChangeStatusHasBeenSet() const { return m_configChangeStatusHasBeenSet; }
    inline void SetConfigChangeStatus(ConfigChangeStatus value) { m_configChangeStatusHasBeenSet = true; m_configChangeStatus = value; }
    inline ChangeProgressDetails& WithConfigChangeStatus(ConfigChangeStatus value) { SetConfigChangeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline InitiatedBy GetInitiatedBy() const { return m_initiatedBy; }
    inline bool InitiatedByHasBeenSet() const { return m_initiatedByHasBeenSet; }
    inline void SetInitiatedBy(InitiatedBy value) { m_initiatedByHasBeenSet = true; m_initiatedBy = value; }
    inline ChangeProgressDetails& WithInitiatedBy(InitiatedBy value) { SetInitiatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the configuration change was initiated, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ChangeProgressDetails& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the configuration change was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ChangeProgressDetails& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_changeId;
    bool m_changeIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ConfigChangeStatus m_configChangeStatus{ConfigChangeStatus::NOT_SET};
    bool m_configChangeStatusHasBeenSet = false;

    InitiatedBy m_initiatedBy{InitiatedBy::NOT_SET};
    bool m_initiatedByHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
