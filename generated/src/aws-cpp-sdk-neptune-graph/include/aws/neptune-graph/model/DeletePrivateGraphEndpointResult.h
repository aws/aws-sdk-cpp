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
  class DeletePrivateGraphEndpointResult
  {
  public:
    AWS_NEPTUNEGRAPH_API DeletePrivateGraphEndpointResult();
    AWS_NEPTUNEGRAPH_API DeletePrivateGraphEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API DeletePrivateGraphEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the VPC where the private endpoint was deleted.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC where the private endpoint was deleted.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }

    /**
     * <p>The ID of the VPC where the private endpoint was deleted.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC where the private endpoint was deleted.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC where the private endpoint was deleted.</p>
     */
    inline DeletePrivateGraphEndpointResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC where the private endpoint was deleted.</p>
     */
    inline DeletePrivateGraphEndpointResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC where the private endpoint was deleted.</p>
     */
    inline DeletePrivateGraphEndpointResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The subnet IDs involved.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The subnet IDs involved.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }

    /**
     * <p>The subnet IDs involved.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }

    /**
     * <p>The subnet IDs involved.</p>
     */
    inline DeletePrivateGraphEndpointResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The subnet IDs involved.</p>
     */
    inline DeletePrivateGraphEndpointResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The subnet IDs involved.</p>
     */
    inline DeletePrivateGraphEndpointResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The subnet IDs involved.</p>
     */
    inline DeletePrivateGraphEndpointResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnet IDs involved.</p>
     */
    inline DeletePrivateGraphEndpointResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The status of the delete operation.</p>
     */
    inline const PrivateGraphEndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the delete operation.</p>
     */
    inline void SetStatus(const PrivateGraphEndpointStatus& value) { m_status = value; }

    /**
     * <p>The status of the delete operation.</p>
     */
    inline void SetStatus(PrivateGraphEndpointStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the delete operation.</p>
     */
    inline DeletePrivateGraphEndpointResult& WithStatus(const PrivateGraphEndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the delete operation.</p>
     */
    inline DeletePrivateGraphEndpointResult& WithStatus(PrivateGraphEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC endpoint that was deleted.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the VPC endpoint that was deleted.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointId = value; }

    /**
     * <p>The ID of the VPC endpoint that was deleted.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of the VPC endpoint that was deleted.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of the VPC endpoint that was deleted.</p>
     */
    inline DeletePrivateGraphEndpointResult& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the VPC endpoint that was deleted.</p>
     */
    inline DeletePrivateGraphEndpointResult& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC endpoint that was deleted.</p>
     */
    inline DeletePrivateGraphEndpointResult& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeletePrivateGraphEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeletePrivateGraphEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeletePrivateGraphEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
