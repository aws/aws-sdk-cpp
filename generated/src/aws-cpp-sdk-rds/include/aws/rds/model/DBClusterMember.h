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
    AWS_RDS_API DBClusterMember() = default;
    AWS_RDS_API DBClusterMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBClusterMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the instance identifier for this member of the DB cluster.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    DBClusterMember& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the cluster member is the primary DB instance for the DB
     * cluster.</p>
     */
    inline bool GetIsClusterWriter() const { return m_isClusterWriter; }
    inline bool IsClusterWriterHasBeenSet() const { return m_isClusterWriterHasBeenSet; }
    inline void SetIsClusterWriter(bool value) { m_isClusterWriterHasBeenSet = true; m_isClusterWriter = value; }
    inline DBClusterMember& WithIsClusterWriter(bool value) { SetIsClusterWriter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the DB cluster parameter group for this member of the
     * DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupStatus() const { return m_dBClusterParameterGroupStatus; }
    inline bool DBClusterParameterGroupStatusHasBeenSet() const { return m_dBClusterParameterGroupStatusHasBeenSet; }
    template<typename DBClusterParameterGroupStatusT = Aws::String>
    void SetDBClusterParameterGroupStatus(DBClusterParameterGroupStatusT&& value) { m_dBClusterParameterGroupStatusHasBeenSet = true; m_dBClusterParameterGroupStatus = std::forward<DBClusterParameterGroupStatusT>(value); }
    template<typename DBClusterParameterGroupStatusT = Aws::String>
    DBClusterMember& WithDBClusterParameterGroupStatus(DBClusterParameterGroupStatusT&& value) { SetDBClusterParameterGroupStatus(std::forward<DBClusterParameterGroupStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline int GetPromotionTier() const { return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline DBClusterMember& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    bool m_isClusterWriter{false};
    bool m_isClusterWriterHasBeenSet = false;

    Aws::String m_dBClusterParameterGroupStatus;
    bool m_dBClusterParameterGroupStatusHasBeenSet = false;

    int m_promotionTier{0};
    bool m_promotionTierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
