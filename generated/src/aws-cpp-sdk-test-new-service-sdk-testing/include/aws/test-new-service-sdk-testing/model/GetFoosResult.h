/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTesting_EXPORTS.h>
#include <aws/test-new-service-sdk-testing/model/FooSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace TestNewServiceSDKTesting {
namespace Model {
class GetFoosResult {
 public:
  AWS_TESTNEWSERVICESDKTESTING_API GetFoosResult() = default;
  AWS_TESTNEWSERVICESDKTESTING_API GetFoosResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_TESTNEWSERVICESDKTESTING_API GetFoosResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::Vector<FooSummary>& GetFoos() const { return m_foos; }
  template <typename FoosT = Aws::Vector<FooSummary>>
  void SetFoos(FoosT&& value) {
    m_foosHasBeenSet = true;
    m_foos = std::forward<FoosT>(value);
  }
  template <typename FoosT = Aws::Vector<FooSummary>>
  GetFoosResult& WithFoos(FoosT&& value) {
    SetFoos(std::forward<FoosT>(value));
    return *this;
  }
  template <typename FoosT = FooSummary>
  GetFoosResult& AddFoos(FoosT&& value) {
    m_foosHasBeenSet = true;
    m_foos.emplace_back(std::forward<FoosT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetFoosResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetFilter() const { return m_filter; }
  template <typename FilterT = Aws::String>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = Aws::String>
  GetFoosResult& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
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
  GetFoosResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FooSummary> m_foos;

  Aws::String m_nextToken;

  Aws::String m_filter;

  Aws::String m_requestId;
  bool m_foosHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_filterHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
