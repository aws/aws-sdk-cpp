/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/SoftwareFilters.h>
#include <aws/securityhub/model/SoftwareScopes.h>
#include <aws/securityhub/model/SortCriterion.h>

#include <utility>

namespace Aws {
namespace SecurityHub {
namespace Model {

/**
 */
class GetSoftwareResourcesV2Request : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API GetSoftwareResourcesV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetSoftwareResourcesV2"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the software package, for example <code>openssl</code>. This
   * value must match the <code>PackageName</code> returned by
   * <code>GetSoftwareV2</code>.</p>
   */
  inline const Aws::String& GetPackageName() const { return m_packageName; }
  inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
  template <typename PackageNameT = Aws::String>
  void SetPackageName(PackageNameT&& value) {
    m_packageNameHasBeenSet = true;
    m_packageName = std::forward<PackageNameT>(value);
  }
  template <typename PackageNameT = Aws::String>
  GetSoftwareResourcesV2Request& WithPackageName(PackageNameT&& value) {
    SetPackageName(std::forward<PackageNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the software package, for example <code>operating-system</code>,
   * <code>application</code>, or <code>library</code>. This value must match the
   * <code>PackageType</code> returned by <code>GetSoftwareV2</code>.</p>
   */
  inline const Aws::String& GetPackageType() const { return m_packageType; }
  inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
  template <typename PackageTypeT = Aws::String>
  void SetPackageType(PackageTypeT&& value) {
    m_packageTypeHasBeenSet = true;
    m_packageType = std::forward<PackageTypeT>(value);
  }
  template <typename PackageTypeT = Aws::String>
  GetSoftwareResourcesV2Request& WithPackageType(PackageTypeT&& value) {
    SetPackageType(std::forward<PackageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the software package, for example <code>3.0.8</code>. If you
   * omit this value, the response includes resources that contain any version of the
   * package.</p>
   */
  inline const Aws::String& GetPackageVersion() const { return m_packageVersion; }
  inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
  template <typename PackageVersionT = Aws::String>
  void SetPackageVersion(PackageVersionT&& value) {
    m_packageVersionHasBeenSet = true;
    m_packageVersion = std::forward<PackageVersionT>(value);
  }
  template <typename PackageVersionT = Aws::String>
  GetSoftwareResourcesV2Request& WithPackageVersion(PackageVersionT&& value) {
    SetPackageVersion(std::forward<PackageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the returned resources based on a set of criteria. You can nest
   * composite filters up to three levels deep.</p>
   */
  inline const SoftwareFilters& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = SoftwareFilters>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = SoftwareFilters>
  GetSoftwareResourcesV2Request& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Limits the results to resources from specific organizational units or from
   * the delegated administrator's organization. Only the delegated administrator
   * account can use this parameter. Other accounts receive an
   * <code>AccessDeniedException</code>.</p> <p>This parameter is optional. If you
   * omit it, the delegated administrator sees resources from all accounts across the
   * entire organization. Other accounts see only their own resources.</p> <p>You can
   * specify up to 10 entries in <code>Scopes.AwsOrganizations</code>. If multiple
   * entries are specified, the entries are combined using OR logic.</p>
   */
  inline const SoftwareScopes& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = SoftwareScopes>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = SoftwareScopes>
  GetSoftwareResourcesV2Request& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource attribute used to sort the list of returned resources, for
   * example <code>Region</code> or <code>ResourceType</code>. You can specify one
   * sort criterion.</p>
   */
  inline const Aws::Vector<SortCriterion>& GetSortCriteria() const { return m_sortCriteria; }
  inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }
  template <typename SortCriteriaT = Aws::Vector<SortCriterion>>
  void SetSortCriteria(SortCriteriaT&& value) {
    m_sortCriteriaHasBeenSet = true;
    m_sortCriteria = std::forward<SortCriteriaT>(value);
  }
  template <typename SortCriteriaT = Aws::Vector<SortCriterion>>
  GetSoftwareResourcesV2Request& WithSortCriteria(SortCriteriaT&& value) {
    SetSortCriteria(std::forward<SortCriteriaT>(value));
    return *this;
  }
  template <typename SortCriteriaT = SortCriterion>
  GetSoftwareResourcesV2Request& AddSortCriteria(SortCriteriaT&& value) {
    m_sortCriteriaHasBeenSet = true;
    m_sortCriteria.emplace_back(std::forward<SortCriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token required for pagination. On your first call, set the value of this
   * parameter to <code>NULL</code>. For subsequent calls, to continue listing data,
   * set the value of this parameter to the value returned in the previous
   * response.</p> <p>A token expires one hour after it's issued. If you change the
   * request parameters between calls, the token is no longer valid and the request
   * fails with a <code>ValidationException</code>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetSoftwareResourcesV2Request& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return. Valid values are 1–100. The default
   * is 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetSoftwareResourcesV2Request& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_packageName;

  Aws::String m_packageType;

  Aws::String m_packageVersion;

  SoftwareFilters m_filters;

  SoftwareScopes m_scopes;

  Aws::Vector<SortCriterion> m_sortCriteria;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_packageNameHasBeenSet = false;
  bool m_packageTypeHasBeenSet = false;
  bool m_packageVersionHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_sortCriteriaHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
