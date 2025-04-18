/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ContentReference.h>
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
   * <p>The document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/Document">AWS
   * API Reference</a></p>
   */
  class Document
  {
  public:
    AWS_QCONNECT_API Document() = default;
    AWS_QCONNECT_API Document(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Document& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to the content resource.</p>
     */
    inline const ContentReference& GetContentReference() const { return m_contentReference; }
    inline bool ContentReferenceHasBeenSet() const { return m_contentReferenceHasBeenSet; }
    template<typename ContentReferenceT = ContentReference>
    void SetContentReference(ContentReferenceT&& value) { m_contentReferenceHasBeenSet = true; m_contentReference = std::forward<ContentReferenceT>(value); }
    template<typename ContentReferenceT = ContentReference>
    Document& WithContentReference(ContentReferenceT&& value) { SetContentReference(std::forward<ContentReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the document.</p>
     */
    inline const DocumentText& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = DocumentText>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = DocumentText>
    Document& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The excerpt from the document.</p>
     */
    inline const DocumentText& GetExcerpt() const { return m_excerpt; }
    inline bool ExcerptHasBeenSet() const { return m_excerptHasBeenSet; }
    template<typename ExcerptT = DocumentText>
    void SetExcerpt(ExcerptT&& value) { m_excerptHasBeenSet = true; m_excerpt = std::forward<ExcerptT>(value); }
    template<typename ExcerptT = DocumentText>
    Document& WithExcerpt(ExcerptT&& value) { SetExcerpt(std::forward<ExcerptT>(value)); return *this;}
    ///@}
  private:

    ContentReference m_contentReference;
    bool m_contentReferenceHasBeenSet = false;

    DocumentText m_title;
    bool m_titleHasBeenSet = false;

    DocumentText m_excerpt;
    bool m_excerptHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
