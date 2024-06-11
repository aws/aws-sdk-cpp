/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/FilterSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListFiltersResult
  {
  public:
    AWS_PERSONALIZE_API ListFiltersResult();
    AWS_PERSONALIZE_API ListFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of returned filters.</p>
     */
    inline const Aws::Vector<FilterSummary>& GetFilters() const{ return m_filters; }
    inline void SetFilters(const Aws::Vector<FilterSummary>& value) { m_filters = value; }
    inline void SetFilters(Aws::Vector<FilterSummary>&& value) { m_filters = std::move(value); }
    inline ListFiltersResult& WithFilters(const Aws::Vector<FilterSummary>& value) { SetFilters(value); return *this;}
    inline ListFiltersResult& WithFilters(Aws::Vector<FilterSummary>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListFiltersResult& AddFilters(const FilterSummary& value) { m_filters.push_back(value); return *this; }
    inline ListFiltersResult& AddFilters(FilterSummary&& value) { m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of filters (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFiltersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFiltersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFiltersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFiltersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFiltersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFiltersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FilterSummary> m_filters;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
