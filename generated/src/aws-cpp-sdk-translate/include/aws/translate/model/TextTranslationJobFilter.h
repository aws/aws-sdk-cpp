/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/JobStatus.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>Provides information for filtering a list of translation jobs. For more
   * information, see <a>ListTextTranslationJobs</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TextTranslationJobFilter">AWS
   * API Reference</a></p>
   */
  class TextTranslationJobFilter
  {
  public:
    AWS_TRANSLATE_API TextTranslationJobFilter() = default;
    AWS_TRANSLATE_API TextTranslationJobFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API TextTranslationJobFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters the list of jobs by name.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    TextTranslationJobFilter& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of jobs based by job status.</p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline TextTranslationJobFilter& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted before the specified time. Jobs
     * are returned in ascending order, oldest to newest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedBeforeTime() const { return m_submittedBeforeTime; }
    inline bool SubmittedBeforeTimeHasBeenSet() const { return m_submittedBeforeTimeHasBeenSet; }
    template<typename SubmittedBeforeTimeT = Aws::Utils::DateTime>
    void SetSubmittedBeforeTime(SubmittedBeforeTimeT&& value) { m_submittedBeforeTimeHasBeenSet = true; m_submittedBeforeTime = std::forward<SubmittedBeforeTimeT>(value); }
    template<typename SubmittedBeforeTimeT = Aws::Utils::DateTime>
    TextTranslationJobFilter& WithSubmittedBeforeTime(SubmittedBeforeTimeT&& value) { SetSubmittedBeforeTime(std::forward<SubmittedBeforeTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted after the specified time. Jobs
     * are returned in descending order, newest to oldest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedAfterTime() const { return m_submittedAfterTime; }
    inline bool SubmittedAfterTimeHasBeenSet() const { return m_submittedAfterTimeHasBeenSet; }
    template<typename SubmittedAfterTimeT = Aws::Utils::DateTime>
    void SetSubmittedAfterTime(SubmittedAfterTimeT&& value) { m_submittedAfterTimeHasBeenSet = true; m_submittedAfterTime = std::forward<SubmittedAfterTimeT>(value); }
    template<typename SubmittedAfterTimeT = Aws::Utils::DateTime>
    TextTranslationJobFilter& WithSubmittedAfterTime(SubmittedAfterTimeT&& value) { SetSubmittedAfterTime(std::forward<SubmittedAfterTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_submittedBeforeTime{};
    bool m_submittedBeforeTimeHasBeenSet = false;

    Aws::Utils::DateTime m_submittedAfterTime{};
    bool m_submittedAfterTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
