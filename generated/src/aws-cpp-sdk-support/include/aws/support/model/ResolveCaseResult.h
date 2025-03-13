/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The status of the case returned by the <a>ResolveCase</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/ResolveCaseResponse">AWS
   * API Reference</a></p>
   */
  class ResolveCaseResult
  {
  public:
    AWS_SUPPORT_API ResolveCaseResult() = default;
    AWS_SUPPORT_API ResolveCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API ResolveCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the case when the <a>ResolveCase</a> request was sent.</p>
     */
    inline const Aws::String& GetInitialCaseStatus() const { return m_initialCaseStatus; }
    template<typename InitialCaseStatusT = Aws::String>
    void SetInitialCaseStatus(InitialCaseStatusT&& value) { m_initialCaseStatusHasBeenSet = true; m_initialCaseStatus = std::forward<InitialCaseStatusT>(value); }
    template<typename InitialCaseStatusT = Aws::String>
    ResolveCaseResult& WithInitialCaseStatus(InitialCaseStatusT&& value) { SetInitialCaseStatus(std::forward<InitialCaseStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the case after the <a>ResolveCase</a> request was
     * processed.</p>
     */
    inline const Aws::String& GetFinalCaseStatus() const { return m_finalCaseStatus; }
    template<typename FinalCaseStatusT = Aws::String>
    void SetFinalCaseStatus(FinalCaseStatusT&& value) { m_finalCaseStatusHasBeenSet = true; m_finalCaseStatus = std::forward<FinalCaseStatusT>(value); }
    template<typename FinalCaseStatusT = Aws::String>
    ResolveCaseResult& WithFinalCaseStatus(FinalCaseStatusT&& value) { SetFinalCaseStatus(std::forward<FinalCaseStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ResolveCaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_initialCaseStatus;
    bool m_initialCaseStatusHasBeenSet = false;

    Aws::String m_finalCaseStatus;
    bool m_finalCaseStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
