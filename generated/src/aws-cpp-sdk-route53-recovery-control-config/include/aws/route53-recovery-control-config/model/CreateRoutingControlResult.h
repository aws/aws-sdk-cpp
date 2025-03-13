/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/model/RoutingControl.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class CreateRoutingControlResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateRoutingControlResult() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateRoutingControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateRoutingControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The routing control that is created.</p>
     */
    inline const RoutingControl& GetRoutingControl() const { return m_routingControl; }
    template<typename RoutingControlT = RoutingControl>
    void SetRoutingControl(RoutingControlT&& value) { m_routingControlHasBeenSet = true; m_routingControl = std::forward<RoutingControlT>(value); }
    template<typename RoutingControlT = RoutingControl>
    CreateRoutingControlResult& WithRoutingControl(RoutingControlT&& value) { SetRoutingControl(std::forward<RoutingControlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRoutingControlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RoutingControl m_routingControl;
    bool m_routingControlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
