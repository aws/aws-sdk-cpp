/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/SqlInjectionMatchSetSummary.h>
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
   * <p>The response to a <a>ListSqlInjectionMatchSets</a> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListSqlInjectionMatchSetsResponse">AWS
   * API Reference</a></p>
   */
  class ListSqlInjectionMatchSetsResult
  {
  public:
    AWS_WAF_API ListSqlInjectionMatchSetsResult() = default;
    AWS_WAF_API ListSqlInjectionMatchSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListSqlInjectionMatchSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more <a>SqlInjectionMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SqlInjectionMatchSet</code>
     * objects, submit another <code>ListSqlInjectionMatchSets</code> request, and
     * specify the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListSqlInjectionMatchSetsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>SqlInjectionMatchSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<SqlInjectionMatchSetSummary>& GetSqlInjectionMatchSets() const { return m_sqlInjectionMatchSets; }
    template<typename SqlInjectionMatchSetsT = Aws::Vector<SqlInjectionMatchSetSummary>>
    void SetSqlInjectionMatchSets(SqlInjectionMatchSetsT&& value) { m_sqlInjectionMatchSetsHasBeenSet = true; m_sqlInjectionMatchSets = std::forward<SqlInjectionMatchSetsT>(value); }
    template<typename SqlInjectionMatchSetsT = Aws::Vector<SqlInjectionMatchSetSummary>>
    ListSqlInjectionMatchSetsResult& WithSqlInjectionMatchSets(SqlInjectionMatchSetsT&& value) { SetSqlInjectionMatchSets(std::forward<SqlInjectionMatchSetsT>(value)); return *this;}
    template<typename SqlInjectionMatchSetsT = SqlInjectionMatchSetSummary>
    ListSqlInjectionMatchSetsResult& AddSqlInjectionMatchSets(SqlInjectionMatchSetsT&& value) { m_sqlInjectionMatchSetsHasBeenSet = true; m_sqlInjectionMatchSets.emplace_back(std::forward<SqlInjectionMatchSetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSqlInjectionMatchSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<SqlInjectionMatchSetSummary> m_sqlInjectionMatchSets;
    bool m_sqlInjectionMatchSetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
