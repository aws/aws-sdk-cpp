/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ConnectionPoolConfigurationInfo.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Represents a set of RDS DB instances, Aurora DB clusters, or both that a
   * proxy can connect to. Currently, each target group is associated with exactly
   * one RDS DB instance or Aurora DB cluster.</p> <p>This data type is used as a
   * response element in the <code>DescribeDBProxyTargetGroups</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBProxyTargetGroup">AWS
   * API Reference</a></p>
   */
  class DBProxyTargetGroup
  {
  public:
    AWS_RDS_API DBProxyTargetGroup() = default;
    AWS_RDS_API DBProxyTargetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBProxyTargetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier for the RDS proxy associated with this target group.</p>
     */
    inline const Aws::String& GetDBProxyName() const { return m_dBProxyName; }
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }
    template<typename DBProxyNameT = Aws::String>
    void SetDBProxyName(DBProxyNameT&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::forward<DBProxyNameT>(value); }
    template<typename DBProxyNameT = Aws::String>
    DBProxyTargetGroup& WithDBProxyName(DBProxyNameT&& value) { SetDBProxyName(std::forward<DBProxyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the target group. This name must be unique for all target
     * groups owned by your Amazon Web Services account in the specified Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetTargetGroupName() const { return m_targetGroupName; }
    inline bool TargetGroupNameHasBeenSet() const { return m_targetGroupNameHasBeenSet; }
    template<typename TargetGroupNameT = Aws::String>
    void SetTargetGroupName(TargetGroupNameT&& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = std::forward<TargetGroupNameT>(value); }
    template<typename TargetGroupNameT = Aws::String>
    DBProxyTargetGroup& WithTargetGroupName(TargetGroupNameT&& value) { SetTargetGroupName(std::forward<TargetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) representing the target group.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const { return m_targetGroupArn; }
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }
    template<typename TargetGroupArnT = Aws::String>
    void SetTargetGroupArn(TargetGroupArnT&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::forward<TargetGroupArnT>(value); }
    template<typename TargetGroupArnT = Aws::String>
    DBProxyTargetGroup& WithTargetGroupArn(TargetGroupArnT&& value) { SetTargetGroupArn(std::forward<TargetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this target group is the first one used for connection
     * requests by the associated proxy. Because each proxy is currently associated
     * with a single target group, currently this setting is always
     * <code>true</code>.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline DBProxyTargetGroup& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of this target group. A status of <code>available</code>
     * means the target group is correctly associated with a database. Other values
     * indicate that you must wait for the target group to be ready, or take some
     * action to resolve an issue.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DBProxyTargetGroup& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings that determine the size and behavior of the connection pool for
     * the target group.</p>
     */
    inline const ConnectionPoolConfigurationInfo& GetConnectionPoolConfig() const { return m_connectionPoolConfig; }
    inline bool ConnectionPoolConfigHasBeenSet() const { return m_connectionPoolConfigHasBeenSet; }
    template<typename ConnectionPoolConfigT = ConnectionPoolConfigurationInfo>
    void SetConnectionPoolConfig(ConnectionPoolConfigT&& value) { m_connectionPoolConfigHasBeenSet = true; m_connectionPoolConfig = std::forward<ConnectionPoolConfigT>(value); }
    template<typename ConnectionPoolConfigT = ConnectionPoolConfigurationInfo>
    DBProxyTargetGroup& WithConnectionPoolConfig(ConnectionPoolConfigT&& value) { SetConnectionPoolConfig(std::forward<ConnectionPoolConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the target group was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    DBProxyTargetGroup& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the target group was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedDate() const { return m_updatedDate; }
    inline bool UpdatedDateHasBeenSet() const { return m_updatedDateHasBeenSet; }
    template<typename UpdatedDateT = Aws::Utils::DateTime>
    void SetUpdatedDate(UpdatedDateT&& value) { m_updatedDateHasBeenSet = true; m_updatedDate = std::forward<UpdatedDateT>(value); }
    template<typename UpdatedDateT = Aws::Utils::DateTime>
    DBProxyTargetGroup& WithUpdatedDate(UpdatedDateT&& value) { SetUpdatedDate(std::forward<UpdatedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    Aws::String m_targetGroupName;
    bool m_targetGroupNameHasBeenSet = false;

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ConnectionPoolConfigurationInfo m_connectionPoolConfig;
    bool m_connectionPoolConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_updatedDate{};
    bool m_updatedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
