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
   * <p>A warning about an issue that occurred during asynchronous text analysis
   * (<a>StartDocumentAnalysis</a>) or asynchronous document text detection
   * (<a>StartDocumentTextDetection</a>). </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/Warning">AWS
   * API Reference</a></p>
   */
  class Warning
  {
  public:
    AWS_TEXTRACT_API Warning();
    AWS_TEXTRACT_API Warning(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Warning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code for the warning.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code for the warning.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code for the warning.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code for the warning.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code for the warning.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code for the warning.</p>
     */
    inline Warning& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code for the warning.</p>
     */
    inline Warning& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code for the warning.</p>
     */
    inline Warning& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>A list of the pages that the warning applies to.</p>
     */
    inline const Aws::Vector<int>& GetPages() const{ return m_pages; }

    /**
     * <p>A list of the pages that the warning applies to.</p>
     */
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }

    /**
     * <p>A list of the pages that the warning applies to.</p>
     */
    inline void SetPages(const Aws::Vector<int>& value) { m_pagesHasBeenSet = true; m_pages = value; }

    /**
     * <p>A list of the pages that the warning applies to.</p>
     */
    inline void SetPages(Aws::Vector<int>&& value) { m_pagesHasBeenSet = true; m_pages = std::move(value); }

    /**
     * <p>A list of the pages that the warning applies to.</p>
     */
    inline Warning& WithPages(const Aws::Vector<int>& value) { SetPages(value); return *this;}

    /**
     * <p>A list of the pages that the warning applies to.</p>
     */
    inline Warning& WithPages(Aws::Vector<int>&& value) { SetPages(std::move(value)); return *this;}

    /**
     * <p>A list of the pages that the warning applies to.</p>
     */
    inline Warning& AddPages(int value) { m_pagesHasBeenSet = true; m_pages.push_back(value); return *this; }

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::Vector<int> m_pages;
    bool m_pagesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
