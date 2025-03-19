/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/VariantImportJobItem.h>
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
  class ListVariantImportJobsResult
  {
  public:
    AWS_OMICS_API ListVariantImportJobsResult() = default;
    AWS_OMICS_API ListVariantImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListVariantImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<VariantImportJobItem>& GetVariantImportJobs() const { return m_variantImportJobs; }
    template<typename VariantImportJobsT = Aws::Vector<VariantImportJobItem>>
    void SetVariantImportJobs(VariantImportJobsT&& value) { m_variantImportJobsHasBeenSet = true; m_variantImportJobs = std::forward<VariantImportJobsT>(value); }
    template<typename VariantImportJobsT = Aws::Vector<VariantImportJobItem>>
    ListVariantImportJobsResult& WithVariantImportJobs(VariantImportJobsT&& value) { SetVariantImportJobs(std::forward<VariantImportJobsT>(value)); return *this;}
    template<typename VariantImportJobsT = VariantImportJobItem>
    ListVariantImportJobsResult& AddVariantImportJobs(VariantImportJobsT&& value) { m_variantImportJobsHasBeenSet = true; m_variantImportJobs.emplace_back(std::forward<VariantImportJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVariantImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVariantImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VariantImportJobItem> m_variantImportJobs;
    bool m_variantImportJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
