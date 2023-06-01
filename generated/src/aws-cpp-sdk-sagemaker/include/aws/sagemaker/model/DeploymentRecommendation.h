/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RecommendationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/RealTimeInferenceRecommendation.h>
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
   * <p>A set of recommended deployment configurations for the model. To get more
   * advanced recommendations, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateInferenceRecommendationsJob.html">CreateInferenceRecommendationsJob</a>
   * to create an inference recommendation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeploymentRecommendation">AWS
   * API Reference</a></p>
   */
  class DeploymentRecommendation
  {
  public:
    AWS_SAGEMAKER_API DeploymentRecommendation();
    AWS_SAGEMAKER_API DeploymentRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeploymentRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status of the deployment recommendation. The status
     * <code>NOT_APPLICABLE</code> means that SageMaker is unable to provide a default
     * recommendation for the model using the information provided. If the deployment
     * status is <code>IN_PROGRESS</code>, retry your API call after a few seconds to
     * get a <code>COMPLETED</code> deployment recommendation.</p>
     */
    inline const RecommendationStatus& GetRecommendationStatus() const{ return m_recommendationStatus; }

    /**
     * <p>Status of the deployment recommendation. The status
     * <code>NOT_APPLICABLE</code> means that SageMaker is unable to provide a default
     * recommendation for the model using the information provided. If the deployment
     * status is <code>IN_PROGRESS</code>, retry your API call after a few seconds to
     * get a <code>COMPLETED</code> deployment recommendation.</p>
     */
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }

    /**
     * <p>Status of the deployment recommendation. The status
     * <code>NOT_APPLICABLE</code> means that SageMaker is unable to provide a default
     * recommendation for the model using the information provided. If the deployment
     * status is <code>IN_PROGRESS</code>, retry your API call after a few seconds to
     * get a <code>COMPLETED</code> deployment recommendation.</p>
     */
    inline void SetRecommendationStatus(const RecommendationStatus& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }

    /**
     * <p>Status of the deployment recommendation. The status
     * <code>NOT_APPLICABLE</code> means that SageMaker is unable to provide a default
     * recommendation for the model using the information provided. If the deployment
     * status is <code>IN_PROGRESS</code>, retry your API call after a few seconds to
     * get a <code>COMPLETED</code> deployment recommendation.</p>
     */
    inline void SetRecommendationStatus(RecommendationStatus&& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = std::move(value); }

    /**
     * <p>Status of the deployment recommendation. The status
     * <code>NOT_APPLICABLE</code> means that SageMaker is unable to provide a default
     * recommendation for the model using the information provided. If the deployment
     * status is <code>IN_PROGRESS</code>, retry your API call after a few seconds to
     * get a <code>COMPLETED</code> deployment recommendation.</p>
     */
    inline DeploymentRecommendation& WithRecommendationStatus(const RecommendationStatus& value) { SetRecommendationStatus(value); return *this;}

    /**
     * <p>Status of the deployment recommendation. The status
     * <code>NOT_APPLICABLE</code> means that SageMaker is unable to provide a default
     * recommendation for the model using the information provided. If the deployment
     * status is <code>IN_PROGRESS</code>, retry your API call after a few seconds to
     * get a <code>COMPLETED</code> deployment recommendation.</p>
     */
    inline DeploymentRecommendation& WithRecommendationStatus(RecommendationStatus&& value) { SetRecommendationStatus(std::move(value)); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_RealTimeInferenceRecommendation.html">RealTimeInferenceRecommendation</a>
     * items.</p>
     */
    inline const Aws::Vector<RealTimeInferenceRecommendation>& GetRealTimeInferenceRecommendations() const{ return m_realTimeInferenceRecommendations; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_RealTimeInferenceRecommendation.html">RealTimeInferenceRecommendation</a>
     * items.</p>
     */
    inline bool RealTimeInferenceRecommendationsHasBeenSet() const { return m_realTimeInferenceRecommendationsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_RealTimeInferenceRecommendation.html">RealTimeInferenceRecommendation</a>
     * items.</p>
     */
    inline void SetRealTimeInferenceRecommendations(const Aws::Vector<RealTimeInferenceRecommendation>& value) { m_realTimeInferenceRecommendationsHasBeenSet = true; m_realTimeInferenceRecommendations = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_RealTimeInferenceRecommendation.html">RealTimeInferenceRecommendation</a>
     * items.</p>
     */
    inline void SetRealTimeInferenceRecommendations(Aws::Vector<RealTimeInferenceRecommendation>&& value) { m_realTimeInferenceRecommendationsHasBeenSet = true; m_realTimeInferenceRecommendations = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_RealTimeInferenceRecommendation.html">RealTimeInferenceRecommendation</a>
     * items.</p>
     */
    inline DeploymentRecommendation& WithRealTimeInferenceRecommendations(const Aws::Vector<RealTimeInferenceRecommendation>& value) { SetRealTimeInferenceRecommendations(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_RealTimeInferenceRecommendation.html">RealTimeInferenceRecommendation</a>
     * items.</p>
     */
    inline DeploymentRecommendation& WithRealTimeInferenceRecommendations(Aws::Vector<RealTimeInferenceRecommendation>&& value) { SetRealTimeInferenceRecommendations(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_RealTimeInferenceRecommendation.html">RealTimeInferenceRecommendation</a>
     * items.</p>
     */
    inline DeploymentRecommendation& AddRealTimeInferenceRecommendations(const RealTimeInferenceRecommendation& value) { m_realTimeInferenceRecommendationsHasBeenSet = true; m_realTimeInferenceRecommendations.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_RealTimeInferenceRecommendation.html">RealTimeInferenceRecommendation</a>
     * items.</p>
     */
    inline DeploymentRecommendation& AddRealTimeInferenceRecommendations(RealTimeInferenceRecommendation&& value) { m_realTimeInferenceRecommendationsHasBeenSet = true; m_realTimeInferenceRecommendations.push_back(std::move(value)); return *this; }

  private:

    RecommendationStatus m_recommendationStatus;
    bool m_recommendationStatusHasBeenSet = false;

    Aws::Vector<RealTimeInferenceRecommendation> m_realTimeInferenceRecommendations;
    bool m_realTimeInferenceRecommendationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
