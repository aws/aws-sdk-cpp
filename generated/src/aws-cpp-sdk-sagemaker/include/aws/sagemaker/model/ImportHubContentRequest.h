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


    /**
     * <p>The name of the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentName() const{ return m_hubContentName; }

    /**
     * <p>The name of the hub content to import.</p>
     */
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }

    /**
     * <p>The name of the hub content to import.</p>
     */
    inline void SetHubContentName(const Aws::String& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = value; }

    /**
     * <p>The name of the hub content to import.</p>
     */
    inline void SetHubContentName(Aws::String&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::move(value); }

    /**
     * <p>The name of the hub content to import.</p>
     */
    inline void SetHubContentName(const char* value) { m_hubContentNameHasBeenSet = true; m_hubContentName.assign(value); }

    /**
     * <p>The name of the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentName(const Aws::String& value) { SetHubContentName(value); return *this;}

    /**
     * <p>The name of the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentName(Aws::String&& value) { SetHubContentName(std::move(value)); return *this;}

    /**
     * <p>The name of the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentName(const char* value) { SetHubContentName(value); return *this;}


    /**
     * <p>The version of the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentVersion() const{ return m_hubContentVersion; }

    /**
     * <p>The version of the hub content to import.</p>
     */
    inline bool HubContentVersionHasBeenSet() const { return m_hubContentVersionHasBeenSet; }

    /**
     * <p>The version of the hub content to import.</p>
     */
    inline void SetHubContentVersion(const Aws::String& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = value; }

    /**
     * <p>The version of the hub content to import.</p>
     */
    inline void SetHubContentVersion(Aws::String&& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = std::move(value); }

    /**
     * <p>The version of the hub content to import.</p>
     */
    inline void SetHubContentVersion(const char* value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion.assign(value); }

    /**
     * <p>The version of the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentVersion(const Aws::String& value) { SetHubContentVersion(value); return *this;}

    /**
     * <p>The version of the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentVersion(Aws::String&& value) { SetHubContentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentVersion(const char* value) { SetHubContentVersion(value); return *this;}


    /**
     * <p>The type of hub content to import.</p>
     */
    inline const HubContentType& GetHubContentType() const{ return m_hubContentType; }

    /**
     * <p>The type of hub content to import.</p>
     */
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }

    /**
     * <p>The type of hub content to import.</p>
     */
    inline void SetHubContentType(const HubContentType& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }

    /**
     * <p>The type of hub content to import.</p>
     */
    inline void SetHubContentType(HubContentType&& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = std::move(value); }

    /**
     * <p>The type of hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentType(const HubContentType& value) { SetHubContentType(value); return *this;}

    /**
     * <p>The type of hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentType(HubContentType&& value) { SetHubContentType(std::move(value)); return *this;}


    /**
     * <p>The version of the hub content schema to import.</p>
     */
    inline const Aws::String& GetDocumentSchemaVersion() const{ return m_documentSchemaVersion; }

    /**
     * <p>The version of the hub content schema to import.</p>
     */
    inline bool DocumentSchemaVersionHasBeenSet() const { return m_documentSchemaVersionHasBeenSet; }

    /**
     * <p>The version of the hub content schema to import.</p>
     */
    inline void SetDocumentSchemaVersion(const Aws::String& value) { m_documentSchemaVersionHasBeenSet = true; m_documentSchemaVersion = value; }

    /**
     * <p>The version of the hub content schema to import.</p>
     */
    inline void SetDocumentSchemaVersion(Aws::String&& value) { m_documentSchemaVersionHasBeenSet = true; m_documentSchemaVersion = std::move(value); }

    /**
     * <p>The version of the hub content schema to import.</p>
     */
    inline void SetDocumentSchemaVersion(const char* value) { m_documentSchemaVersionHasBeenSet = true; m_documentSchemaVersion.assign(value); }

    /**
     * <p>The version of the hub content schema to import.</p>
     */
    inline ImportHubContentRequest& WithDocumentSchemaVersion(const Aws::String& value) { SetDocumentSchemaVersion(value); return *this;}

    /**
     * <p>The version of the hub content schema to import.</p>
     */
    inline ImportHubContentRequest& WithDocumentSchemaVersion(Aws::String&& value) { SetDocumentSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the hub content schema to import.</p>
     */
    inline ImportHubContentRequest& WithDocumentSchemaVersion(const char* value) { SetDocumentSchemaVersion(value); return *this;}


    /**
     * <p>The name of the hub to import content into.</p>
     */
    inline const Aws::String& GetHubName() const{ return m_hubName; }

    /**
     * <p>The name of the hub to import content into.</p>
     */
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }

    /**
     * <p>The name of the hub to import content into.</p>
     */
    inline void SetHubName(const Aws::String& value) { m_hubNameHasBeenSet = true; m_hubName = value; }

    /**
     * <p>The name of the hub to import content into.</p>
     */
    inline void SetHubName(Aws::String&& value) { m_hubNameHasBeenSet = true; m_hubName = std::move(value); }

    /**
     * <p>The name of the hub to import content into.</p>
     */
    inline void SetHubName(const char* value) { m_hubNameHasBeenSet = true; m_hubName.assign(value); }

    /**
     * <p>The name of the hub to import content into.</p>
     */
    inline ImportHubContentRequest& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}

    /**
     * <p>The name of the hub to import content into.</p>
     */
    inline ImportHubContentRequest& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}

    /**
     * <p>The name of the hub to import content into.</p>
     */
    inline ImportHubContentRequest& WithHubName(const char* value) { SetHubName(value); return *this;}


    /**
     * <p>The display name of the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentDisplayName() const{ return m_hubContentDisplayName; }

    /**
     * <p>The display name of the hub content to import.</p>
     */
    inline bool HubContentDisplayNameHasBeenSet() const { return m_hubContentDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the hub content to import.</p>
     */
    inline void SetHubContentDisplayName(const Aws::String& value) { m_hubContentDisplayNameHasBeenSet = true; m_hubContentDisplayName = value; }

    /**
     * <p>The display name of the hub content to import.</p>
     */
    inline void SetHubContentDisplayName(Aws::String&& value) { m_hubContentDisplayNameHasBeenSet = true; m_hubContentDisplayName = std::move(value); }

    /**
     * <p>The display name of the hub content to import.</p>
     */
    inline void SetHubContentDisplayName(const char* value) { m_hubContentDisplayNameHasBeenSet = true; m_hubContentDisplayName.assign(value); }

    /**
     * <p>The display name of the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentDisplayName(const Aws::String& value) { SetHubContentDisplayName(value); return *this;}

    /**
     * <p>The display name of the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentDisplayName(Aws::String&& value) { SetHubContentDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentDisplayName(const char* value) { SetHubContentDisplayName(value); return *this;}


    /**
     * <p>A description of the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentDescription() const{ return m_hubContentDescription; }

    /**
     * <p>A description of the hub content to import.</p>
     */
    inline bool HubContentDescriptionHasBeenSet() const { return m_hubContentDescriptionHasBeenSet; }

    /**
     * <p>A description of the hub content to import.</p>
     */
    inline void SetHubContentDescription(const Aws::String& value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription = value; }

    /**
     * <p>A description of the hub content to import.</p>
     */
    inline void SetHubContentDescription(Aws::String&& value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription = std::move(value); }

    /**
     * <p>A description of the hub content to import.</p>
     */
    inline void SetHubContentDescription(const char* value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription.assign(value); }

    /**
     * <p>A description of the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentDescription(const Aws::String& value) { SetHubContentDescription(value); return *this;}

    /**
     * <p>A description of the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentDescription(Aws::String&& value) { SetHubContentDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentDescription(const char* value) { SetHubContentDescription(value); return *this;}


    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentMarkdown() const{ return m_hubContentMarkdown; }

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline bool HubContentMarkdownHasBeenSet() const { return m_hubContentMarkdownHasBeenSet; }

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline void SetHubContentMarkdown(const Aws::String& value) { m_hubContentMarkdownHasBeenSet = true; m_hubContentMarkdown = value; }

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline void SetHubContentMarkdown(Aws::String&& value) { m_hubContentMarkdownHasBeenSet = true; m_hubContentMarkdown = std::move(value); }

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline void SetHubContentMarkdown(const char* value) { m_hubContentMarkdownHasBeenSet = true; m_hubContentMarkdown.assign(value); }

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentMarkdown(const Aws::String& value) { SetHubContentMarkdown(value); return *this;}

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentMarkdown(Aws::String&& value) { SetHubContentMarkdown(std::move(value)); return *this;}

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline ImportHubContentRequest& WithHubContentMarkdown(const char* value) { SetHubContentMarkdown(value); return *this;}


    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline const Aws::String& GetHubContentDocument() const{ return m_hubContentDocument; }

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline bool HubContentDocumentHasBeenSet() const { return m_hubContentDocumentHasBeenSet; }

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline void SetHubContentDocument(const Aws::String& value) { m_hubContentDocumentHasBeenSet = true; m_hubContentDocument = value; }

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline void SetHubContentDocument(Aws::String&& value) { m_hubContentDocumentHasBeenSet = true; m_hubContentDocument = std::move(value); }

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline void SetHubContentDocument(const char* value) { m_hubContentDocumentHasBeenSet = true; m_hubContentDocument.assign(value); }

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline ImportHubContentRequest& WithHubContentDocument(const Aws::String& value) { SetHubContentDocument(value); return *this;}

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline ImportHubContentRequest& WithHubContentDocument(Aws::String&& value) { SetHubContentDocument(std::move(value)); return *this;}

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline ImportHubContentRequest& WithHubContentDocument(const char* value) { SetHubContentDocument(value); return *this;}


    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubContentSearchKeywords() const{ return m_hubContentSearchKeywords; }

    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline bool HubContentSearchKeywordsHasBeenSet() const { return m_hubContentSearchKeywordsHasBeenSet; }

    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline void SetHubContentSearchKeywords(const Aws::Vector<Aws::String>& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords = value; }

    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline void SetHubContentSearchKeywords(Aws::Vector<Aws::String>&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords = std::move(value); }

    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline ImportHubContentRequest& WithHubContentSearchKeywords(const Aws::Vector<Aws::String>& value) { SetHubContentSearchKeywords(value); return *this;}

    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline ImportHubContentRequest& WithHubContentSearchKeywords(Aws::Vector<Aws::String>&& value) { SetHubContentSearchKeywords(std::move(value)); return *this;}

    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline ImportHubContentRequest& AddHubContentSearchKeywords(const Aws::String& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.push_back(value); return *this; }

    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline ImportHubContentRequest& AddHubContentSearchKeywords(Aws::String&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.push_back(std::move(value)); return *this; }

    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline ImportHubContentRequest& AddHubContentSearchKeywords(const char* value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.push_back(value); return *this; }


    /**
     * <p>Any tags associated with the hub content.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags associated with the hub content.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags associated with the hub content.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags associated with the hub content.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags associated with the hub content.</p>
     */
    inline ImportHubContentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags associated with the hub content.</p>
     */
    inline ImportHubContentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags associated with the hub content.</p>
     */
    inline ImportHubContentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags associated with the hub content.</p>
     */
    inline ImportHubContentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
