/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/RegexPatternSet.h>
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
  class GetRegexPatternSetResult
  {
  public:
    AWS_WAFREGIONAL_API GetRegexPatternSetResult() = default;
    AWS_WAFREGIONAL_API GetRegexPatternSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetRegexPatternSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <a>RegexPatternSet</a> that you specified in the
     * <code>GetRegexPatternSet</code> request, including the identifier of the pattern
     * set and the regular expression patterns you want AWS WAF to search for. </p>
     */
    inline const RegexPatternSet& GetRegexPatternSet() const { return m_regexPatternSet; }
    template<typename RegexPatternSetT = RegexPatternSet>
    void SetRegexPatternSet(RegexPatternSetT&& value) { m_regexPatternSetHasBeenSet = true; m_regexPatternSet = std::forward<RegexPatternSetT>(value); }
    template<typename RegexPatternSetT = RegexPatternSet>
    GetRegexPatternSetResult& WithRegexPatternSet(RegexPatternSetT&& value) { SetRegexPatternSet(std::forward<RegexPatternSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRegexPatternSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RegexPatternSet m_regexPatternSet;
    bool m_regexPatternSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
