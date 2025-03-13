/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class StartExecutionResult
  {
  public:
    AWS_SFN_API StartExecutionResult() = default;
    AWS_SFN_API StartExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API StartExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline const Aws::String& GetExecutionArn() const { return m_executionArn; }
    template<typename ExecutionArnT = Aws::String>
    void SetExecutionArn(ExecutionArnT&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::forward<ExecutionArnT>(value); }
    template<typename ExecutionArnT = Aws::String>
    StartExecutionResult& WithExecutionArn(ExecutionArnT&& value) { SetExecutionArn(std::forward<ExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the execution is started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    StartExecutionResult& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
