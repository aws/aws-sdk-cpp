/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/InstanceState.h>
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
namespace MediaConnect
{
namespace Model
{
  class DeregisterGatewayInstanceResult
  {
  public:
    AWS_MEDIACONNECT_API DeregisterGatewayInstanceResult() = default;
    AWS_MEDIACONNECT_API DeregisterGatewayInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DeregisterGatewayInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN of the instance.</p>
     */
    inline const Aws::String& GetGatewayInstanceArn() const { return m_gatewayInstanceArn; }
    template<typename GatewayInstanceArnT = Aws::String>
    void SetGatewayInstanceArn(GatewayInstanceArnT&& value) { m_gatewayInstanceArnHasBeenSet = true; m_gatewayInstanceArn = std::forward<GatewayInstanceArnT>(value); }
    template<typename GatewayInstanceArnT = Aws::String>
    DeregisterGatewayInstanceResult& WithGatewayInstanceArn(GatewayInstanceArnT&& value) { SetGatewayInstanceArn(std::forward<GatewayInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the instance.</p>
     */
    inline InstanceState GetInstanceState() const { return m_instanceState; }
    inline void SetInstanceState(InstanceState value) { m_instanceStateHasBeenSet = true; m_instanceState = value; }
    inline DeregisterGatewayInstanceResult& WithInstanceState(InstanceState value) { SetInstanceState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeregisterGatewayInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayInstanceArn;
    bool m_gatewayInstanceArnHasBeenSet = false;

    InstanceState m_instanceState{InstanceState::NOT_SET};
    bool m_instanceStateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
