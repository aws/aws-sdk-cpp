/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/State.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Textract {
namespace Model {

/**
 * <p>Controls whether generative captions are produced for figures detected in the
 * document.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/FigureCaptionConfiguration">AWS
 * API Reference</a></p>
 */
class FigureCaptionConfiguration {
 public:
  AWS_TEXTRACT_API FigureCaptionConfiguration() = default;
  AWS_TEXTRACT_API FigureCaptionConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API FigureCaptionConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Set to <code>ENABLED</code> to produce figure captions, or
   * <code>DISABLED</code> to omit them.</p>
   */
  inline State GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(State value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline FigureCaptionConfiguration& WithState(State value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  State m_state{State::NOT_SET};
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
