/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/GatewayInstance.h>
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
  class DescribeGatewayInstanceResult
  {
  public:
    AWS_MEDIACONNECT_API DescribeGatewayInstanceResult() = default;
    AWS_MEDIACONNECT_API DescribeGatewayInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DescribeGatewayInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The gateway instance that you requested a description of. </p>
     */
    inline const GatewayInstance& GetGatewayInstance() const { return m_gatewayInstance; }
    template<typename GatewayInstanceT = GatewayInstance>
    void SetGatewayInstance(GatewayInstanceT&& value) { m_gatewayInstanceHasBeenSet = true; m_gatewayInstance = std::forward<GatewayInstanceT>(value); }
    template<typename GatewayInstanceT = GatewayInstance>
    DescribeGatewayInstanceResult& WithGatewayInstance(GatewayInstanceT&& value) { SetGatewayInstance(std::forward<GatewayInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeGatewayInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GatewayInstance m_gatewayInstance;
    bool m_gatewayInstanceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
