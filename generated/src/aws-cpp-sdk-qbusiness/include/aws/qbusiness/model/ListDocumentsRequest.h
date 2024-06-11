﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QBusiness
{
namespace Model
{

  /**
   */
  class ListDocumentsRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API ListDocumentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDocuments"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;

    AWS_QBUSINESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the application id the documents are attached to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline ListDocumentsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline ListDocumentsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline ListDocumentsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index the documents are attached to.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline ListDocumentsRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline ListDocumentsRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline ListDocumentsRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data sources the documents are attached to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSourceIds() const{ return m_dataSourceIds; }
    inline bool DataSourceIdsHasBeenSet() const { return m_dataSourceIdsHasBeenSet; }
    inline void SetDataSourceIds(const Aws::Vector<Aws::String>& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds = value; }
    inline void SetDataSourceIds(Aws::Vector<Aws::String>&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds = std::move(value); }
    inline ListDocumentsRequest& WithDataSourceIds(const Aws::Vector<Aws::String>& value) { SetDataSourceIds(value); return *this;}
    inline ListDocumentsRequest& WithDataSourceIds(Aws::Vector<Aws::String>&& value) { SetDataSourceIds(std::move(value)); return *this;}
    inline ListDocumentsRequest& AddDataSourceIds(const Aws::String& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.push_back(value); return *this; }
    inline ListDocumentsRequest& AddDataSourceIds(Aws::String&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.push_back(std::move(value)); return *this; }
    inline ListDocumentsRequest& AddDataSourceIds(const char* value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q Business returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of documents.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDocumentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDocumentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDocumentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of documents to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDocumentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataSourceIds;
    bool m_dataSourceIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
