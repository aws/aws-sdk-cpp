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
  class ModifyDBProxyEndpointRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyDBProxyEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBProxyEndpoint"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the DB proxy sociated with the DB proxy endpoint that you want to
     * modify.</p>
     */
    inline const Aws::String& GetDBProxyEndpointName() const { return m_dBProxyEndpointName; }
    inline bool DBProxyEndpointNameHasBeenSet() const { return m_dBProxyEndpointNameHasBeenSet; }
    template<typename DBProxyEndpointNameT = Aws::String>
    void SetDBProxyEndpointName(DBProxyEndpointNameT&& value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName = std::forward<DBProxyEndpointNameT>(value); }
    template<typename DBProxyEndpointNameT = Aws::String>
    ModifyDBProxyEndpointRequest& WithDBProxyEndpointName(DBProxyEndpointNameT&& value) { SetDBProxyEndpointName(std::forward<DBProxyEndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new identifier for the <code>DBProxyEndpoint</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetNewDBProxyEndpointName() const { return m_newDBProxyEndpointName; }
    inline bool NewDBProxyEndpointNameHasBeenSet() const { return m_newDBProxyEndpointNameHasBeenSet; }
    template<typename NewDBProxyEndpointNameT = Aws::String>
    void SetNewDBProxyEndpointName(NewDBProxyEndpointNameT&& value) { m_newDBProxyEndpointNameHasBeenSet = true; m_newDBProxyEndpointName = std::forward<NewDBProxyEndpointNameT>(value); }
    template<typename NewDBProxyEndpointNameT = Aws::String>
    ModifyDBProxyEndpointRequest& WithNewDBProxyEndpointName(NewDBProxyEndpointNameT&& value) { SetNewDBProxyEndpointName(std::forward<NewDBProxyEndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC security group IDs for the DB proxy endpoint. When the DB proxy
     * endpoint uses a different VPC than the original proxy, you also specify a
     * different set of security group IDs than for the original proxy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    ModifyDBProxyEndpointRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    ModifyDBProxyEndpointRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBProxyEndpointName;
    bool m_dBProxyEndpointNameHasBeenSet = false;

    Aws::String m_newDBProxyEndpointName;
    bool m_newDBProxyEndpointNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
