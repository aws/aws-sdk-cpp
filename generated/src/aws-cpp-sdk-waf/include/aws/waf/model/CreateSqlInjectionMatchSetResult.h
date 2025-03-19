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
   * <p>The response to a <code>CreateSqlInjectionMatchSet</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateSqlInjectionMatchSetResponse">AWS
   * API Reference</a></p>
   */
  class CreateSqlInjectionMatchSetResult
  {
  public:
    AWS_WAF_API CreateSqlInjectionMatchSetResult() = default;
    AWS_WAF_API CreateSqlInjectionMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API CreateSqlInjectionMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <a>SqlInjectionMatchSet</a>.</p>
     */
    inline const SqlInjectionMatchSet& GetSqlInjectionMatchSet() const { return m_sqlInjectionMatchSet; }
    template<typename SqlInjectionMatchSetT = SqlInjectionMatchSet>
    void SetSqlInjectionMatchSet(SqlInjectionMatchSetT&& value) { m_sqlInjectionMatchSetHasBeenSet = true; m_sqlInjectionMatchSet = std::forward<SqlInjectionMatchSetT>(value); }
    template<typename SqlInjectionMatchSetT = SqlInjectionMatchSet>
    CreateSqlInjectionMatchSetResult& WithSqlInjectionMatchSet(SqlInjectionMatchSetT&& value) { SetSqlInjectionMatchSet(std::forward<SqlInjectionMatchSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSqlInjectionMatchSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const { return m_changeToken; }
    template<typename ChangeTokenT = Aws::String>
    void SetChangeToken(ChangeTokenT&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::forward<ChangeTokenT>(value); }
    template<typename ChangeTokenT = Aws::String>
    CreateSqlInjectionMatchSetResult& WithChangeToken(ChangeTokenT&& value) { SetChangeToken(std::forward<ChangeTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSqlInjectionMatchSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SqlInjectionMatchSet m_sqlInjectionMatchSet;
    bool m_sqlInjectionMatchSetHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
