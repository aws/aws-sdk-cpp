/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/DocumentText.h>
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
   * <p>Details about the source content text data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/TextData">AWS
   * API Reference</a></p>
   */
  class TextData
  {
  public:
    AWS_QCONNECT_API TextData() = default;
    AWS_QCONNECT_API TextData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API TextData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DocumentText& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = DocumentText>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = DocumentText>
    TextData& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentText& GetExcerpt() const { return m_excerpt; }
    inline bool ExcerptHasBeenSet() const { return m_excerptHasBeenSet; }
    template<typename ExcerptT = DocumentText>
    void SetExcerpt(ExcerptT&& value) { m_excerptHasBeenSet = true; m_excerpt = std::forward<ExcerptT>(value); }
    template<typename ExcerptT = DocumentText>
    TextData& WithExcerpt(ExcerptT&& value) { SetExcerpt(std::forward<ExcerptT>(value)); return *this;}
    ///@}
  private:

    DocumentText m_title;
    bool m_titleHasBeenSet = false;

    DocumentText m_excerpt;
    bool m_excerptHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
