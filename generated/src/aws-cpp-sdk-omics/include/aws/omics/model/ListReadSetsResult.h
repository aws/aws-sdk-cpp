/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ReadSetListItem.h>
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
  class ListReadSetsResult
  {
  public:
    AWS_OMICS_API ListReadSetsResult();
    AWS_OMICS_API ListReadSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReadSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListReadSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReadSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReadSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of read sets.</p>
     */
    inline const Aws::Vector<ReadSetListItem>& GetReadSets() const{ return m_readSets; }

    /**
     * <p>A list of read sets.</p>
     */
    inline void SetReadSets(const Aws::Vector<ReadSetListItem>& value) { m_readSets = value; }

    /**
     * <p>A list of read sets.</p>
     */
    inline void SetReadSets(Aws::Vector<ReadSetListItem>&& value) { m_readSets = std::move(value); }

    /**
     * <p>A list of read sets.</p>
     */
    inline ListReadSetsResult& WithReadSets(const Aws::Vector<ReadSetListItem>& value) { SetReadSets(value); return *this;}

    /**
     * <p>A list of read sets.</p>
     */
    inline ListReadSetsResult& WithReadSets(Aws::Vector<ReadSetListItem>&& value) { SetReadSets(std::move(value)); return *this;}

    /**
     * <p>A list of read sets.</p>
     */
    inline ListReadSetsResult& AddReadSets(const ReadSetListItem& value) { m_readSets.push_back(value); return *this; }

    /**
     * <p>A list of read sets.</p>
     */
    inline ListReadSetsResult& AddReadSets(ReadSetListItem&& value) { m_readSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReadSetListItem> m_readSets;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
