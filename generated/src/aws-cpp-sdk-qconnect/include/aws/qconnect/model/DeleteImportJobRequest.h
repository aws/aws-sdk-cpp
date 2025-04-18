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
    AWS_QCONNECT_API DeleteImportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteImportJob"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    DeleteImportJobRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the import job to be deleted.</p>
     */
    inline const Aws::String& GetImportJobId() const { return m_importJobId; }
    inline bool ImportJobIdHasBeenSet() const { return m_importJobIdHasBeenSet; }
    template<typename ImportJobIdT = Aws::String>
    void SetImportJobId(ImportJobIdT&& value) { m_importJobIdHasBeenSet = true; m_importJobId = std::forward<ImportJobIdT>(value); }
    template<typename ImportJobIdT = Aws::String>
    DeleteImportJobRequest& WithImportJobId(ImportJobIdT&& value) { SetImportJobId(std::forward<ImportJobIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_importJobId;
    bool m_importJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
