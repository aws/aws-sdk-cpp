/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AssetBundleExportJobSummary.h>
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
  class ListAssetBundleExportJobsResult
  {
  public:
    AWS_QUICKSIGHT_API ListAssetBundleExportJobsResult();
    AWS_QUICKSIGHT_API ListAssetBundleExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListAssetBundleExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of export job summaries.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobSummary>& GetAssetBundleExportJobSummaryList() const{ return m_assetBundleExportJobSummaryList; }

    /**
     * <p>A list of export job summaries.</p>
     */
    inline void SetAssetBundleExportJobSummaryList(const Aws::Vector<AssetBundleExportJobSummary>& value) { m_assetBundleExportJobSummaryList = value; }

    /**
     * <p>A list of export job summaries.</p>
     */
    inline void SetAssetBundleExportJobSummaryList(Aws::Vector<AssetBundleExportJobSummary>&& value) { m_assetBundleExportJobSummaryList = std::move(value); }

    /**
     * <p>A list of export job summaries.</p>
     */
    inline ListAssetBundleExportJobsResult& WithAssetBundleExportJobSummaryList(const Aws::Vector<AssetBundleExportJobSummary>& value) { SetAssetBundleExportJobSummaryList(value); return *this;}

    /**
     * <p>A list of export job summaries.</p>
     */
    inline ListAssetBundleExportJobsResult& WithAssetBundleExportJobSummaryList(Aws::Vector<AssetBundleExportJobSummary>&& value) { SetAssetBundleExportJobSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of export job summaries.</p>
     */
    inline ListAssetBundleExportJobsResult& AddAssetBundleExportJobSummaryList(const AssetBundleExportJobSummary& value) { m_assetBundleExportJobSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of export job summaries.</p>
     */
    inline ListAssetBundleExportJobsResult& AddAssetBundleExportJobSummaryList(AssetBundleExportJobSummary&& value) { m_assetBundleExportJobSummaryList.push_back(std::move(value)); return *this; }


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
    inline ListAssetBundleExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAssetBundleExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAssetBundleExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAssetBundleExportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAssetBundleExportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAssetBundleExportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ListAssetBundleExportJobsResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::Vector<AssetBundleExportJobSummary> m_assetBundleExportJobSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
