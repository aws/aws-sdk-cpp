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
    AWS_SESV2_API ListExportJobsResult();
    AWS_SESV2_API ListExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the export job summaries.</p>
     */
    inline const Aws::Vector<ExportJobSummary>& GetExportJobs() const{ return m_exportJobs; }

    /**
     * <p>A list of the export job summaries.</p>
     */
    inline void SetExportJobs(const Aws::Vector<ExportJobSummary>& value) { m_exportJobs = value; }

    /**
     * <p>A list of the export job summaries.</p>
     */
    inline void SetExportJobs(Aws::Vector<ExportJobSummary>&& value) { m_exportJobs = std::move(value); }

    /**
     * <p>A list of the export job summaries.</p>
     */
    inline ListExportJobsResult& WithExportJobs(const Aws::Vector<ExportJobSummary>& value) { SetExportJobs(value); return *this;}

    /**
     * <p>A list of the export job summaries.</p>
     */
    inline ListExportJobsResult& WithExportJobs(Aws::Vector<ExportJobSummary>&& value) { SetExportJobs(std::move(value)); return *this;}

    /**
     * <p>A list of the export job summaries.</p>
     */
    inline ListExportJobsResult& AddExportJobs(const ExportJobSummary& value) { m_exportJobs.push_back(value); return *this; }

    /**
     * <p>A list of the export job summaries.</p>
     */
    inline ListExportJobsResult& AddExportJobs(ExportJobSummary&& value) { m_exportJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>A string token indicating that there might be additional export jobs
     * available to be listed. Use this token to a subsequent call to
     * <code>ListExportJobs</code> with the same parameters to retrieve the next page
     * of export jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string token indicating that there might be additional export jobs
     * available to be listed. Use this token to a subsequent call to
     * <code>ListExportJobs</code> with the same parameters to retrieve the next page
     * of export jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A string token indicating that there might be additional export jobs
     * available to be listed. Use this token to a subsequent call to
     * <code>ListExportJobs</code> with the same parameters to retrieve the next page
     * of export jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A string token indicating that there might be additional export jobs
     * available to be listed. Use this token to a subsequent call to
     * <code>ListExportJobs</code> with the same parameters to retrieve the next page
     * of export jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A string token indicating that there might be additional export jobs
     * available to be listed. Use this token to a subsequent call to
     * <code>ListExportJobs</code> with the same parameters to retrieve the next page
     * of export jobs.</p>
     */
    inline ListExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string token indicating that there might be additional export jobs
     * available to be listed. Use this token to a subsequent call to
     * <code>ListExportJobs</code> with the same parameters to retrieve the next page
     * of export jobs.</p>
     */
    inline ListExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string token indicating that there might be additional export jobs
     * available to be listed. Use this token to a subsequent call to
     * <code>ListExportJobs</code> with the same parameters to retrieve the next page
     * of export jobs.</p>
     */
    inline ListExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListExportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListExportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListExportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ExportJobSummary> m_exportJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
