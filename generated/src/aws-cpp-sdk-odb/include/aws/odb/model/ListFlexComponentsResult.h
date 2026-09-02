/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/FlexComponentSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {
class ListFlexComponentsResult {
 public:
  AWS_ODB_API ListFlexComponentsResult() = default;
  AWS_ODB_API ListFlexComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API ListFlexComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token to include in another request to get the next page of items. This
   * value is <code>null</code> when there are no more items to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFlexComponentsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of flex components along with their properties.</p>
   */
  inline const Aws::Vector<FlexComponentSummary>& GetFlexComponents() const { return m_flexComponents; }
  template <typename FlexComponentsT = Aws::Vector<FlexComponentSummary>>
  void SetFlexComponents(FlexComponentsT&& value) {
    m_flexComponentsHasBeenSet = true;
    m_flexComponents = std::forward<FlexComponentsT>(value);
  }
  template <typename FlexComponentsT = Aws::Vector<FlexComponentSummary>>
  ListFlexComponentsResult& WithFlexComponents(FlexComponentsT&& value) {
    SetFlexComponents(std::forward<FlexComponentsT>(value));
    return *this;
  }
  template <typename FlexComponentsT = FlexComponentSummary>
  ListFlexComponentsResult& AddFlexComponents(FlexComponentsT&& value) {
    m_flexComponentsHasBeenSet = true;
    m_flexComponents.emplace_back(std::forward<FlexComponentsT>(value));
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
  ListFlexComponentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<FlexComponentSummary> m_flexComponents;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_flexComponentsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
