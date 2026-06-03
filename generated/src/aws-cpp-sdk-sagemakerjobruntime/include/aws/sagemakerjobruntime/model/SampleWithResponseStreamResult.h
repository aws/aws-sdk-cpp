/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace SagemakerJobRuntime {
namespace Model {
class SampleWithResponseStreamResult {
 public:
  AWS_SAGEMAKERJOBRUNTIME_API SampleWithResponseStreamResult() = default;
  AWS_SAGEMAKERJOBRUNTIME_API SampleWithResponseStreamResult(SampleWithResponseStreamResult&&) = default;
  AWS_SAGEMAKERJOBRUNTIME_API SampleWithResponseStreamResult& operator=(SampleWithResponseStreamResult&&) = default;
  // we delete these because Microsoft doesn't handle move generation correctly
  // and we therefore don't trust them to get it right here either.
  SampleWithResponseStreamResult(const SampleWithResponseStreamResult&) = delete;
  SampleWithResponseStreamResult& operator=(const SampleWithResponseStreamResult&) = delete;

  AWS_SAGEMAKERJOBRUNTIME_API SampleWithResponseStreamResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
  AWS_SAGEMAKERJOBRUNTIME_API SampleWithResponseStreamResult& operator=(
      Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);

  ///@{
  /**
   * <p>MIME type of the streaming inference result.</p>
   */
  inline const Aws::String& GetContentType() const { return m_contentType; }
  template <typename ContentTypeT = Aws::String>
  void SetContentType(ContentTypeT&& value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = std::forward<ContentTypeT>(value);
  }
  template <typename ContentTypeT = Aws::String>
  SampleWithResponseStreamResult& WithContentType(ContentTypeT&& value) {
    SetContentType(std::forward<ContentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The streaming response body, delivered as a series of PayloadPart events.</p>
   */
  inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }
  inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  SampleWithResponseStreamResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_contentType;

  Aws::Utils::Stream::ResponseStream m_body{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_contentTypeHasBeenSet = false;
  bool m_bodyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SagemakerJobRuntime
}  // namespace Aws
