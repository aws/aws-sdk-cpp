/**
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
    inline ListPackageImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListPackageImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListPackageImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of package import jobs.</p>
     */
    inline const Aws::Vector<PackageImportJob>& GetPackageImportJobs() const{ return m_packageImportJobs; }

    /**
     * <p>A list of package import jobs.</p>
     */
    inline void SetPackageImportJobs(const Aws::Vector<PackageImportJob>& value) { m_packageImportJobs = value; }

    /**
     * <p>A list of package import jobs.</p>
     */
    inline void SetPackageImportJobs(Aws::Vector<PackageImportJob>&& value) { m_packageImportJobs = std::move(value); }

    /**
     * <p>A list of package import jobs.</p>
     */
    inline ListPackageImportJobsResult& WithPackageImportJobs(const Aws::Vector<PackageImportJob>& value) { SetPackageImportJobs(value); return *this;}

    /**
     * <p>A list of package import jobs.</p>
     */
    inline ListPackageImportJobsResult& WithPackageImportJobs(Aws::Vector<PackageImportJob>&& value) { SetPackageImportJobs(std::move(value)); return *this;}

    /**
     * <p>A list of package import jobs.</p>
     */
    inline ListPackageImportJobsResult& AddPackageImportJobs(const PackageImportJob& value) { m_packageImportJobs.push_back(value); return *this; }

    /**
     * <p>A list of package import jobs.</p>
     */
    inline ListPackageImportJobsResult& AddPackageImportJobs(PackageImportJob&& value) { m_packageImportJobs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<PackageImportJob> m_packageImportJobs;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
