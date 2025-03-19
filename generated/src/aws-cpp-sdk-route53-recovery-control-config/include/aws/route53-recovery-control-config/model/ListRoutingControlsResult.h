/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-control-config/model/RoutingControl.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class ListRoutingControlsResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListRoutingControlsResult() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListRoutingControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListRoutingControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRoutingControlsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of routing controls.</p>
     */
    inline const Aws::Vector<RoutingControl>& GetRoutingControls() const { return m_routingControls; }
    template<typename RoutingControlsT = Aws::Vector<RoutingControl>>
    void SetRoutingControls(RoutingControlsT&& value) { m_routingControlsHasBeenSet = true; m_routingControls = std::forward<RoutingControlsT>(value); }
    template<typename RoutingControlsT = Aws::Vector<RoutingControl>>
    ListRoutingControlsResult& WithRoutingControls(RoutingControlsT&& value) { SetRoutingControls(std::forward<RoutingControlsT>(value)); return *this;}
    template<typename RoutingControlsT = RoutingControl>
    ListRoutingControlsResult& AddRoutingControls(RoutingControlsT&& value) { m_routingControlsHasBeenSet = true; m_routingControls.emplace_back(std::forward<RoutingControlsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRoutingControlsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RoutingControl> m_routingControls;
    bool m_routingControlsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
