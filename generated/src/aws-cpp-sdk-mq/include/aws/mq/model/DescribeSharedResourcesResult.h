/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/SharedResource.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MQ {
namespace Model {
class DescribeSharedResourcesResult {
 public:
  AWS_MQ_API DescribeSharedResourcesResult() = default;
  AWS_MQ_API DescribeSharedResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MQ_API DescribeSharedResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token that specifies the next page of results Amazon MQ should return. To
   * request the first page, leave nextToken empty.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeSharedResourcesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of resources shared to the broker.</p>
   */
  inline const Aws::Vector<SharedResource>& GetSharedResources() const { return m_sharedResources; }
  template <typename SharedResourcesT = Aws::Vector<SharedResource>>
  void SetSharedResources(SharedResourcesT&& value) {
    m_sharedResourcesHasBeenSet = true;
    m_sharedResources = std::forward<SharedResourcesT>(value);
  }
  template <typename SharedResourcesT = Aws::Vector<SharedResource>>
  DescribeSharedResourcesResult& WithSharedResources(SharedResourcesT&& value) {
    SetSharedResources(std::forward<SharedResourcesT>(value));
    return *this;
  }
  template <typename SharedResourcesT = SharedResource>
  DescribeSharedResourcesResult& AddSharedResources(SharedResourcesT&& value) {
    m_sharedResourcesHasBeenSet = true;
    m_sharedResources.emplace_back(std::forward<SharedResourcesT>(value));
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
  DescribeSharedResourcesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<SharedResource> m_sharedResources;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_sharedResourcesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MQ
}  // namespace Aws
