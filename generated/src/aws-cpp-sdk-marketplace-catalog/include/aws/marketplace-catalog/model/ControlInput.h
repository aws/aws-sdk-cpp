/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>A control to run as part of an assessment, and the input to run it
 * with.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ControlInput">AWS
 * API Reference</a></p>
 */
class ControlInput {
 public:
  AWS_MARKETPLACECATALOG_API ControlInput() = default;
  AWS_MARKETPLACECATALOG_API ControlInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ControlInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the control to run.</p>
   */
  inline const Aws::String& GetControlId() const { return m_controlId; }
  inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }
  template <typename ControlIdT = Aws::String>
  void SetControlId(ControlIdT&& value) {
    m_controlIdHasBeenSet = true;
    m_controlId = std::forward<ControlIdT>(value);
  }
  template <typename ControlIdT = Aws::String>
  ControlInput& WithControlId(ControlIdT&& value) {
    SetControlId(std::forward<ControlIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional. The input for the control, as a JSON document. The fields that a
   * control accepts depend on the control.</p>
   */
  inline Aws::Utils::DocumentView GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = Aws::Utils::Document>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = Aws::Utils::Document>
  ControlInput& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_controlId;

  Aws::Utils::Document m_input;
  bool m_controlIdHasBeenSet = false;
  bool m_inputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
