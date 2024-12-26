/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The details of process-related information about a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ProcessDetails">AWS
   * API Reference</a></p>
   */
  class ProcessDetails
  {
  public:
    AWS_SECURITYHUB_API ProcessDetails();
    AWS_SECURITYHUB_API ProcessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ProcessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the process.</p> <p>Length Constraints: Minimum of 1. Maximum of
     * 64.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProcessDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProcessDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProcessDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the process executable.</p> <p>Length Constraints: Minimum of 1.
     * Maximum of 512.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline ProcessDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline ProcessDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline ProcessDetails& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The process ID.</p>
     */
    inline int GetPid() const{ return m_pid; }
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }
    inline ProcessDetails& WithPid(int value) { SetPid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent process ID. This field accepts positive integers between
     * <code>O</code> and <code>2147483647</code>.</p>
     */
    inline int GetParentPid() const{ return m_parentPid; }
    inline bool ParentPidHasBeenSet() const { return m_parentPidHasBeenSet; }
    inline void SetParentPid(int value) { m_parentPidHasBeenSet = true; m_parentPid = value; }
    inline ProcessDetails& WithParentPid(int value) { SetParentPid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the process was launched.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLaunchedAt() const{ return m_launchedAt; }
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }
    inline void SetLaunchedAt(const Aws::String& value) { m_launchedAtHasBeenSet = true; m_launchedAt = value; }
    inline void SetLaunchedAt(Aws::String&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::move(value); }
    inline void SetLaunchedAt(const char* value) { m_launchedAtHasBeenSet = true; m_launchedAt.assign(value); }
    inline ProcessDetails& WithLaunchedAt(const Aws::String& value) { SetLaunchedAt(value); return *this;}
    inline ProcessDetails& WithLaunchedAt(Aws::String&& value) { SetLaunchedAt(std::move(value)); return *this;}
    inline ProcessDetails& WithLaunchedAt(const char* value) { SetLaunchedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the process was terminated.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetTerminatedAt() const{ return m_terminatedAt; }
    inline bool TerminatedAtHasBeenSet() const { return m_terminatedAtHasBeenSet; }
    inline void SetTerminatedAt(const Aws::String& value) { m_terminatedAtHasBeenSet = true; m_terminatedAt = value; }
    inline void SetTerminatedAt(Aws::String&& value) { m_terminatedAtHasBeenSet = true; m_terminatedAt = std::move(value); }
    inline void SetTerminatedAt(const char* value) { m_terminatedAtHasBeenSet = true; m_terminatedAt.assign(value); }
    inline ProcessDetails& WithTerminatedAt(const Aws::String& value) { SetTerminatedAt(value); return *this;}
    inline ProcessDetails& WithTerminatedAt(Aws::String&& value) { SetTerminatedAt(std::move(value)); return *this;}
    inline ProcessDetails& WithTerminatedAt(const char* value) { SetTerminatedAt(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_pid;
    bool m_pidHasBeenSet = false;

    int m_parentPid;
    bool m_parentPidHasBeenSet = false;

    Aws::String m_launchedAt;
    bool m_launchedAtHasBeenSet = false;

    Aws::String m_terminatedAt;
    bool m_terminatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
