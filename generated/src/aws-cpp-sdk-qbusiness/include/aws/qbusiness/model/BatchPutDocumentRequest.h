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
    AWS_QBUSINESS_API BatchPutDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutDocument"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline BatchPutDocumentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline BatchPutDocumentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline BatchPutDocumentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The identifier of the data source sync during which the documents were
     * added.</p>
     */
    inline const Aws::String& GetDataSourceSyncId() const{ return m_dataSourceSyncId; }

    /**
     * <p>The identifier of the data source sync during which the documents were
     * added.</p>
     */
    inline bool DataSourceSyncIdHasBeenSet() const { return m_dataSourceSyncIdHasBeenSet; }

    /**
     * <p>The identifier of the data source sync during which the documents were
     * added.</p>
     */
    inline void SetDataSourceSyncId(const Aws::String& value) { m_dataSourceSyncIdHasBeenSet = true; m_dataSourceSyncId = value; }

    /**
     * <p>The identifier of the data source sync during which the documents were
     * added.</p>
     */
    inline void SetDataSourceSyncId(Aws::String&& value) { m_dataSourceSyncIdHasBeenSet = true; m_dataSourceSyncId = std::move(value); }

    /**
     * <p>The identifier of the data source sync during which the documents were
     * added.</p>
     */
    inline void SetDataSourceSyncId(const char* value) { m_dataSourceSyncIdHasBeenSet = true; m_dataSourceSyncId.assign(value); }

    /**
     * <p>The identifier of the data source sync during which the documents were
     * added.</p>
     */
    inline BatchPutDocumentRequest& WithDataSourceSyncId(const Aws::String& value) { SetDataSourceSyncId(value); return *this;}

    /**
     * <p>The identifier of the data source sync during which the documents were
     * added.</p>
     */
    inline BatchPutDocumentRequest& WithDataSourceSyncId(Aws::String&& value) { SetDataSourceSyncId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source sync during which the documents were
     * added.</p>
     */
    inline BatchPutDocumentRequest& WithDataSourceSyncId(const char* value) { SetDataSourceSyncId(value); return *this;}


    /**
     * <p>One or more documents to add to the index.</p>
     */
    inline const Aws::Vector<Document>& GetDocuments() const{ return m_documents; }

    /**
     * <p>One or more documents to add to the index.</p>
     */
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }

    /**
     * <p>One or more documents to add to the index.</p>
     */
    inline void SetDocuments(const Aws::Vector<Document>& value) { m_documentsHasBeenSet = true; m_documents = value; }

    /**
     * <p>One or more documents to add to the index.</p>
     */
    inline void SetDocuments(Aws::Vector<Document>&& value) { m_documentsHasBeenSet = true; m_documents = std::move(value); }

    /**
     * <p>One or more documents to add to the index.</p>
     */
    inline BatchPutDocumentRequest& WithDocuments(const Aws::Vector<Document>& value) { SetDocuments(value); return *this;}

    /**
     * <p>One or more documents to add to the index.</p>
     */
    inline BatchPutDocumentRequest& WithDocuments(Aws::Vector<Document>&& value) { SetDocuments(std::move(value)); return *this;}

    /**
     * <p>One or more documents to add to the index.</p>
     */
    inline BatchPutDocumentRequest& AddDocuments(const Document& value) { m_documentsHasBeenSet = true; m_documents.push_back(value); return *this; }

    /**
     * <p>One or more documents to add to the index.</p>
     */
    inline BatchPutDocumentRequest& AddDocuments(Document&& value) { m_documentsHasBeenSet = true; m_documents.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the Amazon Q index to add the documents to. </p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the Amazon Q index to add the documents to. </p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q index to add the documents to. </p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the Amazon Q index to add the documents to. </p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q index to add the documents to. </p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q index to add the documents to. </p>
     */
    inline BatchPutDocumentRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q index to add the documents to. </p>
     */
    inline BatchPutDocumentRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q index to add the documents to. </p>
     */
    inline BatchPutDocumentRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access your
     * S3 bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access your
     * S3 bucket.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access your
     * S3 bucket.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access your
     * S3 bucket.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access your
     * S3 bucket.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access your
     * S3 bucket.</p>
     */
    inline BatchPutDocumentRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access your
     * S3 bucket.</p>
     */
    inline BatchPutDocumentRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access your
     * S3 bucket.</p>
     */
    inline BatchPutDocumentRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_dataSourceSyncId;
    bool m_dataSourceSyncIdHasBeenSet = false;

    Aws::Vector<Document> m_documents;
    bool m_documentsHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
