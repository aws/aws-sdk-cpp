/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/AssociatedSource.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RAM {
namespace Model {
class ListSourceAssociationsResult {
 public:
  AWS_RAM_API ListSourceAssociationsResult() = default;
  AWS_RAM_API ListSourceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RAM_API ListSourceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the source associations.</p>
   */
  inline const Aws::Vector<AssociatedSource>& GetSourceAssociations() const { return m_sourceAssociations; }
  template <typename SourceAssociationsT = Aws::Vector<AssociatedSource>>
  void SetSourceAssociations(SourceAssociationsT&& value) {
    m_sourceAssociationsHasBeenSet = true;
    m_sourceAssociations = std::forward<SourceAssociationsT>(value);
  }
  template <typename SourceAssociationsT = Aws::Vector<AssociatedSource>>
  ListSourceAssociationsResult& WithSourceAssociations(SourceAssociationsT&& value) {
    SetSourceAssociations(std::forward<SourceAssociationsT>(value));
    return *this;
  }
  template <typename SourceAssociationsT = AssociatedSource>
  ListSourceAssociationsResult& AddSourceAssociations(SourceAssociationsT&& value) {
    m_sourceAssociationsHasBeenSet = true;
    m_sourceAssociations.emplace_back(std::forward<SourceAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use to retrieve the next page of results. This value
   * is <code>null</code> when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSourceAssociationsResult& WithNextToken(NextTokenT&& value) {
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
  ListSourceAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetResponseCode() const { return m_responseCode; }

 private:
  Aws::Vector<AssociatedSource> m_sourceAssociations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_responseCode;
  bool m_sourceAssociationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RAM
}  // namespace Aws
