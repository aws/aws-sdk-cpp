/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/Range.h>
#include <aws/securityhub/model/Page.h>
#include <aws/securityhub/model/Record.h>
#include <aws/securityhub/model/Cell.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The detected occurrences of sensitive data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Occurrences">AWS
   * API Reference</a></p>
   */
  class Occurrences
  {
  public:
    AWS_SECURITYHUB_API Occurrences();
    AWS_SECURITYHUB_API Occurrences(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Occurrences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Occurrences of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline const Aws::Vector<Range>& GetLineRanges() const{ return m_lineRanges; }

    /**
     * <p>Occurrences of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline bool LineRangesHasBeenSet() const { return m_lineRangesHasBeenSet; }

    /**
     * <p>Occurrences of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline void SetLineRanges(const Aws::Vector<Range>& value) { m_lineRangesHasBeenSet = true; m_lineRanges = value; }

    /**
     * <p>Occurrences of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline void SetLineRanges(Aws::Vector<Range>&& value) { m_lineRangesHasBeenSet = true; m_lineRanges = std::move(value); }

    /**
     * <p>Occurrences of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline Occurrences& WithLineRanges(const Aws::Vector<Range>& value) { SetLineRanges(value); return *this;}

    /**
     * <p>Occurrences of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline Occurrences& WithLineRanges(Aws::Vector<Range>&& value) { SetLineRanges(std::move(value)); return *this;}

    /**
     * <p>Occurrences of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline Occurrences& AddLineRanges(const Range& value) { m_lineRangesHasBeenSet = true; m_lineRanges.push_back(value); return *this; }

    /**
     * <p>Occurrences of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline Occurrences& AddLineRanges(Range&& value) { m_lineRangesHasBeenSet = true; m_lineRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>Occurrences of sensitive data detected in a binary text file.</p>
     */
    inline const Aws::Vector<Range>& GetOffsetRanges() const{ return m_offsetRanges; }

    /**
     * <p>Occurrences of sensitive data detected in a binary text file.</p>
     */
    inline bool OffsetRangesHasBeenSet() const { return m_offsetRangesHasBeenSet; }

    /**
     * <p>Occurrences of sensitive data detected in a binary text file.</p>
     */
    inline void SetOffsetRanges(const Aws::Vector<Range>& value) { m_offsetRangesHasBeenSet = true; m_offsetRanges = value; }

    /**
     * <p>Occurrences of sensitive data detected in a binary text file.</p>
     */
    inline void SetOffsetRanges(Aws::Vector<Range>&& value) { m_offsetRangesHasBeenSet = true; m_offsetRanges = std::move(value); }

    /**
     * <p>Occurrences of sensitive data detected in a binary text file.</p>
     */
    inline Occurrences& WithOffsetRanges(const Aws::Vector<Range>& value) { SetOffsetRanges(value); return *this;}

    /**
     * <p>Occurrences of sensitive data detected in a binary text file.</p>
     */
    inline Occurrences& WithOffsetRanges(Aws::Vector<Range>&& value) { SetOffsetRanges(std::move(value)); return *this;}

    /**
     * <p>Occurrences of sensitive data detected in a binary text file.</p>
     */
    inline Occurrences& AddOffsetRanges(const Range& value) { m_offsetRangesHasBeenSet = true; m_offsetRanges.push_back(value); return *this; }

    /**
     * <p>Occurrences of sensitive data detected in a binary text file.</p>
     */
    inline Occurrences& AddOffsetRanges(Range&& value) { m_offsetRangesHasBeenSet = true; m_offsetRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>Occurrences of sensitive data in an Adobe Portable Document Format (PDF)
     * file.</p>
     */
    inline const Aws::Vector<Page>& GetPages() const{ return m_pages; }

    /**
     * <p>Occurrences of sensitive data in an Adobe Portable Document Format (PDF)
     * file.</p>
     */
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }

    /**
     * <p>Occurrences of sensitive data in an Adobe Portable Document Format (PDF)
     * file.</p>
     */
    inline void SetPages(const Aws::Vector<Page>& value) { m_pagesHasBeenSet = true; m_pages = value; }

    /**
     * <p>Occurrences of sensitive data in an Adobe Portable Document Format (PDF)
     * file.</p>
     */
    inline void SetPages(Aws::Vector<Page>&& value) { m_pagesHasBeenSet = true; m_pages = std::move(value); }

    /**
     * <p>Occurrences of sensitive data in an Adobe Portable Document Format (PDF)
     * file.</p>
     */
    inline Occurrences& WithPages(const Aws::Vector<Page>& value) { SetPages(value); return *this;}

    /**
     * <p>Occurrences of sensitive data in an Adobe Portable Document Format (PDF)
     * file.</p>
     */
    inline Occurrences& WithPages(Aws::Vector<Page>&& value) { SetPages(std::move(value)); return *this;}

    /**
     * <p>Occurrences of sensitive data in an Adobe Portable Document Format (PDF)
     * file.</p>
     */
    inline Occurrences& AddPages(const Page& value) { m_pagesHasBeenSet = true; m_pages.push_back(value); return *this; }

    /**
     * <p>Occurrences of sensitive data in an Adobe Portable Document Format (PDF)
     * file.</p>
     */
    inline Occurrences& AddPages(Page&& value) { m_pagesHasBeenSet = true; m_pages.push_back(std::move(value)); return *this; }


    /**
     * <p>Occurrences of sensitive data in an Apache Avro object container or an Apache
     * Parquet file.</p>
     */
    inline const Aws::Vector<Record>& GetRecords() const{ return m_records; }

    /**
     * <p>Occurrences of sensitive data in an Apache Avro object container or an Apache
     * Parquet file.</p>
     */
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }

    /**
     * <p>Occurrences of sensitive data in an Apache Avro object container or an Apache
     * Parquet file.</p>
     */
    inline void SetRecords(const Aws::Vector<Record>& value) { m_recordsHasBeenSet = true; m_records = value; }

    /**
     * <p>Occurrences of sensitive data in an Apache Avro object container or an Apache
     * Parquet file.</p>
     */
    inline void SetRecords(Aws::Vector<Record>&& value) { m_recordsHasBeenSet = true; m_records = std::move(value); }

    /**
     * <p>Occurrences of sensitive data in an Apache Avro object container or an Apache
     * Parquet file.</p>
     */
    inline Occurrences& WithRecords(const Aws::Vector<Record>& value) { SetRecords(value); return *this;}

    /**
     * <p>Occurrences of sensitive data in an Apache Avro object container or an Apache
     * Parquet file.</p>
     */
    inline Occurrences& WithRecords(Aws::Vector<Record>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * <p>Occurrences of sensitive data in an Apache Avro object container or an Apache
     * Parquet file.</p>
     */
    inline Occurrences& AddRecords(const Record& value) { m_recordsHasBeenSet = true; m_records.push_back(value); return *this; }

    /**
     * <p>Occurrences of sensitive data in an Apache Avro object container or an Apache
     * Parquet file.</p>
     */
    inline Occurrences& AddRecords(Record&& value) { m_recordsHasBeenSet = true; m_records.push_back(std::move(value)); return *this; }


    /**
     * <p>Occurrences of sensitive data detected in Microsoft Excel workbooks,
     * comma-separated value (CSV) files, or tab-separated value (TSV) files.</p>
     */
    inline const Aws::Vector<Cell>& GetCells() const{ return m_cells; }

    /**
     * <p>Occurrences of sensitive data detected in Microsoft Excel workbooks,
     * comma-separated value (CSV) files, or tab-separated value (TSV) files.</p>
     */
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }

    /**
     * <p>Occurrences of sensitive data detected in Microsoft Excel workbooks,
     * comma-separated value (CSV) files, or tab-separated value (TSV) files.</p>
     */
    inline void SetCells(const Aws::Vector<Cell>& value) { m_cellsHasBeenSet = true; m_cells = value; }

    /**
     * <p>Occurrences of sensitive data detected in Microsoft Excel workbooks,
     * comma-separated value (CSV) files, or tab-separated value (TSV) files.</p>
     */
    inline void SetCells(Aws::Vector<Cell>&& value) { m_cellsHasBeenSet = true; m_cells = std::move(value); }

    /**
     * <p>Occurrences of sensitive data detected in Microsoft Excel workbooks,
     * comma-separated value (CSV) files, or tab-separated value (TSV) files.</p>
     */
    inline Occurrences& WithCells(const Aws::Vector<Cell>& value) { SetCells(value); return *this;}

    /**
     * <p>Occurrences of sensitive data detected in Microsoft Excel workbooks,
     * comma-separated value (CSV) files, or tab-separated value (TSV) files.</p>
     */
    inline Occurrences& WithCells(Aws::Vector<Cell>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * <p>Occurrences of sensitive data detected in Microsoft Excel workbooks,
     * comma-separated value (CSV) files, or tab-separated value (TSV) files.</p>
     */
    inline Occurrences& AddCells(const Cell& value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }

    /**
     * <p>Occurrences of sensitive data detected in Microsoft Excel workbooks,
     * comma-separated value (CSV) files, or tab-separated value (TSV) files.</p>
     */
    inline Occurrences& AddCells(Cell&& value) { m_cellsHasBeenSet = true; m_cells.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Range> m_lineRanges;
    bool m_lineRangesHasBeenSet = false;

    Aws::Vector<Range> m_offsetRanges;
    bool m_offsetRangesHasBeenSet = false;

    Aws::Vector<Page> m_pages;
    bool m_pagesHasBeenSet = false;

    Aws::Vector<Record> m_records;
    bool m_recordsHasBeenSet = false;

    Aws::Vector<Cell> m_cells;
    bool m_cellsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
