/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/InferenceComponentCapacitySizeType.h>
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
   * <p>Specifies the type and size of the endpoint capacity to activate for a
   * rolling deployment or a rollback strategy. You can specify your batches as
   * either of the following:</p> <ul> <li> <p>A count of inference component copies
   * </p> </li> <li> <p>The overall percentage or your fleet </p> </li> </ul> <p>For
   * a rollback strategy, if you don't specify the fields in this object, or if you
   * set the <code>Value</code> parameter to 100%, then SageMaker AI uses a
   * blue/green rollback strategy and rolls all traffic back to the blue
   * fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentCapacitySize">AWS
   * API Reference</a></p>
   */
  class InferenceComponentCapacitySize
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentCapacitySize() = default;
    AWS_SAGEMAKER_API InferenceComponentCapacitySize(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentCapacitySize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the endpoint capacity type.</p> <dl> <dt>COPY_COUNT</dt> <dd>
     * <p>The endpoint activates based on the number of inference component copies.</p>
     * </dd> <dt>CAPACITY_PERCENT</dt> <dd> <p>The endpoint activates based on the
     * specified percentage of capacity.</p> </dd> </dl>
     */
    inline InferenceComponentCapacitySizeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InferenceComponentCapacitySizeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline InferenceComponentCapacitySize& WithType(InferenceComponentCapacitySizeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the capacity size, either as a number of inference component copies
     * or a capacity percentage.</p>
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline InferenceComponentCapacitySize& WithValue(int value) { SetValue(value); return *this;}
    ///@}
  private:

    InferenceComponentCapacitySizeType m_type{InferenceComponentCapacitySizeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
