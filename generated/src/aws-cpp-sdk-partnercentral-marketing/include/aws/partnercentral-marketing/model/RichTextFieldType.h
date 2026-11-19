/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>A rich-text field's constraints and placeholder. Distinct from text because
 * the value is a markup fragment whose permitted tags are part of the contract: a
 * client needs the tag list to configure its editor, and the service needs it to
 * sanitize.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/RichTextFieldType">AWS
 * API Reference</a></p>
 */
class RichTextFieldType {
 public:
  AWS_PARTNERCENTRALMARKETING_API RichTextFieldType() = default;
  AWS_PARTNERCENTRALMARKETING_API RichTextFieldType(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API RichTextFieldType& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Maximum accepted length of the markup fragment.</p>
   */
  inline int64_t GetMaxLength() const { return m_maxLength; }
  inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
  inline void SetMaxLength(int64_t value) {
    m_maxLengthHasBeenSet = true;
    m_maxLength = value;
  }
  inline RichTextFieldType& WithMaxLength(int64_t value) {
    SetMaxLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTML tags permitted in the value. Anything else is stripped.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedTags() const { return m_allowedTags; }
  inline bool AllowedTagsHasBeenSet() const { return m_allowedTagsHasBeenSet; }
  template <typename AllowedTagsT = Aws::Vector<Aws::String>>
  void SetAllowedTags(AllowedTagsT&& value) {
    m_allowedTagsHasBeenSet = true;
    m_allowedTags = std::forward<AllowedTagsT>(value);
  }
  template <typename AllowedTagsT = Aws::Vector<Aws::String>>
  RichTextFieldType& WithAllowedTags(AllowedTagsT&& value) {
    SetAllowedTags(std::forward<AllowedTagsT>(value));
    return *this;
  }
  template <typename AllowedTagsT = Aws::String>
  RichTextFieldType& AddAllowedTags(AllowedTagsT&& value) {
    m_allowedTagsHasBeenSet = true;
    m_allowedTags.emplace_back(std::forward<AllowedTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Example markup shown where the field is empty in a preview of the asset,
   * restricted to AllowedTags. Never the asset's value: it is not set on the asset
   * at create, does not fill a required field, and is never published.</p>
   */
  inline const Aws::String& GetPlaceholder() const { return m_placeholder; }
  inline bool PlaceholderHasBeenSet() const { return m_placeholderHasBeenSet; }
  template <typename PlaceholderT = Aws::String>
  void SetPlaceholder(PlaceholderT&& value) {
    m_placeholderHasBeenSet = true;
    m_placeholder = std::forward<PlaceholderT>(value);
  }
  template <typename PlaceholderT = Aws::String>
  RichTextFieldType& WithPlaceholder(PlaceholderT&& value) {
    SetPlaceholder(std::forward<PlaceholderT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_maxLength{0};

  Aws::Vector<Aws::String> m_allowedTags;

  Aws::String m_placeholder;
  bool m_maxLengthHasBeenSet = false;
  bool m_allowedTagsHasBeenSet = false;
  bool m_placeholderHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
