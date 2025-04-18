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
  class GetQuickResponseRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API GetQuickResponseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQuickResponse"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the quick response.</p>
     */
    inline const Aws::String& GetQuickResponseId() const { return m_quickResponseId; }
    inline bool QuickResponseIdHasBeenSet() const { return m_quickResponseIdHasBeenSet; }
    template<typename QuickResponseIdT = Aws::String>
    void SetQuickResponseId(QuickResponseIdT&& value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId = std::forward<QuickResponseIdT>(value); }
    template<typename QuickResponseIdT = Aws::String>
    GetQuickResponseRequest& WithQuickResponseId(QuickResponseIdT&& value) { SetQuickResponseId(std::forward<QuickResponseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base. This should be a QUICK_RESPONSES type
     * knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    GetQuickResponseRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_quickResponseId;
    bool m_quickResponseIdHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
