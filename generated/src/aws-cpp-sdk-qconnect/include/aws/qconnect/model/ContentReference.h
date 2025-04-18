/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ReferenceType.h>
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
   * <p>Reference information about the content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ContentReference">AWS
   * API Reference</a></p>
   */
  class ContentReference
  {
  public:
    AWS_QCONNECT_API ContentReference() = default;
    AWS_QCONNECT_API ContentReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ContentReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    template<typename KnowledgeBaseArnT = Aws::String>
    void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value); }
    template<typename KnowledgeBaseArnT = Aws::String>
    ContentReference& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) { SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    ContentReference& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline const Aws::String& GetContentArn() const { return m_contentArn; }
    inline bool ContentArnHasBeenSet() const { return m_contentArnHasBeenSet; }
    template<typename ContentArnT = Aws::String>
    void SetContentArn(ContentArnT&& value) { m_contentArnHasBeenSet = true; m_contentArn = std::forward<ContentArnT>(value); }
    template<typename ContentArnT = Aws::String>
    ContentReference& WithContentArn(ContentArnT&& value) { SetContentArn(std::forward<ContentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the content.</p>
     */
    inline const Aws::String& GetContentId() const { return m_contentId; }
    inline bool ContentIdHasBeenSet() const { return m_contentIdHasBeenSet; }
    template<typename ContentIdT = Aws::String>
    void SetContentId(ContentIdT&& value) { m_contentIdHasBeenSet = true; m_contentId = std::forward<ContentIdT>(value); }
    template<typename ContentIdT = Aws::String>
    ContentReference& WithContentId(ContentIdT&& value) { SetContentId(std::forward<ContentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The web URL of the source content.</p>
     */
    inline const Aws::String& GetSourceURL() const { return m_sourceURL; }
    inline bool SourceURLHasBeenSet() const { return m_sourceURLHasBeenSet; }
    template<typename SourceURLT = Aws::String>
    void SetSourceURL(SourceURLT&& value) { m_sourceURLHasBeenSet = true; m_sourceURL = std::forward<SourceURLT>(value); }
    template<typename SourceURLT = Aws::String>
    ContentReference& WithSourceURL(SourceURLT&& value) { SetSourceURL(std::forward<SourceURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of reference content.</p>
     */
    inline ReferenceType GetReferenceType() const { return m_referenceType; }
    inline bool ReferenceTypeHasBeenSet() const { return m_referenceTypeHasBeenSet; }
    inline void SetReferenceType(ReferenceType value) { m_referenceTypeHasBeenSet = true; m_referenceType = value; }
    inline ContentReference& WithReferenceType(ReferenceType value) { SetReferenceType(value); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_contentArn;
    bool m_contentArnHasBeenSet = false;

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    Aws::String m_sourceURL;
    bool m_sourceURLHasBeenSet = false;

    ReferenceType m_referenceType{ReferenceType::NOT_SET};
    bool m_referenceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
