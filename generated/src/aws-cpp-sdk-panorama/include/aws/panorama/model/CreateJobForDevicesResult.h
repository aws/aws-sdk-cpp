/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/Job.h>
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
  class CreateJobForDevicesResult
  {
  public:
    AWS_PANORAMA_API CreateJobForDevicesResult();
    AWS_PANORAMA_API CreateJobForDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API CreateJobForDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<Job>& GetJobs() const{ return m_jobs; }

    /**
     * <p>A list of jobs.</p>
     */
    inline void SetJobs(const Aws::Vector<Job>& value) { m_jobs = value; }

    /**
     * <p>A list of jobs.</p>
     */
    inline void SetJobs(Aws::Vector<Job>&& value) { m_jobs = std::move(value); }

    /**
     * <p>A list of jobs.</p>
     */
    inline CreateJobForDevicesResult& WithJobs(const Aws::Vector<Job>& value) { SetJobs(value); return *this;}

    /**
     * <p>A list of jobs.</p>
     */
    inline CreateJobForDevicesResult& WithJobs(Aws::Vector<Job>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>A list of jobs.</p>
     */
    inline CreateJobForDevicesResult& AddJobs(const Job& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>A list of jobs.</p>
     */
    inline CreateJobForDevicesResult& AddJobs(Job&& value) { m_jobs.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Job> m_jobs;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
