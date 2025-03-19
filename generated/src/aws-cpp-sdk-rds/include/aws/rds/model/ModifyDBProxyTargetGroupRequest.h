/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ConnectionPoolConfiguration.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class ModifyDBProxyTargetGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyDBProxyTargetGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBProxyTargetGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the target group to modify.</p>
     */
    inline const Aws::String& GetTargetGroupName() const { return m_targetGroupName; }
    inline bool TargetGroupNameHasBeenSet() const { return m_targetGroupNameHasBeenSet; }
    template<typename TargetGroupNameT = Aws::String>
    void SetTargetGroupName(TargetGroupNameT&& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = std::forward<TargetGroupNameT>(value); }
    template<typename TargetGroupNameT = Aws::String>
    ModifyDBProxyTargetGroupRequest& WithTargetGroupName(TargetGroupNameT&& value) { SetTargetGroupName(std::forward<TargetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the proxy.</p>
     */
    inline const Aws::String& GetDBProxyName() const { return m_dBProxyName; }
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }
    template<typename DBProxyNameT = Aws::String>
    void SetDBProxyName(DBProxyNameT&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::forward<DBProxyNameT>(value); }
    template<typename DBProxyNameT = Aws::String>
    ModifyDBProxyTargetGroupRequest& WithDBProxyName(DBProxyNameT&& value) { SetDBProxyName(std::forward<DBProxyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings that determine the size and behavior of the connection pool for
     * the target group.</p>
     */
    inline const ConnectionPoolConfiguration& GetConnectionPoolConfig() const { return m_connectionPoolConfig; }
    inline bool ConnectionPoolConfigHasBeenSet() const { return m_connectionPoolConfigHasBeenSet; }
    template<typename ConnectionPoolConfigT = ConnectionPoolConfiguration>
    void SetConnectionPoolConfig(ConnectionPoolConfigT&& value) { m_connectionPoolConfigHasBeenSet = true; m_connectionPoolConfig = std::forward<ConnectionPoolConfigT>(value); }
    template<typename ConnectionPoolConfigT = ConnectionPoolConfiguration>
    ModifyDBProxyTargetGroupRequest& WithConnectionPoolConfig(ConnectionPoolConfigT&& value) { SetConnectionPoolConfig(std::forward<ConnectionPoolConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the modified <code>DBProxyTarget</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p> <p>You can't
     * rename the <code>default</code> target group.</p>
     */
    inline const Aws::String& GetNewName() const { return m_newName; }
    inline bool NewNameHasBeenSet() const { return m_newNameHasBeenSet; }
    template<typename NewNameT = Aws::String>
    void SetNewName(NewNameT&& value) { m_newNameHasBeenSet = true; m_newName = std::forward<NewNameT>(value); }
    template<typename NewNameT = Aws::String>
    ModifyDBProxyTargetGroupRequest& WithNewName(NewNameT&& value) { SetNewName(std::forward<NewNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetGroupName;
    bool m_targetGroupNameHasBeenSet = false;

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    ConnectionPoolConfiguration m_connectionPoolConfig;
    bool m_connectionPoolConfigHasBeenSet = false;

    Aws::String m_newName;
    bool m_newNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
