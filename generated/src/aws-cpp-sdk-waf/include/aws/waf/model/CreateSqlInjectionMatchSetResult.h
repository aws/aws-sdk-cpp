﻿/**
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
    AWS_WAF_API CreateSqlInjectionMatchSetResult();
    AWS_WAF_API CreateSqlInjectionMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API CreateSqlInjectionMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <a>SqlInjectionMatchSet</a>.</p>
     */
    inline const SqlInjectionMatchSet& GetSqlInjectionMatchSet() const{ return m_sqlInjectionMatchSet; }
    inline void SetSqlInjectionMatchSet(const SqlInjectionMatchSet& value) { m_sqlInjectionMatchSet = value; }
    inline void SetSqlInjectionMatchSet(SqlInjectionMatchSet&& value) { m_sqlInjectionMatchSet = std::move(value); }
    inline CreateSqlInjectionMatchSetResult& WithSqlInjectionMatchSet(const SqlInjectionMatchSet& value) { SetSqlInjectionMatchSet(value); return *this;}
    inline CreateSqlInjectionMatchSetResult& WithSqlInjectionMatchSet(SqlInjectionMatchSet&& value) { SetSqlInjectionMatchSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateSqlInjectionMatchSet</code> request. You can also use this value to
     * query the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }
    inline CreateSqlInjectionMatchSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline CreateSqlInjectionMatchSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline CreateSqlInjectionMatchSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSqlInjectionMatchSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSqlInjectionMatchSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSqlInjectionMatchSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SqlInjectionMatchSet m_sqlInjectionMatchSet;

    Aws::String m_changeToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
