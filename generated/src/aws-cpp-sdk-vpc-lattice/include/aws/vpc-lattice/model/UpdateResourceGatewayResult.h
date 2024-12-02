/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/IpAddressType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/model/ResourceGatewayStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace VPCLattice
{
namespace Model
{
  class UpdateResourceGatewayResult
  {
  public:
    AWS_VPCLATTICE_API UpdateResourceGatewayResult();
    AWS_VPCLATTICE_API UpdateResourceGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API UpdateResourceGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource gateway.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateResourceGatewayResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateResourceGatewayResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateResourceGatewayResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource gateway.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateResourceGatewayResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateResourceGatewayResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateResourceGatewayResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP address used by the resource gateway.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressType = std::move(value); }
    inline UpdateResourceGatewayResult& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline UpdateResourceGatewayResult& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource gateway.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateResourceGatewayResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateResourceGatewayResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateResourceGatewayResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups associated with the resource gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIds = std::move(value); }
    inline UpdateResourceGatewayResult& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline UpdateResourceGatewayResult& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline UpdateResourceGatewayResult& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIds.push_back(value); return *this; }
    inline UpdateResourceGatewayResult& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline UpdateResourceGatewayResult& AddSecurityGroupIds(const char* value) { m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the resource gateway.</p>
     */
    inline const ResourceGatewayStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ResourceGatewayStatus& value) { m_status = value; }
    inline void SetStatus(ResourceGatewayStatus&& value) { m_status = std::move(value); }
    inline UpdateResourceGatewayResult& WithStatus(const ResourceGatewayStatus& value) { SetStatus(value); return *this;}
    inline UpdateResourceGatewayResult& WithStatus(ResourceGatewayStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the VPC subnets for the resource gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }
    inline UpdateResourceGatewayResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline UpdateResourceGatewayResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline UpdateResourceGatewayResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }
    inline UpdateResourceGatewayResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }
    inline UpdateResourceGatewayResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the resource gateway.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline UpdateResourceGatewayResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline UpdateResourceGatewayResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline UpdateResourceGatewayResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateResourceGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateResourceGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateResourceGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    IpAddressType m_ipAddressType;

    Aws::String m_name;

    Aws::Vector<Aws::String> m_securityGroupIds;

    ResourceGatewayStatus m_status;

    Aws::Vector<Aws::String> m_subnetIds;

    Aws::String m_vpcId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
