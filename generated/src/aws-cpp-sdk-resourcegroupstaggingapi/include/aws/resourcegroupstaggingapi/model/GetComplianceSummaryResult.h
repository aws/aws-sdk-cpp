/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resourcegroupstaggingapi/model/Summary.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{
  class GetComplianceSummaryResult
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetComplianceSummaryResult();
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetComplianceSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetComplianceSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A table that shows counts of noncompliant resources.</p>
     */
    inline const Aws::Vector<Summary>& GetSummaryList() const{ return m_summaryList; }

    /**
     * <p>A table that shows counts of noncompliant resources.</p>
     */
    inline void SetSummaryList(const Aws::Vector<Summary>& value) { m_summaryList = value; }

    /**
     * <p>A table that shows counts of noncompliant resources.</p>
     */
    inline void SetSummaryList(Aws::Vector<Summary>&& value) { m_summaryList = std::move(value); }

    /**
     * <p>A table that shows counts of noncompliant resources.</p>
     */
    inline GetComplianceSummaryResult& WithSummaryList(const Aws::Vector<Summary>& value) { SetSummaryList(value); return *this;}

    /**
     * <p>A table that shows counts of noncompliant resources.</p>
     */
    inline GetComplianceSummaryResult& WithSummaryList(Aws::Vector<Summary>&& value) { SetSummaryList(std::move(value)); return *this;}

    /**
     * <p>A table that shows counts of noncompliant resources.</p>
     */
    inline GetComplianceSummaryResult& AddSummaryList(const Summary& value) { m_summaryList.push_back(value); return *this; }

    /**
     * <p>A table that shows counts of noncompliant resources.</p>
     */
    inline GetComplianceSummaryResult& AddSummaryList(Summary&& value) { m_summaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>A string that indicates that there is more data available than this response
     * contains. To receive the next part of the response, specify this response value
     * as the <code>PaginationToken</code> value in the request for the next page.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>A string that indicates that there is more data available than this response
     * contains. To receive the next part of the response, specify this response value
     * as the <code>PaginationToken</code> value in the request for the next page.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }

    /**
     * <p>A string that indicates that there is more data available than this response
     * contains. To receive the next part of the response, specify this response value
     * as the <code>PaginationToken</code> value in the request for the next page.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }

    /**
     * <p>A string that indicates that there is more data available than this response
     * contains. To receive the next part of the response, specify this response value
     * as the <code>PaginationToken</code> value in the request for the next page.</p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }

    /**
     * <p>A string that indicates that there is more data available than this response
     * contains. To receive the next part of the response, specify this response value
     * as the <code>PaginationToken</code> value in the request for the next page.</p>
     */
    inline GetComplianceSummaryResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>A string that indicates that there is more data available than this response
     * contains. To receive the next part of the response, specify this response value
     * as the <code>PaginationToken</code> value in the request for the next page.</p>
     */
    inline GetComplianceSummaryResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>A string that indicates that there is more data available than this response
     * contains. To receive the next part of the response, specify this response value
     * as the <code>PaginationToken</code> value in the request for the next page.</p>
     */
    inline GetComplianceSummaryResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}

  private:

    Aws::Vector<Summary> m_summaryList;

    Aws::String m_paginationToken;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
