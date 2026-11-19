/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/AvailableModuleVersionSummary.h>

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
class ListAvailableModuleVersionsResult {
 public:
  AWS_RTBFABRIC_API ListAvailableModuleVersionsResult() = default;
  AWS_RTBFABRIC_API ListAvailableModuleVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API ListAvailableModuleVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The module's ID.</p>
   */
  inline const Aws::String& GetModuleId() const { return m_moduleId; }
  template <typename ModuleIdT = Aws::String>
  void SetModuleId(ModuleIdT&& value) {
    m_moduleIdHasBeenSet = true;
    m_moduleId = std::forward<ModuleIdT>(value);
  }
  template <typename ModuleIdT = Aws::String>
  ListAvailableModuleVersionsResult& WithModuleId(ModuleIdT&& value) {
    SetModuleId(std::forward<ModuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The versions on this page, highest version first.</p>
   */
  inline const Aws::Vector<AvailableModuleVersionSummary>& GetVersions() const { return m_versions; }
  template <typename VersionsT = Aws::Vector<AvailableModuleVersionSummary>>
  void SetVersions(VersionsT&& value) {
    m_versionsHasBeenSet = true;
    m_versions = std::forward<VersionsT>(value);
  }
  template <typename VersionsT = Aws::Vector<AvailableModuleVersionSummary>>
  ListAvailableModuleVersionsResult& WithVersions(VersionsT&& value) {
    SetVersions(std::forward<VersionsT>(value));
    return *this;
  }
  template <typename VersionsT = AvailableModuleVersionSummary>
  ListAvailableModuleVersionsResult& AddVersions(VersionsT&& value) {
    m_versionsHasBeenSet = true;
    m_versions.emplace_back(std::forward<VersionsT>(value));
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
  ListAvailableModuleVersionsResult& WithNextToken(NextTokenT&& value) {
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
  ListAvailableModuleVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_moduleId;

  Aws::Vector<AvailableModuleVersionSummary> m_versions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_moduleIdHasBeenSet = false;
  bool m_versionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
