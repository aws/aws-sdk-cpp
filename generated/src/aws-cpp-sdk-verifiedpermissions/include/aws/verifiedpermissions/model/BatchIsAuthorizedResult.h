/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/BatchIsAuthorizedOutputItem.h>
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
  class BatchIsAuthorizedResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedResult() = default;
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them. These results are returned in the
     * order they were requested.</p>
     */
    inline const Aws::Vector<BatchIsAuthorizedOutputItem>& GetResults() const { return m_results; }
    template<typename ResultsT = Aws::Vector<BatchIsAuthorizedOutputItem>>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = Aws::Vector<BatchIsAuthorizedOutputItem>>
    BatchIsAuthorizedResult& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    template<typename ResultsT = BatchIsAuthorizedOutputItem>
    BatchIsAuthorizedResult& AddResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results.emplace_back(std::forward<ResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchIsAuthorizedResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchIsAuthorizedOutputItem> m_results;
    bool m_resultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
