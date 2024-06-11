﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/XssMatchSetSummary.h>
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
  /**
   * <p>The response to a <a>ListXssMatchSets</a> request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListXssMatchSetsResponse">AWS
   * API Reference</a></p>
   */
  class ListXssMatchSetsResult
  {
  public:
    AWS_WAF_API ListXssMatchSetsResult();
    AWS_WAF_API ListXssMatchSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListXssMatchSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more <a>XssMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>XssMatchSet</code> objects,
     * submit another <code>ListXssMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListXssMatchSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListXssMatchSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListXssMatchSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>XssMatchSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<XssMatchSetSummary>& GetXssMatchSets() const{ return m_xssMatchSets; }
    inline void SetXssMatchSets(const Aws::Vector<XssMatchSetSummary>& value) { m_xssMatchSets = value; }
    inline void SetXssMatchSets(Aws::Vector<XssMatchSetSummary>&& value) { m_xssMatchSets = std::move(value); }
    inline ListXssMatchSetsResult& WithXssMatchSets(const Aws::Vector<XssMatchSetSummary>& value) { SetXssMatchSets(value); return *this;}
    inline ListXssMatchSetsResult& WithXssMatchSets(Aws::Vector<XssMatchSetSummary>&& value) { SetXssMatchSets(std::move(value)); return *this;}
    inline ListXssMatchSetsResult& AddXssMatchSets(const XssMatchSetSummary& value) { m_xssMatchSets.push_back(value); return *this; }
    inline ListXssMatchSetsResult& AddXssMatchSets(XssMatchSetSummary&& value) { m_xssMatchSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListXssMatchSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListXssMatchSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListXssMatchSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;

    Aws::Vector<XssMatchSetSummary> m_xssMatchSets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
