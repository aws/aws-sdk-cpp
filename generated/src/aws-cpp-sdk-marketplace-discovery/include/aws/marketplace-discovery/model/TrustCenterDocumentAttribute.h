/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ResourceContentType.h>
#include <aws/marketplace-discovery/model/TrustCenterDocumentAccessType.h>

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
 * <p>A trust center document associated with a listing.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/TrustCenterDocumentAttribute">AWS
 * API Reference</a></p>
 */
class TrustCenterDocumentAttribute {
 public:
  AWS_MARKETPLACEDISCOVERY_API TrustCenterDocumentAttribute() = default;
  AWS_MARKETPLACEDISCOVERY_API TrustCenterDocumentAttribute(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API TrustCenterDocumentAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The format of the document resource value.</p>
   */
  inline ResourceContentType GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  inline void SetContentType(ResourceContentType value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = value;
  }
  inline TrustCenterDocumentAttribute& WithContentType(ResourceContentType value) {
    SetContentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL used to download, view, or request access to the document.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  TrustCenterDocumentAttribute& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The document name displayed to you.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  TrustCenterDocumentAttribute& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subject area of the document.</p>
   */
  inline const Aws::String& GetSubjectArea() const { return m_subjectArea; }
  inline bool SubjectAreaHasBeenSet() const { return m_subjectAreaHasBeenSet; }
  template <typename SubjectAreaT = Aws::String>
  void SetSubjectArea(SubjectAreaT&& value) {
    m_subjectAreaHasBeenSet = true;
    m_subjectArea = std::forward<SubjectAreaT>(value);
  }
  template <typename SubjectAreaT = Aws::String>
  TrustCenterDocumentAttribute& WithSubjectArea(SubjectAreaT&& value) {
    SetSubjectArea(std::forward<SubjectAreaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the document can be accessed.</p>
   */
  inline TrustCenterDocumentAccessType GetAccessType() const { return m_accessType; }
  inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
  inline void SetAccessType(TrustCenterDocumentAccessType value) {
    m_accessTypeHasBeenSet = true;
    m_accessType = value;
  }
  inline TrustCenterDocumentAttribute& WithAccessType(TrustCenterDocumentAccessType value) {
    SetAccessType(value);
    return *this;
  }
  ///@}
 private:
  ResourceContentType m_contentType{ResourceContentType::NOT_SET};

  Aws::String m_value;

  Aws::String m_displayName;

  Aws::String m_subjectArea;

  TrustCenterDocumentAccessType m_accessType{TrustCenterDocumentAccessType::NOT_SET};
  bool m_contentTypeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_subjectAreaHasBeenSet = false;
  bool m_accessTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
