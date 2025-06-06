﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacitySizeType.h>
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
   * blue/green deployment, a rolling deployment, or a rollback strategy. You can
   * specify your batches as either instance count or the overall percentage or your
   * fleet.</p> <p>For a rollback strategy, if you don't specify the fields in this
   * object, or if you set the <code>Value</code> to 100%, then SageMaker uses a
   * blue/green rollback strategy and rolls all traffic back to the blue
   * fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CapacitySize">AWS
   * API Reference</a></p>
   */
  class CapacitySize
  {
  public:
    AWS_SAGEMAKER_API CapacitySize() = default;
    AWS_SAGEMAKER_API CapacitySize(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CapacitySize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the endpoint capacity type.</p> <ul> <li> <p>
     * <code>INSTANCE_COUNT</code>: The endpoint activates based on the number of
     * instances.</p> </li> <li> <p> <code>CAPACITY_PERCENT</code>: The endpoint
     * activates based on the specified percentage of capacity.</p> </li> </ul>
     */
    inline CapacitySizeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CapacitySizeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CapacitySize& WithType(CapacitySizeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the capacity size, either as a number of instances or a capacity
     * percentage.</p>
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline CapacitySize& WithValue(int value) { SetValue(value); return *this;}
    ///@}
  private:

    CapacitySizeType m_type{CapacitySizeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
