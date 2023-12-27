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
    AWS_TEXTRACT_API Adapter();
    AWS_TEXTRACT_API Adapter(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Adapter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline bool AdapterIdHasBeenSet() const { return m_adapterIdHasBeenSet; }

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline void SetAdapterId(const Aws::String& value) { m_adapterIdHasBeenSet = true; m_adapterId = value; }

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline void SetAdapterId(Aws::String&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::move(value); }

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline void SetAdapterId(const char* value) { m_adapterIdHasBeenSet = true; m_adapterId.assign(value); }

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline Adapter& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline Adapter& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline Adapter& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}


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
    inline const Aws::Vector<Aws::String>& GetPages() const{ return m_pages; }

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
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }

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
    inline void SetPages(const Aws::Vector<Aws::String>& value) { m_pagesHasBeenSet = true; m_pages = value; }

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
    inline void SetPages(Aws::Vector<Aws::String>&& value) { m_pagesHasBeenSet = true; m_pages = std::move(value); }

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
    inline Adapter& WithPages(const Aws::Vector<Aws::String>& value) { SetPages(value); return *this;}

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
    inline Adapter& WithPages(Aws::Vector<Aws::String>&& value) { SetPages(std::move(value)); return *this;}

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
    inline Adapter& AddPages(const Aws::String& value) { m_pagesHasBeenSet = true; m_pages.push_back(value); return *this; }

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
    inline Adapter& AddPages(Aws::String&& value) { m_pagesHasBeenSet = true; m_pages.push_back(std::move(value)); return *this; }

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
    inline Adapter& AddPages(const char* value) { m_pagesHasBeenSet = true; m_pages.push_back(value); return *this; }


    /**
     * <p>A string that identifies the version of the adapter.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>A string that identifies the version of the adapter.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>A string that identifies the version of the adapter.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>A string that identifies the version of the adapter.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>A string that identifies the version of the adapter.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>A string that identifies the version of the adapter.</p>
     */
    inline Adapter& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>A string that identifies the version of the adapter.</p>
     */
    inline Adapter& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>A string that identifies the version of the adapter.</p>
     */
    inline Adapter& WithVersion(const char* value) { SetVersion(value); return *this;}

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
