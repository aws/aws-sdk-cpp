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
    AWS_SECURITYHUB_API Occurrences() = default;
    AWS_SECURITYHUB_API Occurrences(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Occurrences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Occurrences of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline const Aws::Vector<Range>& GetLineRanges() const { return m_lineRanges; }
    inline bool LineRangesHasBeenSet() const { return m_lineRangesHasBeenSet; }
    template<typename LineRangesT = Aws::Vector<Range>>
    void SetLineRanges(LineRangesT&& value) { m_lineRangesHasBeenSet = true; m_lineRanges = std::forward<LineRangesT>(value); }
    template<typename LineRangesT = Aws::Vector<Range>>
    Occurrences& WithLineRanges(LineRangesT&& value) { SetLineRanges(std::forward<LineRangesT>(value)); return *this;}
    template<typename LineRangesT = Range>
    Occurrences& AddLineRanges(LineRangesT&& value) { m_lineRangesHasBeenSet = true; m_lineRanges.emplace_back(std::forward<LineRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Occurrences of sensitive data detected in a binary text file.</p>
     */
    inline const Aws::Vector<Range>& GetOffsetRanges() const { return m_offsetRanges; }
    inline bool OffsetRangesHasBeenSet() const { return m_offsetRangesHasBeenSet; }
    template<typename OffsetRangesT = Aws::Vector<Range>>
    void SetOffsetRanges(OffsetRangesT&& value) { m_offsetRangesHasBeenSet = true; m_offsetRanges = std::forward<OffsetRangesT>(value); }
    template<typename OffsetRangesT = Aws::Vector<Range>>
    Occurrences& WithOffsetRanges(OffsetRangesT&& value) { SetOffsetRanges(std::forward<OffsetRangesT>(value)); return *this;}
    template<typename OffsetRangesT = Range>
    Occurrences& AddOffsetRanges(OffsetRangesT&& value) { m_offsetRangesHasBeenSet = true; m_offsetRanges.emplace_back(std::forward<OffsetRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Occurrences of sensitive data in an Adobe Portable Document Format (PDF)
     * file.</p>
     */
    inline const Aws::Vector<Page>& GetPages() const { return m_pages; }
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }
    template<typename PagesT = Aws::Vector<Page>>
    void SetPages(PagesT&& value) { m_pagesHasBeenSet = true; m_pages = std::forward<PagesT>(value); }
    template<typename PagesT = Aws::Vector<Page>>
    Occurrences& WithPages(PagesT&& value) { SetPages(std::forward<PagesT>(value)); return *this;}
    template<typename PagesT = Page>
    Occurrences& AddPages(PagesT&& value) { m_pagesHasBeenSet = true; m_pages.emplace_back(std::forward<PagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Occurrences of sensitive data in an Apache Avro object container or an Apache
     * Parquet file.</p>
     */
    inline const Aws::Vector<Record>& GetRecords() const { return m_records; }
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }
    template<typename RecordsT = Aws::Vector<Record>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<Record>>
    Occurrences& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = Record>
    Occurrences& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Occurrences of sensitive data detected in Microsoft Excel workbooks,
     * comma-separated value (CSV) files, or tab-separated value (TSV) files.</p>
     */
    inline const Aws::Vector<Cell>& GetCells() const { return m_cells; }
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }
    template<typename CellsT = Aws::Vector<Cell>>
    void SetCells(CellsT&& value) { m_cellsHasBeenSet = true; m_cells = std::forward<CellsT>(value); }
    template<typename CellsT = Aws::Vector<Cell>>
    Occurrences& WithCells(CellsT&& value) { SetCells(std::forward<CellsT>(value)); return *this;}
    template<typename CellsT = Cell>
    Occurrences& AddCells(CellsT&& value) { m_cellsHasBeenSet = true; m_cells.emplace_back(std::forward<CellsT>(value)); return *this; }
    ///@}
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
