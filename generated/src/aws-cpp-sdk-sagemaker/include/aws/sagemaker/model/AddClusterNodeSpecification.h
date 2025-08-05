/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
   * <p>Specifies an instance group and the number of nodes to add to
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddClusterNodeSpecification">AWS
   * API Reference</a></p>
   */
  class AddClusterNodeSpecification
  {
  public:
    AWS_SAGEMAKER_API AddClusterNodeSpecification() = default;
    AWS_SAGEMAKER_API AddClusterNodeSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AddClusterNodeSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the instance group to which you want to add nodes.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    template<typename InstanceGroupNameT = Aws::String>
    void SetInstanceGroupName(InstanceGroupNameT&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::forward<InstanceGroupNameT>(value); }
    template<typename InstanceGroupNameT = Aws::String>
    AddClusterNodeSpecification& WithInstanceGroupName(InstanceGroupNameT&& value) { SetInstanceGroupName(std::forward<InstanceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes to add to the specified instance group. The total number
     * of nodes across all instance groups in a single request cannot exceed 50.</p>
     */
    inline int GetIncrementTargetCountBy() const { return m_incrementTargetCountBy; }
    inline bool IncrementTargetCountByHasBeenSet() const { return m_incrementTargetCountByHasBeenSet; }
    inline void SetIncrementTargetCountBy(int value) { m_incrementTargetCountByHasBeenSet = true; m_incrementTargetCountBy = value; }
    inline AddClusterNodeSpecification& WithIncrementTargetCountBy(int value) { SetIncrementTargetCountBy(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;

    int m_incrementTargetCountBy{0};
    bool m_incrementTargetCountByHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
