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
  class GetImportJobRequest : public ConnectWisdomServiceRequest
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API GetImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetImportJob"; }

    AWS_CONNECTWISDOMSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the import job to retrieve.</p>
     */
    inline const Aws::String& GetImportJobId() const{ return m_importJobId; }

    /**
     * <p>The identifier of the import job to retrieve.</p>
     */
    inline bool ImportJobIdHasBeenSet() const { return m_importJobIdHasBeenSet; }

    /**
     * <p>The identifier of the import job to retrieve.</p>
     */
    inline void SetImportJobId(const Aws::String& value) { m_importJobIdHasBeenSet = true; m_importJobId = value; }

    /**
     * <p>The identifier of the import job to retrieve.</p>
     */
    inline void SetImportJobId(Aws::String&& value) { m_importJobIdHasBeenSet = true; m_importJobId = std::move(value); }

    /**
     * <p>The identifier of the import job to retrieve.</p>
     */
    inline void SetImportJobId(const char* value) { m_importJobIdHasBeenSet = true; m_importJobId.assign(value); }

    /**
     * <p>The identifier of the import job to retrieve.</p>
     */
    inline GetImportJobRequest& WithImportJobId(const Aws::String& value) { SetImportJobId(value); return *this;}

    /**
     * <p>The identifier of the import job to retrieve.</p>
     */
    inline GetImportJobRequest& WithImportJobId(Aws::String&& value) { SetImportJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the import job to retrieve.</p>
     */
    inline GetImportJobRequest& WithImportJobId(const char* value) { SetImportJobId(value); return *this;}


    /**
     * <p>The identifier of the knowledge base that the import job belongs to.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The identifier of the knowledge base that the import job belongs to.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The identifier of the knowledge base that the import job belongs to.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The identifier of the knowledge base that the import job belongs to.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The identifier of the knowledge base that the import job belongs to.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The identifier of the knowledge base that the import job belongs to.</p>
     */
    inline GetImportJobRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The identifier of the knowledge base that the import job belongs to.</p>
     */
    inline GetImportJobRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the knowledge base that the import job belongs to.</p>
     */
    inline GetImportJobRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}

  private:

    Aws::String m_importJobId;
    bool m_importJobIdHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
