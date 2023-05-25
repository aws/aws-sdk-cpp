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
    AWS_TEXTRACT_API LineItemGroup();
    AWS_TEXTRACT_API LineItemGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LineItemGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number used to identify a specific table in a document. The first table
     * encountered will have a LineItemGroupIndex of 1, the second 2, etc.</p>
     */
    inline int GetLineItemGroupIndex() const{ return m_lineItemGroupIndex; }

    /**
     * <p>The number used to identify a specific table in a document. The first table
     * encountered will have a LineItemGroupIndex of 1, the second 2, etc.</p>
     */
    inline bool LineItemGroupIndexHasBeenSet() const { return m_lineItemGroupIndexHasBeenSet; }

    /**
     * <p>The number used to identify a specific table in a document. The first table
     * encountered will have a LineItemGroupIndex of 1, the second 2, etc.</p>
     */
    inline void SetLineItemGroupIndex(int value) { m_lineItemGroupIndexHasBeenSet = true; m_lineItemGroupIndex = value; }

    /**
     * <p>The number used to identify a specific table in a document. The first table
     * encountered will have a LineItemGroupIndex of 1, the second 2, etc.</p>
     */
    inline LineItemGroup& WithLineItemGroupIndex(int value) { SetLineItemGroupIndex(value); return *this;}


    /**
     * <p>The breakdown of information on a particular line of a table. </p>
     */
    inline const Aws::Vector<LineItemFields>& GetLineItems() const{ return m_lineItems; }

    /**
     * <p>The breakdown of information on a particular line of a table. </p>
     */
    inline bool LineItemsHasBeenSet() const { return m_lineItemsHasBeenSet; }

    /**
     * <p>The breakdown of information on a particular line of a table. </p>
     */
    inline void SetLineItems(const Aws::Vector<LineItemFields>& value) { m_lineItemsHasBeenSet = true; m_lineItems = value; }

    /**
     * <p>The breakdown of information on a particular line of a table. </p>
     */
    inline void SetLineItems(Aws::Vector<LineItemFields>&& value) { m_lineItemsHasBeenSet = true; m_lineItems = std::move(value); }

    /**
     * <p>The breakdown of information on a particular line of a table. </p>
     */
    inline LineItemGroup& WithLineItems(const Aws::Vector<LineItemFields>& value) { SetLineItems(value); return *this;}

    /**
     * <p>The breakdown of information on a particular line of a table. </p>
     */
    inline LineItemGroup& WithLineItems(Aws::Vector<LineItemFields>&& value) { SetLineItems(std::move(value)); return *this;}

    /**
     * <p>The breakdown of information on a particular line of a table. </p>
     */
    inline LineItemGroup& AddLineItems(const LineItemFields& value) { m_lineItemsHasBeenSet = true; m_lineItems.push_back(value); return *this; }

    /**
     * <p>The breakdown of information on a particular line of a table. </p>
     */
    inline LineItemGroup& AddLineItems(LineItemFields&& value) { m_lineItemsHasBeenSet = true; m_lineItems.push_back(std::move(value)); return *this; }

  private:

    int m_lineItemGroupIndex;
    bool m_lineItemGroupIndexHasBeenSet = false;

    Aws::Vector<LineItemFields> m_lineItems;
    bool m_lineItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
