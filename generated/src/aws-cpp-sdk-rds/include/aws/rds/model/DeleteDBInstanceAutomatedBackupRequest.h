/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p>Parameter input for the <code>DeleteDBInstanceAutomatedBackup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBInstanceAutomatedBackupMessage">AWS
   * API Reference</a></p>
   */
  class DeleteDBInstanceAutomatedBackupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteDBInstanceAutomatedBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBInstanceAutomatedBackup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an Amazon Web Services Region.</p>
     */
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an Amazon Web Services Region.</p>
     */
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an Amazon Web Services Region.</p>
     */
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an Amazon Web Services Region.</p>
     */
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an Amazon Web Services Region.</p>
     */
    inline DeleteDBInstanceAutomatedBackupRequest& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an Amazon Web Services Region.</p>
     */
    inline DeleteDBInstanceAutomatedBackupRequest& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an Amazon Web Services Region.</p>
     */
    inline DeleteDBInstanceAutomatedBackupRequest& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the automated backups to delete, for
     * example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetDBInstanceAutomatedBackupsArn() const{ return m_dBInstanceAutomatedBackupsArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the automated backups to delete, for
     * example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool DBInstanceAutomatedBackupsArnHasBeenSet() const { return m_dBInstanceAutomatedBackupsArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the automated backups to delete, for
     * example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetDBInstanceAutomatedBackupsArn(const Aws::String& value) { m_dBInstanceAutomatedBackupsArnHasBeenSet = true; m_dBInstanceAutomatedBackupsArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the automated backups to delete, for
     * example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetDBInstanceAutomatedBackupsArn(Aws::String&& value) { m_dBInstanceAutomatedBackupsArnHasBeenSet = true; m_dBInstanceAutomatedBackupsArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the automated backups to delete, for
     * example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetDBInstanceAutomatedBackupsArn(const char* value) { m_dBInstanceAutomatedBackupsArnHasBeenSet = true; m_dBInstanceAutomatedBackupsArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the automated backups to delete, for
     * example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline DeleteDBInstanceAutomatedBackupRequest& WithDBInstanceAutomatedBackupsArn(const Aws::String& value) { SetDBInstanceAutomatedBackupsArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the automated backups to delete, for
     * example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline DeleteDBInstanceAutomatedBackupRequest& WithDBInstanceAutomatedBackupsArn(Aws::String&& value) { SetDBInstanceAutomatedBackupsArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the automated backups to delete, for
     * example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline DeleteDBInstanceAutomatedBackupRequest& WithDBInstanceAutomatedBackupsArn(const char* value) { SetDBInstanceAutomatedBackupsArn(value); return *this;}

  private:

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;

    Aws::String m_dBInstanceAutomatedBackupsArn;
    bool m_dBInstanceAutomatedBackupsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
