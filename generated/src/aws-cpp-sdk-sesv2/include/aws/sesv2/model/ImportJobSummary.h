/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ImportDestination.h>
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
   * <p>A summary of the import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ImportJobSummary">AWS
   * API Reference</a></p>
   */
  class ImportJobSummary
  {
  public:
    AWS_SESV2_API ImportJobSummary() = default;
    AWS_SESV2_API ImportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ImportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    ImportJobSummary& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ImportDestination& GetImportDestination() const { return m_importDestination; }
    inline bool ImportDestinationHasBeenSet() const { return m_importDestinationHasBeenSet; }
    template<typename ImportDestinationT = ImportDestination>
    void SetImportDestination(ImportDestinationT&& value) { m_importDestinationHasBeenSet = true; m_importDestination = std::forward<ImportDestinationT>(value); }
    template<typename ImportDestinationT = ImportDestination>
    ImportJobSummary& WithImportDestination(ImportDestinationT&& value) { SetImportDestination(std::forward<ImportDestinationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline ImportJobSummary& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    ImportJobSummary& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of records processed.</p>
     */
    inline int GetProcessedRecordsCount() const { return m_processedRecordsCount; }
    inline bool ProcessedRecordsCountHasBeenSet() const { return m_processedRecordsCountHasBeenSet; }
    inline void SetProcessedRecordsCount(int value) { m_processedRecordsCountHasBeenSet = true; m_processedRecordsCount = value; }
    inline ImportJobSummary& WithProcessedRecordsCount(int value) { SetProcessedRecordsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records that failed processing because of invalid input or
     * other reasons.</p>
     */
    inline int GetFailedRecordsCount() const { return m_failedRecordsCount; }
    inline bool FailedRecordsCountHasBeenSet() const { return m_failedRecordsCountHasBeenSet; }
    inline void SetFailedRecordsCount(int value) { m_failedRecordsCountHasBeenSet = true; m_failedRecordsCount = value; }
    inline ImportJobSummary& WithFailedRecordsCount(int value) { SetFailedRecordsCount(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    ImportDestination m_importDestination;
    bool m_importDestinationHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    int m_processedRecordsCount{0};
    bool m_processedRecordsCountHasBeenSet = false;

    int m_failedRecordsCount{0};
    bool m_failedRecordsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
