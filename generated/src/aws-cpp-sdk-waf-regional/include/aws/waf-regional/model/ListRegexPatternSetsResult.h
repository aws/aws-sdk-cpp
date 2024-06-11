﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/RegexPatternSetSummary.h>
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
namespace WAFRegional
{
namespace Model
{
  class ListRegexPatternSetsResult
  {
  public:
    AWS_WAFREGIONAL_API ListRegexPatternSetsResult();
    AWS_WAFREGIONAL_API ListRegexPatternSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API ListRegexPatternSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more <code>RegexPatternSet</code> objects than the number that
     * you specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RegexPatternSet</code>
     * objects, submit another <code>ListRegexPatternSets</code> request, and specify
     * the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListRegexPatternSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListRegexPatternSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListRegexPatternSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>RegexPatternSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<RegexPatternSetSummary>& GetRegexPatternSets() const{ return m_regexPatternSets; }
    inline void SetRegexPatternSets(const Aws::Vector<RegexPatternSetSummary>& value) { m_regexPatternSets = value; }
    inline void SetRegexPatternSets(Aws::Vector<RegexPatternSetSummary>&& value) { m_regexPatternSets = std::move(value); }
    inline ListRegexPatternSetsResult& WithRegexPatternSets(const Aws::Vector<RegexPatternSetSummary>& value) { SetRegexPatternSets(value); return *this;}
    inline ListRegexPatternSetsResult& WithRegexPatternSets(Aws::Vector<RegexPatternSetSummary>&& value) { SetRegexPatternSets(std::move(value)); return *this;}
    inline ListRegexPatternSetsResult& AddRegexPatternSets(const RegexPatternSetSummary& value) { m_regexPatternSets.push_back(value); return *this; }
    inline ListRegexPatternSetsResult& AddRegexPatternSets(RegexPatternSetSummary&& value) { m_regexPatternSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRegexPatternSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRegexPatternSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRegexPatternSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;

    Aws::Vector<RegexPatternSetSummary> m_regexPatternSets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
