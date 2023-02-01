/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Personalize
{
namespace Model
{
  class GetSolutionMetricsResult
  {
  public:
    AWS_PERSONALIZE_API GetSolutionMetricsResult();
    AWS_PERSONALIZE_API GetSolutionMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API GetSolutionMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }

    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArn = value; }

    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArn = std::move(value); }

    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArn.assign(value); }

    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline GetSolutionMetricsResult& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}

    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline GetSolutionMetricsResult& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}

    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline GetSolutionMetricsResult& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}


    /**
     * <p>The metrics for the solution version. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/working-with-training-metrics.html">
     * Evaluating a solution version with metrics </a>.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The metrics for the solution version. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/working-with-training-metrics.html">
     * Evaluating a solution version with metrics </a>.</p>
     */
    inline void SetMetrics(const Aws::Map<Aws::String, double>& value) { m_metrics = value; }

    /**
     * <p>The metrics for the solution version. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/working-with-training-metrics.html">
     * Evaluating a solution version with metrics </a>.</p>
     */
    inline void SetMetrics(Aws::Map<Aws::String, double>&& value) { m_metrics = std::move(value); }

    /**
     * <p>The metrics for the solution version. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/working-with-training-metrics.html">
     * Evaluating a solution version with metrics </a>.</p>
     */
    inline GetSolutionMetricsResult& WithMetrics(const Aws::Map<Aws::String, double>& value) { SetMetrics(value); return *this;}

    /**
     * <p>The metrics for the solution version. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/working-with-training-metrics.html">
     * Evaluating a solution version with metrics </a>.</p>
     */
    inline GetSolutionMetricsResult& WithMetrics(Aws::Map<Aws::String, double>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>The metrics for the solution version. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/working-with-training-metrics.html">
     * Evaluating a solution version with metrics </a>.</p>
     */
    inline GetSolutionMetricsResult& AddMetrics(const Aws::String& key, double value) { m_metrics.emplace(key, value); return *this; }

    /**
     * <p>The metrics for the solution version. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/working-with-training-metrics.html">
     * Evaluating a solution version with metrics </a>.</p>
     */
    inline GetSolutionMetricsResult& AddMetrics(Aws::String&& key, double value) { m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metrics for the solution version. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/working-with-training-metrics.html">
     * Evaluating a solution version with metrics </a>.</p>
     */
    inline GetSolutionMetricsResult& AddMetrics(const char* key, double value) { m_metrics.emplace(key, value); return *this; }

  private:

    Aws::String m_solutionVersionArn;

    Aws::Map<Aws::String, double> m_metrics;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
