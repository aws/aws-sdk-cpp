/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ImportReferenceJobItem.h>
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
namespace Omics
{
namespace Model
{
  class ListReferenceImportJobsResult
  {
  public:
    AWS_OMICS_API ListReferenceImportJobsResult() = default;
    AWS_OMICS_API ListReferenceImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReferenceImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReferenceImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A lis of jobs.</p>
     */
    inline const Aws::Vector<ImportReferenceJobItem>& GetImportJobs() const { return m_importJobs; }
    template<typename ImportJobsT = Aws::Vector<ImportReferenceJobItem>>
    void SetImportJobs(ImportJobsT&& value) { m_importJobsHasBeenSet = true; m_importJobs = std::forward<ImportJobsT>(value); }
    template<typename ImportJobsT = Aws::Vector<ImportReferenceJobItem>>
    ListReferenceImportJobsResult& WithImportJobs(ImportJobsT&& value) { SetImportJobs(std::forward<ImportJobsT>(value)); return *this;}
    template<typename ImportJobsT = ImportReferenceJobItem>
    ListReferenceImportJobsResult& AddImportJobs(ImportJobsT&& value) { m_importJobsHasBeenSet = true; m_importJobs.emplace_back(std::forward<ImportJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReferenceImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ImportReferenceJobItem> m_importJobs;
    bool m_importJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
