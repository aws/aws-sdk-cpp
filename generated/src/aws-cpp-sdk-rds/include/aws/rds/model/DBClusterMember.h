/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains information about an instance that is part of a DB
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterMember">AWS
   * API Reference</a></p>
   */
  class DBClusterMember
  {
  public:
    AWS_RDS_API DBClusterMember();
    AWS_RDS_API DBClusterMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBClusterMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies the instance identifier for this member of the DB cluster.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>Specifies the instance identifier for this member of the DB cluster.</p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>Specifies the instance identifier for this member of the DB cluster.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>Specifies the instance identifier for this member of the DB cluster.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>Specifies the instance identifier for this member of the DB cluster.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>Specifies the instance identifier for this member of the DB cluster.</p>
     */
    inline DBClusterMember& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Specifies the instance identifier for this member of the DB cluster.</p>
     */
    inline DBClusterMember& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the instance identifier for this member of the DB cluster.</p>
     */
    inline DBClusterMember& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>Value that is <code>true</code> if the cluster member is the primary instance
     * for the DB cluster and <code>false</code> otherwise.</p>
     */
    inline bool GetIsClusterWriter() const{ return m_isClusterWriter; }

    /**
     * <p>Value that is <code>true</code> if the cluster member is the primary instance
     * for the DB cluster and <code>false</code> otherwise.</p>
     */
    inline bool IsClusterWriterHasBeenSet() const { return m_isClusterWriterHasBeenSet; }

    /**
     * <p>Value that is <code>true</code> if the cluster member is the primary instance
     * for the DB cluster and <code>false</code> otherwise.</p>
     */
    inline void SetIsClusterWriter(bool value) { m_isClusterWriterHasBeenSet = true; m_isClusterWriter = value; }

    /**
     * <p>Value that is <code>true</code> if the cluster member is the primary instance
     * for the DB cluster and <code>false</code> otherwise.</p>
     */
    inline DBClusterMember& WithIsClusterWriter(bool value) { SetIsClusterWriter(value); return *this;}


    /**
     * <p>Specifies the status of the DB cluster parameter group for this member of the
     * DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupStatus() const{ return m_dBClusterParameterGroupStatus; }

    /**
     * <p>Specifies the status of the DB cluster parameter group for this member of the
     * DB cluster.</p>
     */
    inline bool DBClusterParameterGroupStatusHasBeenSet() const { return m_dBClusterParameterGroupStatusHasBeenSet; }

    /**
     * <p>Specifies the status of the DB cluster parameter group for this member of the
     * DB cluster.</p>
     */
    inline void SetDBClusterParameterGroupStatus(const Aws::String& value) { m_dBClusterParameterGroupStatusHasBeenSet = true; m_dBClusterParameterGroupStatus = value; }

    /**
     * <p>Specifies the status of the DB cluster parameter group for this member of the
     * DB cluster.</p>
     */
    inline void SetDBClusterParameterGroupStatus(Aws::String&& value) { m_dBClusterParameterGroupStatusHasBeenSet = true; m_dBClusterParameterGroupStatus = std::move(value); }

    /**
     * <p>Specifies the status of the DB cluster parameter group for this member of the
     * DB cluster.</p>
     */
    inline void SetDBClusterParameterGroupStatus(const char* value) { m_dBClusterParameterGroupStatusHasBeenSet = true; m_dBClusterParameterGroupStatus.assign(value); }

    /**
     * <p>Specifies the status of the DB cluster parameter group for this member of the
     * DB cluster.</p>
     */
    inline DBClusterMember& WithDBClusterParameterGroupStatus(const Aws::String& value) { SetDBClusterParameterGroupStatus(value); return *this;}

    /**
     * <p>Specifies the status of the DB cluster parameter group for this member of the
     * DB cluster.</p>
     */
    inline DBClusterMember& WithDBClusterParameterGroupStatus(Aws::String&& value) { SetDBClusterParameterGroupStatus(std::move(value)); return *this;}

    /**
     * <p>Specifies the status of the DB cluster parameter group for this member of the
     * DB cluster.</p>
     */
    inline DBClusterMember& WithDBClusterParameterGroupStatus(const char* value) { SetDBClusterParameterGroupStatus(value); return *this;}


    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }

    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }

    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }

    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline DBClusterMember& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    bool m_isClusterWriter;
    bool m_isClusterWriterHasBeenSet = false;

    Aws::String m_dBClusterParameterGroupStatus;
    bool m_dBClusterParameterGroupStatusHasBeenSet = false;

    int m_promotionTier;
    bool m_promotionTierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
