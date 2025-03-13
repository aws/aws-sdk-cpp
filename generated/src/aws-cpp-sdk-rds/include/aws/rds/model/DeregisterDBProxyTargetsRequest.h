/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class DeregisterDBProxyTargetsRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeregisterDBProxyTargetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterDBProxyTargets"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the <code>DBProxy</code> that is associated with the
     * <code>DBProxyTargetGroup</code>.</p>
     */
    inline const Aws::String& GetDBProxyName() const { return m_dBProxyName; }
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }
    template<typename DBProxyNameT = Aws::String>
    void SetDBProxyName(DBProxyNameT&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::forward<DBProxyNameT>(value); }
    template<typename DBProxyNameT = Aws::String>
    DeregisterDBProxyTargetsRequest& WithDBProxyName(DBProxyNameT&& value) { SetDBProxyName(std::forward<DBProxyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the <code>DBProxyTargetGroup</code>.</p>
     */
    inline const Aws::String& GetTargetGroupName() const { return m_targetGroupName; }
    inline bool TargetGroupNameHasBeenSet() const { return m_targetGroupNameHasBeenSet; }
    template<typename TargetGroupNameT = Aws::String>
    void SetTargetGroupName(TargetGroupNameT&& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = std::forward<TargetGroupNameT>(value); }
    template<typename TargetGroupNameT = Aws::String>
    DeregisterDBProxyTargetsRequest& WithTargetGroupName(TargetGroupNameT&& value) { SetTargetGroupName(std::forward<TargetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more DB instance identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDBInstanceIdentifiers() const { return m_dBInstanceIdentifiers; }
    inline bool DBInstanceIdentifiersHasBeenSet() const { return m_dBInstanceIdentifiersHasBeenSet; }
    template<typename DBInstanceIdentifiersT = Aws::Vector<Aws::String>>
    void SetDBInstanceIdentifiers(DBInstanceIdentifiersT&& value) { m_dBInstanceIdentifiersHasBeenSet = true; m_dBInstanceIdentifiers = std::forward<DBInstanceIdentifiersT>(value); }
    template<typename DBInstanceIdentifiersT = Aws::Vector<Aws::String>>
    DeregisterDBProxyTargetsRequest& WithDBInstanceIdentifiers(DBInstanceIdentifiersT&& value) { SetDBInstanceIdentifiers(std::forward<DBInstanceIdentifiersT>(value)); return *this;}
    template<typename DBInstanceIdentifiersT = Aws::String>
    DeregisterDBProxyTargetsRequest& AddDBInstanceIdentifiers(DBInstanceIdentifiersT&& value) { m_dBInstanceIdentifiersHasBeenSet = true; m_dBInstanceIdentifiers.emplace_back(std::forward<DBInstanceIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more DB cluster identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDBClusterIdentifiers() const { return m_dBClusterIdentifiers; }
    inline bool DBClusterIdentifiersHasBeenSet() const { return m_dBClusterIdentifiersHasBeenSet; }
    template<typename DBClusterIdentifiersT = Aws::Vector<Aws::String>>
    void SetDBClusterIdentifiers(DBClusterIdentifiersT&& value) { m_dBClusterIdentifiersHasBeenSet = true; m_dBClusterIdentifiers = std::forward<DBClusterIdentifiersT>(value); }
    template<typename DBClusterIdentifiersT = Aws::Vector<Aws::String>>
    DeregisterDBProxyTargetsRequest& WithDBClusterIdentifiers(DBClusterIdentifiersT&& value) { SetDBClusterIdentifiers(std::forward<DBClusterIdentifiersT>(value)); return *this;}
    template<typename DBClusterIdentifiersT = Aws::String>
    DeregisterDBProxyTargetsRequest& AddDBClusterIdentifiers(DBClusterIdentifiersT&& value) { m_dBClusterIdentifiersHasBeenSet = true; m_dBClusterIdentifiers.emplace_back(std::forward<DBClusterIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    Aws::String m_targetGroupName;
    bool m_targetGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_dBInstanceIdentifiers;
    bool m_dBInstanceIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_dBClusterIdentifiers;
    bool m_dBClusterIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
