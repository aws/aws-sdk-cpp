/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a registered Amazon ECS cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/EcsCluster">AWS
   * API Reference</a></p>
   */
  class EcsCluster
  {
  public:
    AWS_OPSWORKS_API EcsCluster();
    AWS_OPSWORKS_API EcsCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API EcsCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cluster's ARN.</p>
     */
    inline const Aws::String& GetEcsClusterArn() const{ return m_ecsClusterArn; }
    inline bool EcsClusterArnHasBeenSet() const { return m_ecsClusterArnHasBeenSet; }
    inline void SetEcsClusterArn(const Aws::String& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = value; }
    inline void SetEcsClusterArn(Aws::String&& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = std::move(value); }
    inline void SetEcsClusterArn(const char* value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn.assign(value); }
    inline EcsCluster& WithEcsClusterArn(const Aws::String& value) { SetEcsClusterArn(value); return *this;}
    inline EcsCluster& WithEcsClusterArn(Aws::String&& value) { SetEcsClusterArn(std::move(value)); return *this;}
    inline EcsCluster& WithEcsClusterArn(const char* value) { SetEcsClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster name.</p>
     */
    inline const Aws::String& GetEcsClusterName() const{ return m_ecsClusterName; }
    inline bool EcsClusterNameHasBeenSet() const { return m_ecsClusterNameHasBeenSet; }
    inline void SetEcsClusterName(const Aws::String& value) { m_ecsClusterNameHasBeenSet = true; m_ecsClusterName = value; }
    inline void SetEcsClusterName(Aws::String&& value) { m_ecsClusterNameHasBeenSet = true; m_ecsClusterName = std::move(value); }
    inline void SetEcsClusterName(const char* value) { m_ecsClusterNameHasBeenSet = true; m_ecsClusterName.assign(value); }
    inline EcsCluster& WithEcsClusterName(const Aws::String& value) { SetEcsClusterName(value); return *this;}
    inline EcsCluster& WithEcsClusterName(Aws::String&& value) { SetEcsClusterName(std::move(value)); return *this;}
    inline EcsCluster& WithEcsClusterName(const char* value) { SetEcsClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline EcsCluster& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline EcsCluster& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline EcsCluster& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date that the cluster was registered with the stack.</p>
     */
    inline const Aws::String& GetRegisteredAt() const{ return m_registeredAt; }
    inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }
    inline void SetRegisteredAt(const Aws::String& value) { m_registeredAtHasBeenSet = true; m_registeredAt = value; }
    inline void SetRegisteredAt(Aws::String&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::move(value); }
    inline void SetRegisteredAt(const char* value) { m_registeredAtHasBeenSet = true; m_registeredAt.assign(value); }
    inline EcsCluster& WithRegisteredAt(const Aws::String& value) { SetRegisteredAt(value); return *this;}
    inline EcsCluster& WithRegisteredAt(Aws::String&& value) { SetRegisteredAt(std::move(value)); return *this;}
    inline EcsCluster& WithRegisteredAt(const char* value) { SetRegisteredAt(value); return *this;}
    ///@}
  private:

    Aws::String m_ecsClusterArn;
    bool m_ecsClusterArnHasBeenSet = false;

    Aws::String m_ecsClusterName;
    bool m_ecsClusterNameHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_registeredAt;
    bool m_registeredAtHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
