/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
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
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   * <p>A section of the network that a network flow has traveled
   * through.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/TraversedComponent">AWS
   * API Reference</a></p>
   */
  class TraversedComponent
  {
  public:
    AWS_NETWORKFLOWMONITOR_API TraversedComponent() = default;
    AWS_NETWORKFLOWMONITOR_API TraversedComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API TraversedComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the traversed component.</p>
     */
    inline const Aws::String& GetComponentId() const { return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    template<typename ComponentIdT = Aws::String>
    void SetComponentId(ComponentIdT&& value) { m_componentIdHasBeenSet = true; m_componentId = std::forward<ComponentIdT>(value); }
    template<typename ComponentIdT = Aws::String>
    TraversedComponent& WithComponentId(ComponentIdT&& value) { SetComponentId(std::forward<ComponentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of component that was traversed.</p>
     */
    inline const Aws::String& GetComponentType() const { return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    template<typename ComponentTypeT = Aws::String>
    void SetComponentType(ComponentTypeT&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::forward<ComponentTypeT>(value); }
    template<typename ComponentTypeT = Aws::String>
    TraversedComponent& WithComponentType(ComponentTypeT&& value) { SetComponentType(std::forward<ComponentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a traversed component.</p>
     */
    inline const Aws::String& GetComponentArn() const { return m_componentArn; }
    inline bool ComponentArnHasBeenSet() const { return m_componentArnHasBeenSet; }
    template<typename ComponentArnT = Aws::String>
    void SetComponentArn(ComponentArnT&& value) { m_componentArnHasBeenSet = true; m_componentArn = std::forward<ComponentArnT>(value); }
    template<typename ComponentArnT = Aws::String>
    TraversedComponent& WithComponentArn(ComponentArnT&& value) { SetComponentArn(std::forward<ComponentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service name for the traversed component.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    TraversedComponent& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::String m_componentType;
    bool m_componentTypeHasBeenSet = false;

    Aws::String m_componentArn;
    bool m_componentArnHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
