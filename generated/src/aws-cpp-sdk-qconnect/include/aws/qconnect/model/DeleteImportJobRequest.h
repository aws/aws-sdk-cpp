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
  class DeleteImportJobRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API DeleteImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteImportJob"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the import job to be deleted.</p>
     */
    inline const Aws::String& GetImportJobId() const{ return m_importJobId; }

    /**
     * <p>The identifier of the import job to be deleted.</p>
     */
    inline bool ImportJobIdHasBeenSet() const { return m_importJobIdHasBeenSet; }

    /**
     * <p>The identifier of the import job to be deleted.</p>
     */
    inline void SetImportJobId(const Aws::String& value) { m_importJobIdHasBeenSet = true; m_importJobId = value; }

    /**
     * <p>The identifier of the import job to be deleted.</p>
     */
    inline void SetImportJobId(Aws::String&& value) { m_importJobIdHasBeenSet = true; m_importJobId = std::move(value); }

    /**
     * <p>The identifier of the import job to be deleted.</p>
     */
    inline void SetImportJobId(const char* value) { m_importJobIdHasBeenSet = true; m_importJobId.assign(value); }

    /**
     * <p>The identifier of the import job to be deleted.</p>
     */
    inline DeleteImportJobRequest& WithImportJobId(const Aws::String& value) { SetImportJobId(value); return *this;}

    /**
     * <p>The identifier of the import job to be deleted.</p>
     */
    inline DeleteImportJobRequest& WithImportJobId(Aws::String&& value) { SetImportJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the import job to be deleted.</p>
     */
    inline DeleteImportJobRequest& WithImportJobId(const char* value) { SetImportJobId(value); return *this;}


    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it.</p>
     */
    inline DeleteImportJobRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it.</p>
     */
    inline DeleteImportJobRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it.</p>
     */
    inline DeleteImportJobRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}

  private:

    Aws::String m_importJobId;
    bool m_importJobIdHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
