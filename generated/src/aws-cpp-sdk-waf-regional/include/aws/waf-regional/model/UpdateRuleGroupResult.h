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
  class UpdateRuleGroupResult
  {
  public:
    AWS_WAFREGIONAL_API UpdateRuleGroupResult() = default;
    AWS_WAFREGIONAL_API UpdateRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API UpdateRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>UpdateRuleGroup</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const { return m_changeToken; }
    template<typename ChangeTokenT = Aws::String>
    void SetChangeToken(ChangeTokenT&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::forward<ChangeTokenT>(value); }
    template<typename ChangeTokenT = Aws::String>
    UpdateRuleGroupResult& WithChangeToken(ChangeTokenT&& value) { SetChangeToken(std::forward<ChangeTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateRuleGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
