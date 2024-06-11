﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/WebACL.h>
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
namespace WAFRegional
{
namespace Model
{
  class CreateWebACLResult
  {
  public:
    AWS_WAFREGIONAL_API CreateWebACLResult();
    AWS_WAFREGIONAL_API CreateWebACLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API CreateWebACLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a>WebACL</a> returned in the <code>CreateWebACL</code> response.</p>
     */
    inline const WebACL& GetWebACL() const{ return m_webACL; }
    inline void SetWebACL(const WebACL& value) { m_webACL = value; }
    inline void SetWebACL(WebACL&& value) { m_webACL = std::move(value); }
    inline CreateWebACLResult& WithWebACL(const WebACL& value) { SetWebACL(value); return *this;}
    inline CreateWebACLResult& WithWebACL(WebACL&& value) { SetWebACL(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateWebACL</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }
    inline CreateWebACLResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline CreateWebACLResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline CreateWebACLResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWebACLResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWebACLResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWebACLResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    WebACL m_webACL;

    Aws::String m_changeToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
