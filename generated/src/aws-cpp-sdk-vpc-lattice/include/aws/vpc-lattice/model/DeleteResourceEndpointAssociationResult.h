/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteResourceEndpointAssociationResult
  {
  public:
    AWS_VPCLATTICE_API DeleteResourceEndpointAssociationResult();
    AWS_VPCLATTICE_API DeleteResourceEndpointAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API DeleteResourceEndpointAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeleteResourceEndpointAssociationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeleteResourceEndpointAssociationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeleteResourceEndpointAssociationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DeleteResourceEndpointAssociationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeleteResourceEndpointAssociationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeleteResourceEndpointAssociationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration associated with
     * the VPC endpoint of type resource.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const{ return m_resourceConfigurationArn; }
    inline void SetResourceConfigurationArn(const Aws::String& value) { m_resourceConfigurationArn = value; }
    inline void SetResourceConfigurationArn(Aws::String&& value) { m_resourceConfigurationArn = std::move(value); }
    inline void SetResourceConfigurationArn(const char* value) { m_resourceConfigurationArn.assign(value); }
    inline DeleteResourceEndpointAssociationResult& WithResourceConfigurationArn(const Aws::String& value) { SetResourceConfigurationArn(value); return *this;}
    inline DeleteResourceEndpointAssociationResult& WithResourceConfigurationArn(Aws::String&& value) { SetResourceConfigurationArn(std::move(value)); return *this;}
    inline DeleteResourceEndpointAssociationResult& WithResourceConfigurationArn(const char* value) { SetResourceConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationId() const{ return m_resourceConfigurationId; }
    inline void SetResourceConfigurationId(const Aws::String& value) { m_resourceConfigurationId = value; }
    inline void SetResourceConfigurationId(Aws::String&& value) { m_resourceConfigurationId = std::move(value); }
    inline void SetResourceConfigurationId(const char* value) { m_resourceConfigurationId.assign(value); }
    inline DeleteResourceEndpointAssociationResult& WithResourceConfigurationId(const Aws::String& value) { SetResourceConfigurationId(value); return *this;}
    inline DeleteResourceEndpointAssociationResult& WithResourceConfigurationId(Aws::String&& value) { SetResourceConfigurationId(std::move(value)); return *this;}
    inline DeleteResourceEndpointAssociationResult& WithResourceConfigurationId(const char* value) { SetResourceConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource VPC endpoint that is associated with the resource
     * configuration.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointId.assign(value); }
    inline DeleteResourceEndpointAssociationResult& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline DeleteResourceEndpointAssociationResult& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline DeleteResourceEndpointAssociationResult& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteResourceEndpointAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteResourceEndpointAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteResourceEndpointAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_resourceConfigurationArn;

    Aws::String m_resourceConfigurationId;

    Aws::String m_vpcEndpointId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
