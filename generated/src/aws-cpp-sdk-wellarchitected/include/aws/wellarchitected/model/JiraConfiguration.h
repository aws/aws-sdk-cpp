/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Configuration of the Jira integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/JiraConfiguration">AWS
   * API Reference</a></p>
   */
  class JiraConfiguration
  {
  public:
    AWS_WELLARCHITECTED_API JiraConfiguration();
    AWS_WELLARCHITECTED_API JiraConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API JiraConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the associated Jira issue.</p>
     */
    inline const Aws::String& GetJiraIssueUrl() const{ return m_jiraIssueUrl; }

    /**
     * <p>The URL of the associated Jira issue.</p>
     */
    inline bool JiraIssueUrlHasBeenSet() const { return m_jiraIssueUrlHasBeenSet; }

    /**
     * <p>The URL of the associated Jira issue.</p>
     */
    inline void SetJiraIssueUrl(const Aws::String& value) { m_jiraIssueUrlHasBeenSet = true; m_jiraIssueUrl = value; }

    /**
     * <p>The URL of the associated Jira issue.</p>
     */
    inline void SetJiraIssueUrl(Aws::String&& value) { m_jiraIssueUrlHasBeenSet = true; m_jiraIssueUrl = std::move(value); }

    /**
     * <p>The URL of the associated Jira issue.</p>
     */
    inline void SetJiraIssueUrl(const char* value) { m_jiraIssueUrlHasBeenSet = true; m_jiraIssueUrl.assign(value); }

    /**
     * <p>The URL of the associated Jira issue.</p>
     */
    inline JiraConfiguration& WithJiraIssueUrl(const Aws::String& value) { SetJiraIssueUrl(value); return *this;}

    /**
     * <p>The URL of the associated Jira issue.</p>
     */
    inline JiraConfiguration& WithJiraIssueUrl(Aws::String&& value) { SetJiraIssueUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the associated Jira issue.</p>
     */
    inline JiraConfiguration& WithJiraIssueUrl(const char* value) { SetJiraIssueUrl(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetLastSyncedTime() const{ return m_lastSyncedTime; }

    
    inline bool LastSyncedTimeHasBeenSet() const { return m_lastSyncedTimeHasBeenSet; }

    
    inline void SetLastSyncedTime(const Aws::Utils::DateTime& value) { m_lastSyncedTimeHasBeenSet = true; m_lastSyncedTime = value; }

    
    inline void SetLastSyncedTime(Aws::Utils::DateTime&& value) { m_lastSyncedTimeHasBeenSet = true; m_lastSyncedTime = std::move(value); }

    
    inline JiraConfiguration& WithLastSyncedTime(const Aws::Utils::DateTime& value) { SetLastSyncedTime(value); return *this;}

    
    inline JiraConfiguration& WithLastSyncedTime(Aws::Utils::DateTime&& value) { SetLastSyncedTime(std::move(value)); return *this;}

  private:

    Aws::String m_jiraIssueUrl;
    bool m_jiraIssueUrlHasBeenSet = false;

    Aws::Utils::DateTime m_lastSyncedTime;
    bool m_lastSyncedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
