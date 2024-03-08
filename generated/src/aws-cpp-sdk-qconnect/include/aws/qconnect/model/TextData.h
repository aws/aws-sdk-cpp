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
    AWS_QCONNECT_API TextData();
    AWS_QCONNECT_API TextData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API TextData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const DocumentText& GetExcerpt() const{ return m_excerpt; }

    
    inline bool ExcerptHasBeenSet() const { return m_excerptHasBeenSet; }

    
    inline void SetExcerpt(const DocumentText& value) { m_excerptHasBeenSet = true; m_excerpt = value; }

    
    inline void SetExcerpt(DocumentText&& value) { m_excerptHasBeenSet = true; m_excerpt = std::move(value); }

    
    inline TextData& WithExcerpt(const DocumentText& value) { SetExcerpt(value); return *this;}

    
    inline TextData& WithExcerpt(DocumentText&& value) { SetExcerpt(std::move(value)); return *this;}


    
    inline const DocumentText& GetTitle() const{ return m_title; }

    
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    
    inline void SetTitle(const DocumentText& value) { m_titleHasBeenSet = true; m_title = value; }

    
    inline void SetTitle(DocumentText&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    
    inline TextData& WithTitle(const DocumentText& value) { SetTitle(value); return *this;}

    
    inline TextData& WithTitle(DocumentText&& value) { SetTitle(std::move(value)); return *this;}

  private:

    DocumentText m_excerpt;
    bool m_excerptHasBeenSet = false;

    DocumentText m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
