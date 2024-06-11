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
    AWS_ROUTE53RECOVERYCLUSTER_API GetRoutingControlStateResult();
    AWS_ROUTE53RECOVERYCLUSTER_API GetRoutingControlStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCLUSTER_API GetRoutingControlStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the response.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const{ return m_routingControlArn; }
    inline void SetRoutingControlArn(const Aws::String& value) { m_routingControlArn = value; }
    inline void SetRoutingControlArn(Aws::String&& value) { m_routingControlArn = std::move(value); }
    inline void SetRoutingControlArn(const char* value) { m_routingControlArn.assign(value); }
    inline GetRoutingControlStateResult& WithRoutingControlArn(const Aws::String& value) { SetRoutingControlArn(value); return *this;}
    inline GetRoutingControlStateResult& WithRoutingControlArn(Aws::String&& value) { SetRoutingControlArn(std::move(value)); return *this;}
    inline GetRoutingControlStateResult& WithRoutingControlArn(const char* value) { SetRoutingControlArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the routing control.</p>
     */
    inline const RoutingControlState& GetRoutingControlState() const{ return m_routingControlState; }
    inline void SetRoutingControlState(const RoutingControlState& value) { m_routingControlState = value; }
    inline void SetRoutingControlState(RoutingControlState&& value) { m_routingControlState = std::move(value); }
    inline GetRoutingControlStateResult& WithRoutingControlState(const RoutingControlState& value) { SetRoutingControlState(value); return *this;}
    inline GetRoutingControlStateResult& WithRoutingControlState(RoutingControlState&& value) { SetRoutingControlState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing control name.</p>
     */
    inline const Aws::String& GetRoutingControlName() const{ return m_routingControlName; }
    inline void SetRoutingControlName(const Aws::String& value) { m_routingControlName = value; }
    inline void SetRoutingControlName(Aws::String&& value) { m_routingControlName = std::move(value); }
    inline void SetRoutingControlName(const char* value) { m_routingControlName.assign(value); }
    inline GetRoutingControlStateResult& WithRoutingControlName(const Aws::String& value) { SetRoutingControlName(value); return *this;}
    inline GetRoutingControlStateResult& WithRoutingControlName(Aws::String&& value) { SetRoutingControlName(std::move(value)); return *this;}
    inline GetRoutingControlStateResult& WithRoutingControlName(const char* value) { SetRoutingControlName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRoutingControlStateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRoutingControlStateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRoutingControlStateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_routingControlArn;

    RoutingControlState m_routingControlState;

    Aws::String m_routingControlName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
