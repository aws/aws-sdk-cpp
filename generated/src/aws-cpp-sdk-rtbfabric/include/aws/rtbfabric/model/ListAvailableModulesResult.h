/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/AvailableModuleSummary.h>

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
class ListAvailableModulesResult {
 public:
  AWS_RTBFABRIC_API ListAvailableModulesResult() = default;
  AWS_RTBFABRIC_API ListAvailableModulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API ListAvailableModulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The modules on this page, newest first.</p>
   */
  inline const Aws::Vector<AvailableModuleSummary>& GetModules() const { return m_modules; }
  template <typename ModulesT = Aws::Vector<AvailableModuleSummary>>
  void SetModules(ModulesT&& value) {
    m_modulesHasBeenSet = true;
    m_modules = std::forward<ModulesT>(value);
  }
  template <typename ModulesT = Aws::Vector<AvailableModuleSummary>>
  ListAvailableModulesResult& WithModules(ModulesT&& value) {
    SetModules(std::forward<ModulesT>(value));
    return *this;
  }
  template <typename ModulesT = AvailableModuleSummary>
  ListAvailableModulesResult& AddModules(ModulesT&& value) {
    m_modulesHasBeenSet = true;
    m_modules.emplace_back(std::forward<ModulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If nextToken is returned, there are more results available. Make the call
   * again using the returned token to retrieve the next page. Keep all other
   * arguments unchanged. Each pagination token expires after 24 hours; using an
   * expired token fails with ValidationException.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAvailableModulesResult& WithNextToken(NextTokenT&& value) {
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
  ListAvailableModulesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AvailableModuleSummary> m_modules;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_modulesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
