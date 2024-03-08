/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class GetContentSummaryRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API GetContentSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContentSummary"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the content. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline const Aws::String& GetContentId() const{ return m_contentId; }

    /**
     * <p>The identifier of the content. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline bool ContentIdHasBeenSet() const { return m_contentIdHasBeenSet; }

    /**
     * <p>The identifier of the content. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline void SetContentId(const Aws::String& value) { m_contentIdHasBeenSet = true; m_contentId = value; }

    /**
     * <p>The identifier of the content. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline void SetContentId(Aws::String&& value) { m_contentIdHasBeenSet = true; m_contentId = std::move(value); }

    /**
     * <p>The identifier of the content. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline void SetContentId(const char* value) { m_contentIdHasBeenSet = true; m_contentId.assign(value); }

    /**
     * <p>The identifier of the content. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline GetContentSummaryRequest& WithContentId(const Aws::String& value) { SetContentId(value); return *this;}

    /**
     * <p>The identifier of the content. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline GetContentSummaryRequest& WithContentId(Aws::String&& value) { SetContentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the content. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline GetContentSummaryRequest& WithContentId(const char* value) { SetContentId(value); return *this;}


    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline GetContentSummaryRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline GetContentSummaryRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline GetContentSummaryRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}

  private:

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
