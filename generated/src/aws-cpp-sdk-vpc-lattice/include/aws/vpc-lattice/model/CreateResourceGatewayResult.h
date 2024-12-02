/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/ResourceGatewayIpAddressType.h>
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
  class CreateResourceGatewayResult
  {
  public:
    AWS_VPCLATTICE_API CreateResourceGatewayResult();
    AWS_VPCLATTICE_API CreateResourceGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API CreateResourceGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource gateway.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateResourceGatewayResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateResourceGatewayResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateResourceGatewayResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource gateway.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateResourceGatewayResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateResourceGatewayResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateResourceGatewayResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP address for the resource gateway.</p>
     */
    inline const ResourceGatewayIpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline void SetIpAddressType(const ResourceGatewayIpAddressType& value) { m_ipAddressType = value; }
    inline void SetIpAddressType(ResourceGatewayIpAddressType&& value) { m_ipAddressType = std::move(value); }
    inline CreateResourceGatewayResult& WithIpAddressType(const ResourceGatewayIpAddressType& value) { SetIpAddressType(value); return *this;}
    inline CreateResourceGatewayResult& WithIpAddressType(ResourceGatewayIpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource gateway.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateResourceGatewayResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateResourceGatewayResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateResourceGatewayResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups for the resource gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIds = std::move(value); }
    inline CreateResourceGatewayResult& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline CreateResourceGatewayResult& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline CreateResourceGatewayResult& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIds.push_back(value); return *this; }
    inline CreateResourceGatewayResult& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateResourceGatewayResult& AddSecurityGroupIds(const char* value) { m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the resource gateway.</p>
     */
    inline const ResourceGatewayStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ResourceGatewayStatus& value) { m_status = value; }
    inline void SetStatus(ResourceGatewayStatus&& value) { m_status = std::move(value); }
    inline CreateResourceGatewayResult& WithStatus(const ResourceGatewayStatus& value) { SetStatus(value); return *this;}
    inline CreateResourceGatewayResult& WithStatus(ResourceGatewayStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the resource gateway subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }
    inline CreateResourceGatewayResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline CreateResourceGatewayResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline CreateResourceGatewayResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }
    inline CreateResourceGatewayResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }
    inline CreateResourceGatewayResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcIdentifier() const{ return m_vpcIdentifier; }
    inline void SetVpcIdentifier(const Aws::String& value) { m_vpcIdentifier = value; }
    inline void SetVpcIdentifier(Aws::String&& value) { m_vpcIdentifier = std::move(value); }
    inline void SetVpcIdentifier(const char* value) { m_vpcIdentifier.assign(value); }
    inline CreateResourceGatewayResult& WithVpcIdentifier(const Aws::String& value) { SetVpcIdentifier(value); return *this;}
    inline CreateResourceGatewayResult& WithVpcIdentifier(Aws::String&& value) { SetVpcIdentifier(std::move(value)); return *this;}
    inline CreateResourceGatewayResult& WithVpcIdentifier(const char* value) { SetVpcIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateResourceGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateResourceGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateResourceGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    ResourceGatewayIpAddressType m_ipAddressType;

    Aws::String m_name;

    Aws::Vector<Aws::String> m_securityGroupIds;

    ResourceGatewayStatus m_status;

    Aws::Vector<Aws::String> m_subnetIds;

    Aws::String m_vpcIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
