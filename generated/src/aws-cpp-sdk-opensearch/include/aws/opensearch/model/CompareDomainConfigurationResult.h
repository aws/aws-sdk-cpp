/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/CategoryDiffResult.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {
class CompareDomainConfigurationResult {
 public:
  AWS_OPENSEARCHSERVICE_API CompareDomainConfigurationResult() = default;
  AWS_OPENSEARCHSERVICE_API CompareDomainConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVICE_API CompareDomainConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the domain that was compared from.</p>
   */
  inline const Aws::String& GetSourceDomainArn() const { return m_sourceDomainArn; }
  template <typename SourceDomainArnT = Aws::String>
  void SetSourceDomainArn(SourceDomainArnT&& value) {
    m_sourceDomainArnHasBeenSet = true;
    m_sourceDomainArn = std::forward<SourceDomainArnT>(value);
  }
  template <typename SourceDomainArnT = Aws::String>
  CompareDomainConfigurationResult& WithSourceDomainArn(SourceDomainArnT&& value) {
    SetSourceDomainArn(std::forward<SourceDomainArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the domain that was compared against.</p>
   */
  inline const Aws::String& GetTargetDomainArn() const { return m_targetDomainArn; }
  template <typename TargetDomainArnT = Aws::String>
  void SetTargetDomainArn(TargetDomainArnT&& value) {
    m_targetDomainArnHasBeenSet = true;
    m_targetDomainArn = std::forward<TargetDomainArnT>(value);
  }
  template <typename TargetDomainArnT = Aws::String>
  CompareDomainConfigurationResult& WithTargetDomainArn(TargetDomainArnT&& value) {
    SetTargetDomainArn(std::forward<TargetDomainArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comparison result for each category you requested, keyed by category
   * name.</p>
   */
  inline const Aws::Map<Aws::String, CategoryDiffResult>& GetCategories() const { return m_categories; }
  template <typename CategoriesT = Aws::Map<Aws::String, CategoryDiffResult>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Map<Aws::String, CategoryDiffResult>>
  CompareDomainConfigurationResult& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  template <typename CategoriesKeyT = Aws::String, typename CategoriesValueT = CategoryDiffResult>
  CompareDomainConfigurationResult& AddCategories(CategoriesKeyT&& key, CategoriesValueT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories.emplace(std::forward<CategoriesKeyT>(key), std::forward<CategoriesValueT>(value));
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
  CompareDomainConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_sourceDomainArn;

  Aws::String m_targetDomainArn;

  Aws::Map<Aws::String, CategoryDiffResult> m_categories;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sourceDomainArnHasBeenSet = false;
  bool m_targetDomainArnHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
