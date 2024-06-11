/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/GatewayInfo.h>
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
namespace StorageGateway
{
namespace Model
{
  class ListGatewaysResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListGatewaysResult();
    AWS_STORAGEGATEWAY_API ListGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <a>GatewayInfo</a> objects.</p>
     */
    inline const Aws::Vector<GatewayInfo>& GetGateways() const{ return m_gateways; }
    inline void SetGateways(const Aws::Vector<GatewayInfo>& value) { m_gateways = value; }
    inline void SetGateways(Aws::Vector<GatewayInfo>&& value) { m_gateways = std::move(value); }
    inline ListGatewaysResult& WithGateways(const Aws::Vector<GatewayInfo>& value) { SetGateways(value); return *this;}
    inline ListGatewaysResult& WithGateways(Aws::Vector<GatewayInfo>&& value) { SetGateways(std::move(value)); return *this;}
    inline ListGatewaysResult& AddGateways(const GatewayInfo& value) { m_gateways.push_back(value); return *this; }
    inline ListGatewaysResult& AddGateways(GatewayInfo&& value) { m_gateways.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use the marker in your next request to fetch the next set of gateways in the
     * list. If there are no more gateways to list, this field does not appear in the
     * response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListGatewaysResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListGatewaysResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListGatewaysResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGatewaysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGatewaysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGatewaysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GatewayInfo> m_gateways;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
