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
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class FailoverDBClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API FailoverDBClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FailoverDBCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the DB cluster to force a failover for. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    FailoverDBClusterRequest& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB instance to promote to the primary DB instance.</p>
     * <p>Specify the DB instance identifier for an Aurora Replica or a Multi-AZ
     * readable standby in the DB cluster, for example
     * <code>mydbcluster-replica1</code>.</p> <p>This setting isn't supported for RDS
     * for MySQL Multi-AZ DB clusters.</p>
     */
    inline const Aws::String& GetTargetDBInstanceIdentifier() const { return m_targetDBInstanceIdentifier; }
    inline bool TargetDBInstanceIdentifierHasBeenSet() const { return m_targetDBInstanceIdentifierHasBeenSet; }
    template<typename TargetDBInstanceIdentifierT = Aws::String>
    void SetTargetDBInstanceIdentifier(TargetDBInstanceIdentifierT&& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = std::forward<TargetDBInstanceIdentifierT>(value); }
    template<typename TargetDBInstanceIdentifierT = Aws::String>
    FailoverDBClusterRequest& WithTargetDBInstanceIdentifier(TargetDBInstanceIdentifierT&& value) { SetTargetDBInstanceIdentifier(std::forward<TargetDBInstanceIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_targetDBInstanceIdentifier;
    bool m_targetDBInstanceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
