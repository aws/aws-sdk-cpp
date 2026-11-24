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
 * <p>Controls whether a multi-document packet is split into individual documents
 * before analysis.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/SplitterConfiguration">AWS
 * API Reference</a></p>
 */
class SplitterConfiguration {
 public:
  AWS_TEXTRACT_API SplitterConfiguration() = default;
  AWS_TEXTRACT_API SplitterConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API SplitterConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Set to <code>ENABLED</code> to split multi-document packets, or
   * <code>DISABLED</code> to treat the input as a single document.</p>
   */
  inline State GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(State value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline SplitterConfiguration& WithState(State value) {
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
