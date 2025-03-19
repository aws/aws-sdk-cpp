/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/JobMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Snowball
{
namespace Model
{
  class DescribeJobResult
  {
  public:
    AWS_SNOWBALL_API DescribeJobResult() = default;
    AWS_SNOWBALL_API DescribeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API DescribeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a specific job, including shipping information, job status,
     * and other important metadata.</p>
     */
    inline const JobMetadata& GetJobMetadata() const { return m_jobMetadata; }
    template<typename JobMetadataT = JobMetadata>
    void SetJobMetadata(JobMetadataT&& value) { m_jobMetadataHasBeenSet = true; m_jobMetadata = std::forward<JobMetadataT>(value); }
    template<typename JobMetadataT = JobMetadata>
    DescribeJobResult& WithJobMetadata(JobMetadataT&& value) { SetJobMetadata(std::forward<JobMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a specific job part (in the case of an export job),
     * including shipping information, job status, and other important metadata.</p>
     */
    inline const Aws::Vector<JobMetadata>& GetSubJobMetadata() const { return m_subJobMetadata; }
    template<typename SubJobMetadataT = Aws::Vector<JobMetadata>>
    void SetSubJobMetadata(SubJobMetadataT&& value) { m_subJobMetadataHasBeenSet = true; m_subJobMetadata = std::forward<SubJobMetadataT>(value); }
    template<typename SubJobMetadataT = Aws::Vector<JobMetadata>>
    DescribeJobResult& WithSubJobMetadata(SubJobMetadataT&& value) { SetSubJobMetadata(std::forward<SubJobMetadataT>(value)); return *this;}
    template<typename SubJobMetadataT = JobMetadata>
    DescribeJobResult& AddSubJobMetadata(SubJobMetadataT&& value) { m_subJobMetadataHasBeenSet = true; m_subJobMetadata.emplace_back(std::forward<SubJobMetadataT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JobMetadata m_jobMetadata;
    bool m_jobMetadataHasBeenSet = false;

    Aws::Vector<JobMetadata> m_subJobMetadata;
    bool m_subJobMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
