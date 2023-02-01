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
   */
  class StopDBInstanceRequest : public RDSRequest
  {
  public:
    AWS_RDS_API StopDBInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopDBInstance"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The user-supplied instance identifier.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The user-supplied instance identifier.</p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The user-supplied instance identifier.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The user-supplied instance identifier.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The user-supplied instance identifier.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The user-supplied instance identifier.</p>
     */
    inline StopDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The user-supplied instance identifier.</p>
     */
    inline StopDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user-supplied instance identifier.</p>
     */
    inline StopDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The user-supplied instance identifier of the DB Snapshot created immediately
     * before the DB instance is stopped.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p>The user-supplied instance identifier of the DB Snapshot created immediately
     * before the DB instance is stopped.</p>
     */
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The user-supplied instance identifier of the DB Snapshot created immediately
     * before the DB instance is stopped.</p>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The user-supplied instance identifier of the DB Snapshot created immediately
     * before the DB instance is stopped.</p>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::move(value); }

    /**
     * <p>The user-supplied instance identifier of the DB Snapshot created immediately
     * before the DB instance is stopped.</p>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p>The user-supplied instance identifier of the DB Snapshot created immediately
     * before the DB instance is stopped.</p>
     */
    inline StopDBInstanceRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The user-supplied instance identifier of the DB Snapshot created immediately
     * before the DB instance is stopped.</p>
     */
    inline StopDBInstanceRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user-supplied instance identifier of the DB Snapshot created immediately
     * before the DB instance is stopped.</p>
     */
    inline StopDBInstanceRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
