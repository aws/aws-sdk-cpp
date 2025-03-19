/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProductionVariantServerlessUpdateConfig.h>
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
   * <p>Specifies weight and capacity values for a production variant.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DesiredWeightAndCapacity">AWS
   * API Reference</a></p>
   */
  class DesiredWeightAndCapacity
  {
  public:
    AWS_SAGEMAKER_API DesiredWeightAndCapacity() = default;
    AWS_SAGEMAKER_API DesiredWeightAndCapacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DesiredWeightAndCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the variant to update.</p>
     */
    inline const Aws::String& GetVariantName() const { return m_variantName; }
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }
    template<typename VariantNameT = Aws::String>
    void SetVariantName(VariantNameT&& value) { m_variantNameHasBeenSet = true; m_variantName = std::forward<VariantNameT>(value); }
    template<typename VariantNameT = Aws::String>
    DesiredWeightAndCapacity& WithVariantName(VariantNameT&& value) { SetVariantName(std::forward<VariantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The variant's weight.</p>
     */
    inline double GetDesiredWeight() const { return m_desiredWeight; }
    inline bool DesiredWeightHasBeenSet() const { return m_desiredWeightHasBeenSet; }
    inline void SetDesiredWeight(double value) { m_desiredWeightHasBeenSet = true; m_desiredWeight = value; }
    inline DesiredWeightAndCapacity& WithDesiredWeight(double value) { SetDesiredWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The variant's capacity.</p>
     */
    inline int GetDesiredInstanceCount() const { return m_desiredInstanceCount; }
    inline bool DesiredInstanceCountHasBeenSet() const { return m_desiredInstanceCountHasBeenSet; }
    inline void SetDesiredInstanceCount(int value) { m_desiredInstanceCountHasBeenSet = true; m_desiredInstanceCount = value; }
    inline DesiredWeightAndCapacity& WithDesiredInstanceCount(int value) { SetDesiredInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the serverless update concurrency configuration for an endpoint
     * variant.</p>
     */
    inline const ProductionVariantServerlessUpdateConfig& GetServerlessUpdateConfig() const { return m_serverlessUpdateConfig; }
    inline bool ServerlessUpdateConfigHasBeenSet() const { return m_serverlessUpdateConfigHasBeenSet; }
    template<typename ServerlessUpdateConfigT = ProductionVariantServerlessUpdateConfig>
    void SetServerlessUpdateConfig(ServerlessUpdateConfigT&& value) { m_serverlessUpdateConfigHasBeenSet = true; m_serverlessUpdateConfig = std::forward<ServerlessUpdateConfigT>(value); }
    template<typename ServerlessUpdateConfigT = ProductionVariantServerlessUpdateConfig>
    DesiredWeightAndCapacity& WithServerlessUpdateConfig(ServerlessUpdateConfigT&& value) { SetServerlessUpdateConfig(std::forward<ServerlessUpdateConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    double m_desiredWeight{0.0};
    bool m_desiredWeightHasBeenSet = false;

    int m_desiredInstanceCount{0};
    bool m_desiredInstanceCountHasBeenSet = false;

    ProductionVariantServerlessUpdateConfig m_serverlessUpdateConfig;
    bool m_serverlessUpdateConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
