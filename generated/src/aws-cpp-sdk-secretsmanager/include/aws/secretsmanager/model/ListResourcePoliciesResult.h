/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/model/ResourcePolicySummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecretsManager {
namespace Model {
class ListResourcePoliciesResult {
 public:
  AWS_SECRETSMANAGER_API ListResourcePoliciesResult() = default;
  AWS_SECRETSMANAGER_API ListResourcePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECRETSMANAGER_API ListResourcePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of the resource policies attached to the secret.</p>
   */
  inline const Aws::Vector<ResourcePolicySummary>& GetResourcePolicies() const { return m_resourcePolicies; }
  template <typename ResourcePoliciesT = Aws::Vector<ResourcePolicySummary>>
  void SetResourcePolicies(ResourcePoliciesT&& value) {
    m_resourcePoliciesHasBeenSet = true;
    m_resourcePolicies = std::forward<ResourcePoliciesT>(value);
  }
  template <typename ResourcePoliciesT = Aws::Vector<ResourcePolicySummary>>
  ListResourcePoliciesResult& WithResourcePolicies(ResourcePoliciesT&& value) {
    SetResourcePolicies(std::forward<ResourcePoliciesT>(value));
    return *this;
  }
  template <typename ResourcePoliciesT = ResourcePolicySummary>
  ListResourcePoliciesResult& AddResourcePolicies(ResourcePoliciesT&& value) {
    m_resourcePoliciesHasBeenSet = true;
    m_resourcePolicies.emplace_back(std::forward<ResourcePoliciesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Secrets Manager includes this value if there's more output available than
   * what is included in the current response. To get the next results, call
   * <code>ListResourcePolicies</code> again with this value.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListResourcePoliciesResult& WithNextToken(NextTokenT&& value) {
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
  ListResourcePoliciesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ResourcePolicySummary> m_resourcePolicies;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resourcePoliciesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
