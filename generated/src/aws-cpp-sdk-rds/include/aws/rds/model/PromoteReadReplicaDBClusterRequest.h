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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PromoteReadReplicaDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class PromoteReadReplicaDBClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API PromoteReadReplicaDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PromoteReadReplicaDBCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the DB cluster read replica to promote. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster read replica.</p> </li> </ul> <p>Example:
     * <code>my-cluster-replica1</code> </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The identifier of the DB cluster read replica to promote. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster read replica.</p> </li> </ul> <p>Example:
     * <code>my-cluster-replica1</code> </p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the DB cluster read replica to promote. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster read replica.</p> </li> </ul> <p>Example:
     * <code>my-cluster-replica1</code> </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The identifier of the DB cluster read replica to promote. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster read replica.</p> </li> </ul> <p>Example:
     * <code>my-cluster-replica1</code> </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the DB cluster read replica to promote. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster read replica.</p> </li> </ul> <p>Example:
     * <code>my-cluster-replica1</code> </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB cluster read replica to promote. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster read replica.</p> </li> </ul> <p>Example:
     * <code>my-cluster-replica1</code> </p>
     */
    inline PromoteReadReplicaDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB cluster read replica to promote. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster read replica.</p> </li> </ul> <p>Example:
     * <code>my-cluster-replica1</code> </p>
     */
    inline PromoteReadReplicaDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB cluster read replica to promote. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster read replica.</p> </li> </ul> <p>Example:
     * <code>my-cluster-replica1</code> </p>
     */
    inline PromoteReadReplicaDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
