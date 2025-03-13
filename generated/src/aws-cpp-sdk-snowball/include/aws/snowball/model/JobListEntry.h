/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/JobState.h>
#include <aws/snowball/model/JobType.h>
#include <aws/snowball/model/SnowballType.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
   * a value that indicates whether the job is a job part, in the case of an export
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/JobListEntry">AWS
   * API Reference</a></p>
   */
  class JobListEntry
  {
  public:
    AWS_SNOWBALL_API JobListEntry() = default;
    AWS_SNOWBALL_API JobListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API JobListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    JobListEntry& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of this job.</p>
     */
    inline JobState GetJobState() const { return m_jobState; }
    inline bool JobStateHasBeenSet() const { return m_jobStateHasBeenSet; }
    inline void SetJobState(JobState value) { m_jobStateHasBeenSet = true; m_jobState = value; }
    inline JobListEntry& WithJobState(JobState value) { SetJobState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates that this job is a main job. A main job represents a
     * successful request to create an export job. Main jobs aren't associated with any
     * Snowballs. Instead, each main job will have at least one job part, and each job
     * part is associated with a Snowball. It might take some time before the job parts
     * associated with a particular main job are listed, because they are created after
     * the main job is created.</p>
     */
    inline bool GetIsMaster() const { return m_isMaster; }
    inline bool IsMasterHasBeenSet() const { return m_isMasterHasBeenSet; }
    inline void SetIsMaster(bool value) { m_isMasterHasBeenSet = true; m_isMaster = value; }
    inline JobListEntry& WithIsMaster(bool value) { SetIsMaster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job.</p>
     */
    inline JobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline JobListEntry& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device used with this job.</p>
     */
    inline SnowballType GetSnowballType() const { return m_snowballType; }
    inline bool SnowballTypeHasBeenSet() const { return m_snowballTypeHasBeenSet; }
    inline void SetSnowballType(SnowballType value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }
    inline JobListEntry& WithSnowballType(SnowballType value) { SetSnowballType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date for this job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    JobListEntry& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description of this specific job, for example <code>Important
     * Photos 2016-08-11</code>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    JobListEntry& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobState m_jobState{JobState::NOT_SET};
    bool m_jobStateHasBeenSet = false;

    bool m_isMaster{false};
    bool m_isMasterHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    SnowballType m_snowballType{SnowballType::NOT_SET};
    bool m_snowballTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
