/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An adapter selected for use when analyzing documents. Contains an adapter ID
   * and a version number. Contains information on pages selected for analysis when
   * analyzing documents asychronously.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/Adapter">AWS
   * API Reference</a></p>
   */
  class Adapter
  {
  public:
    AWS_TEXTRACT_API Adapter() = default;
    AWS_TEXTRACT_API Adapter(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Adapter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline const Aws::String& GetAdapterId() const { return m_adapterId; }
    inline bool AdapterIdHasBeenSet() const { return m_adapterIdHasBeenSet; }
    template<typename AdapterIdT = Aws::String>
    void SetAdapterId(AdapterIdT&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::forward<AdapterIdT>(value); }
    template<typename AdapterIdT = Aws::String>
    Adapter& WithAdapterId(AdapterIdT&& value) { SetAdapterId(std::forward<AdapterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pages is a parameter that the user inputs to specify which pages to apply an
     * adapter to. The following is a list of rules for using this parameter.</p> <ul>
     * <li> <p>If a page is not specified, it is set to <code>["1"]</code> by
     * default.</p> </li> <li> <p>The following characters are allowed in the
     * parameter's string: <code>0 1 2 3 4 5 6 7 8 9 - *</code>. No whitespace is
     * allowed.</p> </li> <li> <p>When using * to indicate all pages, it must be the
     * only element in the list.</p> </li> <li> <p>You can use page intervals, such as
     * <code>["1-3", "1-1", "4-*"]</code>. Where <code>*</code> indicates last page of
     * document.</p> </li> <li> <p>Specified pages must be greater than 0 and less than
     * or equal to the number of pages in the document.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetPages() const { return m_pages; }
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }
    template<typename PagesT = Aws::Vector<Aws::String>>
    void SetPages(PagesT&& value) { m_pagesHasBeenSet = true; m_pages = std::forward<PagesT>(value); }
    template<typename PagesT = Aws::Vector<Aws::String>>
    Adapter& WithPages(PagesT&& value) { SetPages(std::forward<PagesT>(value)); return *this;}
    template<typename PagesT = Aws::String>
    Adapter& AddPages(PagesT&& value) { m_pagesHasBeenSet = true; m_pages.emplace_back(std::forward<PagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that identifies the version of the adapter.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Adapter& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adapterId;
    bool m_adapterIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_pages;
    bool m_pagesHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
