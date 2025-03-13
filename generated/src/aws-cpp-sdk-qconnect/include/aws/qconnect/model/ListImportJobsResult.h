/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ImportJobSummary.h>
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
namespace QConnect
{
namespace Model
{
  class ListImportJobsResult
  {
  public:
    AWS_QCONNECT_API ListImportJobsResult() = default;
    AWS_QCONNECT_API ListImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the import jobs.</p>
     */
    inline const Aws::Vector<ImportJobSummary>& GetImportJobSummaries() const { return m_importJobSummaries; }
    template<typename ImportJobSummariesT = Aws::Vector<ImportJobSummary>>
    void SetImportJobSummaries(ImportJobSummariesT&& value) { m_importJobSummariesHasBeenSet = true; m_importJobSummaries = std::forward<ImportJobSummariesT>(value); }
    template<typename ImportJobSummariesT = Aws::Vector<ImportJobSummary>>
    ListImportJobsResult& WithImportJobSummaries(ImportJobSummariesT&& value) { SetImportJobSummaries(std::forward<ImportJobSummariesT>(value)); return *this;}
    template<typename ImportJobSummariesT = ImportJobSummary>
    ListImportJobsResult& AddImportJobSummaries(ImportJobSummariesT&& value) { m_importJobSummariesHasBeenSet = true; m_importJobSummaries.emplace_back(std::forward<ImportJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImportJobSummary> m_importJobSummaries;
    bool m_importJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
