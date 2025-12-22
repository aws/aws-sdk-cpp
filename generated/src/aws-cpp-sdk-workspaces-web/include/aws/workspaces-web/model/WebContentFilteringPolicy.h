/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/Category.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WorkSpacesWeb {
namespace Model {

/**
 * <p>The policy that specifies which URLs end users are allowed to access or which
 * URLs or domain categories they are restricted from accessing for enhanced
 * security.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/WebContentFilteringPolicy">AWS
 * API Reference</a></p>
 */
class WebContentFilteringPolicy {
 public:
  AWS_WORKSPACESWEB_API WebContentFilteringPolicy() = default;
  AWS_WORKSPACESWEB_API WebContentFilteringPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESWEB_API WebContentFilteringPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Categories of websites that are blocked on the end user’s browsers.</p>
   */
  inline const Aws::Vector<Category>& GetBlockedCategories() const { return m_blockedCategories; }
  inline bool BlockedCategoriesHasBeenSet() const { return m_blockedCategoriesHasBeenSet; }
  template <typename BlockedCategoriesT = Aws::Vector<Category>>
  void SetBlockedCategories(BlockedCategoriesT&& value) {
    m_blockedCategoriesHasBeenSet = true;
    m_blockedCategories = std::forward<BlockedCategoriesT>(value);
  }
  template <typename BlockedCategoriesT = Aws::Vector<Category>>
  WebContentFilteringPolicy& WithBlockedCategories(BlockedCategoriesT&& value) {
    SetBlockedCategories(std::forward<BlockedCategoriesT>(value));
    return *this;
  }
  inline WebContentFilteringPolicy& AddBlockedCategories(Category value) {
    m_blockedCategoriesHasBeenSet = true;
    m_blockedCategories.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>URLs and domains that are always accessible to end users.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedUrls() const { return m_allowedUrls; }
  inline bool AllowedUrlsHasBeenSet() const { return m_allowedUrlsHasBeenSet; }
  template <typename AllowedUrlsT = Aws::Vector<Aws::String>>
  void SetAllowedUrls(AllowedUrlsT&& value) {
    m_allowedUrlsHasBeenSet = true;
    m_allowedUrls = std::forward<AllowedUrlsT>(value);
  }
  template <typename AllowedUrlsT = Aws::Vector<Aws::String>>
  WebContentFilteringPolicy& WithAllowedUrls(AllowedUrlsT&& value) {
    SetAllowedUrls(std::forward<AllowedUrlsT>(value));
    return *this;
  }
  template <typename AllowedUrlsT = Aws::String>
  WebContentFilteringPolicy& AddAllowedUrls(AllowedUrlsT&& value) {
    m_allowedUrlsHasBeenSet = true;
    m_allowedUrls.emplace_back(std::forward<AllowedUrlsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>URLs and domains that end users cannot access.</p>
   */
  inline const Aws::Vector<Aws::String>& GetBlockedUrls() const { return m_blockedUrls; }
  inline bool BlockedUrlsHasBeenSet() const { return m_blockedUrlsHasBeenSet; }
  template <typename BlockedUrlsT = Aws::Vector<Aws::String>>
  void SetBlockedUrls(BlockedUrlsT&& value) {
    m_blockedUrlsHasBeenSet = true;
    m_blockedUrls = std::forward<BlockedUrlsT>(value);
  }
  template <typename BlockedUrlsT = Aws::Vector<Aws::String>>
  WebContentFilteringPolicy& WithBlockedUrls(BlockedUrlsT&& value) {
    SetBlockedUrls(std::forward<BlockedUrlsT>(value));
    return *this;
  }
  template <typename BlockedUrlsT = Aws::String>
  WebContentFilteringPolicy& AddBlockedUrls(BlockedUrlsT&& value) {
    m_blockedUrlsHasBeenSet = true;
    m_blockedUrls.emplace_back(std::forward<BlockedUrlsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Category> m_blockedCategories;

  Aws::Vector<Aws::String> m_allowedUrls;

  Aws::Vector<Aws::String> m_blockedUrls;
  bool m_blockedCategoriesHasBeenSet = false;
  bool m_allowedUrlsHasBeenSet = false;
  bool m_blockedUrlsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
