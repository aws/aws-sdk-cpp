/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsSecurityFindingIdentifier.h>
#include <aws/securityhub/model/BatchUpdateFindingsUnprocessedFinding.h>
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
namespace SecurityHub
{
namespace Model
{
  class BatchUpdateFindingsResult
  {
  public:
    AWS_SECURITYHUB_API BatchUpdateFindingsResult() = default;
    AWS_SECURITYHUB_API BatchUpdateFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchUpdateFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of findings that were updated successfully.</p>
     */
    inline const Aws::Vector<AwsSecurityFindingIdentifier>& GetProcessedFindings() const { return m_processedFindings; }
    template<typename ProcessedFindingsT = Aws::Vector<AwsSecurityFindingIdentifier>>
    void SetProcessedFindings(ProcessedFindingsT&& value) { m_processedFindingsHasBeenSet = true; m_processedFindings = std::forward<ProcessedFindingsT>(value); }
    template<typename ProcessedFindingsT = Aws::Vector<AwsSecurityFindingIdentifier>>
    BatchUpdateFindingsResult& WithProcessedFindings(ProcessedFindingsT&& value) { SetProcessedFindings(std::forward<ProcessedFindingsT>(value)); return *this;}
    template<typename ProcessedFindingsT = AwsSecurityFindingIdentifier>
    BatchUpdateFindingsResult& AddProcessedFindings(ProcessedFindingsT&& value) { m_processedFindingsHasBeenSet = true; m_processedFindings.emplace_back(std::forward<ProcessedFindingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of findings that were not updated.</p>
     */
    inline const Aws::Vector<BatchUpdateFindingsUnprocessedFinding>& GetUnprocessedFindings() const { return m_unprocessedFindings; }
    template<typename UnprocessedFindingsT = Aws::Vector<BatchUpdateFindingsUnprocessedFinding>>
    void SetUnprocessedFindings(UnprocessedFindingsT&& value) { m_unprocessedFindingsHasBeenSet = true; m_unprocessedFindings = std::forward<UnprocessedFindingsT>(value); }
    template<typename UnprocessedFindingsT = Aws::Vector<BatchUpdateFindingsUnprocessedFinding>>
    BatchUpdateFindingsResult& WithUnprocessedFindings(UnprocessedFindingsT&& value) { SetUnprocessedFindings(std::forward<UnprocessedFindingsT>(value)); return *this;}
    template<typename UnprocessedFindingsT = BatchUpdateFindingsUnprocessedFinding>
    BatchUpdateFindingsResult& AddUnprocessedFindings(UnprocessedFindingsT&& value) { m_unprocessedFindingsHasBeenSet = true; m_unprocessedFindings.emplace_back(std::forward<UnprocessedFindingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdateFindingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AwsSecurityFindingIdentifier> m_processedFindings;
    bool m_processedFindingsHasBeenSet = false;

    Aws::Vector<BatchUpdateFindingsUnprocessedFinding> m_unprocessedFindings;
    bool m_unprocessedFindingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
