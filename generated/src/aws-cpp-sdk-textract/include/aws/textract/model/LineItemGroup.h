/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/LineItemFields.h>
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
   * <p>A grouping of tables which contain LineItems, with each table identified by
   * the table's <code>LineItemGroupIndex</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/LineItemGroup">AWS
   * API Reference</a></p>
   */
  class LineItemGroup
  {
  public:
    AWS_TEXTRACT_API LineItemGroup() = default;
    AWS_TEXTRACT_API LineItemGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LineItemGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number used to identify a specific table in a document. The first table
     * encountered will have a LineItemGroupIndex of 1, the second 2, etc.</p>
     */
    inline int GetLineItemGroupIndex() const { return m_lineItemGroupIndex; }
    inline bool LineItemGroupIndexHasBeenSet() const { return m_lineItemGroupIndexHasBeenSet; }
    inline void SetLineItemGroupIndex(int value) { m_lineItemGroupIndexHasBeenSet = true; m_lineItemGroupIndex = value; }
    inline LineItemGroup& WithLineItemGroupIndex(int value) { SetLineItemGroupIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The breakdown of information on a particular line of a table. </p>
     */
    inline const Aws::Vector<LineItemFields>& GetLineItems() const { return m_lineItems; }
    inline bool LineItemsHasBeenSet() const { return m_lineItemsHasBeenSet; }
    template<typename LineItemsT = Aws::Vector<LineItemFields>>
    void SetLineItems(LineItemsT&& value) { m_lineItemsHasBeenSet = true; m_lineItems = std::forward<LineItemsT>(value); }
    template<typename LineItemsT = Aws::Vector<LineItemFields>>
    LineItemGroup& WithLineItems(LineItemsT&& value) { SetLineItems(std::forward<LineItemsT>(value)); return *this;}
    template<typename LineItemsT = LineItemFields>
    LineItemGroup& AddLineItems(LineItemsT&& value) { m_lineItemsHasBeenSet = true; m_lineItems.emplace_back(std::forward<LineItemsT>(value)); return *this; }
    ///@}
  private:

    int m_lineItemGroupIndex{0};
    bool m_lineItemGroupIndexHasBeenSet = false;

    Aws::Vector<LineItemFields> m_lineItems;
    bool m_lineItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
