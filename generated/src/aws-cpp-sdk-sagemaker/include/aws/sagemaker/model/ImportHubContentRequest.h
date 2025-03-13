/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubContentType.h>
#include <aws/sagemaker/model/HubContentSupportStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ImportHubContentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ImportHubContentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportHubContent"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentName() const { return m_hubContentName; }
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
    template<typename HubContentNameT = Aws::String>
    void SetHubContentName(HubContentNameT&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::forward<HubContentNameT>(value); }
    template<typename HubContentNameT = Aws::String>
    ImportHubContentRequest& WithHubContentName(HubContentNameT&& value) { SetHubContentName(std::forward<HubContentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentVersion() const { return m_hubContentVersion; }
    inline bool HubContentVersionHasBeenSet() const { return m_hubContentVersionHasBeenSet; }
    template<typename HubContentVersionT = Aws::String>
    void SetHubContentVersion(HubContentVersionT&& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = std::forward<HubContentVersionT>(value); }
    template<typename HubContentVersionT = Aws::String>
    ImportHubContentRequest& WithHubContentVersion(HubContentVersionT&& value) { SetHubContentVersion(std::forward<HubContentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hub content to import.</p>
     */
    inline HubContentType GetHubContentType() const { return m_hubContentType; }
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }
    inline void SetHubContentType(HubContentType value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }
    inline ImportHubContentRequest& WithHubContentType(HubContentType value) { SetHubContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the hub content schema to import.</p>
     */
    inline const Aws::String& GetDocumentSchemaVersion() const { return m_documentSchemaVersion; }
    inline bool DocumentSchemaVersionHasBeenSet() const { return m_documentSchemaVersionHasBeenSet; }
    template<typename DocumentSchemaVersionT = Aws::String>
    void SetDocumentSchemaVersion(DocumentSchemaVersionT&& value) { m_documentSchemaVersionHasBeenSet = true; m_documentSchemaVersion = std::forward<DocumentSchemaVersionT>(value); }
    template<typename DocumentSchemaVersionT = Aws::String>
    ImportHubContentRequest& WithDocumentSchemaVersion(DocumentSchemaVersionT&& value) { SetDocumentSchemaVersion(std::forward<DocumentSchemaVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hub to import content into.</p>
     */
    inline const Aws::String& GetHubName() const { return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    template<typename HubNameT = Aws::String>
    void SetHubName(HubNameT&& value) { m_hubNameHasBeenSet = true; m_hubName = std::forward<HubNameT>(value); }
    template<typename HubNameT = Aws::String>
    ImportHubContentRequest& WithHubName(HubNameT&& value) { SetHubName(std::forward<HubNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentDisplayName() const { return m_hubContentDisplayName; }
    inline bool HubContentDisplayNameHasBeenSet() const { return m_hubContentDisplayNameHasBeenSet; }
    template<typename HubContentDisplayNameT = Aws::String>
    void SetHubContentDisplayName(HubContentDisplayNameT&& value) { m_hubContentDisplayNameHasBeenSet = true; m_hubContentDisplayName = std::forward<HubContentDisplayNameT>(value); }
    template<typename HubContentDisplayNameT = Aws::String>
    ImportHubContentRequest& WithHubContentDisplayName(HubContentDisplayNameT&& value) { SetHubContentDisplayName(std::forward<HubContentDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentDescription() const { return m_hubContentDescription; }
    inline bool HubContentDescriptionHasBeenSet() const { return m_hubContentDescriptionHasBeenSet; }
    template<typename HubContentDescriptionT = Aws::String>
    void SetHubContentDescription(HubContentDescriptionT&& value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription = std::forward<HubContentDescriptionT>(value); }
    template<typename HubContentDescriptionT = Aws::String>
    ImportHubContentRequest& WithHubContentDescription(HubContentDescriptionT&& value) { SetHubContentDescription(std::forward<HubContentDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that provides a description of the hub content. This string can
     * include links, tables, and standard markdown formating.</p>
     */
    inline const Aws::String& GetHubContentMarkdown() const { return m_hubContentMarkdown; }
    inline bool HubContentMarkdownHasBeenSet() const { return m_hubContentMarkdownHasBeenSet; }
    template<typename HubContentMarkdownT = Aws::String>
    void SetHubContentMarkdown(HubContentMarkdownT&& value) { m_hubContentMarkdownHasBeenSet = true; m_hubContentMarkdown = std::forward<HubContentMarkdownT>(value); }
    template<typename HubContentMarkdownT = Aws::String>
    ImportHubContentRequest& WithHubContentMarkdown(HubContentMarkdownT&& value) { SetHubContentMarkdown(std::forward<HubContentMarkdownT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline const Aws::String& GetHubContentDocument() const { return m_hubContentDocument; }
    inline bool HubContentDocumentHasBeenSet() const { return m_hubContentDocumentHasBeenSet; }
    template<typename HubContentDocumentT = Aws::String>
    void SetHubContentDocument(HubContentDocumentT&& value) { m_hubContentDocumentHasBeenSet = true; m_hubContentDocument = std::forward<HubContentDocumentT>(value); }
    template<typename HubContentDocumentT = Aws::String>
    ImportHubContentRequest& WithHubContentDocument(HubContentDocumentT&& value) { SetHubContentDocument(std::forward<HubContentDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the hub content resource.</p>
     */
    inline HubContentSupportStatus GetSupportStatus() const { return m_supportStatus; }
    inline bool SupportStatusHasBeenSet() const { return m_supportStatusHasBeenSet; }
    inline void SetSupportStatus(HubContentSupportStatus value) { m_supportStatusHasBeenSet = true; m_supportStatus = value; }
    inline ImportHubContentRequest& WithSupportStatus(HubContentSupportStatus value) { SetSupportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubContentSearchKeywords() const { return m_hubContentSearchKeywords; }
    inline bool HubContentSearchKeywordsHasBeenSet() const { return m_hubContentSearchKeywordsHasBeenSet; }
    template<typename HubContentSearchKeywordsT = Aws::Vector<Aws::String>>
    void SetHubContentSearchKeywords(HubContentSearchKeywordsT&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords = std::forward<HubContentSearchKeywordsT>(value); }
    template<typename HubContentSearchKeywordsT = Aws::Vector<Aws::String>>
    ImportHubContentRequest& WithHubContentSearchKeywords(HubContentSearchKeywordsT&& value) { SetHubContentSearchKeywords(std::forward<HubContentSearchKeywordsT>(value)); return *this;}
    template<typename HubContentSearchKeywordsT = Aws::String>
    ImportHubContentRequest& AddHubContentSearchKeywords(HubContentSearchKeywordsT&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.emplace_back(std::forward<HubContentSearchKeywordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any tags associated with the hub content.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ImportHubContentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ImportHubContentRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;

    Aws::String m_hubContentVersion;
    bool m_hubContentVersionHasBeenSet = false;

    HubContentType m_hubContentType{HubContentType::NOT_SET};
    bool m_hubContentTypeHasBeenSet = false;

    Aws::String m_documentSchemaVersion;
    bool m_documentSchemaVersionHasBeenSet = false;

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    Aws::String m_hubContentDisplayName;
    bool m_hubContentDisplayNameHasBeenSet = false;

    Aws::String m_hubContentDescription;
    bool m_hubContentDescriptionHasBeenSet = false;

    Aws::String m_hubContentMarkdown;
    bool m_hubContentMarkdownHasBeenSet = false;

    Aws::String m_hubContentDocument;
    bool m_hubContentDocumentHasBeenSet = false;

    HubContentSupportStatus m_supportStatus{HubContentSupportStatus::NOT_SET};
    bool m_supportStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_hubContentSearchKeywords;
    bool m_hubContentSearchKeywordsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
