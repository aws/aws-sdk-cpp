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
   * <p>This data type is used as a response element in the following actions:</p>
   * <ul> <li> <p> <code>ModifyDBInstance</code> </p> </li> <li> <p>
   * <code>RebootDBInstance</code> </p> </li> <li> <p>
   * <code>RestoreDBInstanceFromDBSnapshot</code> </p> </li> <li> <p>
   * <code>RestoreDBInstanceToPointInTime</code> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSecurityGroupMembership">AWS
   * API Reference</a></p>
   */
  class DBSecurityGroupMembership
  {
  public:
    AWS_RDS_API DBSecurityGroupMembership() = default;
    AWS_RDS_API DBSecurityGroupMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBSecurityGroupMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the DB security group.</p>
     */
    inline const Aws::String& GetDBSecurityGroupName() const { return m_dBSecurityGroupName; }
    inline bool DBSecurityGroupNameHasBeenSet() const { return m_dBSecurityGroupNameHasBeenSet; }
    template<typename DBSecurityGroupNameT = Aws::String>
    void SetDBSecurityGroupName(DBSecurityGroupNameT&& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = std::forward<DBSecurityGroupNameT>(value); }
    template<typename DBSecurityGroupNameT = Aws::String>
    DBSecurityGroupMembership& WithDBSecurityGroupName(DBSecurityGroupNameT&& value) { SetDBSecurityGroupName(std::forward<DBSecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB security group.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DBSecurityGroupMembership& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBSecurityGroupName;
    bool m_dBSecurityGroupNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
