/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace OpenSearchService {
namespace Model {

/**
 */
class CompareDomainConfigurationRequest : public OpenSearchServiceRequest {
 public:
  AWS_OPENSEARCHSERVICE_API CompareDomainConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CompareDomainConfiguration"; }

  AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the domain to compare from.</p>
   */
  inline const Aws::String& GetSourceDomainArn() const { return m_sourceDomainArn; }
  inline bool SourceDomainArnHasBeenSet() const { return m_sourceDomainArnHasBeenSet; }
  template <typename SourceDomainArnT = Aws::String>
  void SetSourceDomainArn(SourceDomainArnT&& value) {
    m_sourceDomainArnHasBeenSet = true;
    m_sourceDomainArn = std::forward<SourceDomainArnT>(value);
  }
  template <typename SourceDomainArnT = Aws::String>
  CompareDomainConfigurationRequest& WithSourceDomainArn(SourceDomainArnT&& value) {
    SetSourceDomainArn(std::forward<SourceDomainArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the domain to compare against.</p>
   */
  inline const Aws::String& GetTargetDomainArn() const { return m_targetDomainArn; }
  inline bool TargetDomainArnHasBeenSet() const { return m_targetDomainArnHasBeenSet; }
  template <typename TargetDomainArnT = Aws::String>
  void SetTargetDomainArn(TargetDomainArnT&& value) {
    m_targetDomainArnHasBeenSet = true;
    m_targetDomainArn = std::forward<TargetDomainArnT>(value);
  }
  template <typename TargetDomainArnT = Aws::String>
  CompareDomainConfigurationRequest& WithTargetDomainArn(TargetDomainArnT&& value) {
    SetTargetDomainArn(std::forward<TargetDomainArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata categories to compare. At least one is required, and only the
   * categories you name are read and returned.</p> <ul> <li> <p>
   * <code>aliases</code> </p> </li> <li> <p> <code>alerting_monitors</code> </p>
   * </li> <li> <p> <code>cluster_settings</code> </p> </li> <li> <p>
   * <code>component_templates</code> </p> </li> <li> <p>
   * <code>ingest_pipelines</code> </p> </li> <li> <p> <code>ism_policies</code> —
   * index state management policies</p> </li> <li> <p>
   * <code>security_action_groups</code> </p> </li> <li> <p>
   * <code>security_internal_users</code> </p> </li> <li> <p>
   * <code>security_role_mappings</code> </p> </li> <li> <p>
   * <code>security_roles</code> </p> </li> <li> <p> <code>templates</code> — index
   * templates</p> </li> </ul> <p>The set of categories grows over time, so this list
   * is not fixed. A category the service does not recognise is rejected with the
   * supported categories named in the error message.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCategories() const { return m_categories; }
  inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
  template <typename CategoriesT = Aws::Vector<Aws::String>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Vector<Aws::String>>
  CompareDomainConfigurationRequest& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  template <typename CategoriesT = Aws::String>
  CompareDomainConfigurationRequest& AddCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories.emplace_back(std::forward<CategoriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceDomainArn;

  Aws::String m_targetDomainArn;

  Aws::Vector<Aws::String> m_categories;
  bool m_sourceDomainArnHasBeenSet = false;
  bool m_targetDomainArnHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
