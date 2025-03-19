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
  class CreateRegexPatternSetResult
  {
  public:
    AWS_WAFREGIONAL_API CreateRegexPatternSetResult() = default;
    AWS_WAFREGIONAL_API CreateRegexPatternSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API CreateRegexPatternSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <a>RegexPatternSet</a> that contains no objects.</p>
     */
    inline const RegexPatternSet& GetRegexPatternSet() const { return m_regexPatternSet; }
    template<typename RegexPatternSetT = RegexPatternSet>
    void SetRegexPatternSet(RegexPatternSetT&& value) { m_regexPatternSetHasBeenSet = true; m_regexPatternSet = std::forward<RegexPatternSetT>(value); }
    template<typename RegexPatternSetT = RegexPatternSet>
    CreateRegexPatternSetResult& WithRegexPatternSet(RegexPatternSetT&& value) { SetRegexPatternSet(std::forward<RegexPatternSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRegexPatternSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const { return m_changeToken; }
    template<typename ChangeTokenT = Aws::String>
    void SetChangeToken(ChangeTokenT&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::forward<ChangeTokenT>(value); }
    template<typename ChangeTokenT = Aws::String>
    CreateRegexPatternSetResult& WithChangeToken(ChangeTokenT&& value) { SetChangeToken(std::forward<ChangeTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRegexPatternSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RegexPatternSet m_regexPatternSet;
    bool m_regexPatternSetHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
