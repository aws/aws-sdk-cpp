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
    AWS_SAGEMAKER_API OptimizationJobModelSourceS3();
    AWS_SAGEMAKER_API OptimizationJobModelSourceS3(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OptimizationJobModelSourceS3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon S3 URI that locates a source model to optimize with an optimization
     * job.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline OptimizationJobModelSourceS3& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline OptimizationJobModelSourceS3& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline OptimizationJobModelSourceS3& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access configuration settings for the source ML model for an optimization
     * job, where you can accept the model end-user license agreement (EULA).</p>
     */
    inline const OptimizationModelAccessConfig& GetModelAccessConfig() const{ return m_modelAccessConfig; }
    inline bool ModelAccessConfigHasBeenSet() const { return m_modelAccessConfigHasBeenSet; }
    inline void SetModelAccessConfig(const OptimizationModelAccessConfig& value) { m_modelAccessConfigHasBeenSet = true; m_modelAccessConfig = value; }
    inline void SetModelAccessConfig(OptimizationModelAccessConfig&& value) { m_modelAccessConfigHasBeenSet = true; m_modelAccessConfig = std::move(value); }
    inline OptimizationJobModelSourceS3& WithModelAccessConfig(const OptimizationModelAccessConfig& value) { SetModelAccessConfig(value); return *this;}
    inline OptimizationJobModelSourceS3& WithModelAccessConfig(OptimizationModelAccessConfig&& value) { SetModelAccessConfig(std::move(value)); return *this;}
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
