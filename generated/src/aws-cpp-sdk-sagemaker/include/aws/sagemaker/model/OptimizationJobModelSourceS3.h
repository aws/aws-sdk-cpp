/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/OptimizationModelAccessConfig.h>
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
   * <p>The Amazon S3 location of a source model to optimize with an optimization
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OptimizationJobModelSourceS3">AWS
   * API Reference</a></p>
   */
  class OptimizationJobModelSourceS3
  {
  public:
    AWS_SAGEMAKER_API OptimizationJobModelSourceS3() = default;
    AWS_SAGEMAKER_API OptimizationJobModelSourceS3(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OptimizationJobModelSourceS3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon S3 URI that locates a source model to optimize with an optimization
     * job.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    OptimizationJobModelSourceS3& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access configuration settings for the source ML model for an optimization
     * job, where you can accept the model end-user license agreement (EULA).</p>
     */
    inline const OptimizationModelAccessConfig& GetModelAccessConfig() const { return m_modelAccessConfig; }
    inline bool ModelAccessConfigHasBeenSet() const { return m_modelAccessConfigHasBeenSet; }
    template<typename ModelAccessConfigT = OptimizationModelAccessConfig>
    void SetModelAccessConfig(ModelAccessConfigT&& value) { m_modelAccessConfigHasBeenSet = true; m_modelAccessConfig = std::forward<ModelAccessConfigT>(value); }
    template<typename ModelAccessConfigT = OptimizationModelAccessConfig>
    OptimizationJobModelSourceS3& WithModelAccessConfig(ModelAccessConfigT&& value) { SetModelAccessConfig(std::forward<ModelAccessConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    OptimizationModelAccessConfig m_modelAccessConfig;
    bool m_modelAccessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
