/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/CaseStudyResourceType.h>
#include <aws/marketplace-discovery/model/ResourceContentType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>A resource that a case study cites, such as supporting documentation or a web
 * page.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/CaseStudyResource">AWS
 * API Reference</a></p>
 */
class CaseStudyResource {
 public:
  AWS_MARKETPLACEDISCOVERY_API CaseStudyResource() = default;
  AWS_MARKETPLACEDISCOVERY_API CaseStudyResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API CaseStudyResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The format of the resource value.</p>
   */
  inline ResourceContentType GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  inline void SetContentType(ResourceContentType value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = value;
  }
  inline CaseStudyResource& WithContentType(ResourceContentType value) {
    SetContentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource value, such as a URL.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  CaseStudyResource& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource name displayed to you.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CaseStudyResource& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of case study resource.</p>
   */
  inline CaseStudyResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(CaseStudyResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline CaseStudyResource& WithResourceType(CaseStudyResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}
 private:
  ResourceContentType m_contentType{ResourceContentType::NOT_SET};

  Aws::String m_value;

  Aws::String m_displayName;

  CaseStudyResourceType m_resourceType{CaseStudyResourceType::NOT_SET};
  bool m_contentTypeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
