/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ExportReadSetJobDetail.h>
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
  class ListReadSetExportJobsResult
  {
  public:
    AWS_OMICS_API ListReadSetExportJobsResult() = default;
    AWS_OMICS_API ListReadSetExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReadSetExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReadSetExportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<ExportReadSetJobDetail>& GetExportJobs() const { return m_exportJobs; }
    template<typename ExportJobsT = Aws::Vector<ExportReadSetJobDetail>>
    void SetExportJobs(ExportJobsT&& value) { m_exportJobsHasBeenSet = true; m_exportJobs = std::forward<ExportJobsT>(value); }
    template<typename ExportJobsT = Aws::Vector<ExportReadSetJobDetail>>
    ListReadSetExportJobsResult& WithExportJobs(ExportJobsT&& value) { SetExportJobs(std::forward<ExportJobsT>(value)); return *this;}
    template<typename ExportJobsT = ExportReadSetJobDetail>
    ListReadSetExportJobsResult& AddExportJobs(ExportJobsT&& value) { m_exportJobsHasBeenSet = true; m_exportJobs.emplace_back(std::forward<ExportJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReadSetExportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ExportReadSetJobDetail> m_exportJobs;
    bool m_exportJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
