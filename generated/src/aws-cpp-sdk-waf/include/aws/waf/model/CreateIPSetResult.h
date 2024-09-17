/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/IPSet.h>
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
  class CreateIPSetResult
  {
  public:
    AWS_WAF_API CreateIPSetResult();
    AWS_WAF_API CreateIPSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API CreateIPSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a>IPSet</a> returned in the <code>CreateIPSet</code> response.</p>
     */
    inline const IPSet& GetIPSet() const{ return m_iPSet; }
    inline void SetIPSet(const IPSet& value) { m_iPSet = value; }
    inline void SetIPSet(IPSet&& value) { m_iPSet = std::move(value); }
    inline CreateIPSetResult& WithIPSet(const IPSet& value) { SetIPSet(value); return *this;}
    inline CreateIPSetResult& WithIPSet(IPSet&& value) { SetIPSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateIPSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }
    inline CreateIPSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline CreateIPSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline CreateIPSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIPSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIPSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIPSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IPSet m_iPSet;

    Aws::String m_changeToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
