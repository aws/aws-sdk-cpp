/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/ScoreAttributes.h>
#include <aws/qbusiness/model/DocumentAttribute.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Represents a piece of content that is relevant to a search
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/RelevantContent">AWS
   * API Reference</a></p>
   */
  class RelevantContent
  {
  public:
    AWS_QBUSINESS_API RelevantContent();
    AWS_QBUSINESS_API RelevantContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API RelevantContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The actual content of the relevant item.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline RelevantContent& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline RelevantContent& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline RelevantContent& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the document containing the relevant content.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }
    inline RelevantContent& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}
    inline RelevantContent& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}
    inline RelevantContent& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the document containing the relevant content.</p>
     */
    inline const Aws::String& GetDocumentTitle() const{ return m_documentTitle; }
    inline bool DocumentTitleHasBeenSet() const { return m_documentTitleHasBeenSet; }
    inline void SetDocumentTitle(const Aws::String& value) { m_documentTitleHasBeenSet = true; m_documentTitle = value; }
    inline void SetDocumentTitle(Aws::String&& value) { m_documentTitleHasBeenSet = true; m_documentTitle = std::move(value); }
    inline void SetDocumentTitle(const char* value) { m_documentTitleHasBeenSet = true; m_documentTitle.assign(value); }
    inline RelevantContent& WithDocumentTitle(const Aws::String& value) { SetDocumentTitle(value); return *this;}
    inline RelevantContent& WithDocumentTitle(Aws::String&& value) { SetDocumentTitle(std::move(value)); return *this;}
    inline RelevantContent& WithDocumentTitle(const char* value) { SetDocumentTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the document containing the relevant content.</p>
     */
    inline const Aws::String& GetDocumentUri() const{ return m_documentUri; }
    inline bool DocumentUriHasBeenSet() const { return m_documentUriHasBeenSet; }
    inline void SetDocumentUri(const Aws::String& value) { m_documentUriHasBeenSet = true; m_documentUri = value; }
    inline void SetDocumentUri(Aws::String&& value) { m_documentUriHasBeenSet = true; m_documentUri = std::move(value); }
    inline void SetDocumentUri(const char* value) { m_documentUriHasBeenSet = true; m_documentUri.assign(value); }
    inline RelevantContent& WithDocumentUri(const Aws::String& value) { SetDocumentUri(value); return *this;}
    inline RelevantContent& WithDocumentUri(Aws::String&& value) { SetDocumentUri(std::move(value)); return *this;}
    inline RelevantContent& WithDocumentUri(const char* value) { SetDocumentUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional attributes of the document containing the relevant content.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetDocumentAttributes() const{ return m_documentAttributes; }
    inline bool DocumentAttributesHasBeenSet() const { return m_documentAttributesHasBeenSet; }
    inline void SetDocumentAttributes(const Aws::Vector<DocumentAttribute>& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = value; }
    inline void SetDocumentAttributes(Aws::Vector<DocumentAttribute>&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = std::move(value); }
    inline RelevantContent& WithDocumentAttributes(const Aws::Vector<DocumentAttribute>& value) { SetDocumentAttributes(value); return *this;}
    inline RelevantContent& WithDocumentAttributes(Aws::Vector<DocumentAttribute>&& value) { SetDocumentAttributes(std::move(value)); return *this;}
    inline RelevantContent& AddDocumentAttributes(const DocumentAttribute& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.push_back(value); return *this; }
    inline RelevantContent& AddDocumentAttributes(DocumentAttribute&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attributes related to the relevance score of the content.</p>
     */
    inline const ScoreAttributes& GetScoreAttributes() const{ return m_scoreAttributes; }
    inline bool ScoreAttributesHasBeenSet() const { return m_scoreAttributesHasBeenSet; }
    inline void SetScoreAttributes(const ScoreAttributes& value) { m_scoreAttributesHasBeenSet = true; m_scoreAttributes = value; }
    inline void SetScoreAttributes(ScoreAttributes&& value) { m_scoreAttributesHasBeenSet = true; m_scoreAttributes = std::move(value); }
    inline RelevantContent& WithScoreAttributes(const ScoreAttributes& value) { SetScoreAttributes(value); return *this;}
    inline RelevantContent& WithScoreAttributes(ScoreAttributes&& value) { SetScoreAttributes(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    Aws::String m_documentTitle;
    bool m_documentTitleHasBeenSet = false;

    Aws::String m_documentUri;
    bool m_documentUriHasBeenSet = false;

    Aws::Vector<DocumentAttribute> m_documentAttributes;
    bool m_documentAttributesHasBeenSet = false;

    ScoreAttributes m_scoreAttributes;
    bool m_scoreAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
