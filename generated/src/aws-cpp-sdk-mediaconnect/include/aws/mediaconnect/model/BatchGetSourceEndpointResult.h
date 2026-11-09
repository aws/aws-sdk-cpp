/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BatchGetSourceEndpointError.h>
#include <aws/mediaconnect/model/SourceEndpoint.h>

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
class BatchGetSourceEndpointResult {
 public:
  AWS_MEDIACONNECT_API BatchGetSourceEndpointResult() = default;
  AWS_MEDIACONNECT_API BatchGetSourceEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API BatchGetSourceEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The source endpoints that MediaConnect successfully retrieved.</p>
   */
  inline const Aws::Vector<SourceEndpoint>& GetSourceEndpoints() const { return m_sourceEndpoints; }
  template <typename SourceEndpointsT = Aws::Vector<SourceEndpoint>>
  void SetSourceEndpoints(SourceEndpointsT&& value) {
    m_sourceEndpointsHasBeenSet = true;
    m_sourceEndpoints = std::forward<SourceEndpointsT>(value);
  }
  template <typename SourceEndpointsT = Aws::Vector<SourceEndpoint>>
  BatchGetSourceEndpointResult& WithSourceEndpoints(SourceEndpointsT&& value) {
    SetSourceEndpoints(std::forward<SourceEndpointsT>(value));
    return *this;
  }
  template <typename SourceEndpointsT = SourceEndpoint>
  BatchGetSourceEndpointResult& AddSourceEndpoints(SourceEndpointsT&& value) {
    m_sourceEndpointsHasBeenSet = true;
    m_sourceEndpoints.emplace_back(std::forward<SourceEndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The errors for any source endpoints that MediaConnect couldn't retrieve.</p>
   */
  inline const Aws::Vector<BatchGetSourceEndpointError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetSourceEndpointError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetSourceEndpointError>>
  BatchGetSourceEndpointResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetSourceEndpointError>
  BatchGetSourceEndpointResult& AddErrors(ErrorsT&& value) {
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
  BatchGetSourceEndpointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SourceEndpoint> m_sourceEndpoints;

  Aws::Vector<BatchGetSourceEndpointError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sourceEndpointsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
