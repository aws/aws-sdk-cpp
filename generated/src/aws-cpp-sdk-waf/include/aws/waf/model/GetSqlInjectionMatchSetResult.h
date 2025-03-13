/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/SqlInjectionMatchSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The response to a <a>GetSqlInjectionMatchSet</a> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetSqlInjectionMatchSetResponse">AWS
   * API Reference</a></p>
   */
  class GetSqlInjectionMatchSetResult
  {
  public:
    AWS_WAF_API GetSqlInjectionMatchSetResult() = default;
    AWS_WAF_API GetSqlInjectionMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API GetSqlInjectionMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <a>SqlInjectionMatchSet</a> that you specified in the
     * <code>GetSqlInjectionMatchSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SqlInjectionMatchSet</a>: Contains
     * <code>Name</code>, <code>SqlInjectionMatchSetId</code>, and an array of
     * <code>SqlInjectionMatchTuple</code> objects</p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Each <code>SqlInjectionMatchTuple</code> object
     * contains <code>FieldToMatch</code> and <code>TextTransformation</code> </p>
     * </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline const SqlInjectionMatchSet& GetSqlInjectionMatchSet() const { return m_sqlInjectionMatchSet; }
    template<typename SqlInjectionMatchSetT = SqlInjectionMatchSet>
    void SetSqlInjectionMatchSet(SqlInjectionMatchSetT&& value) { m_sqlInjectionMatchSetHasBeenSet = true; m_sqlInjectionMatchSet = std::forward<SqlInjectionMatchSetT>(value); }
    template<typename SqlInjectionMatchSetT = SqlInjectionMatchSet>
    GetSqlInjectionMatchSetResult& WithSqlInjectionMatchSet(SqlInjectionMatchSetT&& value) { SetSqlInjectionMatchSet(std::forward<SqlInjectionMatchSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSqlInjectionMatchSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SqlInjectionMatchSet m_sqlInjectionMatchSet;
    bool m_sqlInjectionMatchSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
