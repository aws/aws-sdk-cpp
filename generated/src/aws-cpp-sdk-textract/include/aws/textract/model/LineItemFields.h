/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/ExpenseField.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Textract
{
namespace Model
{

  /**
   * <p>A structure that holds information about the different lines found in a
   * document's tables.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/LineItemFields">AWS
   * API Reference</a></p>
   */
  class LineItemFields
  {
  public:
    AWS_TEXTRACT_API LineItemFields();
    AWS_TEXTRACT_API LineItemFields(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LineItemFields& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ExpenseFields used to show information from detected lines on a table.</p>
     */
    inline const Aws::Vector<ExpenseField>& GetLineItemExpenseFields() const{ return m_lineItemExpenseFields; }

    /**
     * <p>ExpenseFields used to show information from detected lines on a table.</p>
     */
    inline bool LineItemExpenseFieldsHasBeenSet() const { return m_lineItemExpenseFieldsHasBeenSet; }

    /**
     * <p>ExpenseFields used to show information from detected lines on a table.</p>
     */
    inline void SetLineItemExpenseFields(const Aws::Vector<ExpenseField>& value) { m_lineItemExpenseFieldsHasBeenSet = true; m_lineItemExpenseFields = value; }

    /**
     * <p>ExpenseFields used to show information from detected lines on a table.</p>
     */
    inline void SetLineItemExpenseFields(Aws::Vector<ExpenseField>&& value) { m_lineItemExpenseFieldsHasBeenSet = true; m_lineItemExpenseFields = std::move(value); }

    /**
     * <p>ExpenseFields used to show information from detected lines on a table.</p>
     */
    inline LineItemFields& WithLineItemExpenseFields(const Aws::Vector<ExpenseField>& value) { SetLineItemExpenseFields(value); return *this;}

    /**
     * <p>ExpenseFields used to show information from detected lines on a table.</p>
     */
    inline LineItemFields& WithLineItemExpenseFields(Aws::Vector<ExpenseField>&& value) { SetLineItemExpenseFields(std::move(value)); return *this;}

    /**
     * <p>ExpenseFields used to show information from detected lines on a table.</p>
     */
    inline LineItemFields& AddLineItemExpenseFields(const ExpenseField& value) { m_lineItemExpenseFieldsHasBeenSet = true; m_lineItemExpenseFields.push_back(value); return *this; }

    /**
     * <p>ExpenseFields used to show information from detected lines on a table.</p>
     */
    inline LineItemFields& AddLineItemExpenseFields(ExpenseField&& value) { m_lineItemExpenseFieldsHasBeenSet = true; m_lineItemExpenseFields.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ExpenseField> m_lineItemExpenseFields;
    bool m_lineItemExpenseFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
