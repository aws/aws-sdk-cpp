/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/BatchGetPolicyOutputItem.h>
#include <aws/verifiedpermissions/model/BatchGetPolicyErrorItem.h>
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
namespace VerifiedPermissions
{
namespace Model
{
  class BatchGetPolicyResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyResult() = default;
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the policies listed in the request that were successfully
     * returned. These results are returned in the order they were requested.</p>
     */
    inline const Aws::Vector<BatchGetPolicyOutputItem>& GetResults() const { return m_results; }
    template<typename ResultsT = Aws::Vector<BatchGetPolicyOutputItem>>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = Aws::Vector<BatchGetPolicyOutputItem>>
    BatchGetPolicyResult& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    template<typename ResultsT = BatchGetPolicyOutputItem>
    BatchGetPolicyResult& AddResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results.emplace_back(std::forward<ResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the policies from the request that resulted in an error.
     * These results are returned in the order they were requested.</p>
     */
    inline const Aws::Vector<BatchGetPolicyErrorItem>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetPolicyErrorItem>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetPolicyErrorItem>>
    BatchGetPolicyResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetPolicyErrorItem>
    BatchGetPolicyResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetPolicyOutputItem> m_results;
    bool m_resultsHasBeenSet = false;

    Aws::Vector<BatchGetPolicyErrorItem> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
