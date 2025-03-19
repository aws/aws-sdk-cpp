/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/ChangeTokenStatus.h>
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
  class GetChangeTokenStatusResult
  {
  public:
    AWS_WAFREGIONAL_API GetChangeTokenStatusResult() = default;
    AWS_WAFREGIONAL_API GetChangeTokenStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetChangeTokenStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the change token.</p>
     */
    inline ChangeTokenStatus GetChangeTokenStatus() const { return m_changeTokenStatus; }
    inline void SetChangeTokenStatus(ChangeTokenStatus value) { m_changeTokenStatusHasBeenSet = true; m_changeTokenStatus = value; }
    inline GetChangeTokenStatusResult& WithChangeTokenStatus(ChangeTokenStatus value) { SetChangeTokenStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetChangeTokenStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ChangeTokenStatus m_changeTokenStatus{ChangeTokenStatus::NOT_SET};
    bool m_changeTokenStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
