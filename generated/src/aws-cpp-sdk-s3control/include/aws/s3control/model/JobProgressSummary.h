/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/JobTimers.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Describes the total number of tasks that the specified job has started, the
   * number of tasks that succeeded, and the number of tasks that
   * failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobProgressSummary">AWS
   * API Reference</a></p>
   */
  class JobProgressSummary
  {
  public:
    AWS_S3CONTROL_API JobProgressSummary();
    AWS_S3CONTROL_API JobProgressSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobProgressSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline long long GetTotalNumberOfTasks() const{ return m_totalNumberOfTasks; }

    /**
     * <p/>
     */
    inline bool TotalNumberOfTasksHasBeenSet() const { return m_totalNumberOfTasksHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTotalNumberOfTasks(long long value) { m_totalNumberOfTasksHasBeenSet = true; m_totalNumberOfTasks = value; }

    /**
     * <p/>
     */
    inline JobProgressSummary& WithTotalNumberOfTasks(long long value) { SetTotalNumberOfTasks(value); return *this;}


    /**
     * <p/>
     */
    inline long long GetNumberOfTasksSucceeded() const{ return m_numberOfTasksSucceeded; }

    /**
     * <p/>
     */
    inline bool NumberOfTasksSucceededHasBeenSet() const { return m_numberOfTasksSucceededHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetNumberOfTasksSucceeded(long long value) { m_numberOfTasksSucceededHasBeenSet = true; m_numberOfTasksSucceeded = value; }

    /**
     * <p/>
     */
    inline JobProgressSummary& WithNumberOfTasksSucceeded(long long value) { SetNumberOfTasksSucceeded(value); return *this;}


    /**
     * <p/>
     */
    inline long long GetNumberOfTasksFailed() const{ return m_numberOfTasksFailed; }

    /**
     * <p/>
     */
    inline bool NumberOfTasksFailedHasBeenSet() const { return m_numberOfTasksFailedHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetNumberOfTasksFailed(long long value) { m_numberOfTasksFailedHasBeenSet = true; m_numberOfTasksFailed = value; }

    /**
     * <p/>
     */
    inline JobProgressSummary& WithNumberOfTasksFailed(long long value) { SetNumberOfTasksFailed(value); return *this;}


    /**
     * <p>The JobTimers attribute of a job's progress summary.</p>
     */
    inline const JobTimers& GetTimers() const{ return m_timers; }

    /**
     * <p>The JobTimers attribute of a job's progress summary.</p>
     */
    inline bool TimersHasBeenSet() const { return m_timersHasBeenSet; }

    /**
     * <p>The JobTimers attribute of a job's progress summary.</p>
     */
    inline void SetTimers(const JobTimers& value) { m_timersHasBeenSet = true; m_timers = value; }

    /**
     * <p>The JobTimers attribute of a job's progress summary.</p>
     */
    inline void SetTimers(JobTimers&& value) { m_timersHasBeenSet = true; m_timers = std::move(value); }

    /**
     * <p>The JobTimers attribute of a job's progress summary.</p>
     */
    inline JobProgressSummary& WithTimers(const JobTimers& value) { SetTimers(value); return *this;}

    /**
     * <p>The JobTimers attribute of a job's progress summary.</p>
     */
    inline JobProgressSummary& WithTimers(JobTimers&& value) { SetTimers(std::move(value)); return *this;}

  private:

    long long m_totalNumberOfTasks;
    bool m_totalNumberOfTasksHasBeenSet = false;

    long long m_numberOfTasksSucceeded;
    bool m_numberOfTasksSucceededHasBeenSet = false;

    long long m_numberOfTasksFailed;
    bool m_numberOfTasksFailedHasBeenSet = false;

    JobTimers m_timers;
    bool m_timersHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
