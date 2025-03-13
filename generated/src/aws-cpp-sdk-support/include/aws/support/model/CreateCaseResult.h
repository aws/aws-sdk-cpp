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
   * <p>The support case ID returned by a successful completion of the
   * <a>CreateCase</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CreateCaseResponse">AWS
   * API Reference</a></p>
   */
  class CreateCaseResult
  {
  public:
    AWS_SUPPORT_API CreateCaseResult() = default;
    AWS_SUPPORT_API CreateCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API CreateCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string in the following format:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline const Aws::String& GetCaseId() const { return m_caseId; }
    template<typename CaseIdT = Aws::String>
    void SetCaseId(CaseIdT&& value) { m_caseIdHasBeenSet = true; m_caseId = std::forward<CaseIdT>(value); }
    template<typename CaseIdT = Aws::String>
    CreateCaseResult& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
