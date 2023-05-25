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
  class UpdateRoutingControlResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateRoutingControlResult();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateRoutingControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateRoutingControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The routing control that was updated.</p>
     */
    inline const RoutingControl& GetRoutingControl() const{ return m_routingControl; }

    /**
     * <p>The routing control that was updated.</p>
     */
    inline void SetRoutingControl(const RoutingControl& value) { m_routingControl = value; }

    /**
     * <p>The routing control that was updated.</p>
     */
    inline void SetRoutingControl(RoutingControl&& value) { m_routingControl = std::move(value); }

    /**
     * <p>The routing control that was updated.</p>
     */
    inline UpdateRoutingControlResult& WithRoutingControl(const RoutingControl& value) { SetRoutingControl(value); return *this;}

    /**
     * <p>The routing control that was updated.</p>
     */
    inline UpdateRoutingControlResult& WithRoutingControl(RoutingControl&& value) { SetRoutingControl(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateRoutingControlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateRoutingControlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateRoutingControlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RoutingControl m_routingControl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
