/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ImportFindingsError.h>
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
  class BatchImportFindingsResult
  {
  public:
    AWS_SECURITYHUB_API BatchImportFindingsResult() = default;
    AWS_SECURITYHUB_API BatchImportFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchImportFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of findings that failed to import.</p>
     */
    inline int GetFailedCount() const { return m_failedCount; }
    inline void SetFailedCount(int value) { m_failedCountHasBeenSet = true; m_failedCount = value; }
    inline BatchImportFindingsResult& WithFailedCount(int value) { SetFailedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of findings that were successfully imported.</p>
     */
    inline int GetSuccessCount() const { return m_successCount; }
    inline void SetSuccessCount(int value) { m_successCountHasBeenSet = true; m_successCount = value; }
    inline BatchImportFindingsResult& WithSuccessCount(int value) { SetSuccessCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of findings that failed to import.</p>
     */
    inline const Aws::Vector<ImportFindingsError>& GetFailedFindings() const { return m_failedFindings; }
    template<typename FailedFindingsT = Aws::Vector<ImportFindingsError>>
    void SetFailedFindings(FailedFindingsT&& value) { m_failedFindingsHasBeenSet = true; m_failedFindings = std::forward<FailedFindingsT>(value); }
    template<typename FailedFindingsT = Aws::Vector<ImportFindingsError>>
    BatchImportFindingsResult& WithFailedFindings(FailedFindingsT&& value) { SetFailedFindings(std::forward<FailedFindingsT>(value)); return *this;}
    template<typename FailedFindingsT = ImportFindingsError>
    BatchImportFindingsResult& AddFailedFindings(FailedFindingsT&& value) { m_failedFindingsHasBeenSet = true; m_failedFindings.emplace_back(std::forward<FailedFindingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchImportFindingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_failedCount{0};
    bool m_failedCountHasBeenSet = false;

    int m_successCount{0};
    bool m_successCountHasBeenSet = false;

    Aws::Vector<ImportFindingsError> m_failedFindings;
    bool m_failedFindingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
