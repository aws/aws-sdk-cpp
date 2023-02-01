/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/RunListItem.h>
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
namespace Omics
{
namespace Model
{
  class ListRunsResult
  {
  public:
    AWS_OMICS_API ListRunsResult();
    AWS_OMICS_API ListRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of runs.</p>
     */
    inline const Aws::Vector<RunListItem>& GetItems() const{ return m_items; }

    /**
     * <p>A list of runs.</p>
     */
    inline void SetItems(const Aws::Vector<RunListItem>& value) { m_items = value; }

    /**
     * <p>A list of runs.</p>
     */
    inline void SetItems(Aws::Vector<RunListItem>&& value) { m_items = std::move(value); }

    /**
     * <p>A list of runs.</p>
     */
    inline ListRunsResult& WithItems(const Aws::Vector<RunListItem>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of runs.</p>
     */
    inline ListRunsResult& WithItems(Aws::Vector<RunListItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of runs.</p>
     */
    inline ListRunsResult& AddItems(const RunListItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>A list of runs.</p>
     */
    inline ListRunsResult& AddItems(RunListItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RunListItem> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
