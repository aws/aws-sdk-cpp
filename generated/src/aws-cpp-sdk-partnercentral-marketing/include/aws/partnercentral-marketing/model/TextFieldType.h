/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>A plain-text field's constraints and placeholder.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/TextFieldType">AWS
 * API Reference</a></p>
 */
class TextFieldType {
 public:
  AWS_PARTNERCENTRALMARKETING_API TextFieldType() = default;
  AWS_PARTNERCENTRALMARKETING_API TextFieldType(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API TextFieldType& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Minimum accepted length.</p>
   */
  inline int64_t GetMinLength() const { return m_minLength; }
  inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }
  inline void SetMinLength(int64_t value) {
    m_minLengthHasBeenSet = true;
    m_minLength = value;
  }
  inline TextFieldType& WithMinLength(int64_t value) {
    SetMinLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum accepted length.</p>
   */
  inline int64_t GetMaxLength() const { return m_maxLength; }
  inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
  inline void SetMaxLength(int64_t value) {
    m_maxLengthHasBeenSet = true;
    m_maxLength = value;
  }
  inline TextFieldType& WithMaxLength(int64_t value) {
    SetMaxLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Regular expression the value must match — used for URL, email, phone and
   * hex-colour fields.</p>
   */
  inline const Aws::String& GetPattern() const { return m_pattern; }
  inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
  template <typename PatternT = Aws::String>
  void SetPattern(PatternT&& value) {
    m_patternHasBeenSet = true;
    m_pattern = std::forward<PatternT>(value);
  }
  template <typename PatternT = Aws::String>
  TextFieldType& WithPattern(PatternT&& value) {
    SetPattern(std::forward<PatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Example text shown where the field is empty in a preview of the asset. Never
   * the asset's value: it is not set on the asset at create, does not fill a
   * required field, and is never published.</p>
   */
  inline const Aws::String& GetPlaceholder() const { return m_placeholder; }
  inline bool PlaceholderHasBeenSet() const { return m_placeholderHasBeenSet; }
  template <typename PlaceholderT = Aws::String>
  void SetPlaceholder(PlaceholderT&& value) {
    m_placeholderHasBeenSet = true;
    m_placeholder = std::forward<PlaceholderT>(value);
  }
  template <typename PlaceholderT = Aws::String>
  TextFieldType& WithPlaceholder(PlaceholderT&& value) {
    SetPlaceholder(std::forward<PlaceholderT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_minLength{0};

  int64_t m_maxLength{0};

  Aws::String m_pattern;

  Aws::String m_placeholder;
  bool m_minLengthHasBeenSet = false;
  bool m_maxLengthHasBeenSet = false;
  bool m_patternHasBeenSet = false;
  bool m_placeholderHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
