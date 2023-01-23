/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/SizeConstraintSetSummary.h>
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
  class ListSizeConstraintSetsResult
  {
  public:
    AWS_WAFREGIONAL_API ListSizeConstraintSetsResult();
    AWS_WAFREGIONAL_API ListSizeConstraintSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API ListSizeConstraintSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If you have more <code>SizeConstraintSet</code> objects than the number that
     * you specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SizeConstraintSet</code>
     * objects, submit another <code>ListSizeConstraintSets</code> request, and specify
     * the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more <code>SizeConstraintSet</code> objects than the number that
     * you specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SizeConstraintSet</code>
     * objects, submit another <code>ListSizeConstraintSets</code> request, and specify
     * the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <code>SizeConstraintSet</code> objects than the number that
     * you specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SizeConstraintSet</code>
     * objects, submit another <code>ListSizeConstraintSets</code> request, and specify
     * the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If you have more <code>SizeConstraintSet</code> objects than the number that
     * you specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SizeConstraintSet</code>
     * objects, submit another <code>ListSizeConstraintSets</code> request, and specify
     * the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more <code>SizeConstraintSet</code> objects than the number that
     * you specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SizeConstraintSet</code>
     * objects, submit another <code>ListSizeConstraintSets</code> request, and specify
     * the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline ListSizeConstraintSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <code>SizeConstraintSet</code> objects than the number that
     * you specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SizeConstraintSet</code>
     * objects, submit another <code>ListSizeConstraintSets</code> request, and specify
     * the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline ListSizeConstraintSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you have more <code>SizeConstraintSet</code> objects than the number that
     * you specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SizeConstraintSet</code>
     * objects, submit another <code>ListSizeConstraintSets</code> request, and specify
     * the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline ListSizeConstraintSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>An array of <a>SizeConstraintSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<SizeConstraintSetSummary>& GetSizeConstraintSets() const{ return m_sizeConstraintSets; }

    /**
     * <p>An array of <a>SizeConstraintSetSummary</a> objects.</p>
     */
    inline void SetSizeConstraintSets(const Aws::Vector<SizeConstraintSetSummary>& value) { m_sizeConstraintSets = value; }

    /**
     * <p>An array of <a>SizeConstraintSetSummary</a> objects.</p>
     */
    inline void SetSizeConstraintSets(Aws::Vector<SizeConstraintSetSummary>&& value) { m_sizeConstraintSets = std::move(value); }

    /**
     * <p>An array of <a>SizeConstraintSetSummary</a> objects.</p>
     */
    inline ListSizeConstraintSetsResult& WithSizeConstraintSets(const Aws::Vector<SizeConstraintSetSummary>& value) { SetSizeConstraintSets(value); return *this;}

    /**
     * <p>An array of <a>SizeConstraintSetSummary</a> objects.</p>
     */
    inline ListSizeConstraintSetsResult& WithSizeConstraintSets(Aws::Vector<SizeConstraintSetSummary>&& value) { SetSizeConstraintSets(std::move(value)); return *this;}

    /**
     * <p>An array of <a>SizeConstraintSetSummary</a> objects.</p>
     */
    inline ListSizeConstraintSetsResult& AddSizeConstraintSets(const SizeConstraintSetSummary& value) { m_sizeConstraintSets.push_back(value); return *this; }

    /**
     * <p>An array of <a>SizeConstraintSetSummary</a> objects.</p>
     */
    inline ListSizeConstraintSetsResult& AddSizeConstraintSets(SizeConstraintSetSummary&& value) { m_sizeConstraintSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<SizeConstraintSetSummary> m_sizeConstraintSets;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
