/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/translate/Translate_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Translate {
namespace Model {

/**
 * <p>The term being translated by the custom terminology.</p><p><h3>See Also:</h3>
 * <a href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/Term">AWS
 * API Reference</a></p>
 */
class Term {
 public:
  AWS_TRANSLATE_API Term() = default;
  AWS_TRANSLATE_API Term(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSLATE_API Term& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSLATE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The source text of the term being translated by the custom terminology.</p>
   */
  inline const Aws::String& GetSourceText() const { return m_sourceText; }
  inline bool SourceTextHasBeenSet() const { return m_sourceTextHasBeenSet; }
  template <typename SourceTextT = Aws::String>
  void SetSourceText(SourceTextT&& value) {
    m_sourceTextHasBeenSet = true;
    m_sourceText = std::forward<SourceTextT>(value);
  }
  template <typename SourceTextT = Aws::String>
  Term& WithSourceText(SourceTextT&& value) {
    SetSourceText(std::forward<SourceTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target text of the term being translated by the custom terminology.</p>
   */
  inline const Aws::String& GetTargetText() const { return m_targetText; }
  inline bool TargetTextHasBeenSet() const { return m_targetTextHasBeenSet; }
  template <typename TargetTextT = Aws::String>
  void SetTargetText(TargetTextT&& value) {
    m_targetTextHasBeenSet = true;
    m_targetText = std::forward<TargetTextT>(value);
  }
  template <typename TargetTextT = Aws::String>
  Term& WithTargetText(TargetTextT&& value) {
    SetTargetText(std::forward<TargetTextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceText;

  Aws::String m_targetText;
  bool m_sourceTextHasBeenSet = false;
  bool m_targetTextHasBeenSet = false;
};

}  // namespace Model
}  // namespace Translate
}  // namespace Aws
