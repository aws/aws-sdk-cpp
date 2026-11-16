/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/SpaceSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {
class ListSpacesResult {
 public:
  AWS_OPENSEARCHMEMORY_API ListSpacesResult() = default;
  AWS_OPENSEARCHMEMORY_API ListSpacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHMEMORY_API ListSpacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The spaces.</p>
   */
  inline const Aws::Vector<SpaceSummary>& GetSpaces() const { return m_spaces; }
  template <typename SpacesT = Aws::Vector<SpaceSummary>>
  void SetSpaces(SpacesT&& value) {
    m_spacesHasBeenSet = true;
    m_spaces = std::forward<SpacesT>(value);
  }
  template <typename SpacesT = Aws::Vector<SpaceSummary>>
  ListSpacesResult& WithSpaces(SpacesT&& value) {
    SetSpaces(std::forward<SpacesT>(value));
    return *this;
  }
  template <typename SpacesT = SpaceSummary>
  ListSpacesResult& AddSpaces(SpacesT&& value) {
    m_spacesHasBeenSet = true;
    m_spaces.emplace_back(std::forward<SpacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. Absent when there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSpacesResult& WithNextToken(NextTokenT&& value) {
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
  ListSpacesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SpaceSummary> m_spaces;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_spacesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
