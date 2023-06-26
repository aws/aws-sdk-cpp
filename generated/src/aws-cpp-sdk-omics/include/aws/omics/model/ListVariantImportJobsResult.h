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
    AWS_OMICS_API ListVariantImportJobsResult();
    AWS_OMICS_API ListVariantImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListVariantImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<VariantImportJobItem>& GetVariantImportJobs() const{ return m_variantImportJobs; }

    /**
     * <p>A list of jobs.</p>
     */
    inline void SetVariantImportJobs(const Aws::Vector<VariantImportJobItem>& value) { m_variantImportJobs = value; }

    /**
     * <p>A list of jobs.</p>
     */
    inline void SetVariantImportJobs(Aws::Vector<VariantImportJobItem>&& value) { m_variantImportJobs = std::move(value); }

    /**
     * <p>A list of jobs.</p>
     */
    inline ListVariantImportJobsResult& WithVariantImportJobs(const Aws::Vector<VariantImportJobItem>& value) { SetVariantImportJobs(value); return *this;}

    /**
     * <p>A list of jobs.</p>
     */
    inline ListVariantImportJobsResult& WithVariantImportJobs(Aws::Vector<VariantImportJobItem>&& value) { SetVariantImportJobs(std::move(value)); return *this;}

    /**
     * <p>A list of jobs.</p>
     */
    inline ListVariantImportJobsResult& AddVariantImportJobs(const VariantImportJobItem& value) { m_variantImportJobs.push_back(value); return *this; }

    /**
     * <p>A list of jobs.</p>
     */
    inline ListVariantImportJobsResult& AddVariantImportJobs(VariantImportJobItem&& value) { m_variantImportJobs.push_back(std::move(value)); return *this; }


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
    inline ListVariantImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListVariantImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListVariantImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListVariantImportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListVariantImportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListVariantImportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<VariantImportJobItem> m_variantImportJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
