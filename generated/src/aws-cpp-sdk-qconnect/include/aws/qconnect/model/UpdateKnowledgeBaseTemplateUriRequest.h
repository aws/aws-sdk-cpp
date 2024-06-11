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
  class UpdateKnowledgeBaseTemplateUriRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API UpdateKnowledgeBaseTemplateUriRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKnowledgeBaseTemplateUri"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base. Can be either the ID or the ARN. URLs cannot contain the
     * ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline UpdateKnowledgeBaseTemplateUriRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline UpdateKnowledgeBaseTemplateUriRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline UpdateKnowledgeBaseTemplateUriRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template URI to update.</p>
     */
    inline const Aws::String& GetTemplateUri() const{ return m_templateUri; }
    inline bool TemplateUriHasBeenSet() const { return m_templateUriHasBeenSet; }
    inline void SetTemplateUri(const Aws::String& value) { m_templateUriHasBeenSet = true; m_templateUri = value; }
    inline void SetTemplateUri(Aws::String&& value) { m_templateUriHasBeenSet = true; m_templateUri = std::move(value); }
    inline void SetTemplateUri(const char* value) { m_templateUriHasBeenSet = true; m_templateUri.assign(value); }
    inline UpdateKnowledgeBaseTemplateUriRequest& WithTemplateUri(const Aws::String& value) { SetTemplateUri(value); return *this;}
    inline UpdateKnowledgeBaseTemplateUriRequest& WithTemplateUri(Aws::String&& value) { SetTemplateUri(std::move(value)); return *this;}
    inline UpdateKnowledgeBaseTemplateUriRequest& WithTemplateUri(const char* value) { SetTemplateUri(value); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_templateUri;
    bool m_templateUriHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
