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
    AWS_OPSWORKS_API EcsCluster() = default;
    AWS_OPSWORKS_API EcsCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API EcsCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cluster's ARN.</p>
     */
    inline const Aws::String& GetEcsClusterArn() const { return m_ecsClusterArn; }
    inline bool EcsClusterArnHasBeenSet() const { return m_ecsClusterArnHasBeenSet; }
    template<typename EcsClusterArnT = Aws::String>
    void SetEcsClusterArn(EcsClusterArnT&& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = std::forward<EcsClusterArnT>(value); }
    template<typename EcsClusterArnT = Aws::String>
    EcsCluster& WithEcsClusterArn(EcsClusterArnT&& value) { SetEcsClusterArn(std::forward<EcsClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster name.</p>
     */
    inline const Aws::String& GetEcsClusterName() const { return m_ecsClusterName; }
    inline bool EcsClusterNameHasBeenSet() const { return m_ecsClusterNameHasBeenSet; }
    template<typename EcsClusterNameT = Aws::String>
    void SetEcsClusterName(EcsClusterNameT&& value) { m_ecsClusterNameHasBeenSet = true; m_ecsClusterName = std::forward<EcsClusterNameT>(value); }
    template<typename EcsClusterNameT = Aws::String>
    EcsCluster& WithEcsClusterName(EcsClusterNameT&& value) { SetEcsClusterName(std::forward<EcsClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    EcsCluster& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date that the cluster was registered with the stack.</p>
     */
    inline const Aws::String& GetRegisteredAt() const { return m_registeredAt; }
    inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }
    template<typename RegisteredAtT = Aws::String>
    void SetRegisteredAt(RegisteredAtT&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::forward<RegisteredAtT>(value); }
    template<typename RegisteredAtT = Aws::String>
    EcsCluster& WithRegisteredAt(RegisteredAtT&& value) { SetRegisteredAt(std::forward<RegisteredAtT>(value)); return *this;}
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
