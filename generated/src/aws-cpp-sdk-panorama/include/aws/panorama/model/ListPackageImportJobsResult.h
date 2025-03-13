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
    AWS_PANORAMA_API ListPackageImportJobsResult() = default;
    AWS_PANORAMA_API ListPackageImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListPackageImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPackageImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of package import jobs.</p>
     */
    inline const Aws::Vector<PackageImportJob>& GetPackageImportJobs() const { return m_packageImportJobs; }
    template<typename PackageImportJobsT = Aws::Vector<PackageImportJob>>
    void SetPackageImportJobs(PackageImportJobsT&& value) { m_packageImportJobsHasBeenSet = true; m_packageImportJobs = std::forward<PackageImportJobsT>(value); }
    template<typename PackageImportJobsT = Aws::Vector<PackageImportJob>>
    ListPackageImportJobsResult& WithPackageImportJobs(PackageImportJobsT&& value) { SetPackageImportJobs(std::forward<PackageImportJobsT>(value)); return *this;}
    template<typename PackageImportJobsT = PackageImportJob>
    ListPackageImportJobsResult& AddPackageImportJobs(PackageImportJobsT&& value) { m_packageImportJobsHasBeenSet = true; m_packageImportJobs.emplace_back(std::forward<PackageImportJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPackageImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PackageImportJob> m_packageImportJobs;
    bool m_packageImportJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
