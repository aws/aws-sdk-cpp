/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The content and content type of a document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/Document">AWS
   * API Reference</a></p>
   */
  class Document
  {
  public:
    AWS_TRANSLATE_API Document();
    AWS_TRANSLATE_API Document(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Document& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>Content</code>field type is Binary large object (blob). This object
     * contains the document content converted into base64-encoded binary data. If you
     * use one of the AWS SDKs, the SDK performs the Base64-encoding on this field
     * before sending the request. </p>
     */
    inline const Aws::Utils::CryptoBuffer& GetContent() const{ return m_content; }

    /**
     * <p>The <code>Content</code>field type is Binary large object (blob). This object
     * contains the document content converted into base64-encoded binary data. If you
     * use one of the AWS SDKs, the SDK performs the Base64-encoding on this field
     * before sending the request. </p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The <code>Content</code>field type is Binary large object (blob). This object
     * contains the document content converted into base64-encoded binary data. If you
     * use one of the AWS SDKs, the SDK performs the Base64-encoding on this field
     * before sending the request. </p>
     */
    inline void SetContent(const Aws::Utils::CryptoBuffer& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The <code>Content</code>field type is Binary large object (blob). This object
     * contains the document content converted into base64-encoded binary data. If you
     * use one of the AWS SDKs, the SDK performs the Base64-encoding on this field
     * before sending the request. </p>
     */
    inline void SetContent(Aws::Utils::CryptoBuffer&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The <code>Content</code>field type is Binary large object (blob). This object
     * contains the document content converted into base64-encoded binary data. If you
     * use one of the AWS SDKs, the SDK performs the Base64-encoding on this field
     * before sending the request. </p>
     */
    inline Document& WithContent(const Aws::Utils::CryptoBuffer& value) { SetContent(value); return *this;}

    /**
     * <p>The <code>Content</code>field type is Binary large object (blob). This object
     * contains the document content converted into base64-encoded binary data. If you
     * use one of the AWS SDKs, the SDK performs the Base64-encoding on this field
     * before sending the request. </p>
     */
    inline Document& WithContent(Aws::Utils::CryptoBuffer&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>Describes the format of the document. You can specify one of the
     * following:</p> <ul> <li> <p> <code>text/html</code> - The input data consists of
     * HTML content. Amazon Translate translates only the text in the HTML element.</p>
     * </li> <li> <p> <code>text/plain</code> - The input data consists of unformatted
     * text. Amazon Translate translates every character in the content. </p> </li>
     * <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>
     * - The input data consists of a Word document (.docx).</p> </li> </ul>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>Describes the format of the document. You can specify one of the
     * following:</p> <ul> <li> <p> <code>text/html</code> - The input data consists of
     * HTML content. Amazon Translate translates only the text in the HTML element.</p>
     * </li> <li> <p> <code>text/plain</code> - The input data consists of unformatted
     * text. Amazon Translate translates every character in the content. </p> </li>
     * <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>
     * - The input data consists of a Word document (.docx).</p> </li> </ul>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>Describes the format of the document. You can specify one of the
     * following:</p> <ul> <li> <p> <code>text/html</code> - The input data consists of
     * HTML content. Amazon Translate translates only the text in the HTML element.</p>
     * </li> <li> <p> <code>text/plain</code> - The input data consists of unformatted
     * text. Amazon Translate translates every character in the content. </p> </li>
     * <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>
     * - The input data consists of a Word document (.docx).</p> </li> </ul>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>Describes the format of the document. You can specify one of the
     * following:</p> <ul> <li> <p> <code>text/html</code> - The input data consists of
     * HTML content. Amazon Translate translates only the text in the HTML element.</p>
     * </li> <li> <p> <code>text/plain</code> - The input data consists of unformatted
     * text. Amazon Translate translates every character in the content. </p> </li>
     * <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>
     * - The input data consists of a Word document (.docx).</p> </li> </ul>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>Describes the format of the document. You can specify one of the
     * following:</p> <ul> <li> <p> <code>text/html</code> - The input data consists of
     * HTML content. Amazon Translate translates only the text in the HTML element.</p>
     * </li> <li> <p> <code>text/plain</code> - The input data consists of unformatted
     * text. Amazon Translate translates every character in the content. </p> </li>
     * <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>
     * - The input data consists of a Word document (.docx).</p> </li> </ul>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>Describes the format of the document. You can specify one of the
     * following:</p> <ul> <li> <p> <code>text/html</code> - The input data consists of
     * HTML content. Amazon Translate translates only the text in the HTML element.</p>
     * </li> <li> <p> <code>text/plain</code> - The input data consists of unformatted
     * text. Amazon Translate translates every character in the content. </p> </li>
     * <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>
     * - The input data consists of a Word document (.docx).</p> </li> </ul>
     */
    inline Document& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>Describes the format of the document. You can specify one of the
     * following:</p> <ul> <li> <p> <code>text/html</code> - The input data consists of
     * HTML content. Amazon Translate translates only the text in the HTML element.</p>
     * </li> <li> <p> <code>text/plain</code> - The input data consists of unformatted
     * text. Amazon Translate translates every character in the content. </p> </li>
     * <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>
     * - The input data consists of a Word document (.docx).</p> </li> </ul>
     */
    inline Document& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>Describes the format of the document. You can specify one of the
     * following:</p> <ul> <li> <p> <code>text/html</code> - The input data consists of
     * HTML content. Amazon Translate translates only the text in the HTML element.</p>
     * </li> <li> <p> <code>text/plain</code> - The input data consists of unformatted
     * text. Amazon Translate translates every character in the content. </p> </li>
     * <li> <p>
     * <code>application/vnd.openxmlformats-officedocument.wordprocessingml.document</code>
     * - The input data consists of a Word document (.docx).</p> </li> </ul>
     */
    inline Document& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

    Aws::Utils::CryptoBuffer m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
