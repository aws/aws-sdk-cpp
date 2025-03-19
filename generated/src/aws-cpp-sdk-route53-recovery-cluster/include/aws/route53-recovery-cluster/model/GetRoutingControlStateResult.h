/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-cluster/model/RoutingControlState.h>
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
namespace Route53RecoveryCluster
{
namespace Model
{
  class GetRoutingControlStateResult
  {
  public:
    AWS_ROUTE53RECOVERYCLUSTER_API GetRoutingControlStateResult() = default;
    AWS_ROUTE53RECOVERYCLUSTER_API GetRoutingControlStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCLUSTER_API GetRoutingControlStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the response.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const { return m_routingControlArn; }
    template<typename RoutingControlArnT = Aws::String>
    void SetRoutingControlArn(RoutingControlArnT&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::forward<RoutingControlArnT>(value); }
    template<typename RoutingControlArnT = Aws::String>
    GetRoutingControlStateResult& WithRoutingControlArn(RoutingControlArnT&& value) { SetRoutingControlArn(std::forward<RoutingControlArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the routing control.</p>
     */
    inline RoutingControlState GetRoutingControlState() const { return m_routingControlState; }
    inline void SetRoutingControlState(RoutingControlState value) { m_routingControlStateHasBeenSet = true; m_routingControlState = value; }
    inline GetRoutingControlStateResult& WithRoutingControlState(RoutingControlState value) { SetRoutingControlState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing control name.</p>
     */
    inline const Aws::String& GetRoutingControlName() const { return m_routingControlName; }
    template<typename RoutingControlNameT = Aws::String>
    void SetRoutingControlName(RoutingControlNameT&& value) { m_routingControlNameHasBeenSet = true; m_routingControlName = std::forward<RoutingControlNameT>(value); }
    template<typename RoutingControlNameT = Aws::String>
    GetRoutingControlStateResult& WithRoutingControlName(RoutingControlNameT&& value) { SetRoutingControlName(std::forward<RoutingControlNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRoutingControlStateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet = false;

    RoutingControlState m_routingControlState{RoutingControlState::NOT_SET};
    bool m_routingControlStateHasBeenSet = false;

    Aws::String m_routingControlName;
    bool m_routingControlNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
