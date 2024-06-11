﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/PackageImportJob.h>
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
namespace Panorama
{
namespace Model
{
  class ListPackageImportJobsResult
  {
  public:
    AWS_PANORAMA_API ListPackageImportJobsResult();
    AWS_PANORAMA_API ListPackageImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListPackageImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPackageImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPackageImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPackageImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of package import jobs.</p>
     */
    inline const Aws::Vector<PackageImportJob>& GetPackageImportJobs() const{ return m_packageImportJobs; }
    inline void SetPackageImportJobs(const Aws::Vector<PackageImportJob>& value) { m_packageImportJobs = value; }
    inline void SetPackageImportJobs(Aws::Vector<PackageImportJob>&& value) { m_packageImportJobs = std::move(value); }
    inline ListPackageImportJobsResult& WithPackageImportJobs(const Aws::Vector<PackageImportJob>& value) { SetPackageImportJobs(value); return *this;}
    inline ListPackageImportJobsResult& WithPackageImportJobs(Aws::Vector<PackageImportJob>&& value) { SetPackageImportJobs(std::move(value)); return *this;}
    inline ListPackageImportJobsResult& AddPackageImportJobs(const PackageImportJob& value) { m_packageImportJobs.push_back(value); return *this; }
    inline ListPackageImportJobsResult& AddPackageImportJobs(PackageImportJob&& value) { m_packageImportJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPackageImportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPackageImportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPackageImportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<PackageImportJob> m_packageImportJobs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
