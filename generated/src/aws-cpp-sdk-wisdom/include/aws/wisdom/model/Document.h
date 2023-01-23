/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/ContentReference.h>
#include <aws/wisdom/model/DocumentText.h>
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
   * <p>The document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/Document">AWS API
   * Reference</a></p>
   */
  class Document
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API Document();
    AWS_CONNECTWISDOMSERVICE_API Document(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Document& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to the content resource.</p>
     */
    inline const ContentReference& GetContentReference() const{ return m_contentReference; }

    /**
     * <p>A reference to the content resource.</p>
     */
    inline bool ContentReferenceHasBeenSet() const { return m_contentReferenceHasBeenSet; }

    /**
     * <p>A reference to the content resource.</p>
     */
    inline void SetContentReference(const ContentReference& value) { m_contentReferenceHasBeenSet = true; m_contentReference = value; }

    /**
     * <p>A reference to the content resource.</p>
     */
    inline void SetContentReference(ContentReference&& value) { m_contentReferenceHasBeenSet = true; m_contentReference = std::move(value); }

    /**
     * <p>A reference to the content resource.</p>
     */
    inline Document& WithContentReference(const ContentReference& value) { SetContentReference(value); return *this;}

    /**
     * <p>A reference to the content resource.</p>
     */
    inline Document& WithContentReference(ContentReference&& value) { SetContentReference(std::move(value)); return *this;}


    /**
     * <p>The excerpt from the document.</p>
     */
    inline const DocumentText& GetExcerpt() const{ return m_excerpt; }

    /**
     * <p>The excerpt from the document.</p>
     */
    inline bool ExcerptHasBeenSet() const { return m_excerptHasBeenSet; }

    /**
     * <p>The excerpt from the document.</p>
     */
    inline void SetExcerpt(const DocumentText& value) { m_excerptHasBeenSet = true; m_excerpt = value; }

    /**
     * <p>The excerpt from the document.</p>
     */
    inline void SetExcerpt(DocumentText&& value) { m_excerptHasBeenSet = true; m_excerpt = std::move(value); }

    /**
     * <p>The excerpt from the document.</p>
     */
    inline Document& WithExcerpt(const DocumentText& value) { SetExcerpt(value); return *this;}

    /**
     * <p>The excerpt from the document.</p>
     */
    inline Document& WithExcerpt(DocumentText&& value) { SetExcerpt(std::move(value)); return *this;}


    /**
     * <p>The title of the document.</p>
     */
    inline const DocumentText& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the document.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the document.</p>
     */
    inline void SetTitle(const DocumentText& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the document.</p>
     */
    inline void SetTitle(DocumentText&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the document.</p>
     */
    inline Document& WithTitle(const DocumentText& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the document.</p>
     */
    inline Document& WithTitle(DocumentText&& value) { SetTitle(std::move(value)); return *this;}

  private:

    ContentReference m_contentReference;
    bool m_contentReferenceHasBeenSet = false;

    DocumentText m_excerpt;
    bool m_excerptHasBeenSet = false;

    DocumentText m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
