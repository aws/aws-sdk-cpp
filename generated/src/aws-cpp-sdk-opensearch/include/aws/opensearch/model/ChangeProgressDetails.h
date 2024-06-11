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
    AWS_OPENSEARCHSERVICE_API ChangeProgressDetails();
    AWS_OPENSEARCHSERVICE_API ChangeProgressDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ChangeProgressDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the configuration change.</p>
     */
    inline const Aws::String& GetChangeId() const{ return m_changeId; }
    inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }
    inline void SetChangeId(const Aws::String& value) { m_changeIdHasBeenSet = true; m_changeId = value; }
    inline void SetChangeId(Aws::String&& value) { m_changeIdHasBeenSet = true; m_changeId = std::move(value); }
    inline void SetChangeId(const char* value) { m_changeIdHasBeenSet = true; m_changeId.assign(value); }
    inline ChangeProgressDetails& WithChangeId(const Aws::String& value) { SetChangeId(value); return *this;}
    inline ChangeProgressDetails& WithChangeId(Aws::String&& value) { SetChangeId(std::move(value)); return *this;}
    inline ChangeProgressDetails& WithChangeId(const char* value) { SetChangeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message corresponding to the status of the configuration change.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ChangeProgressDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ChangeProgressDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ChangeProgressDetails& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the configuration change.</p>
     */
    inline const ConfigChangeStatus& GetConfigChangeStatus() const{ return m_configChangeStatus; }
    inline bool ConfigChangeStatusHasBeenSet() const { return m_configChangeStatusHasBeenSet; }
    inline void SetConfigChangeStatus(const ConfigChangeStatus& value) { m_configChangeStatusHasBeenSet = true; m_configChangeStatus = value; }
    inline void SetConfigChangeStatus(ConfigChangeStatus&& value) { m_configChangeStatusHasBeenSet = true; m_configChangeStatus = std::move(value); }
    inline ChangeProgressDetails& WithConfigChangeStatus(const ConfigChangeStatus& value) { SetConfigChangeStatus(value); return *this;}
    inline ChangeProgressDetails& WithConfigChangeStatus(ConfigChangeStatus&& value) { SetConfigChangeStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline const InitiatedBy& GetInitiatedBy() const{ return m_initiatedBy; }
    inline bool InitiatedByHasBeenSet() const { return m_initiatedByHasBeenSet; }
    inline void SetInitiatedBy(const InitiatedBy& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = value; }
    inline void SetInitiatedBy(InitiatedBy&& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = std::move(value); }
    inline ChangeProgressDetails& WithInitiatedBy(const InitiatedBy& value) { SetInitiatedBy(value); return *this;}
    inline ChangeProgressDetails& WithInitiatedBy(InitiatedBy&& value) { SetInitiatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the configuration change was initiated, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ChangeProgressDetails& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ChangeProgressDetails& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the configuration change was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline ChangeProgressDetails& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline ChangeProgressDetails& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_changeId;
    bool m_changeIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ConfigChangeStatus m_configChangeStatus;
    bool m_configChangeStatusHasBeenSet = false;

    InitiatedBy m_initiatedBy;
    bool m_initiatedByHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
