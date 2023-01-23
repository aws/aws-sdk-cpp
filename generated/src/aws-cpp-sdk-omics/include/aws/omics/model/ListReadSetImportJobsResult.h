/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ImportReadSetJobItem.h>
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
  class ListReadSetImportJobsResult
  {
  public:
    AWS_OMICS_API ListReadSetImportJobsResult();
    AWS_OMICS_API ListReadSetImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReadSetImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<ImportReadSetJobItem>& GetImportJobs() const{ return m_importJobs; }

    /**
     * <p>A list of jobs.</p>
     */
    inline void SetImportJobs(const Aws::Vector<ImportReadSetJobItem>& value) { m_importJobs = value; }

    /**
     * <p>A list of jobs.</p>
     */
    inline void SetImportJobs(Aws::Vector<ImportReadSetJobItem>&& value) { m_importJobs = std::move(value); }

    /**
     * <p>A list of jobs.</p>
     */
    inline ListReadSetImportJobsResult& WithImportJobs(const Aws::Vector<ImportReadSetJobItem>& value) { SetImportJobs(value); return *this;}

    /**
     * <p>A list of jobs.</p>
     */
    inline ListReadSetImportJobsResult& WithImportJobs(Aws::Vector<ImportReadSetJobItem>&& value) { SetImportJobs(std::move(value)); return *this;}

    /**
     * <p>A list of jobs.</p>
     */
    inline ListReadSetImportJobsResult& AddImportJobs(const ImportReadSetJobItem& value) { m_importJobs.push_back(value); return *this; }

    /**
     * <p>A list of jobs.</p>
     */
    inline ListReadSetImportJobsResult& AddImportJobs(ImportReadSetJobItem&& value) { m_importJobs.push_back(std::move(value)); return *this; }


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
    inline ListReadSetImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReadSetImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListReadSetImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImportReadSetJobItem> m_importJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
