/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ExportJobSummary.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>An HTTP 200 response if the request succeeds, or an error message if the
   * request fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListExportJobsResponse">AWS
   * API Reference</a></p>
   */
  class ListExportJobsResult
  {
  public:
    AWS_SESV2_API ListExportJobsResult() = default;
    AWS_SESV2_API ListExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the export job summaries.</p>
     */
    inline const Aws::Vector<ExportJobSummary>& GetExportJobs() const { return m_exportJobs; }
    template<typename ExportJobsT = Aws::Vector<ExportJobSummary>>
    void SetExportJobs(ExportJobsT&& value) { m_exportJobsHasBeenSet = true; m_exportJobs = std::forward<ExportJobsT>(value); }
    template<typename ExportJobsT = Aws::Vector<ExportJobSummary>>
    ListExportJobsResult& WithExportJobs(ExportJobsT&& value) { SetExportJobs(std::forward<ExportJobsT>(value)); return *this;}
    template<typename ExportJobsT = ExportJobSummary>
    ListExportJobsResult& AddExportJobs(ExportJobsT&& value) { m_exportJobsHasBeenSet = true; m_exportJobs.emplace_back(std::forward<ExportJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string token indicating that there might be additional export jobs
     * available to be listed. Use this token to a subsequent call to
     * <code>ListExportJobs</code> with the same parameters to retrieve the next page
     * of export jobs.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListExportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExportJobSummary> m_exportJobs;
    bool m_exportJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
