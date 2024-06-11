﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-cluster/model/RoutingControl.h>
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
  class ListRoutingControlsResult
  {
  public:
    AWS_ROUTE53RECOVERYCLUSTER_API ListRoutingControlsResult();
    AWS_ROUTE53RECOVERYCLUSTER_API ListRoutingControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCLUSTER_API ListRoutingControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of routing controls.</p>
     */
    inline const Aws::Vector<RoutingControl>& GetRoutingControls() const{ return m_routingControls; }
    inline void SetRoutingControls(const Aws::Vector<RoutingControl>& value) { m_routingControls = value; }
    inline void SetRoutingControls(Aws::Vector<RoutingControl>&& value) { m_routingControls = std::move(value); }
    inline ListRoutingControlsResult& WithRoutingControls(const Aws::Vector<RoutingControl>& value) { SetRoutingControls(value); return *this;}
    inline ListRoutingControlsResult& WithRoutingControls(Aws::Vector<RoutingControl>&& value) { SetRoutingControls(std::move(value)); return *this;}
    inline ListRoutingControlsResult& AddRoutingControls(const RoutingControl& value) { m_routingControls.push_back(value); return *this; }
    inline ListRoutingControlsResult& AddRoutingControls(RoutingControl&& value) { m_routingControls.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRoutingControlsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRoutingControlsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRoutingControlsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRoutingControlsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRoutingControlsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRoutingControlsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RoutingControl> m_routingControls;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
