/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/ExpenseField.h>

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
 * <p>A structure that holds information about the different lines found in a
 * document's tables.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/LineItemFields">AWS
 * API Reference</a></p>
 */
class LineItemFields {
 public:
  AWS_TEXTRACT_API LineItemFields() = default;
  AWS_TEXTRACT_API LineItemFields(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API LineItemFields& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>ExpenseFields used to show information from detected lines on a table.</p>
   */
  inline const Aws::Vector<ExpenseField>& GetLineItemExpenseFields() const { return m_lineItemExpenseFields; }
  inline bool LineItemExpenseFieldsHasBeenSet() const { return m_lineItemExpenseFieldsHasBeenSet; }
  template <typename LineItemExpenseFieldsT = Aws::Vector<ExpenseField>>
  void SetLineItemExpenseFields(LineItemExpenseFieldsT&& value) {
    m_lineItemExpenseFieldsHasBeenSet = true;
    m_lineItemExpenseFields = std::forward<LineItemExpenseFieldsT>(value);
  }
  template <typename LineItemExpenseFieldsT = Aws::Vector<ExpenseField>>
  LineItemFields& WithLineItemExpenseFields(LineItemExpenseFieldsT&& value) {
    SetLineItemExpenseFields(std::forward<LineItemExpenseFieldsT>(value));
    return *this;
  }
  template <typename LineItemExpenseFieldsT = ExpenseField>
  LineItemFields& AddLineItemExpenseFields(LineItemExpenseFieldsT&& value) {
    m_lineItemExpenseFieldsHasBeenSet = true;
    m_lineItemExpenseFields.emplace_back(std::forward<LineItemExpenseFieldsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ExpenseField> m_lineItemExpenseFields;
  bool m_lineItemExpenseFieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
