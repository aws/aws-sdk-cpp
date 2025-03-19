/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace SFN
{
namespace Model
{
  class RedriveExecutionResult
  {
  public:
    AWS_SFN_API RedriveExecutionResult() = default;
    AWS_SFN_API RedriveExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API RedriveExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline const Aws::Utils::DateTime& GetRedriveDate() const { return m_redriveDate; }
    template<typename RedriveDateT = Aws::Utils::DateTime>
    void SetRedriveDate(RedriveDateT&& value) { m_redriveDateHasBeenSet = true; m_redriveDate = std::forward<RedriveDateT>(value); }
    template<typename RedriveDateT = Aws::Utils::DateTime>
    RedriveExecutionResult& WithRedriveDate(RedriveDateT&& value) { SetRedriveDate(std::forward<RedriveDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RedriveExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_redriveDate{};
    bool m_redriveDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
