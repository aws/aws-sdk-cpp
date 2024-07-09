/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/OptimizationJobModelSourceS3.h>
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
   * <p>The location of the source model to optimize with an optimization
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OptimizationJobModelSource">AWS
   * API Reference</a></p>
   */
  class OptimizationJobModelSource
  {
  public:
    AWS_SAGEMAKER_API OptimizationJobModelSource();
    AWS_SAGEMAKER_API OptimizationJobModelSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OptimizationJobModelSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location of a source model to optimize with an optimization
     * job.</p>
     */
    inline const OptimizationJobModelSourceS3& GetS3() const{ return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(const OptimizationJobModelSourceS3& value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline void SetS3(OptimizationJobModelSourceS3&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }
    inline OptimizationJobModelSource& WithS3(const OptimizationJobModelSourceS3& value) { SetS3(value); return *this;}
    inline OptimizationJobModelSource& WithS3(OptimizationJobModelSourceS3&& value) { SetS3(std::move(value)); return *this;}
    ///@}
  private:

    OptimizationJobModelSourceS3 m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
