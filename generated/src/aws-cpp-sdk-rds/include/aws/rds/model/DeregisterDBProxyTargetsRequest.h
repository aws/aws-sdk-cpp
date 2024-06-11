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
    AWS_RDS_API DeregisterDBProxyTargetsRequest();

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
    inline const Aws::String& GetDBProxyName() const{ return m_dBProxyName; }
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }
    inline void SetDBProxyName(const Aws::String& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = value; }
    inline void SetDBProxyName(Aws::String&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::move(value); }
    inline void SetDBProxyName(const char* value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName.assign(value); }
    inline DeregisterDBProxyTargetsRequest& WithDBProxyName(const Aws::String& value) { SetDBProxyName(value); return *this;}
    inline DeregisterDBProxyTargetsRequest& WithDBProxyName(Aws::String&& value) { SetDBProxyName(std::move(value)); return *this;}
    inline DeregisterDBProxyTargetsRequest& WithDBProxyName(const char* value) { SetDBProxyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the <code>DBProxyTargetGroup</code>.</p>
     */
    inline const Aws::String& GetTargetGroupName() const{ return m_targetGroupName; }
    inline bool TargetGroupNameHasBeenSet() const { return m_targetGroupNameHasBeenSet; }
    inline void SetTargetGroupName(const Aws::String& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = value; }
    inline void SetTargetGroupName(Aws::String&& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = std::move(value); }
    inline void SetTargetGroupName(const char* value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName.assign(value); }
    inline DeregisterDBProxyTargetsRequest& WithTargetGroupName(const Aws::String& value) { SetTargetGroupName(value); return *this;}
    inline DeregisterDBProxyTargetsRequest& WithTargetGroupName(Aws::String&& value) { SetTargetGroupName(std::move(value)); return *this;}
    inline DeregisterDBProxyTargetsRequest& WithTargetGroupName(const char* value) { SetTargetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more DB instance identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDBInstanceIdentifiers() const{ return m_dBInstanceIdentifiers; }
    inline bool DBInstanceIdentifiersHasBeenSet() const { return m_dBInstanceIdentifiersHasBeenSet; }
    inline void SetDBInstanceIdentifiers(const Aws::Vector<Aws::String>& value) { m_dBInstanceIdentifiersHasBeenSet = true; m_dBInstanceIdentifiers = value; }
    inline void SetDBInstanceIdentifiers(Aws::Vector<Aws::String>&& value) { m_dBInstanceIdentifiersHasBeenSet = true; m_dBInstanceIdentifiers = std::move(value); }
    inline DeregisterDBProxyTargetsRequest& WithDBInstanceIdentifiers(const Aws::Vector<Aws::String>& value) { SetDBInstanceIdentifiers(value); return *this;}
    inline DeregisterDBProxyTargetsRequest& WithDBInstanceIdentifiers(Aws::Vector<Aws::String>&& value) { SetDBInstanceIdentifiers(std::move(value)); return *this;}
    inline DeregisterDBProxyTargetsRequest& AddDBInstanceIdentifiers(const Aws::String& value) { m_dBInstanceIdentifiersHasBeenSet = true; m_dBInstanceIdentifiers.push_back(value); return *this; }
    inline DeregisterDBProxyTargetsRequest& AddDBInstanceIdentifiers(Aws::String&& value) { m_dBInstanceIdentifiersHasBeenSet = true; m_dBInstanceIdentifiers.push_back(std::move(value)); return *this; }
    inline DeregisterDBProxyTargetsRequest& AddDBInstanceIdentifiers(const char* value) { m_dBInstanceIdentifiersHasBeenSet = true; m_dBInstanceIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more DB cluster identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDBClusterIdentifiers() const{ return m_dBClusterIdentifiers; }
    inline bool DBClusterIdentifiersHasBeenSet() const { return m_dBClusterIdentifiersHasBeenSet; }
    inline void SetDBClusterIdentifiers(const Aws::Vector<Aws::String>& value) { m_dBClusterIdentifiersHasBeenSet = true; m_dBClusterIdentifiers = value; }
    inline void SetDBClusterIdentifiers(Aws::Vector<Aws::String>&& value) { m_dBClusterIdentifiersHasBeenSet = true; m_dBClusterIdentifiers = std::move(value); }
    inline DeregisterDBProxyTargetsRequest& WithDBClusterIdentifiers(const Aws::Vector<Aws::String>& value) { SetDBClusterIdentifiers(value); return *this;}
    inline DeregisterDBProxyTargetsRequest& WithDBClusterIdentifiers(Aws::Vector<Aws::String>&& value) { SetDBClusterIdentifiers(std::move(value)); return *this;}
    inline DeregisterDBProxyTargetsRequest& AddDBClusterIdentifiers(const Aws::String& value) { m_dBClusterIdentifiersHasBeenSet = true; m_dBClusterIdentifiers.push_back(value); return *this; }
    inline DeregisterDBProxyTargetsRequest& AddDBClusterIdentifiers(Aws::String&& value) { m_dBClusterIdentifiersHasBeenSet = true; m_dBClusterIdentifiers.push_back(std::move(value)); return *this; }
    inline DeregisterDBProxyTargetsRequest& AddDBClusterIdentifiers(const char* value) { m_dBClusterIdentifiersHasBeenSet = true; m_dBClusterIdentifiers.push_back(value); return *this; }
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
