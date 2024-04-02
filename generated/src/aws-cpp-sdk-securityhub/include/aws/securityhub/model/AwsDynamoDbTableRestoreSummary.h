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
   * <p>Information about the restore for the table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableRestoreSummary">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableRestoreSummary
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableRestoreSummary();
    AWS_SECURITYHUB_API AwsDynamoDbTableRestoreSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableRestoreSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the source backup from which the table was restored.</p>
     */
    inline const Aws::String& GetSourceBackupArn() const{ return m_sourceBackupArn; }

    /**
     * <p>The ARN of the source backup from which the table was restored.</p>
     */
    inline bool SourceBackupArnHasBeenSet() const { return m_sourceBackupArnHasBeenSet; }

    /**
     * <p>The ARN of the source backup from which the table was restored.</p>
     */
    inline void SetSourceBackupArn(const Aws::String& value) { m_sourceBackupArnHasBeenSet = true; m_sourceBackupArn = value; }

    /**
     * <p>The ARN of the source backup from which the table was restored.</p>
     */
    inline void SetSourceBackupArn(Aws::String&& value) { m_sourceBackupArnHasBeenSet = true; m_sourceBackupArn = std::move(value); }

    /**
     * <p>The ARN of the source backup from which the table was restored.</p>
     */
    inline void SetSourceBackupArn(const char* value) { m_sourceBackupArnHasBeenSet = true; m_sourceBackupArn.assign(value); }

    /**
     * <p>The ARN of the source backup from which the table was restored.</p>
     */
    inline AwsDynamoDbTableRestoreSummary& WithSourceBackupArn(const Aws::String& value) { SetSourceBackupArn(value); return *this;}

    /**
     * <p>The ARN of the source backup from which the table was restored.</p>
     */
    inline AwsDynamoDbTableRestoreSummary& WithSourceBackupArn(Aws::String&& value) { SetSourceBackupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the source backup from which the table was restored.</p>
     */
    inline AwsDynamoDbTableRestoreSummary& WithSourceBackupArn(const char* value) { SetSourceBackupArn(value); return *this;}


    /**
     * <p>The ARN of the source table for the backup.</p>
     */
    inline const Aws::String& GetSourceTableArn() const{ return m_sourceTableArn; }

    /**
     * <p>The ARN of the source table for the backup.</p>
     */
    inline bool SourceTableArnHasBeenSet() const { return m_sourceTableArnHasBeenSet; }

    /**
     * <p>The ARN of the source table for the backup.</p>
     */
    inline void SetSourceTableArn(const Aws::String& value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn = value; }

    /**
     * <p>The ARN of the source table for the backup.</p>
     */
    inline void SetSourceTableArn(Aws::String&& value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn = std::move(value); }

    /**
     * <p>The ARN of the source table for the backup.</p>
     */
    inline void SetSourceTableArn(const char* value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn.assign(value); }

    /**
     * <p>The ARN of the source table for the backup.</p>
     */
    inline AwsDynamoDbTableRestoreSummary& WithSourceTableArn(const Aws::String& value) { SetSourceTableArn(value); return *this;}

    /**
     * <p>The ARN of the source table for the backup.</p>
     */
    inline AwsDynamoDbTableRestoreSummary& WithSourceTableArn(Aws::String&& value) { SetSourceTableArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the source table for the backup.</p>
     */
    inline AwsDynamoDbTableRestoreSummary& WithSourceTableArn(const char* value) { SetSourceTableArn(value); return *this;}


    /**
     * <p>Indicates the point in time that the table was restored to.</p> <p>This field
     * accepts only the specified formats. Timestamps can end with <code>Z</code> or
     * <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline const Aws::String& GetRestoreDateTime() const{ return m_restoreDateTime; }

    /**
     * <p>Indicates the point in time that the table was restored to.</p> <p>This field
     * accepts only the specified formats. Timestamps can end with <code>Z</code> or
     * <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline bool RestoreDateTimeHasBeenSet() const { return m_restoreDateTimeHasBeenSet; }

    /**
     * <p>Indicates the point in time that the table was restored to.</p> <p>This field
     * accepts only the specified formats. Timestamps can end with <code>Z</code> or
     * <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetRestoreDateTime(const Aws::String& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = value; }

    /**
     * <p>Indicates the point in time that the table was restored to.</p> <p>This field
     * accepts only the specified formats. Timestamps can end with <code>Z</code> or
     * <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetRestoreDateTime(Aws::String&& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = std::move(value); }

    /**
     * <p>Indicates the point in time that the table was restored to.</p> <p>This field
     * accepts only the specified formats. Timestamps can end with <code>Z</code> or
     * <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetRestoreDateTime(const char* value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime.assign(value); }

    /**
     * <p>Indicates the point in time that the table was restored to.</p> <p>This field
     * accepts only the specified formats. Timestamps can end with <code>Z</code> or
     * <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline AwsDynamoDbTableRestoreSummary& WithRestoreDateTime(const Aws::String& value) { SetRestoreDateTime(value); return *this;}

    /**
     * <p>Indicates the point in time that the table was restored to.</p> <p>This field
     * accepts only the specified formats. Timestamps can end with <code>Z</code> or
     * <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline AwsDynamoDbTableRestoreSummary& WithRestoreDateTime(Aws::String&& value) { SetRestoreDateTime(std::move(value)); return *this;}

    /**
     * <p>Indicates the point in time that the table was restored to.</p> <p>This field
     * accepts only the specified formats. Timestamps can end with <code>Z</code> or
     * <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline AwsDynamoDbTableRestoreSummary& WithRestoreDateTime(const char* value) { SetRestoreDateTime(value); return *this;}


    /**
     * <p>Whether a restore is currently in progress.</p>
     */
    inline bool GetRestoreInProgress() const{ return m_restoreInProgress; }

    /**
     * <p>Whether a restore is currently in progress.</p>
     */
    inline bool RestoreInProgressHasBeenSet() const { return m_restoreInProgressHasBeenSet; }

    /**
     * <p>Whether a restore is currently in progress.</p>
     */
    inline void SetRestoreInProgress(bool value) { m_restoreInProgressHasBeenSet = true; m_restoreInProgress = value; }

    /**
     * <p>Whether a restore is currently in progress.</p>
     */
    inline AwsDynamoDbTableRestoreSummary& WithRestoreInProgress(bool value) { SetRestoreInProgress(value); return *this;}

  private:

    Aws::String m_sourceBackupArn;
    bool m_sourceBackupArnHasBeenSet = false;

    Aws::String m_sourceTableArn;
    bool m_sourceTableArnHasBeenSet = false;

    Aws::String m_restoreDateTime;
    bool m_restoreDateTimeHasBeenSet = false;

    bool m_restoreInProgress;
    bool m_restoreInProgressHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
