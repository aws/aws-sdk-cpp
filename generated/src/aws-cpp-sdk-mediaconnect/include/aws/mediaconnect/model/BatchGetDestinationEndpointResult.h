/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BatchGetDestinationEndpointError.h>
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
class BatchGetDestinationEndpointResult {
 public:
  AWS_MEDIACONNECT_API BatchGetDestinationEndpointResult() = default;
  AWS_MEDIACONNECT_API BatchGetDestinationEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API BatchGetDestinationEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The destination endpoints that MediaConnect successfully retrieved.</p>
   */
  inline const Aws::Vector<DestinationEndpoint>& GetDestinationEndpoints() const { return m_destinationEndpoints; }
  template <typename DestinationEndpointsT = Aws::Vector<DestinationEndpoint>>
  void SetDestinationEndpoints(DestinationEndpointsT&& value) {
    m_destinationEndpointsHasBeenSet = true;
    m_destinationEndpoints = std::forward<DestinationEndpointsT>(value);
  }
  template <typename DestinationEndpointsT = Aws::Vector<DestinationEndpoint>>
  BatchGetDestinationEndpointResult& WithDestinationEndpoints(DestinationEndpointsT&& value) {
    SetDestinationEndpoints(std::forward<DestinationEndpointsT>(value));
    return *this;
  }
  template <typename DestinationEndpointsT = DestinationEndpoint>
  BatchGetDestinationEndpointResult& AddDestinationEndpoints(DestinationEndpointsT&& value) {
    m_destinationEndpointsHasBeenSet = true;
    m_destinationEndpoints.emplace_back(std::forward<DestinationEndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The errors for any destination endpoints that MediaConnect couldn't
   * retrieve.</p>
   */
  inline const Aws::Vector<BatchGetDestinationEndpointError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetDestinationEndpointError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetDestinationEndpointError>>
  BatchGetDestinationEndpointResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetDestinationEndpointError>
  BatchGetDestinationEndpointResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  BatchGetDestinationEndpointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DestinationEndpoint> m_destinationEndpoints;

  Aws::Vector<BatchGetDestinationEndpointError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_destinationEndpointsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
