﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/Highlight.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>The text of the document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/DocumentText">AWS
   * API Reference</a></p>
   */
  class DocumentText
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API DocumentText() = default;
    AWS_CONNECTWISDOMSERVICE_API DocumentText(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API DocumentText& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Highlights in the document text.</p>
     */
    inline const Aws::Vector<Highlight>& GetHighlights() const { return m_highlights; }
    inline bool HighlightsHasBeenSet() const { return m_highlightsHasBeenSet; }
    template<typename HighlightsT = Aws::Vector<Highlight>>
    void SetHighlights(HighlightsT&& value) { m_highlightsHasBeenSet = true; m_highlights = std::forward<HighlightsT>(value); }
    template<typename HighlightsT = Aws::Vector<Highlight>>
    DocumentText& WithHighlights(HighlightsT&& value) { SetHighlights(std::forward<HighlightsT>(value)); return *this;}
    template<typename HighlightsT = Highlight>
    DocumentText& AddHighlights(HighlightsT&& value) { m_highlightsHasBeenSet = true; m_highlights.emplace_back(std::forward<HighlightsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Text in the document.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    DocumentText& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Highlight> m_highlights;
    bool m_highlightsHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
