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
    AWS_WELLARCHITECTED_API JiraConfiguration() = default;
    AWS_WELLARCHITECTED_API JiraConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API JiraConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the associated Jira issue.</p>
     */
    inline const Aws::String& GetJiraIssueUrl() const { return m_jiraIssueUrl; }
    inline bool JiraIssueUrlHasBeenSet() const { return m_jiraIssueUrlHasBeenSet; }
    template<typename JiraIssueUrlT = Aws::String>
    void SetJiraIssueUrl(JiraIssueUrlT&& value) { m_jiraIssueUrlHasBeenSet = true; m_jiraIssueUrl = std::forward<JiraIssueUrlT>(value); }
    template<typename JiraIssueUrlT = Aws::String>
    JiraConfiguration& WithJiraIssueUrl(JiraIssueUrlT&& value) { SetJiraIssueUrl(std::forward<JiraIssueUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetLastSyncedTime() const { return m_lastSyncedTime; }
    inline bool LastSyncedTimeHasBeenSet() const { return m_lastSyncedTimeHasBeenSet; }
    template<typename LastSyncedTimeT = Aws::Utils::DateTime>
    void SetLastSyncedTime(LastSyncedTimeT&& value) { m_lastSyncedTimeHasBeenSet = true; m_lastSyncedTime = std::forward<LastSyncedTimeT>(value); }
    template<typename LastSyncedTimeT = Aws::Utils::DateTime>
    JiraConfiguration& WithLastSyncedTime(LastSyncedTimeT&& value) { SetLastSyncedTime(std::forward<LastSyncedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jiraIssueUrl;
    bool m_jiraIssueUrlHasBeenSet = false;

    Aws::Utils::DateTime m_lastSyncedTime{};
    bool m_lastSyncedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
