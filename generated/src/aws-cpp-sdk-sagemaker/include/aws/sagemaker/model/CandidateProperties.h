/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CandidateArtifactLocations.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/MetricDatum.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The properties of an AutoML candidate job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CandidateProperties">AWS
   * API Reference</a></p>
   */
  class CandidateProperties
  {
  public:
    AWS_SAGEMAKER_API CandidateProperties() = default;
    AWS_SAGEMAKER_API CandidateProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CandidateProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline const CandidateArtifactLocations& GetCandidateArtifactLocations() const { return m_candidateArtifactLocations; }
    inline bool CandidateArtifactLocationsHasBeenSet() const { return m_candidateArtifactLocationsHasBeenSet; }
    template<typename CandidateArtifactLocationsT = CandidateArtifactLocations>
    void SetCandidateArtifactLocations(CandidateArtifactLocationsT&& value) { m_candidateArtifactLocationsHasBeenSet = true; m_candidateArtifactLocations = std::forward<CandidateArtifactLocationsT>(value); }
    template<typename CandidateArtifactLocationsT = CandidateArtifactLocations>
    CandidateProperties& WithCandidateArtifactLocations(CandidateArtifactLocationsT&& value) { SetCandidateArtifactLocations(std::forward<CandidateArtifactLocationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the candidate metrics for an AutoML job.</p>
     */
    inline const Aws::Vector<MetricDatum>& GetCandidateMetrics() const { return m_candidateMetrics; }
    inline bool CandidateMetricsHasBeenSet() const { return m_candidateMetricsHasBeenSet; }
    template<typename CandidateMetricsT = Aws::Vector<MetricDatum>>
    void SetCandidateMetrics(CandidateMetricsT&& value) { m_candidateMetricsHasBeenSet = true; m_candidateMetrics = std::forward<CandidateMetricsT>(value); }
    template<typename CandidateMetricsT = Aws::Vector<MetricDatum>>
    CandidateProperties& WithCandidateMetrics(CandidateMetricsT&& value) { SetCandidateMetrics(std::forward<CandidateMetricsT>(value)); return *this;}
    template<typename CandidateMetricsT = MetricDatum>
    CandidateProperties& AddCandidateMetrics(CandidateMetricsT&& value) { m_candidateMetricsHasBeenSet = true; m_candidateMetrics.emplace_back(std::forward<CandidateMetricsT>(value)); return *this; }
    ///@}
  private:

    CandidateArtifactLocations m_candidateArtifactLocations;
    bool m_candidateArtifactLocationsHasBeenSet = false;

    Aws::Vector<MetricDatum> m_candidateMetrics;
    bool m_candidateMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
