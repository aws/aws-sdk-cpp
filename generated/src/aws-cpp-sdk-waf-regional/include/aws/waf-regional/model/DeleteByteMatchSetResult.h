﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
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
  class DeleteByteMatchSetResult
  {
  public:
    AWS_WAFREGIONAL_API DeleteByteMatchSetResult();
    AWS_WAFREGIONAL_API DeleteByteMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API DeleteByteMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>DeleteByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }
    inline DeleteByteMatchSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline DeleteByteMatchSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline DeleteByteMatchSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteByteMatchSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteByteMatchSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteByteMatchSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_changeToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
