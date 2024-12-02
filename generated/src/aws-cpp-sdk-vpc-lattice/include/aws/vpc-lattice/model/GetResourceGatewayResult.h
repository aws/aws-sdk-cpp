/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class GetResourceGatewayResult
  {
  public:
    AWS_VPCLATTICE_API GetResourceGatewayResult();
    AWS_VPCLATTICE_API GetResourceGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetResourceGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource gateway.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetResourceGatewayResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetResourceGatewayResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetResourceGatewayResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the resource gateway was created, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetResourceGatewayResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetResourceGatewayResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource gateway.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetResourceGatewayResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetResourceGatewayResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetResourceGatewayResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP address for the resource gateway.</p>
     */
    inline const ResourceGatewayIpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline void SetIpAddressType(const ResourceGatewayIpAddressType& value) { m_ipAddressType = value; }
    inline void SetIpAddressType(ResourceGatewayIpAddressType&& value) { m_ipAddressType = std::move(value); }
    inline GetResourceGatewayResult& WithIpAddressType(const ResourceGatewayIpAddressType& value) { SetIpAddressType(value); return *this;}
    inline GetResourceGatewayResult& WithIpAddressType(ResourceGatewayIpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the resource gateway was last updated, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetResourceGatewayResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetResourceGatewayResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource gateway.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetResourceGatewayResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetResourceGatewayResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetResourceGatewayResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group IDs associated with the resource gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIds = std::move(value); }
    inline GetResourceGatewayResult& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline GetResourceGatewayResult& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline GetResourceGatewayResult& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIds.push_back(value); return *this; }
    inline GetResourceGatewayResult& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline GetResourceGatewayResult& AddSecurityGroupIds(const char* value) { m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status for the resource gateway.</p>
     */
    inline const ResourceGatewayStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ResourceGatewayStatus& value) { m_status = value; }
    inline void SetStatus(ResourceGatewayStatus&& value) { m_status = std::move(value); }
    inline GetResourceGatewayResult& WithStatus(const ResourceGatewayStatus& value) { SetStatus(value); return *this;}
    inline GetResourceGatewayResult& WithStatus(ResourceGatewayStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the VPC subnets for resource gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }
    inline GetResourceGatewayResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline GetResourceGatewayResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline GetResourceGatewayResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }
    inline GetResourceGatewayResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }
    inline GetResourceGatewayResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the resource gateway.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline GetResourceGatewayResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline GetResourceGatewayResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline GetResourceGatewayResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResourceGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResourceGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResourceGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_id;

    ResourceGatewayIpAddressType m_ipAddressType;

    Aws::Utils::DateTime m_lastUpdatedAt;

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
