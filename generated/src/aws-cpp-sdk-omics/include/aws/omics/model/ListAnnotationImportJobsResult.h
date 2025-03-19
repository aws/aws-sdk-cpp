/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/AnnotationImportJobItem.h>
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
  class ListAnnotationImportJobsResult
  {
  public:
    AWS_OMICS_API ListAnnotationImportJobsResult() = default;
    AWS_OMICS_API ListAnnotationImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListAnnotationImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<AnnotationImportJobItem>& GetAnnotationImportJobs() const { return m_annotationImportJobs; }
    template<typename AnnotationImportJobsT = Aws::Vector<AnnotationImportJobItem>>
    void SetAnnotationImportJobs(AnnotationImportJobsT&& value) { m_annotationImportJobsHasBeenSet = true; m_annotationImportJobs = std::forward<AnnotationImportJobsT>(value); }
    template<typename AnnotationImportJobsT = Aws::Vector<AnnotationImportJobItem>>
    ListAnnotationImportJobsResult& WithAnnotationImportJobs(AnnotationImportJobsT&& value) { SetAnnotationImportJobs(std::forward<AnnotationImportJobsT>(value)); return *this;}
    template<typename AnnotationImportJobsT = AnnotationImportJobItem>
    ListAnnotationImportJobsResult& AddAnnotationImportJobs(AnnotationImportJobsT&& value) { m_annotationImportJobsHasBeenSet = true; m_annotationImportJobs.emplace_back(std::forward<AnnotationImportJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnnotationImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnnotationImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnnotationImportJobItem> m_annotationImportJobs;
    bool m_annotationImportJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
