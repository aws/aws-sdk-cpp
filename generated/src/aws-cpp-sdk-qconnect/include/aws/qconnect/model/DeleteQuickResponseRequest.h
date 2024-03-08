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
  class DeleteQuickResponseRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API DeleteQuickResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteQuickResponse"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The knowledge base from which the quick response is deleted. The identifier
     * of the knowledge base. This should not be a QUICK_RESPONSES type knowledge base
     * if you're storing Amazon Q Content resource to it.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The knowledge base from which the quick response is deleted. The identifier
     * of the knowledge base. This should not be a QUICK_RESPONSES type knowledge base
     * if you're storing Amazon Q Content resource to it.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The knowledge base from which the quick response is deleted. The identifier
     * of the knowledge base. This should not be a QUICK_RESPONSES type knowledge base
     * if you're storing Amazon Q Content resource to it.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The knowledge base from which the quick response is deleted. The identifier
     * of the knowledge base. This should not be a QUICK_RESPONSES type knowledge base
     * if you're storing Amazon Q Content resource to it.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The knowledge base from which the quick response is deleted. The identifier
     * of the knowledge base. This should not be a QUICK_RESPONSES type knowledge base
     * if you're storing Amazon Q Content resource to it.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The knowledge base from which the quick response is deleted. The identifier
     * of the knowledge base. This should not be a QUICK_RESPONSES type knowledge base
     * if you're storing Amazon Q Content resource to it.</p>
     */
    inline DeleteQuickResponseRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The knowledge base from which the quick response is deleted. The identifier
     * of the knowledge base. This should not be a QUICK_RESPONSES type knowledge base
     * if you're storing Amazon Q Content resource to it.</p>
     */
    inline DeleteQuickResponseRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The knowledge base from which the quick response is deleted. The identifier
     * of the knowledge base. This should not be a QUICK_RESPONSES type knowledge base
     * if you're storing Amazon Q Content resource to it.</p>
     */
    inline DeleteQuickResponseRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The identifier of the quick response to delete.</p>
     */
    inline const Aws::String& GetQuickResponseId() const{ return m_quickResponseId; }

    /**
     * <p>The identifier of the quick response to delete.</p>
     */
    inline bool QuickResponseIdHasBeenSet() const { return m_quickResponseIdHasBeenSet; }

    /**
     * <p>The identifier of the quick response to delete.</p>
     */
    inline void SetQuickResponseId(const Aws::String& value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId = value; }

    /**
     * <p>The identifier of the quick response to delete.</p>
     */
    inline void SetQuickResponseId(Aws::String&& value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId = std::move(value); }

    /**
     * <p>The identifier of the quick response to delete.</p>
     */
    inline void SetQuickResponseId(const char* value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId.assign(value); }

    /**
     * <p>The identifier of the quick response to delete.</p>
     */
    inline DeleteQuickResponseRequest& WithQuickResponseId(const Aws::String& value) { SetQuickResponseId(value); return *this;}

    /**
     * <p>The identifier of the quick response to delete.</p>
     */
    inline DeleteQuickResponseRequest& WithQuickResponseId(Aws::String&& value) { SetQuickResponseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the quick response to delete.</p>
     */
    inline DeleteQuickResponseRequest& WithQuickResponseId(const char* value) { SetQuickResponseId(value); return *this;}

  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_quickResponseId;
    bool m_quickResponseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
