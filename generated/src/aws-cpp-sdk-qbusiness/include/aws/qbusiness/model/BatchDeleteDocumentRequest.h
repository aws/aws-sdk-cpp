/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/DeleteDocument.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class BatchDeleteDocumentRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API BatchDeleteDocumentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteDocument"; }

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
    BatchDeleteDocumentRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business index that contains the documents to
     * delete.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    BatchDeleteDocumentRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Documents deleted from the Amazon Q Business index.</p>
     */
    inline const Aws::Vector<DeleteDocument>& GetDocuments() const { return m_documents; }
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
    template<typename DocumentsT = Aws::Vector<DeleteDocument>>
    void SetDocuments(DocumentsT&& value) { m_documentsHasBeenSet = true; m_documents = std::forward<DocumentsT>(value); }
    template<typename DocumentsT = Aws::Vector<DeleteDocument>>
    BatchDeleteDocumentRequest& WithDocuments(DocumentsT&& value) { SetDocuments(std::forward<DocumentsT>(value)); return *this;}
    template<typename DocumentsT = DeleteDocument>
    BatchDeleteDocumentRequest& AddDocuments(DocumentsT&& value) { m_documentsHasBeenSet = true; m_documents.emplace_back(std::forward<DocumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source sync during which the documents were
     * deleted.</p>
     */
    inline const Aws::String& GetDataSourceSyncId() const { return m_dataSourceSyncId; }
    inline bool DataSourceSyncIdHasBeenSet() const { return m_dataSourceSyncIdHasBeenSet; }
    template<typename DataSourceSyncIdT = Aws::String>
    void SetDataSourceSyncId(DataSourceSyncIdT&& value) { m_dataSourceSyncIdHasBeenSet = true; m_dataSourceSyncId = std::forward<DataSourceSyncIdT>(value); }
    template<typename DataSourceSyncIdT = Aws::String>
    BatchDeleteDocumentRequest& WithDataSourceSyncId(DataSourceSyncIdT&& value) { SetDataSourceSyncId(std::forward<DataSourceSyncIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::Vector<DeleteDocument> m_documents;
    bool m_documentsHasBeenSet = false;

    Aws::String m_dataSourceSyncId;
    bool m_dataSourceSyncIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
