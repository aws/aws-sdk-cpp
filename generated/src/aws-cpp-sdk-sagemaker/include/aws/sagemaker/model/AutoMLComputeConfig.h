/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EmrServerlessComputeConfig.h>
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
   * <p> <p>This data type is intended for use exclusively by SageMaker Canvas
   * and cannot be used in other contexts at the moment.</p>  <p>Specifies the
   * compute configuration for an AutoML job V2.</p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLComputeConfig">AWS
   * API Reference</a></p>
   */
  class AutoMLComputeConfig
  {
  public:
    AWS_SAGEMAKER_API AutoMLComputeConfig() = default;
    AWS_SAGEMAKER_API AutoMLComputeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLComputeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for using <a
     * href="https://docs.aws.amazon.com/emr/latest/EMR-Serverless-UserGuide/emr-serverless.html">
     * EMR Serverless</a> to run the AutoML job V2.</p> <p>To allow your AutoML job V2
     * to automatically initiate a remote job on EMR Serverless when additional compute
     * resources are needed to process large datasets, you need to provide an
     * <code>EmrServerlessComputeConfig</code> object, which includes an
     * <code>ExecutionRoleARN</code> attribute, to the <code>AutoMLComputeConfig</code>
     * of the AutoML job V2 input request.</p> <p>By seamlessly transitioning to EMR
     * Serverless when required, the AutoML job can handle datasets that would
     * otherwise exceed the initially provisioned resources, without any manual
     * intervention from you. </p> <p>EMR Serverless is available for the tabular and
     * time series problem types. We recommend setting up this option for tabular
     * datasets larger than 5 GB and time series datasets larger than 30 GB.</p>
     */
    inline const EmrServerlessComputeConfig& GetEmrServerlessComputeConfig() const { return m_emrServerlessComputeConfig; }
    inline bool EmrServerlessComputeConfigHasBeenSet() const { return m_emrServerlessComputeConfigHasBeenSet; }
    template<typename EmrServerlessComputeConfigT = EmrServerlessComputeConfig>
    void SetEmrServerlessComputeConfig(EmrServerlessComputeConfigT&& value) { m_emrServerlessComputeConfigHasBeenSet = true; m_emrServerlessComputeConfig = std::forward<EmrServerlessComputeConfigT>(value); }
    template<typename EmrServerlessComputeConfigT = EmrServerlessComputeConfig>
    AutoMLComputeConfig& WithEmrServerlessComputeConfig(EmrServerlessComputeConfigT&& value) { SetEmrServerlessComputeConfig(std::forward<EmrServerlessComputeConfigT>(value)); return *this;}
    ///@}
  private:

    EmrServerlessComputeConfig m_emrServerlessComputeConfig;
    bool m_emrServerlessComputeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
