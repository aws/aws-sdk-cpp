/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetTagValuesResult
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetTagValuesResult();
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetTagValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetTagValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetTagValuesResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>A string that indicates that there is more data available than this response
     * contains. To receive the next part of the response, specify this response value
     * as the <code>PaginationToken</code> value in the request for the next page.</p>
     */
    inline GetTagValuesResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>A string that indicates that there is more data available than this response
     * contains. To receive the next part of the response, specify this response value
     * as the <code>PaginationToken</code> value in the request for the next page.</p>
     */
    inline GetTagValuesResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}


    /**
     * <p>A list of all tag values for the specified key currently used in the
     * specified Amazon Web Services Region for the calling account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>A list of all tag values for the specified key currently used in the
     * specified Amazon Web Services Region for the calling account.</p>
     */
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValues = value; }

    /**
     * <p>A list of all tag values for the specified key currently used in the
     * specified Amazon Web Services Region for the calling account.</p>
     */
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValues = std::move(value); }

    /**
     * <p>A list of all tag values for the specified key currently used in the
     * specified Amazon Web Services Region for the calling account.</p>
     */
    inline GetTagValuesResult& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}

    /**
     * <p>A list of all tag values for the specified key currently used in the
     * specified Amazon Web Services Region for the calling account.</p>
     */
    inline GetTagValuesResult& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>A list of all tag values for the specified key currently used in the
     * specified Amazon Web Services Region for the calling account.</p>
     */
    inline GetTagValuesResult& AddTagValues(const Aws::String& value) { m_tagValues.push_back(value); return *this; }

    /**
     * <p>A list of all tag values for the specified key currently used in the
     * specified Amazon Web Services Region for the calling account.</p>
     */
    inline GetTagValuesResult& AddTagValues(Aws::String&& value) { m_tagValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of all tag values for the specified key currently used in the
     * specified Amazon Web Services Region for the calling account.</p>
     */
    inline GetTagValuesResult& AddTagValues(const char* value) { m_tagValues.push_back(value); return *this; }

  private:

    Aws::String m_paginationToken;

    Aws::Vector<Aws::String> m_tagValues;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
