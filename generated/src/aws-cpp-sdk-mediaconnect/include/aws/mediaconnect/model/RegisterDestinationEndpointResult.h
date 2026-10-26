/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/DestinationEndpoint.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {
class RegisterDestinationEndpointResult {
 public:
  AWS_MEDIACONNECT_API RegisterDestinationEndpointResult() = default;
  AWS_MEDIACONNECT_API RegisterDestinationEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API RegisterDestinationEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the destination endpoint that was registered.</p>
   */
  inline const DestinationEndpoint& GetDestinationEndpoint() const { return m_destinationEndpoint; }
  template <typename DestinationEndpointT = DestinationEndpoint>
  void SetDestinationEndpoint(DestinationEndpointT&& value) {
    m_destinationEndpointHasBeenSet = true;
    m_destinationEndpoint = std::forward<DestinationEndpointT>(value);
  }
  template <typename DestinationEndpointT = DestinationEndpoint>
  RegisterDestinationEndpointResult& WithDestinationEndpoint(DestinationEndpointT&& value) {
    SetDestinationEndpoint(std::forward<DestinationEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  RegisterDestinationEndpointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  DestinationEndpoint m_destinationEndpoint;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_destinationEndpointHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
