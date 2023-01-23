/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/RegexMatchSetSummary.h>
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
namespace WAF
{
namespace Model
{
  class ListRegexMatchSetsResult
  {
  public:
    AWS_WAF_API ListRegexMatchSetsResult();
    AWS_WAF_API ListRegexMatchSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListRegexMatchSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If you have more <code>RegexMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RegexMatchSet</code> objects,
     * submit another <code>ListRegexMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more <code>RegexMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RegexMatchSet</code> objects,
     * submit another <code>ListRegexMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <code>RegexMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RegexMatchSet</code> objects,
     * submit another <code>ListRegexMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If you have more <code>RegexMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RegexMatchSet</code> objects,
     * submit another <code>ListRegexMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more <code>RegexMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RegexMatchSet</code> objects,
     * submit another <code>ListRegexMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListRegexMatchSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <code>RegexMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RegexMatchSet</code> objects,
     * submit another <code>ListRegexMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListRegexMatchSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you have more <code>RegexMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RegexMatchSet</code> objects,
     * submit another <code>ListRegexMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListRegexMatchSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>An array of <a>RegexMatchSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<RegexMatchSetSummary>& GetRegexMatchSets() const{ return m_regexMatchSets; }

    /**
     * <p>An array of <a>RegexMatchSetSummary</a> objects.</p>
     */
    inline void SetRegexMatchSets(const Aws::Vector<RegexMatchSetSummary>& value) { m_regexMatchSets = value; }

    /**
     * <p>An array of <a>RegexMatchSetSummary</a> objects.</p>
     */
    inline void SetRegexMatchSets(Aws::Vector<RegexMatchSetSummary>&& value) { m_regexMatchSets = std::move(value); }

    /**
     * <p>An array of <a>RegexMatchSetSummary</a> objects.</p>
     */
    inline ListRegexMatchSetsResult& WithRegexMatchSets(const Aws::Vector<RegexMatchSetSummary>& value) { SetRegexMatchSets(value); return *this;}

    /**
     * <p>An array of <a>RegexMatchSetSummary</a> objects.</p>
     */
    inline ListRegexMatchSetsResult& WithRegexMatchSets(Aws::Vector<RegexMatchSetSummary>&& value) { SetRegexMatchSets(std::move(value)); return *this;}

    /**
     * <p>An array of <a>RegexMatchSetSummary</a> objects.</p>
     */
    inline ListRegexMatchSetsResult& AddRegexMatchSets(const RegexMatchSetSummary& value) { m_regexMatchSets.push_back(value); return *this; }

    /**
     * <p>An array of <a>RegexMatchSetSummary</a> objects.</p>
     */
    inline ListRegexMatchSetsResult& AddRegexMatchSets(RegexMatchSetSummary&& value) { m_regexMatchSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<RegexMatchSetSummary> m_regexMatchSets;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
