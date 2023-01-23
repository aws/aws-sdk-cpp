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
    AWS_SESV2_API ListImportJobsResult();
    AWS_SESV2_API ListImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the import job summaries.</p>
     */
    inline const Aws::Vector<ImportJobSummary>& GetImportJobs() const{ return m_importJobs; }

    /**
     * <p>A list of the import job summaries.</p>
     */
    inline void SetImportJobs(const Aws::Vector<ImportJobSummary>& value) { m_importJobs = value; }

    /**
     * <p>A list of the import job summaries.</p>
     */
    inline void SetImportJobs(Aws::Vector<ImportJobSummary>&& value) { m_importJobs = std::move(value); }

    /**
     * <p>A list of the import job summaries.</p>
     */
    inline ListImportJobsResult& WithImportJobs(const Aws::Vector<ImportJobSummary>& value) { SetImportJobs(value); return *this;}

    /**
     * <p>A list of the import job summaries.</p>
     */
    inline ListImportJobsResult& WithImportJobs(Aws::Vector<ImportJobSummary>&& value) { SetImportJobs(std::move(value)); return *this;}

    /**
     * <p>A list of the import job summaries.</p>
     */
    inline ListImportJobsResult& AddImportJobs(const ImportJobSummary& value) { m_importJobs.push_back(value); return *this; }

    /**
     * <p>A list of the import job summaries.</p>
     */
    inline ListImportJobsResult& AddImportJobs(ImportJobSummary&& value) { m_importJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>A string token indicating that there might be additional import jobs
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListImportJobs</code> with the same parameters to retrieve the next page
     * of import jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string token indicating that there might be additional import jobs
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListImportJobs</code> with the same parameters to retrieve the next page
     * of import jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A string token indicating that there might be additional import jobs
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListImportJobs</code> with the same parameters to retrieve the next page
     * of import jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A string token indicating that there might be additional import jobs
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListImportJobs</code> with the same parameters to retrieve the next page
     * of import jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A string token indicating that there might be additional import jobs
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListImportJobs</code> with the same parameters to retrieve the next page
     * of import jobs.</p>
     */
    inline ListImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string token indicating that there might be additional import jobs
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListImportJobs</code> with the same parameters to retrieve the next page
     * of import jobs.</p>
     */
    inline ListImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string token indicating that there might be additional import jobs
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListImportJobs</code> with the same parameters to retrieve the next page
     * of import jobs.</p>
     */
    inline ListImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImportJobSummary> m_importJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
