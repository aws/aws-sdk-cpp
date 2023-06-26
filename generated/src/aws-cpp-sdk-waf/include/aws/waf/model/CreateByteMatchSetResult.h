﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/ByteMatchSet.h>
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
  class CreateByteMatchSetResult
  {
  public:
    AWS_WAF_API CreateByteMatchSetResult();
    AWS_WAF_API CreateByteMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API CreateByteMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a>ByteMatchSet</a> that contains no <code>ByteMatchTuple</code>
     * objects.</p>
     */
    inline const ByteMatchSet& GetByteMatchSet() const{ return m_byteMatchSet; }

    /**
     * <p>A <a>ByteMatchSet</a> that contains no <code>ByteMatchTuple</code>
     * objects.</p>
     */
    inline void SetByteMatchSet(const ByteMatchSet& value) { m_byteMatchSet = value; }

    /**
     * <p>A <a>ByteMatchSet</a> that contains no <code>ByteMatchTuple</code>
     * objects.</p>
     */
    inline void SetByteMatchSet(ByteMatchSet&& value) { m_byteMatchSet = std::move(value); }

    /**
     * <p>A <a>ByteMatchSet</a> that contains no <code>ByteMatchTuple</code>
     * objects.</p>
     */
    inline CreateByteMatchSetResult& WithByteMatchSet(const ByteMatchSet& value) { SetByteMatchSet(value); return *this;}

    /**
     * <p>A <a>ByteMatchSet</a> that contains no <code>ByteMatchTuple</code>
     * objects.</p>
     */
    inline CreateByteMatchSetResult& WithByteMatchSet(ByteMatchSet&& value) { SetByteMatchSet(std::move(value)); return *this;}


    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateByteMatchSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateByteMatchSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateByteMatchSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateByteMatchSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateByteMatchSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateByteMatchSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ByteMatchSet m_byteMatchSet;

    Aws::String m_changeToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
