/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_OMICS_API ListReferenceImportJobsResult();
    AWS_OMICS_API ListReferenceImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReferenceImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A lis of jobs.</p>
     */
    inline const Aws::Vector<ImportReferenceJobItem>& GetImportJobs() const{ return m_importJobs; }

    /**
     * <p>A lis of jobs.</p>
     */
    inline void SetImportJobs(const Aws::Vector<ImportReferenceJobItem>& value) { m_importJobs = value; }

    /**
     * <p>A lis of jobs.</p>
     */
    inline void SetImportJobs(Aws::Vector<ImportReferenceJobItem>&& value) { m_importJobs = std::move(value); }

    /**
     * <p>A lis of jobs.</p>
     */
    inline ListReferenceImportJobsResult& WithImportJobs(const Aws::Vector<ImportReferenceJobItem>& value) { SetImportJobs(value); return *this;}

    /**
     * <p>A lis of jobs.</p>
     */
    inline ListReferenceImportJobsResult& WithImportJobs(Aws::Vector<ImportReferenceJobItem>&& value) { SetImportJobs(std::move(value)); return *this;}

    /**
     * <p>A lis of jobs.</p>
     */
    inline ListReferenceImportJobsResult& AddImportJobs(const ImportReferenceJobItem& value) { m_importJobs.push_back(value); return *this; }

    /**
     * <p>A lis of jobs.</p>
     */
    inline ListReferenceImportJobsResult& AddImportJobs(ImportReferenceJobItem&& value) { m_importJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReferenceImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReferenceImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReferenceImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImportReferenceJobItem> m_importJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
