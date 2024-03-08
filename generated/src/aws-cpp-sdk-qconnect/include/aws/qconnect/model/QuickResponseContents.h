/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/QuickResponseContentProvider.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The content of the quick response stored in different media
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/QuickResponseContents">AWS
   * API Reference</a></p>
   */
  class QuickResponseContents
  {
  public:
    AWS_QCONNECT_API QuickResponseContents();
    AWS_QCONNECT_API QuickResponseContents(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API QuickResponseContents& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const QuickResponseContentProvider& GetMarkdown() const{ return m_markdown; }

    
    inline bool MarkdownHasBeenSet() const { return m_markdownHasBeenSet; }

    
    inline void SetMarkdown(const QuickResponseContentProvider& value) { m_markdownHasBeenSet = true; m_markdown = value; }

    
    inline void SetMarkdown(QuickResponseContentProvider&& value) { m_markdownHasBeenSet = true; m_markdown = std::move(value); }

    
    inline QuickResponseContents& WithMarkdown(const QuickResponseContentProvider& value) { SetMarkdown(value); return *this;}

    
    inline QuickResponseContents& WithMarkdown(QuickResponseContentProvider&& value) { SetMarkdown(std::move(value)); return *this;}


    
    inline const QuickResponseContentProvider& GetPlainText() const{ return m_plainText; }

    
    inline bool PlainTextHasBeenSet() const { return m_plainTextHasBeenSet; }

    
    inline void SetPlainText(const QuickResponseContentProvider& value) { m_plainTextHasBeenSet = true; m_plainText = value; }

    
    inline void SetPlainText(QuickResponseContentProvider&& value) { m_plainTextHasBeenSet = true; m_plainText = std::move(value); }

    
    inline QuickResponseContents& WithPlainText(const QuickResponseContentProvider& value) { SetPlainText(value); return *this;}

    
    inline QuickResponseContents& WithPlainText(QuickResponseContentProvider&& value) { SetPlainText(std::move(value)); return *this;}

  private:

    QuickResponseContentProvider m_markdown;
    bool m_markdownHasBeenSet = false;

    QuickResponseContentProvider m_plainText;
    bool m_plainTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
