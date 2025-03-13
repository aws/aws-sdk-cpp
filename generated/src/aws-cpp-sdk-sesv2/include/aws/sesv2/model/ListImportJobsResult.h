/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ImportJobSummary.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListImportJobsResponse">AWS
   * API Reference</a></p>
   */
  class ListImportJobsResult
  {
  public:
    AWS_SESV2_API ListImportJobsResult() = default;
    AWS_SESV2_API ListImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the import job summaries.</p>
     */
    inline const Aws::Vector<ImportJobSummary>& GetImportJobs() const { return m_importJobs; }
    template<typename ImportJobsT = Aws::Vector<ImportJobSummary>>
    void SetImportJobs(ImportJobsT&& value) { m_importJobsHasBeenSet = true; m_importJobs = std::forward<ImportJobsT>(value); }
    template<typename ImportJobsT = Aws::Vector<ImportJobSummary>>
    ListImportJobsResult& WithImportJobs(ImportJobsT&& value) { SetImportJobs(std::forward<ImportJobsT>(value)); return *this;}
    template<typename ImportJobsT = ImportJobSummary>
    ListImportJobsResult& AddImportJobs(ImportJobsT&& value) { m_importJobsHasBeenSet = true; m_importJobs.emplace_back(std::forward<ImportJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string token indicating that there might be additional import jobs
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListImportJobs</code> with the same parameters to retrieve the next page
     * of import jobs.</p>
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

    Aws::Vector<ImportJobSummary> m_importJobs;
    bool m_importJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
