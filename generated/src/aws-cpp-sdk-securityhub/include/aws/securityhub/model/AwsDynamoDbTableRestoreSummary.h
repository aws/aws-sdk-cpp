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
    AWS_SECURITYHUB_API AwsDynamoDbTableRestoreSummary() = default;
    AWS_SECURITYHUB_API AwsDynamoDbTableRestoreSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableRestoreSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the source backup from which the table was restored.</p>
     */
    inline const Aws::String& GetSourceBackupArn() const { return m_sourceBackupArn; }
    inline bool SourceBackupArnHasBeenSet() const { return m_sourceBackupArnHasBeenSet; }
    template<typename SourceBackupArnT = Aws::String>
    void SetSourceBackupArn(SourceBackupArnT&& value) { m_sourceBackupArnHasBeenSet = true; m_sourceBackupArn = std::forward<SourceBackupArnT>(value); }
    template<typename SourceBackupArnT = Aws::String>
    AwsDynamoDbTableRestoreSummary& WithSourceBackupArn(SourceBackupArnT&& value) { SetSourceBackupArn(std::forward<SourceBackupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source table for the backup.</p>
     */
    inline const Aws::String& GetSourceTableArn() const { return m_sourceTableArn; }
    inline bool SourceTableArnHasBeenSet() const { return m_sourceTableArnHasBeenSet; }
    template<typename SourceTableArnT = Aws::String>
    void SetSourceTableArn(SourceTableArnT&& value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn = std::forward<SourceTableArnT>(value); }
    template<typename SourceTableArnT = Aws::String>
    AwsDynamoDbTableRestoreSummary& WithSourceTableArn(SourceTableArnT&& value) { SetSourceTableArn(std::forward<SourceTableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the point in time that the table was restored to.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetRestoreDateTime() const { return m_restoreDateTime; }
    inline bool RestoreDateTimeHasBeenSet() const { return m_restoreDateTimeHasBeenSet; }
    template<typename RestoreDateTimeT = Aws::String>
    void SetRestoreDateTime(RestoreDateTimeT&& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = std::forward<RestoreDateTimeT>(value); }
    template<typename RestoreDateTimeT = Aws::String>
    AwsDynamoDbTableRestoreSummary& WithRestoreDateTime(RestoreDateTimeT&& value) { SetRestoreDateTime(std::forward<RestoreDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether a restore is currently in progress.</p>
     */
    inline bool GetRestoreInProgress() const { return m_restoreInProgress; }
    inline bool RestoreInProgressHasBeenSet() const { return m_restoreInProgressHasBeenSet; }
    inline void SetRestoreInProgress(bool value) { m_restoreInProgressHasBeenSet = true; m_restoreInProgress = value; }
    inline AwsDynamoDbTableRestoreSummary& WithRestoreInProgress(bool value) { SetRestoreInProgress(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceBackupArn;
    bool m_sourceBackupArnHasBeenSet = false;

    Aws::String m_sourceTableArn;
    bool m_sourceTableArnHasBeenSet = false;

    Aws::String m_restoreDateTime;
    bool m_restoreDateTimeHasBeenSet = false;

    bool m_restoreInProgress{false};
    bool m_restoreInProgressHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
