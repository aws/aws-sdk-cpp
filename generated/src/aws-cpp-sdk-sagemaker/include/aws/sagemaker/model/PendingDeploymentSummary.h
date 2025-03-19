/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/PendingProductionVariantSummary.h>
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
   * <p>The summary of an in-progress deployment when an endpoint is creating or
   * updating with a new endpoint configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PendingDeploymentSummary">AWS
   * API Reference</a></p>
   */
  class PendingDeploymentSummary
  {
  public:
    AWS_SAGEMAKER_API PendingDeploymentSummary() = default;
    AWS_SAGEMAKER_API PendingDeploymentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PendingDeploymentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the endpoint configuration used in the deployment. </p>
     */
    inline const Aws::String& GetEndpointConfigName() const { return m_endpointConfigName; }
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }
    template<typename EndpointConfigNameT = Aws::String>
    void SetEndpointConfigName(EndpointConfigNameT&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::forward<EndpointConfigNameT>(value); }
    template<typename EndpointConfigNameT = Aws::String>
    PendingDeploymentSummary& WithEndpointConfigName(EndpointConfigNameT&& value) { SetEndpointConfigName(std::forward<EndpointConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_PendingProductionVariantSummary.html">PendingProductionVariantSummary</a>
     * objects, one for each model hosted behind this endpoint for the in-progress
     * deployment.</p>
     */
    inline const Aws::Vector<PendingProductionVariantSummary>& GetProductionVariants() const { return m_productionVariants; }
    inline bool ProductionVariantsHasBeenSet() const { return m_productionVariantsHasBeenSet; }
    template<typename ProductionVariantsT = Aws::Vector<PendingProductionVariantSummary>>
    void SetProductionVariants(ProductionVariantsT&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = std::forward<ProductionVariantsT>(value); }
    template<typename ProductionVariantsT = Aws::Vector<PendingProductionVariantSummary>>
    PendingDeploymentSummary& WithProductionVariants(ProductionVariantsT&& value) { SetProductionVariants(std::forward<ProductionVariantsT>(value)); return *this;}
    template<typename ProductionVariantsT = PendingProductionVariantSummary>
    PendingDeploymentSummary& AddProductionVariants(ProductionVariantsT&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.emplace_back(std::forward<ProductionVariantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The start time of the deployment.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    PendingDeploymentSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_PendingProductionVariantSummary.html">PendingProductionVariantSummary</a>
     * objects, one for each model hosted behind this endpoint in shadow mode with
     * production traffic replicated from the model specified on
     * <code>ProductionVariants</code> for the in-progress deployment.</p>
     */
    inline const Aws::Vector<PendingProductionVariantSummary>& GetShadowProductionVariants() const { return m_shadowProductionVariants; }
    inline bool ShadowProductionVariantsHasBeenSet() const { return m_shadowProductionVariantsHasBeenSet; }
    template<typename ShadowProductionVariantsT = Aws::Vector<PendingProductionVariantSummary>>
    void SetShadowProductionVariants(ShadowProductionVariantsT&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants = std::forward<ShadowProductionVariantsT>(value); }
    template<typename ShadowProductionVariantsT = Aws::Vector<PendingProductionVariantSummary>>
    PendingDeploymentSummary& WithShadowProductionVariants(ShadowProductionVariantsT&& value) { SetShadowProductionVariants(std::forward<ShadowProductionVariantsT>(value)); return *this;}
    template<typename ShadowProductionVariantsT = PendingProductionVariantSummary>
    PendingDeploymentSummary& AddShadowProductionVariants(ShadowProductionVariantsT&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants.emplace_back(std::forward<ShadowProductionVariantsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;

    Aws::Vector<PendingProductionVariantSummary> m_productionVariants;
    bool m_productionVariantsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Vector<PendingProductionVariantSummary> m_shadowProductionVariants;
    bool m_shadowProductionVariantsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
