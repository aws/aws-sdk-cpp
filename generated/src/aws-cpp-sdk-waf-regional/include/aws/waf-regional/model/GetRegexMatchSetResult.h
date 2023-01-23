/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/RegexMatchSet.h>
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
  class GetRegexMatchSetResult
  {
  public:
    AWS_WAFREGIONAL_API GetRegexMatchSetResult();
    AWS_WAFREGIONAL_API GetRegexMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetRegexMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>RegexMatchSet</a> that you specified in the
     * <code>GetRegexMatchSet</code> request. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline const RegexMatchSet& GetRegexMatchSet() const{ return m_regexMatchSet; }

    /**
     * <p>Information about the <a>RegexMatchSet</a> that you specified in the
     * <code>GetRegexMatchSet</code> request. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline void SetRegexMatchSet(const RegexMatchSet& value) { m_regexMatchSet = value; }

    /**
     * <p>Information about the <a>RegexMatchSet</a> that you specified in the
     * <code>GetRegexMatchSet</code> request. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline void SetRegexMatchSet(RegexMatchSet&& value) { m_regexMatchSet = std::move(value); }

    /**
     * <p>Information about the <a>RegexMatchSet</a> that you specified in the
     * <code>GetRegexMatchSet</code> request. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline GetRegexMatchSetResult& WithRegexMatchSet(const RegexMatchSet& value) { SetRegexMatchSet(value); return *this;}

    /**
     * <p>Information about the <a>RegexMatchSet</a> that you specified in the
     * <code>GetRegexMatchSet</code> request. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline GetRegexMatchSetResult& WithRegexMatchSet(RegexMatchSet&& value) { SetRegexMatchSet(std::move(value)); return *this;}

  private:

    RegexMatchSet m_regexMatchSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
