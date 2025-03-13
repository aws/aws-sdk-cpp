/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/ConnectWisdomServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

  /**
   */
  class GetContentSummaryRequest : public ConnectWisdomServiceRequest
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API GetContentSummaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContentSummary"; }

    AWS_CONNECTWISDOMSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the content. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline const Aws::String& GetContentId() const { return m_contentId; }
    inline bool ContentIdHasBeenSet() const { return m_contentIdHasBeenSet; }
    template<typename ContentIdT = Aws::String>
    void SetContentId(ContentIdT&& value) { m_contentIdHasBeenSet = true; m_contentId = std::forward<ContentIdT>(value); }
    template<typename ContentIdT = Aws::String>
    GetContentSummaryRequest& WithContentId(ContentIdT&& value) { SetContentId(std::forward<ContentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    GetContentSummaryRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
