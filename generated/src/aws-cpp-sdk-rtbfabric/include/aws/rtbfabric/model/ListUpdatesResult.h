/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/UpdateSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {
class ListUpdatesResult {
 public:
  AWS_RTBFABRIC_API ListUpdatesResult() = default;
  AWS_RTBFABRIC_API ListUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API ListUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The updates on this page.</p>
   */
  inline const Aws::Vector<UpdateSummary>& GetUpdates() const { return m_updates; }
  template <typename UpdatesT = Aws::Vector<UpdateSummary>>
  void SetUpdates(UpdatesT&& value) {
    m_updatesHasBeenSet = true;
    m_updates = std::forward<UpdatesT>(value);
  }
  template <typename UpdatesT = Aws::Vector<UpdateSummary>>
  ListUpdatesResult& WithUpdates(UpdatesT&& value) {
    SetUpdates(std::forward<UpdatesT>(value));
    return *this;
  }
  template <typename UpdatesT = UpdateSummary>
  ListUpdatesResult& AddUpdates(UpdatesT&& value) {
    m_updatesHasBeenSet = true;
    m_updates.emplace_back(std::forward<UpdatesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If nextToken is returned, there are more results available. Make the call
   * again using the returned token to retrieve the next page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListUpdatesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListUpdatesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<UpdateSummary> m_updates;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_updatesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
