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
    AWS_PCS_API RegisterComputeNodeGroupInstanceResult() = default;
    AWS_PCS_API RegisterComputeNodeGroupInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCS_API RegisterComputeNodeGroupInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The scheduler node ID for this instance.</p>
     */
    inline const Aws::String& GetNodeID() const { return m_nodeID; }
    template<typename NodeIDT = Aws::String>
    void SetNodeID(NodeIDT&& value) { m_nodeIDHasBeenSet = true; m_nodeID = std::forward<NodeIDT>(value); }
    template<typename NodeIDT = Aws::String>
    RegisterComputeNodeGroupInstanceResult& WithNodeID(NodeIDT&& value) { SetNodeID(std::forward<NodeIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the Slurm scheduler, this is the shared Munge key the scheduler uses to
     * authenticate compute node group instances.</p>
     */
    inline const Aws::String& GetSharedSecret() const { return m_sharedSecret; }
    template<typename SharedSecretT = Aws::String>
    void SetSharedSecret(SharedSecretT&& value) { m_sharedSecretHasBeenSet = true; m_sharedSecret = std::forward<SharedSecretT>(value); }
    template<typename SharedSecretT = Aws::String>
    RegisterComputeNodeGroupInstanceResult& WithSharedSecret(SharedSecretT&& value) { SetSharedSecret(std::forward<SharedSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of endpoints available for interaction with the scheduler.</p>
     */
    inline const Aws::Vector<Endpoint>& GetEndpoints() const { return m_endpoints; }
    template<typename EndpointsT = Aws::Vector<Endpoint>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Vector<Endpoint>>
    RegisterComputeNodeGroupInstanceResult& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsT = Endpoint>
    RegisterComputeNodeGroupInstanceResult& AddEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace_back(std::forward<EndpointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterComputeNodeGroupInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeID;
    bool m_nodeIDHasBeenSet = false;

    Aws::String m_sharedSecret;
    bool m_sharedSecretHasBeenSet = false;

    Aws::Vector<Endpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
