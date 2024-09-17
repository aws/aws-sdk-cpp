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
    AWS_QBUSINESS_API BatchDeleteDocumentRequest();

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
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline BatchDeleteDocumentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline BatchDeleteDocumentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline BatchDeleteDocumentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business index that contains the documents to
     * delete.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline BatchDeleteDocumentRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline BatchDeleteDocumentRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline BatchDeleteDocumentRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Documents deleted from the Amazon Q Business index.</p>
     */
    inline const Aws::Vector<DeleteDocument>& GetDocuments() const{ return m_documents; }
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
    inline void SetDocuments(const Aws::Vector<DeleteDocument>& value) { m_documentsHasBeenSet = true; m_documents = value; }
    inline void SetDocuments(Aws::Vector<DeleteDocument>&& value) { m_documentsHasBeenSet = true; m_documents = std::move(value); }
    inline BatchDeleteDocumentRequest& WithDocuments(const Aws::Vector<DeleteDocument>& value) { SetDocuments(value); return *this;}
    inline BatchDeleteDocumentRequest& WithDocuments(Aws::Vector<DeleteDocument>&& value) { SetDocuments(std::move(value)); return *this;}
    inline BatchDeleteDocumentRequest& AddDocuments(const DeleteDocument& value) { m_documentsHasBeenSet = true; m_documents.push_back(value); return *this; }
    inline BatchDeleteDocumentRequest& AddDocuments(DeleteDocument&& value) { m_documentsHasBeenSet = true; m_documents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source sync during which the documents were
     * deleted.</p>
     */
    inline const Aws::String& GetDataSourceSyncId() const{ return m_dataSourceSyncId; }
    inline bool DataSourceSyncIdHasBeenSet() const { return m_dataSourceSyncIdHasBeenSet; }
    inline void SetDataSourceSyncId(const Aws::String& value) { m_dataSourceSyncIdHasBeenSet = true; m_dataSourceSyncId = value; }
    inline void SetDataSourceSyncId(Aws::String&& value) { m_dataSourceSyncIdHasBeenSet = true; m_dataSourceSyncId = std::move(value); }
    inline void SetDataSourceSyncId(const char* value) { m_dataSourceSyncIdHasBeenSet = true; m_dataSourceSyncId.assign(value); }
    inline BatchDeleteDocumentRequest& WithDataSourceSyncId(const Aws::String& value) { SetDataSourceSyncId(value); return *this;}
    inline BatchDeleteDocumentRequest& WithDataSourceSyncId(Aws::String&& value) { SetDataSourceSyncId(std::move(value)); return *this;}
    inline BatchDeleteDocumentRequest& WithDataSourceSyncId(const char* value) { SetDataSourceSyncId(value); return *this;}
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
