﻿/**
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
    AWS_WAFREGIONAL_API GetRegexPatternSetResult();
    AWS_WAFREGIONAL_API GetRegexPatternSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetRegexPatternSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <a>RegexPatternSet</a> that you specified in the
     * <code>GetRegexPatternSet</code> request, including the identifier of the pattern
     * set and the regular expression patterns you want AWS WAF to search for. </p>
     */
    inline const RegexPatternSet& GetRegexPatternSet() const{ return m_regexPatternSet; }
    inline void SetRegexPatternSet(const RegexPatternSet& value) { m_regexPatternSet = value; }
    inline void SetRegexPatternSet(RegexPatternSet&& value) { m_regexPatternSet = std::move(value); }
    inline GetRegexPatternSetResult& WithRegexPatternSet(const RegexPatternSet& value) { SetRegexPatternSet(value); return *this;}
    inline GetRegexPatternSetResult& WithRegexPatternSet(RegexPatternSet&& value) { SetRegexPatternSet(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRegexPatternSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRegexPatternSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRegexPatternSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RegexPatternSet m_regexPatternSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
