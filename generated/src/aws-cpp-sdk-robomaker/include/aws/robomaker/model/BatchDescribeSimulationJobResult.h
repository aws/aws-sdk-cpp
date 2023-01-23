/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/SimulationJob.h>
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
namespace RoboMaker
{
namespace Model
{
  class BatchDescribeSimulationJobResult
  {
  public:
    AWS_ROBOMAKER_API BatchDescribeSimulationJobResult();
    AWS_ROBOMAKER_API BatchDescribeSimulationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API BatchDescribeSimulationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of simulation jobs.</p>
     */
    inline const Aws::Vector<SimulationJob>& GetJobs() const{ return m_jobs; }

    /**
     * <p>A list of simulation jobs.</p>
     */
    inline void SetJobs(const Aws::Vector<SimulationJob>& value) { m_jobs = value; }

    /**
     * <p>A list of simulation jobs.</p>
     */
    inline void SetJobs(Aws::Vector<SimulationJob>&& value) { m_jobs = std::move(value); }

    /**
     * <p>A list of simulation jobs.</p>
     */
    inline BatchDescribeSimulationJobResult& WithJobs(const Aws::Vector<SimulationJob>& value) { SetJobs(value); return *this;}

    /**
     * <p>A list of simulation jobs.</p>
     */
    inline BatchDescribeSimulationJobResult& WithJobs(Aws::Vector<SimulationJob>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>A list of simulation jobs.</p>
     */
    inline BatchDescribeSimulationJobResult& AddJobs(const SimulationJob& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>A list of simulation jobs.</p>
     */
    inline BatchDescribeSimulationJobResult& AddJobs(SimulationJob&& value) { m_jobs.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of unprocessed simulation job Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetUnprocessedJobs() const{ return m_unprocessedJobs; }

    /**
     * <p>A list of unprocessed simulation job Amazon Resource Names (ARNs).</p>
     */
    inline void SetUnprocessedJobs(const Aws::Vector<Aws::String>& value) { m_unprocessedJobs = value; }

    /**
     * <p>A list of unprocessed simulation job Amazon Resource Names (ARNs).</p>
     */
    inline void SetUnprocessedJobs(Aws::Vector<Aws::String>&& value) { m_unprocessedJobs = std::move(value); }

    /**
     * <p>A list of unprocessed simulation job Amazon Resource Names (ARNs).</p>
     */
    inline BatchDescribeSimulationJobResult& WithUnprocessedJobs(const Aws::Vector<Aws::String>& value) { SetUnprocessedJobs(value); return *this;}

    /**
     * <p>A list of unprocessed simulation job Amazon Resource Names (ARNs).</p>
     */
    inline BatchDescribeSimulationJobResult& WithUnprocessedJobs(Aws::Vector<Aws::String>&& value) { SetUnprocessedJobs(std::move(value)); return *this;}

    /**
     * <p>A list of unprocessed simulation job Amazon Resource Names (ARNs).</p>
     */
    inline BatchDescribeSimulationJobResult& AddUnprocessedJobs(const Aws::String& value) { m_unprocessedJobs.push_back(value); return *this; }

    /**
     * <p>A list of unprocessed simulation job Amazon Resource Names (ARNs).</p>
     */
    inline BatchDescribeSimulationJobResult& AddUnprocessedJobs(Aws::String&& value) { m_unprocessedJobs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of unprocessed simulation job Amazon Resource Names (ARNs).</p>
     */
    inline BatchDescribeSimulationJobResult& AddUnprocessedJobs(const char* value) { m_unprocessedJobs.push_back(value); return *this; }

  private:

    Aws::Vector<SimulationJob> m_jobs;

    Aws::Vector<Aws::String> m_unprocessedJobs;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
