/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BridgePlacement.h>
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
namespace MediaConnect
{
namespace Model
{
  class UpdateGatewayInstanceResult
  {
  public:
    AWS_MEDIACONNECT_API UpdateGatewayInstanceResult() = default;
    AWS_MEDIACONNECT_API UpdateGatewayInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API UpdateGatewayInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The state of the instance. <code>ACTIVE</code> or <code>INACTIVE</code>. </p>
     */
    inline BridgePlacement GetBridgePlacement() const { return m_bridgePlacement; }
    inline void SetBridgePlacement(BridgePlacement value) { m_bridgePlacementHasBeenSet = true; m_bridgePlacement = value; }
    inline UpdateGatewayInstanceResult& WithBridgePlacement(BridgePlacement value) { SetBridgePlacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the instance that was updated. </p>
     */
    inline const Aws::String& GetGatewayInstanceArn() const { return m_gatewayInstanceArn; }
    template<typename GatewayInstanceArnT = Aws::String>
    void SetGatewayInstanceArn(GatewayInstanceArnT&& value) { m_gatewayInstanceArnHasBeenSet = true; m_gatewayInstanceArn = std::forward<GatewayInstanceArnT>(value); }
    template<typename GatewayInstanceArnT = Aws::String>
    UpdateGatewayInstanceResult& WithGatewayInstanceArn(GatewayInstanceArnT&& value) { SetGatewayInstanceArn(std::forward<GatewayInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateGatewayInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BridgePlacement m_bridgePlacement{BridgePlacement::NOT_SET};
    bool m_bridgePlacementHasBeenSet = false;

    Aws::String m_gatewayInstanceArn;
    bool m_gatewayInstanceArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
