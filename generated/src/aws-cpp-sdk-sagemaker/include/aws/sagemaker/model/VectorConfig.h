/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>Configuration for your vector collection type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/VectorConfig">AWS
   * API Reference</a></p>
   */
  class VectorConfig
  {
  public:
    AWS_SAGEMAKER_API VectorConfig();
    AWS_SAGEMAKER_API VectorConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API VectorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of elements in your vector.</p>
     */
    inline int GetDimension() const{ return m_dimension; }

    /**
     * <p>The number of elements in your vector.</p>
     */
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }

    /**
     * <p>The number of elements in your vector.</p>
     */
    inline void SetDimension(int value) { m_dimensionHasBeenSet = true; m_dimension = value; }

    /**
     * <p>The number of elements in your vector.</p>
     */
    inline VectorConfig& WithDimension(int value) { SetDimension(value); return *this;}

  private:

    int m_dimension;
    bool m_dimensionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
