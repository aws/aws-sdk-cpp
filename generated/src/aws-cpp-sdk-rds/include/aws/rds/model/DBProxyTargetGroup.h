﻿/**
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
    AWS_RDS_API DBProxyTargetGroup();
    AWS_RDS_API DBProxyTargetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBProxyTargetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier for the RDS proxy associated with this target group.</p>
     */
    inline const Aws::String& GetDBProxyName() const{ return m_dBProxyName; }
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }
    inline void SetDBProxyName(const Aws::String& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = value; }
    inline void SetDBProxyName(Aws::String&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::move(value); }
    inline void SetDBProxyName(const char* value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName.assign(value); }
    inline DBProxyTargetGroup& WithDBProxyName(const Aws::String& value) { SetDBProxyName(value); return *this;}
    inline DBProxyTargetGroup& WithDBProxyName(Aws::String&& value) { SetDBProxyName(std::move(value)); return *this;}
    inline DBProxyTargetGroup& WithDBProxyName(const char* value) { SetDBProxyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the target group. This name must be unique for all target
     * groups owned by your Amazon Web Services account in the specified Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetTargetGroupName() const{ return m_targetGroupName; }
    inline bool TargetGroupNameHasBeenSet() const { return m_targetGroupNameHasBeenSet; }
    inline void SetTargetGroupName(const Aws::String& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = value; }
    inline void SetTargetGroupName(Aws::String&& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = std::move(value); }
    inline void SetTargetGroupName(const char* value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName.assign(value); }
    inline DBProxyTargetGroup& WithTargetGroupName(const Aws::String& value) { SetTargetGroupName(value); return *this;}
    inline DBProxyTargetGroup& WithTargetGroupName(Aws::String&& value) { SetTargetGroupName(std::move(value)); return *this;}
    inline DBProxyTargetGroup& WithTargetGroupName(const char* value) { SetTargetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) representing the target group.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const{ return m_targetGroupArn; }
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }
    inline void SetTargetGroupArn(const Aws::String& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }
    inline void SetTargetGroupArn(Aws::String&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::move(value); }
    inline void SetTargetGroupArn(const char* value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn.assign(value); }
    inline DBProxyTargetGroup& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}
    inline DBProxyTargetGroup& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(std::move(value)); return *this;}
    inline DBProxyTargetGroup& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this target group is the first one used for connection
     * requests by the associated proxy. Because each proxy is currently associated
     * with a single target group, currently this setting is always
     * <code>true</code>.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }
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
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DBProxyTargetGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DBProxyTargetGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DBProxyTargetGroup& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings that determine the size and behavior of the connection pool for
     * the target group.</p>
     */
    inline const ConnectionPoolConfigurationInfo& GetConnectionPoolConfig() const{ return m_connectionPoolConfig; }
    inline bool ConnectionPoolConfigHasBeenSet() const { return m_connectionPoolConfigHasBeenSet; }
    inline void SetConnectionPoolConfig(const ConnectionPoolConfigurationInfo& value) { m_connectionPoolConfigHasBeenSet = true; m_connectionPoolConfig = value; }
    inline void SetConnectionPoolConfig(ConnectionPoolConfigurationInfo&& value) { m_connectionPoolConfigHasBeenSet = true; m_connectionPoolConfig = std::move(value); }
    inline DBProxyTargetGroup& WithConnectionPoolConfig(const ConnectionPoolConfigurationInfo& value) { SetConnectionPoolConfig(value); return *this;}
    inline DBProxyTargetGroup& WithConnectionPoolConfig(ConnectionPoolConfigurationInfo&& value) { SetConnectionPoolConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the target group was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline DBProxyTargetGroup& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline DBProxyTargetGroup& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the target group was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedDate() const{ return m_updatedDate; }
    inline bool UpdatedDateHasBeenSet() const { return m_updatedDateHasBeenSet; }
    inline void SetUpdatedDate(const Aws::Utils::DateTime& value) { m_updatedDateHasBeenSet = true; m_updatedDate = value; }
    inline void SetUpdatedDate(Aws::Utils::DateTime&& value) { m_updatedDateHasBeenSet = true; m_updatedDate = std::move(value); }
    inline DBProxyTargetGroup& WithUpdatedDate(const Aws::Utils::DateTime& value) { SetUpdatedDate(value); return *this;}
    inline DBProxyTargetGroup& WithUpdatedDate(Aws::Utils::DateTime&& value) { SetUpdatedDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    Aws::String m_targetGroupName;
    bool m_targetGroupNameHasBeenSet = false;

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet = false;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ConnectionPoolConfigurationInfo m_connectionPoolConfig;
    bool m_connectionPoolConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_updatedDate;
    bool m_updatedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
