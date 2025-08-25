/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/Document.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class BatchPutDocumentRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API BatchPutDocumentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutDocument"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    BatchPutDocumentRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business index to add the documents to. </p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    BatchPutDocumentRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more documents to add to the index.</p>  <p>Ensure that the
     * name of your document doesn't contain any confidential information. Amazon Q
     * Business returns document names in chat responses and citations when
     * relevant.</p> 
     */
    inline const Aws::Vector<Document>& GetDocuments() const { return m_documents; }
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
    template<typename DocumentsT = Aws::Vector<Document>>
    void SetDocuments(DocumentsT&& value) { m_documentsHasBeenSet = true; m_documents = std::forward<DocumentsT>(value); }
    template<typename DocumentsT = Aws::Vector<Document>>
    BatchPutDocumentRequest& WithDocuments(DocumentsT&& value) { SetDocuments(std::forward<DocumentsT>(value)); return *this;}
    template<typename DocumentsT = Document>
    BatchPutDocumentRequest& AddDocuments(DocumentsT&& value) { m_documentsHasBeenSet = true; m_documents.emplace_back(std::forward<DocumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access your
     * S3 bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    BatchPutDocumentRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source sync during which the documents were
     * added.</p>
     */
    inline const Aws::String& GetDataSourceSyncId() const { return m_dataSourceSyncId; }
    inline bool DataSourceSyncIdHasBeenSet() const { return m_dataSourceSyncIdHasBeenSet; }
    template<typename DataSourceSyncIdT = Aws::String>
    void SetDataSourceSyncId(DataSourceSyncIdT&& value) { m_dataSourceSyncIdHasBeenSet = true; m_dataSourceSyncId = std::forward<DataSourceSyncIdT>(value); }
    template<typename DataSourceSyncIdT = Aws::String>
    BatchPutDocumentRequest& WithDataSourceSyncId(DataSourceSyncIdT&& value) { SetDataSourceSyncId(std::forward<DataSourceSyncIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::Vector<Document> m_documents;
    bool m_documentsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_dataSourceSyncId;
    bool m_dataSourceSyncIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
