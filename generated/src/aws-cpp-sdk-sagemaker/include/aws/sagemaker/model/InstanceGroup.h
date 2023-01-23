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
    AWS_SAGEMAKER_API InstanceGroup();
    AWS_SAGEMAKER_API InstanceGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InstanceGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline const TrainingInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline void SetInstanceType(const TrainingInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline void SetInstanceType(TrainingInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline InstanceGroup& WithInstanceType(const TrainingInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline InstanceGroup& WithInstanceType(TrainingInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>Specifies the number of instances of the instance group.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>Specifies the number of instances of the instance group.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>Specifies the number of instances of the instance group.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>Specifies the number of instances of the instance group.</p>
     */
    inline InstanceGroup& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const{ return m_instanceGroupName; }

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline void SetInstanceGroupName(const Aws::String& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = value; }

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline void SetInstanceGroupName(Aws::String&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::move(value); }

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline void SetInstanceGroupName(const char* value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName.assign(value); }

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline InstanceGroup& WithInstanceGroupName(const Aws::String& value) { SetInstanceGroupName(value); return *this;}

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline InstanceGroup& WithInstanceGroupName(Aws::String&& value) { SetInstanceGroupName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline InstanceGroup& WithInstanceGroupName(const char* value) { SetInstanceGroupName(value); return *this;}

  private:

    TrainingInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
