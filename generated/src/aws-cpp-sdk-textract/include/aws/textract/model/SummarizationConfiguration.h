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
 * <p>Controls whether a generative summary of the document is
 * produced.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/SummarizationConfiguration">AWS
 * API Reference</a></p>
 */
class SummarizationConfiguration {
 public:
  AWS_TEXTRACT_API SummarizationConfiguration() = default;
  AWS_TEXTRACT_API SummarizationConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API SummarizationConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Set to <code>ENABLED</code> to produce a summary, or <code>DISABLED</code> to
   * omit it.</p>
   */
  inline State GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(State value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline SummarizationConfiguration& WithState(State value) {
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
