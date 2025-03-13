/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/ExpenseField.h>
#include <aws/textract/model/LineItemGroup.h>
#include <aws/textract/model/Block.h>
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
   * <p>The structure holding all the information returned by
   * AnalyzeExpense</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ExpenseDocument">AWS
   * API Reference</a></p>
   */
  class ExpenseDocument
  {
  public:
    AWS_TEXTRACT_API ExpenseDocument() = default;
    AWS_TEXTRACT_API ExpenseDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API ExpenseDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Denotes which invoice or receipt in the document the information is coming
     * from. First document will be 1, the second 2, and so on.</p>
     */
    inline int GetExpenseIndex() const { return m_expenseIndex; }
    inline bool ExpenseIndexHasBeenSet() const { return m_expenseIndexHasBeenSet; }
    inline void SetExpenseIndex(int value) { m_expenseIndexHasBeenSet = true; m_expenseIndex = value; }
    inline ExpenseDocument& WithExpenseIndex(int value) { SetExpenseIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any information found outside of a table by Amazon Textract.</p>
     */
    inline const Aws::Vector<ExpenseField>& GetSummaryFields() const { return m_summaryFields; }
    inline bool SummaryFieldsHasBeenSet() const { return m_summaryFieldsHasBeenSet; }
    template<typename SummaryFieldsT = Aws::Vector<ExpenseField>>
    void SetSummaryFields(SummaryFieldsT&& value) { m_summaryFieldsHasBeenSet = true; m_summaryFields = std::forward<SummaryFieldsT>(value); }
    template<typename SummaryFieldsT = Aws::Vector<ExpenseField>>
    ExpenseDocument& WithSummaryFields(SummaryFieldsT&& value) { SetSummaryFields(std::forward<SummaryFieldsT>(value)); return *this;}
    template<typename SummaryFieldsT = ExpenseField>
    ExpenseDocument& AddSummaryFields(SummaryFieldsT&& value) { m_summaryFieldsHasBeenSet = true; m_summaryFields.emplace_back(std::forward<SummaryFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information detected on each table of a document, seperated into
     * <code>LineItems</code>.</p>
     */
    inline const Aws::Vector<LineItemGroup>& GetLineItemGroups() const { return m_lineItemGroups; }
    inline bool LineItemGroupsHasBeenSet() const { return m_lineItemGroupsHasBeenSet; }
    template<typename LineItemGroupsT = Aws::Vector<LineItemGroup>>
    void SetLineItemGroups(LineItemGroupsT&& value) { m_lineItemGroupsHasBeenSet = true; m_lineItemGroups = std::forward<LineItemGroupsT>(value); }
    template<typename LineItemGroupsT = Aws::Vector<LineItemGroup>>
    ExpenseDocument& WithLineItemGroups(LineItemGroupsT&& value) { SetLineItemGroups(std::forward<LineItemGroupsT>(value)); return *this;}
    template<typename LineItemGroupsT = LineItemGroup>
    ExpenseDocument& AddLineItemGroups(LineItemGroupsT&& value) { m_lineItemGroupsHasBeenSet = true; m_lineItemGroups.emplace_back(std::forward<LineItemGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is a block object, the same as reported when DetectDocumentText is run
     * on a document. It provides word level recognition of text.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const { return m_blocks; }
    inline bool BlocksHasBeenSet() const { return m_blocksHasBeenSet; }
    template<typename BlocksT = Aws::Vector<Block>>
    void SetBlocks(BlocksT&& value) { m_blocksHasBeenSet = true; m_blocks = std::forward<BlocksT>(value); }
    template<typename BlocksT = Aws::Vector<Block>>
    ExpenseDocument& WithBlocks(BlocksT&& value) { SetBlocks(std::forward<BlocksT>(value)); return *this;}
    template<typename BlocksT = Block>
    ExpenseDocument& AddBlocks(BlocksT&& value) { m_blocksHasBeenSet = true; m_blocks.emplace_back(std::forward<BlocksT>(value)); return *this; }
    ///@}
  private:

    int m_expenseIndex{0};
    bool m_expenseIndexHasBeenSet = false;

    Aws::Vector<ExpenseField> m_summaryFields;
    bool m_summaryFieldsHasBeenSet = false;

    Aws::Vector<LineItemGroup> m_lineItemGroups;
    bool m_lineItemGroupsHasBeenSet = false;

    Aws::Vector<Block> m_blocks;
    bool m_blocksHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
