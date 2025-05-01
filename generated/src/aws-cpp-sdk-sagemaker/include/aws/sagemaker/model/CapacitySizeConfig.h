/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/NodeUnavailabilityType.h>
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
   * <p>The configuration of the size measurements of the AMI update. Using this
   * configuration, you can specify whether SageMaker should update your instance
   * group by an amount or percentage of instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CapacitySizeConfig">AWS
   * API Reference</a></p>
   */
  class CapacitySizeConfig
  {
  public:
    AWS_SAGEMAKER_API CapacitySizeConfig() = default;
    AWS_SAGEMAKER_API CapacitySizeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CapacitySizeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether SageMaker should process the update by amount or percentage
     * of instances.</p>
     */
    inline NodeUnavailabilityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(NodeUnavailabilityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CapacitySizeConfig& WithType(NodeUnavailabilityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the amount or percentage of instances SageMaker updates at a
     * time.</p>
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline CapacitySizeConfig& WithValue(int value) { SetValue(value); return *this;}
    ///@}
  private:

    NodeUnavailabilityType m_type{NodeUnavailabilityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
