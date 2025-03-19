/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/RegexMatchSet.h>
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
  class GetRegexMatchSetResult
  {
  public:
    AWS_WAFREGIONAL_API GetRegexMatchSetResult() = default;
    AWS_WAFREGIONAL_API GetRegexMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetRegexMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <a>RegexMatchSet</a> that you specified in the
     * <code>GetRegexMatchSet</code> request. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline const RegexMatchSet& GetRegexMatchSet() const { return m_regexMatchSet; }
    template<typename RegexMatchSetT = RegexMatchSet>
    void SetRegexMatchSet(RegexMatchSetT&& value) { m_regexMatchSetHasBeenSet = true; m_regexMatchSet = std::forward<RegexMatchSetT>(value); }
    template<typename RegexMatchSetT = RegexMatchSet>
    GetRegexMatchSetResult& WithRegexMatchSet(RegexMatchSetT&& value) { SetRegexMatchSet(std::forward<RegexMatchSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRegexMatchSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RegexMatchSet m_regexMatchSet;
    bool m_regexMatchSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
