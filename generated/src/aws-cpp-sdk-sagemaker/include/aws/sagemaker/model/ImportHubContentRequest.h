/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubContentType.h>
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
    AWS_SAGEMAKER_API ImportHubContentRequest();

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
    inline const Aws::String& GetHubContentName() const{ return m_hubContentName; }
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
    inline void SetHubContentName(const Aws::String& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = value; }
    inline void SetHubContentName(Aws::String&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::move(value); }
    inline void SetHubContentName(const char* value) { m_hubContentNameHasBeenSet = true; m_hubContentName.assign(value); }
    inline ImportHubContentRequest& WithHubContentName(const Aws::String& value) { SetHubContentName(value); return *this;}
    inline ImportHubContentRequest& WithHubContentName(Aws::String&& value) { SetHubContentName(std::move(value)); return *this;}
    inline ImportHubContentRequest& WithHubContentName(const char* value) { SetHubContentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentVersion() const{ return m_hubContentVersion; }
    inline bool HubContentVersionHasBeenSet() const { return m_hubContentVersionHasBeenSet; }
    inline void SetHubContentVersion(const Aws::String& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = value; }
    inline void SetHubContentVersion(Aws::String&& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = std::move(value); }
    inline void SetHubContentVersion(const char* value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion.assign(value); }
    inline ImportHubContentRequest& WithHubContentVersion(const Aws::String& value) { SetHubContentVersion(value); return *this;}
    inline ImportHubContentRequest& WithHubContentVersion(Aws::String&& value) { SetHubContentVersion(std::move(value)); return *this;}
    inline ImportHubContentRequest& WithHubContentVersion(const char* value) { SetHubContentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hub content to import.</p>
     */
    inline const HubContentType& GetHubContentType() const{ return m_hubContentType; }
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }
    inline void SetHubContentType(const HubContentType& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }
    inline void SetHubContentType(HubContentType&& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = std::move(value); }
    inline ImportHubContentRequest& WithHubContentType(const HubContentType& value) { SetHubContentType(value); return *this;}
    inline ImportHubContentRequest& WithHubContentType(HubContentType&& value) { SetHubContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the hub content schema to import.</p>
     */
    inline const Aws::String& GetDocumentSchemaVersion() const{ return m_documentSchemaVersion; }
    inline bool DocumentSchemaVersionHasBeenSet() const { return m_documentSchemaVersionHasBeenSet; }
    inline void SetDocumentSchemaVersion(const Aws::String& value) { m_documentSchemaVersionHasBeenSet = true; m_documentSchemaVersion = value; }
    inline void SetDocumentSchemaVersion(Aws::String&& value) { m_documentSchemaVersionHasBeenSet = true; m_documentSchemaVersion = std::move(value); }
    inline void SetDocumentSchemaVersion(const char* value) { m_documentSchemaVersionHasBeenSet = true; m_documentSchemaVersion.assign(value); }
    inline ImportHubContentRequest& WithDocumentSchemaVersion(const Aws::String& value) { SetDocumentSchemaVersion(value); return *this;}
    inline ImportHubContentRequest& WithDocumentSchemaVersion(Aws::String&& value) { SetDocumentSchemaVersion(std::move(value)); return *this;}
    inline ImportHubContentRequest& WithDocumentSchemaVersion(const char* value) { SetDocumentSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hub to import content into.</p>
     */
    inline const Aws::String& GetHubName() const{ return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    inline void SetHubName(const Aws::String& value) { m_hubNameHasBeenSet = true; m_hubName = value; }
    inline void SetHubName(Aws::String&& value) { m_hubNameHasBeenSet = true; m_hubName = std::move(value); }
    inline void SetHubName(const char* value) { m_hubNameHasBeenSet = true; m_hubName.assign(value); }
    inline ImportHubContentRequest& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}
    inline ImportHubContentRequest& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}
    inline ImportHubContentRequest& WithHubName(const char* value) { SetHubName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentDisplayName() const{ return m_hubContentDisplayName; }
    inline bool HubContentDisplayNameHasBeenSet() const { return m_hubContentDisplayNameHasBeenSet; }
    inline void SetHubContentDisplayName(const Aws::String& value) { m_hubContentDisplayNameHasBeenSet = true; m_hubContentDisplayName = value; }
    inline void SetHubContentDisplayName(Aws::String&& value) { m_hubContentDisplayNameHasBeenSet = true; m_hubContentDisplayName = std::move(value); }
    inline void SetHubContentDisplayName(const char* value) { m_hubContentDisplayNameHasBeenSet = true; m_hubContentDisplayName.assign(value); }
    inline ImportHubContentRequest& WithHubContentDisplayName(const Aws::String& value) { SetHubContentDisplayName(value); return *this;}
    inline ImportHubContentRequest& WithHubContentDisplayName(Aws::String&& value) { SetHubContentDisplayName(std::move(value)); return *this;}
    inline ImportHubContentRequest& WithHubContentDisplayName(const char* value) { SetHubContentDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentDescription() const{ return m_hubContentDescription; }
    inline bool HubContentDescriptionHasBeenSet() const { return m_hubContentDescriptionHasBeenSet; }
    inline void SetHubContentDescription(const Aws::String& value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription = value; }
    inline void SetHubContentDescription(Aws::String&& value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription = std::move(value); }
    inline void SetHubContentDescription(const char* value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription.assign(value); }
    inline ImportHubContentRequest& WithHubContentDescription(const Aws::String& value) { SetHubContentDescription(value); return *this;}
    inline ImportHubContentRequest& WithHubContentDescription(Aws::String&& value) { SetHubContentDescription(std::move(value)); return *this;}
    inline ImportHubContentRequest& WithHubContentDescription(const char* value) { SetHubContentDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that provides a description of the hub content. This string can
     * include links, tables, and standard markdown formating.</p>
     */
    inline const Aws::String& GetHubContentMarkdown() const{ return m_hubContentMarkdown; }
    inline bool HubContentMarkdownHasBeenSet() const { return m_hubContentMarkdownHasBeenSet; }
    inline void SetHubContentMarkdown(const Aws::String& value) { m_hubContentMarkdownHasBeenSet = true; m_hubContentMarkdown = value; }
    inline void SetHubContentMarkdown(Aws::String&& value) { m_hubContentMarkdownHasBeenSet = true; m_hubContentMarkdown = std::move(value); }
    inline void SetHubContentMarkdown(const char* value) { m_hubContentMarkdownHasBeenSet = true; m_hubContentMarkdown.assign(value); }
    inline ImportHubContentRequest& WithHubContentMarkdown(const Aws::String& value) { SetHubContentMarkdown(value); return *this;}
    inline ImportHubContentRequest& WithHubContentMarkdown(Aws::String&& value) { SetHubContentMarkdown(std::move(value)); return *this;}
    inline ImportHubContentRequest& WithHubContentMarkdown(const char* value) { SetHubContentMarkdown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline const Aws::String& GetHubContentDocument() const{ return m_hubContentDocument; }
    inline bool HubContentDocumentHasBeenSet() const { return m_hubContentDocumentHasBeenSet; }
    inline void SetHubContentDocument(const Aws::String& value) { m_hubContentDocumentHasBeenSet = true; m_hubContentDocument = value; }
    inline void SetHubContentDocument(Aws::String&& value) { m_hubContentDocumentHasBeenSet = true; m_hubContentDocument = std::move(value); }
    inline void SetHubContentDocument(const char* value) { m_hubContentDocumentHasBeenSet = true; m_hubContentDocument.assign(value); }
    inline ImportHubContentRequest& WithHubContentDocument(const Aws::String& value) { SetHubContentDocument(value); return *this;}
    inline ImportHubContentRequest& WithHubContentDocument(Aws::String&& value) { SetHubContentDocument(std::move(value)); return *this;}
    inline ImportHubContentRequest& WithHubContentDocument(const char* value) { SetHubContentDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubContentSearchKeywords() const{ return m_hubContentSearchKeywords; }
    inline bool HubContentSearchKeywordsHasBeenSet() const { return m_hubContentSearchKeywordsHasBeenSet; }
    inline void SetHubContentSearchKeywords(const Aws::Vector<Aws::String>& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords = value; }
    inline void SetHubContentSearchKeywords(Aws::Vector<Aws::String>&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords = std::move(value); }
    inline ImportHubContentRequest& WithHubContentSearchKeywords(const Aws::Vector<Aws::String>& value) { SetHubContentSearchKeywords(value); return *this;}
    inline ImportHubContentRequest& WithHubContentSearchKeywords(Aws::Vector<Aws::String>&& value) { SetHubContentSearchKeywords(std::move(value)); return *this;}
    inline ImportHubContentRequest& AddHubContentSearchKeywords(const Aws::String& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.push_back(value); return *this; }
    inline ImportHubContentRequest& AddHubContentSearchKeywords(Aws::String&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.push_back(std::move(value)); return *this; }
    inline ImportHubContentRequest& AddHubContentSearchKeywords(const char* value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any tags associated with the hub content.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ImportHubContentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ImportHubContentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ImportHubContentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ImportHubContentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;

    Aws::String m_hubContentVersion;
    bool m_hubContentVersionHasBeenSet = false;

    HubContentType m_hubContentType;
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

    Aws::Vector<Aws::String> m_hubContentSearchKeywords;
    bool m_hubContentSearchKeywordsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
