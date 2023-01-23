/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/XssMatchSet.h>
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
   * <p>The response to a <code>CreateXssMatchSet</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateXssMatchSetResponse">AWS
   * API Reference</a></p>
   */
  class CreateXssMatchSetResult
  {
  public:
    AWS_WAF_API CreateXssMatchSetResult();
    AWS_WAF_API CreateXssMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API CreateXssMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An <a>XssMatchSet</a>.</p>
     */
    inline const XssMatchSet& GetXssMatchSet() const{ return m_xssMatchSet; }

    /**
     * <p>An <a>XssMatchSet</a>.</p>
     */
    inline void SetXssMatchSet(const XssMatchSet& value) { m_xssMatchSet = value; }

    /**
     * <p>An <a>XssMatchSet</a>.</p>
     */
    inline void SetXssMatchSet(XssMatchSet&& value) { m_xssMatchSet = std::move(value); }

    /**
     * <p>An <a>XssMatchSet</a>.</p>
     */
    inline CreateXssMatchSetResult& WithXssMatchSet(const XssMatchSet& value) { SetXssMatchSet(value); return *this;}

    /**
     * <p>An <a>XssMatchSet</a>.</p>
     */
    inline CreateXssMatchSetResult& WithXssMatchSet(XssMatchSet&& value) { SetXssMatchSet(std::move(value)); return *this;}


    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateXssMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateXssMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateXssMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateXssMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateXssMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateXssMatchSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateXssMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateXssMatchSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateXssMatchSet</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateXssMatchSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    XssMatchSet m_xssMatchSet;

    Aws::String m_changeToken;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
