/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/model/Endpoint.h>
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
namespace PCS
{
namespace Model
{
  class RegisterComputeNodeGroupInstanceResult
  {
  public:
    AWS_PCS_API RegisterComputeNodeGroupInstanceResult();
    AWS_PCS_API RegisterComputeNodeGroupInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCS_API RegisterComputeNodeGroupInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The scheduler node ID for this instance.</p>
     */
    inline const Aws::String& GetNodeID() const{ return m_nodeID; }
    inline void SetNodeID(const Aws::String& value) { m_nodeID = value; }
    inline void SetNodeID(Aws::String&& value) { m_nodeID = std::move(value); }
    inline void SetNodeID(const char* value) { m_nodeID.assign(value); }
    inline RegisterComputeNodeGroupInstanceResult& WithNodeID(const Aws::String& value) { SetNodeID(value); return *this;}
    inline RegisterComputeNodeGroupInstanceResult& WithNodeID(Aws::String&& value) { SetNodeID(std::move(value)); return *this;}
    inline RegisterComputeNodeGroupInstanceResult& WithNodeID(const char* value) { SetNodeID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the Slurm scheduler, this is the shared Munge key the scheduler uses to
     * authenticate compute node group instances.</p>
     */
    inline const Aws::String& GetSharedSecret() const{ return m_sharedSecret; }
    inline void SetSharedSecret(const Aws::String& value) { m_sharedSecret = value; }
    inline void SetSharedSecret(Aws::String&& value) { m_sharedSecret = std::move(value); }
    inline void SetSharedSecret(const char* value) { m_sharedSecret.assign(value); }
    inline RegisterComputeNodeGroupInstanceResult& WithSharedSecret(const Aws::String& value) { SetSharedSecret(value); return *this;}
    inline RegisterComputeNodeGroupInstanceResult& WithSharedSecret(Aws::String&& value) { SetSharedSecret(std::move(value)); return *this;}
    inline RegisterComputeNodeGroupInstanceResult& WithSharedSecret(const char* value) { SetSharedSecret(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of endpoints available for interaction with the scheduler.</p>
     */
    inline const Aws::Vector<Endpoint>& GetEndpoints() const{ return m_endpoints; }
    inline void SetEndpoints(const Aws::Vector<Endpoint>& value) { m_endpoints = value; }
    inline void SetEndpoints(Aws::Vector<Endpoint>&& value) { m_endpoints = std::move(value); }
    inline RegisterComputeNodeGroupInstanceResult& WithEndpoints(const Aws::Vector<Endpoint>& value) { SetEndpoints(value); return *this;}
    inline RegisterComputeNodeGroupInstanceResult& WithEndpoints(Aws::Vector<Endpoint>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline RegisterComputeNodeGroupInstanceResult& AddEndpoints(const Endpoint& value) { m_endpoints.push_back(value); return *this; }
    inline RegisterComputeNodeGroupInstanceResult& AddEndpoints(Endpoint&& value) { m_endpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterComputeNodeGroupInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterComputeNodeGroupInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterComputeNodeGroupInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nodeID;

    Aws::String m_sharedSecret;

    Aws::Vector<Endpoint> m_endpoints;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
