/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class GetClusterCredentialsWithIAMRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API GetClusterCredentialsWithIAMRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetClusterCredentialsWithIAM"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the database for which you are requesting credentials. If the
     * database name is specified, the IAM policy must allow access to the resource
     * <code>dbname</code> for the specified database name. If the database name is not
     * specified, access to all databases is allowed.</p>
     */
    inline const Aws::String& GetDbName() const{ return m_dbName; }

    /**
     * <p>The name of the database for which you are requesting credentials. If the
     * database name is specified, the IAM policy must allow access to the resource
     * <code>dbname</code> for the specified database name. If the database name is not
     * specified, access to all databases is allowed.</p>
     */
    inline bool DbNameHasBeenSet() const { return m_dbNameHasBeenSet; }

    /**
     * <p>The name of the database for which you are requesting credentials. If the
     * database name is specified, the IAM policy must allow access to the resource
     * <code>dbname</code> for the specified database name. If the database name is not
     * specified, access to all databases is allowed.</p>
     */
    inline void SetDbName(const Aws::String& value) { m_dbNameHasBeenSet = true; m_dbName = value; }

    /**
     * <p>The name of the database for which you are requesting credentials. If the
     * database name is specified, the IAM policy must allow access to the resource
     * <code>dbname</code> for the specified database name. If the database name is not
     * specified, access to all databases is allowed.</p>
     */
    inline void SetDbName(Aws::String&& value) { m_dbNameHasBeenSet = true; m_dbName = std::move(value); }

    /**
     * <p>The name of the database for which you are requesting credentials. If the
     * database name is specified, the IAM policy must allow access to the resource
     * <code>dbname</code> for the specified database name. If the database name is not
     * specified, access to all databases is allowed.</p>
     */
    inline void SetDbName(const char* value) { m_dbNameHasBeenSet = true; m_dbName.assign(value); }

    /**
     * <p>The name of the database for which you are requesting credentials. If the
     * database name is specified, the IAM policy must allow access to the resource
     * <code>dbname</code> for the specified database name. If the database name is not
     * specified, access to all databases is allowed.</p>
     */
    inline GetClusterCredentialsWithIAMRequest& WithDbName(const Aws::String& value) { SetDbName(value); return *this;}

    /**
     * <p>The name of the database for which you are requesting credentials. If the
     * database name is specified, the IAM policy must allow access to the resource
     * <code>dbname</code> for the specified database name. If the database name is not
     * specified, access to all databases is allowed.</p>
     */
    inline GetClusterCredentialsWithIAMRequest& WithDbName(Aws::String&& value) { SetDbName(std::move(value)); return *this;}

    /**
     * <p>The name of the database for which you are requesting credentials. If the
     * database name is specified, the IAM policy must allow access to the resource
     * <code>dbname</code> for the specified database name. If the database name is not
     * specified, access to all databases is allowed.</p>
     */
    inline GetClusterCredentialsWithIAMRequest& WithDbName(const char* value) { SetDbName(value); return *this;}


    /**
     * <p>The unique identifier of the cluster that contains the database for which you
     * are requesting credentials. </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of the cluster that contains the database for which you
     * are requesting credentials. </p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the cluster that contains the database for which you
     * are requesting credentials. </p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster that contains the database for which you
     * are requesting credentials. </p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the cluster that contains the database for which you
     * are requesting credentials. </p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the cluster that contains the database for which you
     * are requesting credentials. </p>
     */
    inline GetClusterCredentialsWithIAMRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster that contains the database for which you
     * are requesting credentials. </p>
     */
    inline GetClusterCredentialsWithIAMRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cluster that contains the database for which you
     * are requesting credentials. </p>
     */
    inline GetClusterCredentialsWithIAMRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The number of seconds until the returned temporary password expires.</p>
     * <p>Range: 900-3600. Default: 900.</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The number of seconds until the returned temporary password expires.</p>
     * <p>Range: 900-3600. Default: 900.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The number of seconds until the returned temporary password expires.</p>
     * <p>Range: 900-3600. Default: 900.</p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The number of seconds until the returned temporary password expires.</p>
     * <p>Range: 900-3600. Default: 900.</p>
     */
    inline GetClusterCredentialsWithIAMRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}

  private:

    Aws::String m_dbName;
    bool m_dbNameHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
