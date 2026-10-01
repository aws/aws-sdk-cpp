/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ExposureFinding.h>
#include <aws/securityhub/model/RemediationResource.h>
#include <aws/securityhub/model/RemediationTrait.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {
class ListExposuresByRemediationV2Result {
 public:
  AWS_SECURITYHUB_API ListExposuresByRemediationV2Result() = default;
  AWS_SECURITYHUB_API ListExposuresByRemediationV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYHUB_API ListExposuresByRemediationV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of exposure findings returned by the operation.</p>
   */
  inline const Aws::Vector<ExposureFinding>& GetItems() const { return m_items; }
  template <typename ItemsT = Aws::Vector<ExposureFinding>>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = Aws::Vector<ExposureFinding>>
  ListExposuresByRemediationV2Result& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = ExposureFinding>
  ListExposuresByRemediationV2Result& AddItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items.emplace_back(std::forward<ItemsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier (ID) of the remediation target that the exposure
   * findings are associated with.</p>
   */
  inline const Aws::String& GetTargetUid() const { return m_targetUid; }
  template <typename TargetUidT = Aws::String>
  void SetTargetUid(TargetUidT&& value) {
    m_targetUidHasBeenSet = true;
    m_targetUid = std::forward<TargetUidT>(value);
  }
  template <typename TargetUidT = Aws::String>
  ListExposuresByRemediationV2Result& WithTargetUid(TargetUidT&& value) {
    SetTargetUid(std::forward<TargetUidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides comprehensive details about a resource.</p>
   */
  inline const RemediationResource& GetResource() const { return m_resource; }
  template <typename ResourceT = RemediationResource>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = RemediationResource>
  ListExposuresByRemediationV2Result& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total count of exposure findings associated with the remediation
   * target.</p>
   */
  inline int GetTotalCount() const { return m_totalCount; }
  inline void SetTotalCount(int value) {
    m_totalCountHasBeenSet = true;
    m_totalCount = value;
  }
  inline ListExposuresByRemediationV2Result& WithTotalCount(int value) {
    SetTotalCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific trait associated with the remediation target.</p>
   */
  inline const RemediationTrait& GetTrait() const { return m_trait; }
  template <typename TraitT = RemediationTrait>
  void SetTrait(TraitT&& value) {
    m_traitHasBeenSet = true;
    m_trait = std::forward<TraitT>(value);
  }
  template <typename TraitT = RemediationTrait>
  ListExposuresByRemediationV2Result& WithTrait(TraitT&& value) {
    SetTrait(std::forward<TraitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use to request the next page of results. Otherwise,
   * this parameter is null.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListExposuresByRemediationV2Result& WithNextToken(NextTokenT&& value) {
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
  ListExposuresByRemediationV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ExposureFinding> m_items;

  Aws::String m_targetUid;

  RemediationResource m_resource;

  int m_totalCount{0};

  RemediationTrait m_trait;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_itemsHasBeenSet = false;
  bool m_targetUidHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_totalCountHasBeenSet = false;
  bool m_traitHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
