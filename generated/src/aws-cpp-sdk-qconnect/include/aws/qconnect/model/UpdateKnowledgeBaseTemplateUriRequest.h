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
    AWS_QCONNECT_API UpdateKnowledgeBaseTemplateUriRequest() = default;

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
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    UpdateKnowledgeBaseTemplateUriRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template URI to update.</p>
     */
    inline const Aws::String& GetTemplateUri() const { return m_templateUri; }
    inline bool TemplateUriHasBeenSet() const { return m_templateUriHasBeenSet; }
    template<typename TemplateUriT = Aws::String>
    void SetTemplateUri(TemplateUriT&& value) { m_templateUriHasBeenSet = true; m_templateUri = std::forward<TemplateUriT>(value); }
    template<typename TemplateUriT = Aws::String>
    UpdateKnowledgeBaseTemplateUriRequest& WithTemplateUri(TemplateUriT&& value) { SetTemplateUri(std::forward<TemplateUriT>(value)); return *this;}
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
