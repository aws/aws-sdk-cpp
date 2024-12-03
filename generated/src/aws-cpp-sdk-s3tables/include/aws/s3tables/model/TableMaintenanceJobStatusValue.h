/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace S3Tables
{
namespace Model
{

  /**
   * <p>Details about the status of a maintenance job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableMaintenanceJobStatusValue">AWS
   * API Reference</a></p>
   */
  class TableMaintenanceJobStatusValue
  {
  public:
    AWS_S3TABLES_API TableMaintenanceJobStatusValue();
    AWS_S3TABLES_API TableMaintenanceJobStatusValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API TableMaintenanceJobStatusValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the job.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TableMaintenanceJobStatusValue& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline TableMaintenanceJobStatusValue& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the maintenance job was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunTimestamp() const{ return m_lastRunTimestamp; }
    inline bool LastRunTimestampHasBeenSet() const { return m_lastRunTimestampHasBeenSet; }
    inline void SetLastRunTimestamp(const Aws::Utils::DateTime& value) { m_lastRunTimestampHasBeenSet = true; m_lastRunTimestamp = value; }
    inline void SetLastRunTimestamp(Aws::Utils::DateTime&& value) { m_lastRunTimestampHasBeenSet = true; m_lastRunTimestamp = std::move(value); }
    inline TableMaintenanceJobStatusValue& WithLastRunTimestamp(const Aws::Utils::DateTime& value) { SetLastRunTimestamp(value); return *this;}
    inline TableMaintenanceJobStatusValue& WithLastRunTimestamp(Aws::Utils::DateTime&& value) { SetLastRunTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure message of a failed job.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }
    inline TableMaintenanceJobStatusValue& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline TableMaintenanceJobStatusValue& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline TableMaintenanceJobStatusValue& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}
  private:

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastRunTimestamp;
    bool m_lastRunTimestampHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
