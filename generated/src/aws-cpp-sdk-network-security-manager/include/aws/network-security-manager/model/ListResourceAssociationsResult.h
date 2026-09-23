/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/ResourceAssociation.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {
class ListResourceAssociationsResult {
 public:
  AWS_NETWORKSECURITYMANAGER_API ListResourceAssociationsResult() = default;
  AWS_NETWORKSECURITYMANAGER_API ListResourceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKSECURITYMANAGER_API ListResourceAssociationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token for the next page of results. To retrieve the next page, call the
   * operation again and provide this value. When there are no more results, this
   * value is null.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListResourceAssociationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of resource associations.</p>
   */
  inline const Aws::Vector<ResourceAssociation>& GetResourceAssociations() const { return m_resourceAssociations; }
  template <typename ResourceAssociationsT = Aws::Vector<ResourceAssociation>>
  void SetResourceAssociations(ResourceAssociationsT&& value) {
    m_resourceAssociationsHasBeenSet = true;
    m_resourceAssociations = std::forward<ResourceAssociationsT>(value);
  }
  template <typename ResourceAssociationsT = Aws::Vector<ResourceAssociation>>
  ListResourceAssociationsResult& WithResourceAssociations(ResourceAssociationsT&& value) {
    SetResourceAssociations(std::forward<ResourceAssociationsT>(value));
    return *this;
  }
  template <typename ResourceAssociationsT = ResourceAssociation>
  ListResourceAssociationsResult& AddResourceAssociations(ResourceAssociationsT&& value) {
    m_resourceAssociationsHasBeenSet = true;
    m_resourceAssociations.emplace_back(std::forward<ResourceAssociationsT>(value));
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
  ListResourceAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<ResourceAssociation> m_resourceAssociations;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_resourceAssociationsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
