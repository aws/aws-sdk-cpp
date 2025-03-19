/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ExportSourceType.h>
#include <aws/sesv2/model/JobStatus.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>A summary of the export job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ExportJobSummary">AWS
   * API Reference</a></p>
   */
  class ExportJobSummary
  {
  public:
    AWS_SESV2_API ExportJobSummary() = default;
    AWS_SESV2_API ExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The export job ID.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    ExportJobSummary& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type of the export job.</p>
     */
    inline ExportSourceType GetExportSourceType() const { return m_exportSourceType; }
    inline bool ExportSourceTypeHasBeenSet() const { return m_exportSourceTypeHasBeenSet; }
    inline void SetExportSourceType(ExportSourceType value) { m_exportSourceTypeHasBeenSet = true; m_exportSourceType = value; }
    inline ExportJobSummary& WithExportSourceType(ExportSourceType value) { SetExportSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export job.</p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline ExportJobSummary& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    ExportJobSummary& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the export job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const { return m_completedTimestamp; }
    inline bool CompletedTimestampHasBeenSet() const { return m_completedTimestampHasBeenSet; }
    template<typename CompletedTimestampT = Aws::Utils::DateTime>
    void SetCompletedTimestamp(CompletedTimestampT&& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = std::forward<CompletedTimestampT>(value); }
    template<typename CompletedTimestampT = Aws::Utils::DateTime>
    ExportJobSummary& WithCompletedTimestamp(CompletedTimestampT&& value) { SetCompletedTimestamp(std::forward<CompletedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    ExportSourceType m_exportSourceType{ExportSourceType::NOT_SET};
    bool m_exportSourceTypeHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_completedTimestamp{};
    bool m_completedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
