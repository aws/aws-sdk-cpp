﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/LongTermPricingListEntry.h>
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
namespace Snowball
{
namespace Model
{
  class ListLongTermPricingResult
  {
  public:
    AWS_SNOWBALL_API ListLongTermPricingResult();
    AWS_SNOWBALL_API ListLongTermPricingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API ListLongTermPricingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Each <code>LongTermPricingEntry</code> object contains a status, ID, and
     * other information about the <code>LongTermPricing</code> type. </p>
     */
    inline const Aws::Vector<LongTermPricingListEntry>& GetLongTermPricingEntries() const{ return m_longTermPricingEntries; }
    inline void SetLongTermPricingEntries(const Aws::Vector<LongTermPricingListEntry>& value) { m_longTermPricingEntries = value; }
    inline void SetLongTermPricingEntries(Aws::Vector<LongTermPricingListEntry>&& value) { m_longTermPricingEntries = std::move(value); }
    inline ListLongTermPricingResult& WithLongTermPricingEntries(const Aws::Vector<LongTermPricingListEntry>& value) { SetLongTermPricingEntries(value); return *this;}
    inline ListLongTermPricingResult& WithLongTermPricingEntries(Aws::Vector<LongTermPricingListEntry>&& value) { SetLongTermPricingEntries(std::move(value)); return *this;}
    inline ListLongTermPricingResult& AddLongTermPricingEntries(const LongTermPricingListEntry& value) { m_longTermPricingEntries.push_back(value); return *this; }
    inline ListLongTermPricingResult& AddLongTermPricingEntries(LongTermPricingListEntry&& value) { m_longTermPricingEntries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Because HTTP requests are stateless, this is the starting point for your next
     * list of returned <code>ListLongTermPricing</code> list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLongTermPricingResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLongTermPricingResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLongTermPricingResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLongTermPricingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLongTermPricingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLongTermPricingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LongTermPricingListEntry> m_longTermPricingEntries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
