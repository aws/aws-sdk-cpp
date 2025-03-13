/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/NetworkHeader.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a network path component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/NetworkPathComponent">AWS
   * API Reference</a></p>
   */
  class NetworkPathComponent
  {
  public:
    AWS_SECURITYHUB_API NetworkPathComponent() = default;
    AWS_SECURITYHUB_API NetworkPathComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NetworkPathComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of a component in the network path.</p> <p>Length Constraints:
     * Minimum of 1. Maximum of 32.</p>
     */
    inline const Aws::String& GetComponentId() const { return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    template<typename ComponentIdT = Aws::String>
    void SetComponentId(ComponentIdT&& value) { m_componentIdHasBeenSet = true; m_componentId = std::forward<ComponentIdT>(value); }
    template<typename ComponentIdT = Aws::String>
    NetworkPathComponent& WithComponentId(ComponentIdT&& value) { SetComponentId(std::forward<ComponentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of component.</p> <p>Length Constraints: Minimum of 1. Maximum of
     * 32.</p>
     */
    inline const Aws::String& GetComponentType() const { return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    template<typename ComponentTypeT = Aws::String>
    void SetComponentType(ComponentTypeT&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::forward<ComponentTypeT>(value); }
    template<typename ComponentTypeT = Aws::String>
    NetworkPathComponent& WithComponentType(ComponentTypeT&& value) { SetComponentType(std::forward<ComponentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the component that comes after the current component in the
     * network path.</p>
     */
    inline const NetworkHeader& GetEgress() const { return m_egress; }
    inline bool EgressHasBeenSet() const { return m_egressHasBeenSet; }
    template<typename EgressT = NetworkHeader>
    void SetEgress(EgressT&& value) { m_egressHasBeenSet = true; m_egress = std::forward<EgressT>(value); }
    template<typename EgressT = NetworkHeader>
    NetworkPathComponent& WithEgress(EgressT&& value) { SetEgress(std::forward<EgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the component that comes before the current node in the
     * network path.</p>
     */
    inline const NetworkHeader& GetIngress() const { return m_ingress; }
    inline bool IngressHasBeenSet() const { return m_ingressHasBeenSet; }
    template<typename IngressT = NetworkHeader>
    void SetIngress(IngressT&& value) { m_ingressHasBeenSet = true; m_ingress = std::forward<IngressT>(value); }
    template<typename IngressT = NetworkHeader>
    NetworkPathComponent& WithIngress(IngressT&& value) { SetIngress(std::forward<IngressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::String m_componentType;
    bool m_componentTypeHasBeenSet = false;

    NetworkHeader m_egress;
    bool m_egressHasBeenSet = false;

    NetworkHeader m_ingress;
    bool m_ingressHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
