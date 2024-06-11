﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/XssMatchSet.h>
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
  /**
   * <p>The response to a <code>CreateXssMatchSet</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateXssMatchSetResponse">AWS
   * API Reference</a></p>
   */
  class CreateXssMatchSetResult
  {
  public:
    AWS_WAFREGIONAL_API CreateXssMatchSetResult();
    AWS_WAFREGIONAL_API CreateXssMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API CreateXssMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An <a>XssMatchSet</a>.</p>
     */
    inline const XssMatchSet& GetXssMatchSet() const{ return m_xssMatchSet; }
    inline void SetXssMatchSet(const XssMatchSet& value) { m_xssMatchSet = value; }
    inline void SetXssMatchSet(XssMatchSet&& value) { m_xssMatchSet = std::move(value); }
    inline CreateXssMatchSetResult& WithXssMatchSet(const XssMatchSet& value) { SetXssMatchSet(value); return *this;}
    inline CreateXssMatchSetResult& WithXssMatchSet(XssMatchSet&& value) { SetXssMatchSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateXssMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }
    inline CreateXssMatchSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline CreateXssMatchSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline CreateXssMatchSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateXssMatchSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateXssMatchSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateXssMatchSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    XssMatchSet m_xssMatchSet;

    Aws::String m_changeToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
