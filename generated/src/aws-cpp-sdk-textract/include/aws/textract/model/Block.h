/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/BlockType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/TextType.h>
#include <aws/textract/model/Geometry.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/SelectionStatus.h>
#include <aws/textract/model/Query.h>
#include <aws/textract/model/Relationship.h>
#include <aws/textract/model/EntityType.h>
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
   * <p>A <code>Block</code> represents items that are recognized in a document
   * within a group of pixels close to each other. The information returned in a
   * <code>Block</code> object depends on the type of operation. In text detection
   * for documents (for example <a>DetectDocumentText</a>), you get information about
   * the detected words and lines of text. In text analysis (for example
   * <a>AnalyzeDocument</a>), you can also get information about the fields, tables,
   * and selection elements that are detected in the document.</p> <p>An array of
   * <code>Block</code> objects is returned by both synchronous and asynchronous
   * operations. In synchronous operations, such as <a>DetectDocumentText</a>, the
   * array of <code>Block</code> objects is the entire set of results. In
   * asynchronous operations, such as <a>GetDocumentAnalysis</a>, the array is
   * returned over one or more responses.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works.html">How
   * Amazon Textract Works</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/Block">AWS API
   * Reference</a></p>
   */
  class Block
  {
  public:
    AWS_TEXTRACT_API Block();
    AWS_TEXTRACT_API Block(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Block& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of text item that's recognized. In operations for text detection,
     * the following types are returned:</p> <ul> <li> <p> <i>PAGE</i> - Contains a
     * list of the LINE <code>Block</code> objects that are detected on a document
     * page.</p> </li> <li> <p> <i>WORD</i> - A word detected on a document page. A
     * word is one or more ISO basic Latin script characters that aren't separated by
     * spaces.</p> </li> <li> <p> <i>LINE</i> - A string of tab-delimited, contiguous
     * words that are detected on a document page.</p> </li> </ul> <p>In text analysis
     * operations, the following types are returned:</p> <ul> <li> <p> <i>PAGE</i> -
     * Contains a list of child <code>Block</code> objects that are detected on a
     * document page.</p> </li> <li> <p> <i>KEY_VALUE_SET</i> - Stores the KEY and
     * VALUE <code>Block</code> objects for linked text that's detected on a document
     * page. Use the <code>EntityType</code> field to determine if a KEY_VALUE_SET
     * object is a KEY <code>Block</code> object or a VALUE <code>Block</code> object.
     * </p> </li> <li> <p> <i>WORD</i> - A word that's detected on a document page. A
     * word is one or more ISO basic Latin script characters that aren't separated by
     * spaces.</p> </li> <li> <p> <i>LINE</i> - A string of tab-delimited, contiguous
     * words that are detected on a document page.</p> </li> <li> <p> <i>TABLE</i> - A
     * table that's detected on a document page. A table is grid-based information with
     * two or more rows or columns, with a cell span of one row and one column each.
     * </p> </li> <li> <p> <i>CELL</i> - A cell within a detected table. The cell is
     * the parent of the block that contains the text in the cell.</p> </li> <li> <p>
     * <i>SELECTION_ELEMENT</i> - A selection element such as an option button (radio
     * button) or a check box that's detected on a document page. Use the value of
     * <code>SelectionStatus</code> to determine the status of the selection
     * element.</p> </li> <li> <p> <i>SIGNATURE</i> - The location and confidene score
     * of a signature detected on a document page. Can be returned as part of a
     * Key-Value pair or a detected cell.</p> </li> <li> <p> <i>QUERY</i> - A question
     * asked during the call of AnalyzeDocument. Contains an alias and an ID that
     * attaches it to its answer.</p> </li> <li> <p> <i>QUERY_RESULT</i> - A response
     * to a question asked during the call of analyze document. Comes with an alias and
     * ID for ease of locating in a response. Also contains location and confidence
     * score.</p> </li> </ul>
     */
    inline const BlockType& GetBlockType() const{ return m_blockType; }

    /**
     * <p>The type of text item that's recognized. In operations for text detection,
     * the following types are returned:</p> <ul> <li> <p> <i>PAGE</i> - Contains a
     * list of the LINE <code>Block</code> objects that are detected on a document
     * page.</p> </li> <li> <p> <i>WORD</i> - A word detected on a document page. A
     * word is one or more ISO basic Latin script characters that aren't separated by
     * spaces.</p> </li> <li> <p> <i>LINE</i> - A string of tab-delimited, contiguous
     * words that are detected on a document page.</p> </li> </ul> <p>In text analysis
     * operations, the following types are returned:</p> <ul> <li> <p> <i>PAGE</i> -
     * Contains a list of child <code>Block</code> objects that are detected on a
     * document page.</p> </li> <li> <p> <i>KEY_VALUE_SET</i> - Stores the KEY and
     * VALUE <code>Block</code> objects for linked text that's detected on a document
     * page. Use the <code>EntityType</code> field to determine if a KEY_VALUE_SET
     * object is a KEY <code>Block</code> object or a VALUE <code>Block</code> object.
     * </p> </li> <li> <p> <i>WORD</i> - A word that's detected on a document page. A
     * word is one or more ISO basic Latin script characters that aren't separated by
     * spaces.</p> </li> <li> <p> <i>LINE</i> - A string of tab-delimited, contiguous
     * words that are detected on a document page.</p> </li> <li> <p> <i>TABLE</i> - A
     * table that's detected on a document page. A table is grid-based information with
     * two or more rows or columns, with a cell span of one row and one column each.
     * </p> </li> <li> <p> <i>CELL</i> - A cell within a detected table. The cell is
     * the parent of the block that contains the text in the cell.</p> </li> <li> <p>
     * <i>SELECTION_ELEMENT</i> - A selection element such as an option button (radio
     * button) or a check box that's detected on a document page. Use the value of
     * <code>SelectionStatus</code> to determine the status of the selection
     * element.</p> </li> <li> <p> <i>SIGNATURE</i> - The location and confidene score
     * of a signature detected on a document page. Can be returned as part of a
     * Key-Value pair or a detected cell.</p> </li> <li> <p> <i>QUERY</i> - A question
     * asked during the call of AnalyzeDocument. Contains an alias and an ID that
     * attaches it to its answer.</p> </li> <li> <p> <i>QUERY_RESULT</i> - A response
     * to a question asked during the call of analyze document. Comes with an alias and
     * ID for ease of locating in a response. Also contains location and confidence
     * score.</p> </li> </ul>
     */
    inline bool BlockTypeHasBeenSet() const { return m_blockTypeHasBeenSet; }

    /**
     * <p>The type of text item that's recognized. In operations for text detection,
     * the following types are returned:</p> <ul> <li> <p> <i>PAGE</i> - Contains a
     * list of the LINE <code>Block</code> objects that are detected on a document
     * page.</p> </li> <li> <p> <i>WORD</i> - A word detected on a document page. A
     * word is one or more ISO basic Latin script characters that aren't separated by
     * spaces.</p> </li> <li> <p> <i>LINE</i> - A string of tab-delimited, contiguous
     * words that are detected on a document page.</p> </li> </ul> <p>In text analysis
     * operations, the following types are returned:</p> <ul> <li> <p> <i>PAGE</i> -
     * Contains a list of child <code>Block</code> objects that are detected on a
     * document page.</p> </li> <li> <p> <i>KEY_VALUE_SET</i> - Stores the KEY and
     * VALUE <code>Block</code> objects for linked text that's detected on a document
     * page. Use the <code>EntityType</code> field to determine if a KEY_VALUE_SET
     * object is a KEY <code>Block</code> object or a VALUE <code>Block</code> object.
     * </p> </li> <li> <p> <i>WORD</i> - A word that's detected on a document page. A
     * word is one or more ISO basic Latin script characters that aren't separated by
     * spaces.</p> </li> <li> <p> <i>LINE</i> - A string of tab-delimited, contiguous
     * words that are detected on a document page.</p> </li> <li> <p> <i>TABLE</i> - A
     * table that's detected on a document page. A table is grid-based information with
     * two or more rows or columns, with a cell span of one row and one column each.
     * </p> </li> <li> <p> <i>CELL</i> - A cell within a detected table. The cell is
     * the parent of the block that contains the text in the cell.</p> </li> <li> <p>
     * <i>SELECTION_ELEMENT</i> - A selection element such as an option button (radio
     * button) or a check box that's detected on a document page. Use the value of
     * <code>SelectionStatus</code> to determine the status of the selection
     * element.</p> </li> <li> <p> <i>SIGNATURE</i> - The location and confidene score
     * of a signature detected on a document page. Can be returned as part of a
     * Key-Value pair or a detected cell.</p> </li> <li> <p> <i>QUERY</i> - A question
     * asked during the call of AnalyzeDocument. Contains an alias and an ID that
     * attaches it to its answer.</p> </li> <li> <p> <i>QUERY_RESULT</i> - A response
     * to a question asked during the call of analyze document. Comes with an alias and
     * ID for ease of locating in a response. Also contains location and confidence
     * score.</p> </li> </ul>
     */
    inline void SetBlockType(const BlockType& value) { m_blockTypeHasBeenSet = true; m_blockType = value; }

    /**
     * <p>The type of text item that's recognized. In operations for text detection,
     * the following types are returned:</p> <ul> <li> <p> <i>PAGE</i> - Contains a
     * list of the LINE <code>Block</code> objects that are detected on a document
     * page.</p> </li> <li> <p> <i>WORD</i> - A word detected on a document page. A
     * word is one or more ISO basic Latin script characters that aren't separated by
     * spaces.</p> </li> <li> <p> <i>LINE</i> - A string of tab-delimited, contiguous
     * words that are detected on a document page.</p> </li> </ul> <p>In text analysis
     * operations, the following types are returned:</p> <ul> <li> <p> <i>PAGE</i> -
     * Contains a list of child <code>Block</code> objects that are detected on a
     * document page.</p> </li> <li> <p> <i>KEY_VALUE_SET</i> - Stores the KEY and
     * VALUE <code>Block</code> objects for linked text that's detected on a document
     * page. Use the <code>EntityType</code> field to determine if a KEY_VALUE_SET
     * object is a KEY <code>Block</code> object or a VALUE <code>Block</code> object.
     * </p> </li> <li> <p> <i>WORD</i> - A word that's detected on a document page. A
     * word is one or more ISO basic Latin script characters that aren't separated by
     * spaces.</p> </li> <li> <p> <i>LINE</i> - A string of tab-delimited, contiguous
     * words that are detected on a document page.</p> </li> <li> <p> <i>TABLE</i> - A
     * table that's detected on a document page. A table is grid-based information with
     * two or more rows or columns, with a cell span of one row and one column each.
     * </p> </li> <li> <p> <i>CELL</i> - A cell within a detected table. The cell is
     * the parent of the block that contains the text in the cell.</p> </li> <li> <p>
     * <i>SELECTION_ELEMENT</i> - A selection element such as an option button (radio
     * button) or a check box that's detected on a document page. Use the value of
     * <code>SelectionStatus</code> to determine the status of the selection
     * element.</p> </li> <li> <p> <i>SIGNATURE</i> - The location and confidene score
     * of a signature detected on a document page. Can be returned as part of a
     * Key-Value pair or a detected cell.</p> </li> <li> <p> <i>QUERY</i> - A question
     * asked during the call of AnalyzeDocument. Contains an alias and an ID that
     * attaches it to its answer.</p> </li> <li> <p> <i>QUERY_RESULT</i> - A response
     * to a question asked during the call of analyze document. Comes with an alias and
     * ID for ease of locating in a response. Also contains location and confidence
     * score.</p> </li> </ul>
     */
    inline void SetBlockType(BlockType&& value) { m_blockTypeHasBeenSet = true; m_blockType = std::move(value); }

    /**
     * <p>The type of text item that's recognized. In operations for text detection,
     * the following types are returned:</p> <ul> <li> <p> <i>PAGE</i> - Contains a
     * list of the LINE <code>Block</code> objects that are detected on a document
     * page.</p> </li> <li> <p> <i>WORD</i> - A word detected on a document page. A
     * word is one or more ISO basic Latin script characters that aren't separated by
     * spaces.</p> </li> <li> <p> <i>LINE</i> - A string of tab-delimited, contiguous
     * words that are detected on a document page.</p> </li> </ul> <p>In text analysis
     * operations, the following types are returned:</p> <ul> <li> <p> <i>PAGE</i> -
     * Contains a list of child <code>Block</code> objects that are detected on a
     * document page.</p> </li> <li> <p> <i>KEY_VALUE_SET</i> - Stores the KEY and
     * VALUE <code>Block</code> objects for linked text that's detected on a document
     * page. Use the <code>EntityType</code> field to determine if a KEY_VALUE_SET
     * object is a KEY <code>Block</code> object or a VALUE <code>Block</code> object.
     * </p> </li> <li> <p> <i>WORD</i> - A word that's detected on a document page. A
     * word is one or more ISO basic Latin script characters that aren't separated by
     * spaces.</p> </li> <li> <p> <i>LINE</i> - A string of tab-delimited, contiguous
     * words that are detected on a document page.</p> </li> <li> <p> <i>TABLE</i> - A
     * table that's detected on a document page. A table is grid-based information with
     * two or more rows or columns, with a cell span of one row and one column each.
     * </p> </li> <li> <p> <i>CELL</i> - A cell within a detected table. The cell is
     * the parent of the block that contains the text in the cell.</p> </li> <li> <p>
     * <i>SELECTION_ELEMENT</i> - A selection element such as an option button (radio
     * button) or a check box that's detected on a document page. Use the value of
     * <code>SelectionStatus</code> to determine the status of the selection
     * element.</p> </li> <li> <p> <i>SIGNATURE</i> - The location and confidene score
     * of a signature detected on a document page. Can be returned as part of a
     * Key-Value pair or a detected cell.</p> </li> <li> <p> <i>QUERY</i> - A question
     * asked during the call of AnalyzeDocument. Contains an alias and an ID that
     * attaches it to its answer.</p> </li> <li> <p> <i>QUERY_RESULT</i> - A response
     * to a question asked during the call of analyze document. Comes with an alias and
     * ID for ease of locating in a response. Also contains location and confidence
     * score.</p> </li> </ul>
     */
    inline Block& WithBlockType(const BlockType& value) { SetBlockType(value); return *this;}

    /**
     * <p>The type of text item that's recognized. In operations for text detection,
     * the following types are returned:</p> <ul> <li> <p> <i>PAGE</i> - Contains a
     * list of the LINE <code>Block</code> objects that are detected on a document
     * page.</p> </li> <li> <p> <i>WORD</i> - A word detected on a document page. A
     * word is one or more ISO basic Latin script characters that aren't separated by
     * spaces.</p> </li> <li> <p> <i>LINE</i> - A string of tab-delimited, contiguous
     * words that are detected on a document page.</p> </li> </ul> <p>In text analysis
     * operations, the following types are returned:</p> <ul> <li> <p> <i>PAGE</i> -
     * Contains a list of child <code>Block</code> objects that are detected on a
     * document page.</p> </li> <li> <p> <i>KEY_VALUE_SET</i> - Stores the KEY and
     * VALUE <code>Block</code> objects for linked text that's detected on a document
     * page. Use the <code>EntityType</code> field to determine if a KEY_VALUE_SET
     * object is a KEY <code>Block</code> object or a VALUE <code>Block</code> object.
     * </p> </li> <li> <p> <i>WORD</i> - A word that's detected on a document page. A
     * word is one or more ISO basic Latin script characters that aren't separated by
     * spaces.</p> </li> <li> <p> <i>LINE</i> - A string of tab-delimited, contiguous
     * words that are detected on a document page.</p> </li> <li> <p> <i>TABLE</i> - A
     * table that's detected on a document page. A table is grid-based information with
     * two or more rows or columns, with a cell span of one row and one column each.
     * </p> </li> <li> <p> <i>CELL</i> - A cell within a detected table. The cell is
     * the parent of the block that contains the text in the cell.</p> </li> <li> <p>
     * <i>SELECTION_ELEMENT</i> - A selection element such as an option button (radio
     * button) or a check box that's detected on a document page. Use the value of
     * <code>SelectionStatus</code> to determine the status of the selection
     * element.</p> </li> <li> <p> <i>SIGNATURE</i> - The location and confidene score
     * of a signature detected on a document page. Can be returned as part of a
     * Key-Value pair or a detected cell.</p> </li> <li> <p> <i>QUERY</i> - A question
     * asked during the call of AnalyzeDocument. Contains an alias and an ID that
     * attaches it to its answer.</p> </li> <li> <p> <i>QUERY_RESULT</i> - A response
     * to a question asked during the call of analyze document. Comes with an alias and
     * ID for ease of locating in a response. Also contains location and confidence
     * score.</p> </li> </ul>
     */
    inline Block& WithBlockType(BlockType&& value) { SetBlockType(std::move(value)); return *this;}


    /**
     * <p>The confidence score that Amazon Textract has in the accuracy of the
     * recognized text and the accuracy of the geometry points around the recognized
     * text.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence score that Amazon Textract has in the accuracy of the
     * recognized text and the accuracy of the geometry points around the recognized
     * text.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence score that Amazon Textract has in the accuracy of the
     * recognized text and the accuracy of the geometry points around the recognized
     * text.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence score that Amazon Textract has in the accuracy of the
     * recognized text and the accuracy of the geometry points around the recognized
     * text.</p>
     */
    inline Block& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>The word or line of text that's recognized by Amazon Textract. </p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The word or line of text that's recognized by Amazon Textract. </p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The word or line of text that's recognized by Amazon Textract. </p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The word or line of text that's recognized by Amazon Textract. </p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The word or line of text that's recognized by Amazon Textract. </p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The word or line of text that's recognized by Amazon Textract. </p>
     */
    inline Block& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The word or line of text that's recognized by Amazon Textract. </p>
     */
    inline Block& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The word or line of text that's recognized by Amazon Textract. </p>
     */
    inline Block& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The kind of text that Amazon Textract has detected. Can check for handwritten
     * text and printed text.</p>
     */
    inline const TextType& GetTextType() const{ return m_textType; }

    /**
     * <p>The kind of text that Amazon Textract has detected. Can check for handwritten
     * text and printed text.</p>
     */
    inline bool TextTypeHasBeenSet() const { return m_textTypeHasBeenSet; }

    /**
     * <p>The kind of text that Amazon Textract has detected. Can check for handwritten
     * text and printed text.</p>
     */
    inline void SetTextType(const TextType& value) { m_textTypeHasBeenSet = true; m_textType = value; }

    /**
     * <p>The kind of text that Amazon Textract has detected. Can check for handwritten
     * text and printed text.</p>
     */
    inline void SetTextType(TextType&& value) { m_textTypeHasBeenSet = true; m_textType = std::move(value); }

    /**
     * <p>The kind of text that Amazon Textract has detected. Can check for handwritten
     * text and printed text.</p>
     */
    inline Block& WithTextType(const TextType& value) { SetTextType(value); return *this;}

    /**
     * <p>The kind of text that Amazon Textract has detected. Can check for handwritten
     * text and printed text.</p>
     */
    inline Block& WithTextType(TextType&& value) { SetTextType(std::move(value)); return *this;}


    /**
     * <p>The row in which a table cell is located. The first row position is 1.
     * <code>RowIndex</code> isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline int GetRowIndex() const{ return m_rowIndex; }

    /**
     * <p>The row in which a table cell is located. The first row position is 1.
     * <code>RowIndex</code> isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline bool RowIndexHasBeenSet() const { return m_rowIndexHasBeenSet; }

    /**
     * <p>The row in which a table cell is located. The first row position is 1.
     * <code>RowIndex</code> isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline void SetRowIndex(int value) { m_rowIndexHasBeenSet = true; m_rowIndex = value; }

    /**
     * <p>The row in which a table cell is located. The first row position is 1.
     * <code>RowIndex</code> isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline Block& WithRowIndex(int value) { SetRowIndex(value); return *this;}


    /**
     * <p>The column in which a table cell appears. The first column position is 1.
     * <code>ColumnIndex</code> isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline int GetColumnIndex() const{ return m_columnIndex; }

    /**
     * <p>The column in which a table cell appears. The first column position is 1.
     * <code>ColumnIndex</code> isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline bool ColumnIndexHasBeenSet() const { return m_columnIndexHasBeenSet; }

    /**
     * <p>The column in which a table cell appears. The first column position is 1.
     * <code>ColumnIndex</code> isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline void SetColumnIndex(int value) { m_columnIndexHasBeenSet = true; m_columnIndex = value; }

    /**
     * <p>The column in which a table cell appears. The first column position is 1.
     * <code>ColumnIndex</code> isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline Block& WithColumnIndex(int value) { SetColumnIndex(value); return *this;}


    /**
     * <p>The number of rows that a table cell spans. Currently this value is always 1,
     * even if the number of rows spanned is greater than 1. <code>RowSpan</code> isn't
     * returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline int GetRowSpan() const{ return m_rowSpan; }

    /**
     * <p>The number of rows that a table cell spans. Currently this value is always 1,
     * even if the number of rows spanned is greater than 1. <code>RowSpan</code> isn't
     * returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline bool RowSpanHasBeenSet() const { return m_rowSpanHasBeenSet; }

    /**
     * <p>The number of rows that a table cell spans. Currently this value is always 1,
     * even if the number of rows spanned is greater than 1. <code>RowSpan</code> isn't
     * returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline void SetRowSpan(int value) { m_rowSpanHasBeenSet = true; m_rowSpan = value; }

    /**
     * <p>The number of rows that a table cell spans. Currently this value is always 1,
     * even if the number of rows spanned is greater than 1. <code>RowSpan</code> isn't
     * returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline Block& WithRowSpan(int value) { SetRowSpan(value); return *this;}


    /**
     * <p>The number of columns that a table cell spans. Currently this value is always
     * 1, even if the number of columns spanned is greater than 1.
     * <code>ColumnSpan</code> isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>. </p>
     */
    inline int GetColumnSpan() const{ return m_columnSpan; }

    /**
     * <p>The number of columns that a table cell spans. Currently this value is always
     * 1, even if the number of columns spanned is greater than 1.
     * <code>ColumnSpan</code> isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>. </p>
     */
    inline bool ColumnSpanHasBeenSet() const { return m_columnSpanHasBeenSet; }

    /**
     * <p>The number of columns that a table cell spans. Currently this value is always
     * 1, even if the number of columns spanned is greater than 1.
     * <code>ColumnSpan</code> isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>. </p>
     */
    inline void SetColumnSpan(int value) { m_columnSpanHasBeenSet = true; m_columnSpan = value; }

    /**
     * <p>The number of columns that a table cell spans. Currently this value is always
     * 1, even if the number of columns spanned is greater than 1.
     * <code>ColumnSpan</code> isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>. </p>
     */
    inline Block& WithColumnSpan(int value) { SetColumnSpan(value); return *this;}


    /**
     * <p>The location of the recognized text on the image. It includes an
     * axis-aligned, coarse bounding box that surrounds the text, and a finer-grain
     * polygon for more accurate spatial information. </p>
     */
    inline const Geometry& GetGeometry() const{ return m_geometry; }

    /**
     * <p>The location of the recognized text on the image. It includes an
     * axis-aligned, coarse bounding box that surrounds the text, and a finer-grain
     * polygon for more accurate spatial information. </p>
     */
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }

    /**
     * <p>The location of the recognized text on the image. It includes an
     * axis-aligned, coarse bounding box that surrounds the text, and a finer-grain
     * polygon for more accurate spatial information. </p>
     */
    inline void SetGeometry(const Geometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }

    /**
     * <p>The location of the recognized text on the image. It includes an
     * axis-aligned, coarse bounding box that surrounds the text, and a finer-grain
     * polygon for more accurate spatial information. </p>
     */
    inline void SetGeometry(Geometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }

    /**
     * <p>The location of the recognized text on the image. It includes an
     * axis-aligned, coarse bounding box that surrounds the text, and a finer-grain
     * polygon for more accurate spatial information. </p>
     */
    inline Block& WithGeometry(const Geometry& value) { SetGeometry(value); return *this;}

    /**
     * <p>The location of the recognized text on the image. It includes an
     * axis-aligned, coarse bounding box that surrounds the text, and a finer-grain
     * polygon for more accurate spatial information. </p>
     */
    inline Block& WithGeometry(Geometry&& value) { SetGeometry(std::move(value)); return *this;}


    /**
     * <p>The identifier for the recognized text. The identifier is only unique for a
     * single operation. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the recognized text. The identifier is only unique for a
     * single operation. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the recognized text. The identifier is only unique for a
     * single operation. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the recognized text. The identifier is only unique for a
     * single operation. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the recognized text. The identifier is only unique for a
     * single operation. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the recognized text. The identifier is only unique for a
     * single operation. </p>
     */
    inline Block& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the recognized text. The identifier is only unique for a
     * single operation. </p>
     */
    inline Block& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the recognized text. The identifier is only unique for a
     * single operation. </p>
     */
    inline Block& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A list of child blocks of the current block. For example, a LINE object has
     * child blocks for each WORD block that's part of the line of text. There aren't
     * Relationship objects in the list for relationships that don't exist, such as
     * when the current block has no child blocks. The list size can be the
     * following:</p> <ul> <li> <p>0 - The block has no child blocks.</p> </li> <li>
     * <p>1 - The block has child blocks.</p> </li> </ul>
     */
    inline const Aws::Vector<Relationship>& GetRelationships() const{ return m_relationships; }

    /**
     * <p>A list of child blocks of the current block. For example, a LINE object has
     * child blocks for each WORD block that's part of the line of text. There aren't
     * Relationship objects in the list for relationships that don't exist, such as
     * when the current block has no child blocks. The list size can be the
     * following:</p> <ul> <li> <p>0 - The block has no child blocks.</p> </li> <li>
     * <p>1 - The block has child blocks.</p> </li> </ul>
     */
    inline bool RelationshipsHasBeenSet() const { return m_relationshipsHasBeenSet; }

    /**
     * <p>A list of child blocks of the current block. For example, a LINE object has
     * child blocks for each WORD block that's part of the line of text. There aren't
     * Relationship objects in the list for relationships that don't exist, such as
     * when the current block has no child blocks. The list size can be the
     * following:</p> <ul> <li> <p>0 - The block has no child blocks.</p> </li> <li>
     * <p>1 - The block has child blocks.</p> </li> </ul>
     */
    inline void SetRelationships(const Aws::Vector<Relationship>& value) { m_relationshipsHasBeenSet = true; m_relationships = value; }

    /**
     * <p>A list of child blocks of the current block. For example, a LINE object has
     * child blocks for each WORD block that's part of the line of text. There aren't
     * Relationship objects in the list for relationships that don't exist, such as
     * when the current block has no child blocks. The list size can be the
     * following:</p> <ul> <li> <p>0 - The block has no child blocks.</p> </li> <li>
     * <p>1 - The block has child blocks.</p> </li> </ul>
     */
    inline void SetRelationships(Aws::Vector<Relationship>&& value) { m_relationshipsHasBeenSet = true; m_relationships = std::move(value); }

    /**
     * <p>A list of child blocks of the current block. For example, a LINE object has
     * child blocks for each WORD block that's part of the line of text. There aren't
     * Relationship objects in the list for relationships that don't exist, such as
     * when the current block has no child blocks. The list size can be the
     * following:</p> <ul> <li> <p>0 - The block has no child blocks.</p> </li> <li>
     * <p>1 - The block has child blocks.</p> </li> </ul>
     */
    inline Block& WithRelationships(const Aws::Vector<Relationship>& value) { SetRelationships(value); return *this;}

    /**
     * <p>A list of child blocks of the current block. For example, a LINE object has
     * child blocks for each WORD block that's part of the line of text. There aren't
     * Relationship objects in the list for relationships that don't exist, such as
     * when the current block has no child blocks. The list size can be the
     * following:</p> <ul> <li> <p>0 - The block has no child blocks.</p> </li> <li>
     * <p>1 - The block has child blocks.</p> </li> </ul>
     */
    inline Block& WithRelationships(Aws::Vector<Relationship>&& value) { SetRelationships(std::move(value)); return *this;}

    /**
     * <p>A list of child blocks of the current block. For example, a LINE object has
     * child blocks for each WORD block that's part of the line of text. There aren't
     * Relationship objects in the list for relationships that don't exist, such as
     * when the current block has no child blocks. The list size can be the
     * following:</p> <ul> <li> <p>0 - The block has no child blocks.</p> </li> <li>
     * <p>1 - The block has child blocks.</p> </li> </ul>
     */
    inline Block& AddRelationships(const Relationship& value) { m_relationshipsHasBeenSet = true; m_relationships.push_back(value); return *this; }

    /**
     * <p>A list of child blocks of the current block. For example, a LINE object has
     * child blocks for each WORD block that's part of the line of text. There aren't
     * Relationship objects in the list for relationships that don't exist, such as
     * when the current block has no child blocks. The list size can be the
     * following:</p> <ul> <li> <p>0 - The block has no child blocks.</p> </li> <li>
     * <p>1 - The block has child blocks.</p> </li> </ul>
     */
    inline Block& AddRelationships(Relationship&& value) { m_relationshipsHasBeenSet = true; m_relationships.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of entity. The following can be returned:</p> <ul> <li> <p>
     * <i>KEY</i> - An identifier for a field on the document.</p> </li> <li> <p>
     * <i>VALUE</i> - The field text.</p> </li> </ul> <p> <code>EntityTypes</code>
     * isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline const Aws::Vector<EntityType>& GetEntityTypes() const{ return m_entityTypes; }

    /**
     * <p>The type of entity. The following can be returned:</p> <ul> <li> <p>
     * <i>KEY</i> - An identifier for a field on the document.</p> </li> <li> <p>
     * <i>VALUE</i> - The field text.</p> </li> </ul> <p> <code>EntityTypes</code>
     * isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }

    /**
     * <p>The type of entity. The following can be returned:</p> <ul> <li> <p>
     * <i>KEY</i> - An identifier for a field on the document.</p> </li> <li> <p>
     * <i>VALUE</i> - The field text.</p> </li> </ul> <p> <code>EntityTypes</code>
     * isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline void SetEntityTypes(const Aws::Vector<EntityType>& value) { m_entityTypesHasBeenSet = true; m_entityTypes = value; }

    /**
     * <p>The type of entity. The following can be returned:</p> <ul> <li> <p>
     * <i>KEY</i> - An identifier for a field on the document.</p> </li> <li> <p>
     * <i>VALUE</i> - The field text.</p> </li> </ul> <p> <code>EntityTypes</code>
     * isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline void SetEntityTypes(Aws::Vector<EntityType>&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::move(value); }

    /**
     * <p>The type of entity. The following can be returned:</p> <ul> <li> <p>
     * <i>KEY</i> - An identifier for a field on the document.</p> </li> <li> <p>
     * <i>VALUE</i> - The field text.</p> </li> </ul> <p> <code>EntityTypes</code>
     * isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline Block& WithEntityTypes(const Aws::Vector<EntityType>& value) { SetEntityTypes(value); return *this;}

    /**
     * <p>The type of entity. The following can be returned:</p> <ul> <li> <p>
     * <i>KEY</i> - An identifier for a field on the document.</p> </li> <li> <p>
     * <i>VALUE</i> - The field text.</p> </li> </ul> <p> <code>EntityTypes</code>
     * isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline Block& WithEntityTypes(Aws::Vector<EntityType>&& value) { SetEntityTypes(std::move(value)); return *this;}

    /**
     * <p>The type of entity. The following can be returned:</p> <ul> <li> <p>
     * <i>KEY</i> - An identifier for a field on the document.</p> </li> <li> <p>
     * <i>VALUE</i> - The field text.</p> </li> </ul> <p> <code>EntityTypes</code>
     * isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline Block& AddEntityTypes(const EntityType& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(value); return *this; }

    /**
     * <p>The type of entity. The following can be returned:</p> <ul> <li> <p>
     * <i>KEY</i> - An identifier for a field on the document.</p> </li> <li> <p>
     * <i>VALUE</i> - The field text.</p> </li> </ul> <p> <code>EntityTypes</code>
     * isn't returned by <code>DetectDocumentText</code> and
     * <code>GetDocumentTextDetection</code>.</p>
     */
    inline Block& AddEntityTypes(EntityType&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box. </p>
     */
    inline const SelectionStatus& GetSelectionStatus() const{ return m_selectionStatus; }

    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box. </p>
     */
    inline bool SelectionStatusHasBeenSet() const { return m_selectionStatusHasBeenSet; }

    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box. </p>
     */
    inline void SetSelectionStatus(const SelectionStatus& value) { m_selectionStatusHasBeenSet = true; m_selectionStatus = value; }

    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box. </p>
     */
    inline void SetSelectionStatus(SelectionStatus&& value) { m_selectionStatusHasBeenSet = true; m_selectionStatus = std::move(value); }

    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box. </p>
     */
    inline Block& WithSelectionStatus(const SelectionStatus& value) { SetSelectionStatus(value); return *this;}

    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box. </p>
     */
    inline Block& WithSelectionStatus(SelectionStatus&& value) { SetSelectionStatus(std::move(value)); return *this;}


    /**
     * <p>The page on which a block was detected. <code>Page</code> is returned by
     * synchronous and asynchronous operations. Page values greater than 1 are only
     * returned for multipage documents that are in PDF or TIFF format. A scanned image
     * (JPEG/PNG) provided to an asynchronous operation, even if it contains multiple
     * document pages, is considered a single-page document. This means that for
     * scanned images the value of <code>Page</code> is always 1. Synchronous
     * operations operations will also return a <code>Page</code> value of 1 because
     * every input document is considered to be a single-page document.</p>
     */
    inline int GetPage() const{ return m_page; }

    /**
     * <p>The page on which a block was detected. <code>Page</code> is returned by
     * synchronous and asynchronous operations. Page values greater than 1 are only
     * returned for multipage documents that are in PDF or TIFF format. A scanned image
     * (JPEG/PNG) provided to an asynchronous operation, even if it contains multiple
     * document pages, is considered a single-page document. This means that for
     * scanned images the value of <code>Page</code> is always 1. Synchronous
     * operations operations will also return a <code>Page</code> value of 1 because
     * every input document is considered to be a single-page document.</p>
     */
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }

    /**
     * <p>The page on which a block was detected. <code>Page</code> is returned by
     * synchronous and asynchronous operations. Page values greater than 1 are only
     * returned for multipage documents that are in PDF or TIFF format. A scanned image
     * (JPEG/PNG) provided to an asynchronous operation, even if it contains multiple
     * document pages, is considered a single-page document. This means that for
     * scanned images the value of <code>Page</code> is always 1. Synchronous
     * operations operations will also return a <code>Page</code> value of 1 because
     * every input document is considered to be a single-page document.</p>
     */
    inline void SetPage(int value) { m_pageHasBeenSet = true; m_page = value; }

    /**
     * <p>The page on which a block was detected. <code>Page</code> is returned by
     * synchronous and asynchronous operations. Page values greater than 1 are only
     * returned for multipage documents that are in PDF or TIFF format. A scanned image
     * (JPEG/PNG) provided to an asynchronous operation, even if it contains multiple
     * document pages, is considered a single-page document. This means that for
     * scanned images the value of <code>Page</code> is always 1. Synchronous
     * operations operations will also return a <code>Page</code> value of 1 because
     * every input document is considered to be a single-page document.</p>
     */
    inline Block& WithPage(int value) { SetPage(value); return *this;}


    /**
     * <p/>
     */
    inline const Query& GetQuery() const{ return m_query; }

    /**
     * <p/>
     */
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetQuery(const Query& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p/>
     */
    inline void SetQuery(Query&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }

    /**
     * <p/>
     */
    inline Block& WithQuery(const Query& value) { SetQuery(value); return *this;}

    /**
     * <p/>
     */
    inline Block& WithQuery(Query&& value) { SetQuery(std::move(value)); return *this;}

  private:

    BlockType m_blockType;
    bool m_blockTypeHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    TextType m_textType;
    bool m_textTypeHasBeenSet = false;

    int m_rowIndex;
    bool m_rowIndexHasBeenSet = false;

    int m_columnIndex;
    bool m_columnIndexHasBeenSet = false;

    int m_rowSpan;
    bool m_rowSpanHasBeenSet = false;

    int m_columnSpan;
    bool m_columnSpanHasBeenSet = false;

    Geometry m_geometry;
    bool m_geometryHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Relationship> m_relationships;
    bool m_relationshipsHasBeenSet = false;

    Aws::Vector<EntityType> m_entityTypes;
    bool m_entityTypesHasBeenSet = false;

    SelectionStatus m_selectionStatus;
    bool m_selectionStatusHasBeenSet = false;

    int m_page;
    bool m_pageHasBeenSet = false;

    Query m_query;
    bool m_queryHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
