/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingInstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines an instance group for heterogeneous cluster training. When requesting
   * a training job using the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingJob.html">CreateTrainingJob</a>
   * API, you can configure multiple instance groups .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InstanceGroup">AWS
   * API Reference</a></p>
   */
  class InstanceGroup
  {
  public:
    AWS_SAGEMAKER_API InstanceGroup() = default;
    AWS_SAGEMAKER_API InstanceGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InstanceGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline TrainingInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(TrainingInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline InstanceGroup& WithInstanceType(TrainingInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of instances of the instance group.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline InstanceGroup& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    template<typename InstanceGroupNameT = Aws::String>
    void SetInstanceGroupName(InstanceGroupNameT&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::forward<InstanceGroupNameT>(value); }
    template<typename InstanceGroupNameT = Aws::String>
    InstanceGroup& WithInstanceGroupName(InstanceGroupNameT&& value) { SetInstanceGroupName(std::forward<InstanceGroupNameT>(value)); return *this;}
    ///@}
  private:

    TrainingInstanceType m_instanceType{TrainingInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
