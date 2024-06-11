﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains information about an instance that is part of a DB
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBClusterMember">AWS
   * API Reference</a></p>
   */
  class DBClusterMember
  {
  public:
    AWS_NEPTUNE_API DBClusterMember();
    AWS_NEPTUNE_API DBClusterMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBClusterMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the instance identifier for this member of the DB cluster.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline DBClusterMember& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline DBClusterMember& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline DBClusterMember& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Value that is <code>true</code> if the cluster member is the primary instance
     * for the DB cluster and <code>false</code> otherwise.</p>
     */
    inline bool GetIsClusterWriter() const{ return m_isClusterWriter; }
    inline bool IsClusterWriterHasBeenSet() const { return m_isClusterWriterHasBeenSet; }
    inline void SetIsClusterWriter(bool value) { m_isClusterWriterHasBeenSet = true; m_isClusterWriter = value; }
    inline DBClusterMember& WithIsClusterWriter(bool value) { SetIsClusterWriter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the DB cluster parameter group for this member of the
     * DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupStatus() const{ return m_dBClusterParameterGroupStatus; }
    inline bool DBClusterParameterGroupStatusHasBeenSet() const { return m_dBClusterParameterGroupStatusHasBeenSet; }
    inline void SetDBClusterParameterGroupStatus(const Aws::String& value) { m_dBClusterParameterGroupStatusHasBeenSet = true; m_dBClusterParameterGroupStatus = value; }
    inline void SetDBClusterParameterGroupStatus(Aws::String&& value) { m_dBClusterParameterGroupStatusHasBeenSet = true; m_dBClusterParameterGroupStatus = std::move(value); }
    inline void SetDBClusterParameterGroupStatus(const char* value) { m_dBClusterParameterGroupStatusHasBeenSet = true; m_dBClusterParameterGroupStatus.assign(value); }
    inline DBClusterMember& WithDBClusterParameterGroupStatus(const Aws::String& value) { SetDBClusterParameterGroupStatus(value); return *this;}
    inline DBClusterMember& WithDBClusterParameterGroupStatus(Aws::String&& value) { SetDBClusterParameterGroupStatus(std::move(value)); return *this;}
    inline DBClusterMember& WithDBClusterParameterGroupStatus(const char* value) { SetDBClusterParameterGroupStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the order in which a Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance.</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline DBClusterMember& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
    ///@}
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
} // namespace Neptune
} // namespace Aws
