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
    AWS_QBUSINESS_API RelevantContent() = default;
    AWS_QBUSINESS_API RelevantContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API RelevantContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The actual content of the relevant item.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    RelevantContent& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the document containing the relevant content.</p>
     */
    inline const Aws::String& GetDocumentId() const { return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    template<typename DocumentIdT = Aws::String>
    void SetDocumentId(DocumentIdT&& value) { m_documentIdHasBeenSet = true; m_documentId = std::forward<DocumentIdT>(value); }
    template<typename DocumentIdT = Aws::String>
    RelevantContent& WithDocumentId(DocumentIdT&& value) { SetDocumentId(std::forward<DocumentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the document containing the relevant content.</p>
     */
    inline const Aws::String& GetDocumentTitle() const { return m_documentTitle; }
    inline bool DocumentTitleHasBeenSet() const { return m_documentTitleHasBeenSet; }
    template<typename DocumentTitleT = Aws::String>
    void SetDocumentTitle(DocumentTitleT&& value) { m_documentTitleHasBeenSet = true; m_documentTitle = std::forward<DocumentTitleT>(value); }
    template<typename DocumentTitleT = Aws::String>
    RelevantContent& WithDocumentTitle(DocumentTitleT&& value) { SetDocumentTitle(std::forward<DocumentTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the document containing the relevant content.</p>
     */
    inline const Aws::String& GetDocumentUri() const { return m_documentUri; }
    inline bool DocumentUriHasBeenSet() const { return m_documentUriHasBeenSet; }
    template<typename DocumentUriT = Aws::String>
    void SetDocumentUri(DocumentUriT&& value) { m_documentUriHasBeenSet = true; m_documentUri = std::forward<DocumentUriT>(value); }
    template<typename DocumentUriT = Aws::String>
    RelevantContent& WithDocumentUri(DocumentUriT&& value) { SetDocumentUri(std::forward<DocumentUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional attributes of the document containing the relevant content.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetDocumentAttributes() const { return m_documentAttributes; }
    inline bool DocumentAttributesHasBeenSet() const { return m_documentAttributesHasBeenSet; }
    template<typename DocumentAttributesT = Aws::Vector<DocumentAttribute>>
    void SetDocumentAttributes(DocumentAttributesT&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = std::forward<DocumentAttributesT>(value); }
    template<typename DocumentAttributesT = Aws::Vector<DocumentAttribute>>
    RelevantContent& WithDocumentAttributes(DocumentAttributesT&& value) { SetDocumentAttributes(std::forward<DocumentAttributesT>(value)); return *this;}
    template<typename DocumentAttributesT = DocumentAttribute>
    RelevantContent& AddDocumentAttributes(DocumentAttributesT&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.emplace_back(std::forward<DocumentAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attributes related to the relevance score of the content.</p>
     */
    inline const ScoreAttributes& GetScoreAttributes() const { return m_scoreAttributes; }
    inline bool ScoreAttributesHasBeenSet() const { return m_scoreAttributesHasBeenSet; }
    template<typename ScoreAttributesT = ScoreAttributes>
    void SetScoreAttributes(ScoreAttributesT&& value) { m_scoreAttributesHasBeenSet = true; m_scoreAttributes = std::forward<ScoreAttributesT>(value); }
    template<typename ScoreAttributesT = ScoreAttributes>
    RelevantContent& WithScoreAttributes(ScoreAttributesT&& value) { SetScoreAttributes(std::forward<ScoreAttributesT>(value)); return *this;}
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
