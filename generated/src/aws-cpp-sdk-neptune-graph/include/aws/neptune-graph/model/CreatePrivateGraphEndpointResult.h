/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune-graph/model/PrivateGraphEndpointStatus.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class CreatePrivateGraphEndpointResult
  {
  public:
    AWS_NEPTUNEGRAPH_API CreatePrivateGraphEndpointResult();
    AWS_NEPTUNEGRAPH_API CreatePrivateGraphEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API CreatePrivateGraphEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>VPC in which the private graph endpoint is created.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>VPC in which the private graph endpoint is created.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }

    /**
     * <p>VPC in which the private graph endpoint is created.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }

    /**
     * <p>VPC in which the private graph endpoint is created.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }

    /**
     * <p>VPC in which the private graph endpoint is created.</p>
     */
    inline CreatePrivateGraphEndpointResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>VPC in which the private graph endpoint is created.</p>
     */
    inline CreatePrivateGraphEndpointResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>VPC in which the private graph endpoint is created.</p>
     */
    inline CreatePrivateGraphEndpointResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Subnets in which the private graph endpoint ENIs are created. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>Subnets in which the private graph endpoint ENIs are created. </p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }

    /**
     * <p>Subnets in which the private graph endpoint ENIs are created. </p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }

    /**
     * <p>Subnets in which the private graph endpoint ENIs are created. </p>
     */
    inline CreatePrivateGraphEndpointResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>Subnets in which the private graph endpoint ENIs are created. </p>
     */
    inline CreatePrivateGraphEndpointResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>Subnets in which the private graph endpoint ENIs are created. </p>
     */
    inline CreatePrivateGraphEndpointResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }

    /**
     * <p>Subnets in which the private graph endpoint ENIs are created. </p>
     */
    inline CreatePrivateGraphEndpointResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Subnets in which the private graph endpoint ENIs are created. </p>
     */
    inline CreatePrivateGraphEndpointResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }


    /**
     * <p>Status of the private graph endpoint.</p>
     */
    inline const PrivateGraphEndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the private graph endpoint.</p>
     */
    inline void SetStatus(const PrivateGraphEndpointStatus& value) { m_status = value; }

    /**
     * <p>Status of the private graph endpoint.</p>
     */
    inline void SetStatus(PrivateGraphEndpointStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Status of the private graph endpoint.</p>
     */
    inline CreatePrivateGraphEndpointResult& WithStatus(const PrivateGraphEndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the private graph endpoint.</p>
     */
    inline CreatePrivateGraphEndpointResult& WithStatus(PrivateGraphEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Endpoint ID of the prviate grpah endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>Endpoint ID of the prviate grpah endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointId = value; }

    /**
     * <p>Endpoint ID of the prviate grpah endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointId = std::move(value); }

    /**
     * <p>Endpoint ID of the prviate grpah endpoint.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointId.assign(value); }

    /**
     * <p>Endpoint ID of the prviate grpah endpoint.</p>
     */
    inline CreatePrivateGraphEndpointResult& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>Endpoint ID of the prviate grpah endpoint.</p>
     */
    inline CreatePrivateGraphEndpointResult& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>Endpoint ID of the prviate grpah endpoint.</p>
     */
    inline CreatePrivateGraphEndpointResult& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePrivateGraphEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePrivateGraphEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePrivateGraphEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_vpcId;

    Aws::Vector<Aws::String> m_subnetIds;

    PrivateGraphEndpointStatus m_status;

    Aws::String m_vpcEndpointId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
