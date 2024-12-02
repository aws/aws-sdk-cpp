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
    AWS_NETWORKFLOWMONITOR_API TraversedComponent();
    AWS_NETWORKFLOWMONITOR_API TraversedComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API TraversedComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the traversed component.</p>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }
    inline TraversedComponent& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}
    inline TraversedComponent& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}
    inline TraversedComponent& WithComponentId(const char* value) { SetComponentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of component that was traversed.</p>
     */
    inline const Aws::String& GetComponentType() const{ return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    inline void SetComponentType(const Aws::String& value) { m_componentTypeHasBeenSet = true; m_componentType = value; }
    inline void SetComponentType(Aws::String&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::move(value); }
    inline void SetComponentType(const char* value) { m_componentTypeHasBeenSet = true; m_componentType.assign(value); }
    inline TraversedComponent& WithComponentType(const Aws::String& value) { SetComponentType(value); return *this;}
    inline TraversedComponent& WithComponentType(Aws::String&& value) { SetComponentType(std::move(value)); return *this;}
    inline TraversedComponent& WithComponentType(const char* value) { SetComponentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a tranversed component.</p>
     */
    inline const Aws::String& GetComponentArn() const{ return m_componentArn; }
    inline bool ComponentArnHasBeenSet() const { return m_componentArnHasBeenSet; }
    inline void SetComponentArn(const Aws::String& value) { m_componentArnHasBeenSet = true; m_componentArn = value; }
    inline void SetComponentArn(Aws::String&& value) { m_componentArnHasBeenSet = true; m_componentArn = std::move(value); }
    inline void SetComponentArn(const char* value) { m_componentArnHasBeenSet = true; m_componentArn.assign(value); }
    inline TraversedComponent& WithComponentArn(const Aws::String& value) { SetComponentArn(value); return *this;}
    inline TraversedComponent& WithComponentArn(Aws::String&& value) { SetComponentArn(std::move(value)); return *this;}
    inline TraversedComponent& WithComponentArn(const char* value) { SetComponentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service name for the traversed component.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline TraversedComponent& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline TraversedComponent& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline TraversedComponent& WithServiceName(const char* value) { SetServiceName(value); return *this;}
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
