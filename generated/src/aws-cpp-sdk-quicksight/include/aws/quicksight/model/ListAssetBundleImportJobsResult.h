/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AssetBundleImportJobSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class ListAssetBundleImportJobsResult
  {
  public:
    AWS_QUICKSIGHT_API ListAssetBundleImportJobsResult();
    AWS_QUICKSIGHT_API ListAssetBundleImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListAssetBundleImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of import job summaries.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobSummary>& GetAssetBundleImportJobSummaryList() const{ return m_assetBundleImportJobSummaryList; }

    /**
     * <p>A list of import job summaries.</p>
     */
    inline void SetAssetBundleImportJobSummaryList(const Aws::Vector<AssetBundleImportJobSummary>& value) { m_assetBundleImportJobSummaryList = value; }

    /**
     * <p>A list of import job summaries.</p>
     */
    inline void SetAssetBundleImportJobSummaryList(Aws::Vector<AssetBundleImportJobSummary>&& value) { m_assetBundleImportJobSummaryList = std::move(value); }

    /**
     * <p>A list of import job summaries.</p>
     */
    inline ListAssetBundleImportJobsResult& WithAssetBundleImportJobSummaryList(const Aws::Vector<AssetBundleImportJobSummary>& value) { SetAssetBundleImportJobSummaryList(value); return *this;}

    /**
     * <p>A list of import job summaries.</p>
     */
    inline ListAssetBundleImportJobsResult& WithAssetBundleImportJobSummaryList(Aws::Vector<AssetBundleImportJobSummary>&& value) { SetAssetBundleImportJobSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of import job summaries.</p>
     */
    inline ListAssetBundleImportJobsResult& AddAssetBundleImportJobSummaryList(const AssetBundleImportJobSummary& value) { m_assetBundleImportJobSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of import job summaries.</p>
     */
    inline ListAssetBundleImportJobsResult& AddAssetBundleImportJobSummaryList(AssetBundleImportJobSummary&& value) { m_assetBundleImportJobSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAssetBundleImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAssetBundleImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAssetBundleImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAssetBundleImportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAssetBundleImportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAssetBundleImportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the response.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the response.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the response.</p>
     */
    inline ListAssetBundleImportJobsResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::Vector<AssetBundleImportJobSummary> m_assetBundleImportJobSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
