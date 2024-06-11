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
    AWS_SECURITYHUB_API NetworkPathComponent();
    AWS_SECURITYHUB_API NetworkPathComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NetworkPathComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of a component in the network path.</p> <p>Length Constraints:
     * Minimum of 1. Maximum of 32.</p>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }
    inline NetworkPathComponent& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}
    inline NetworkPathComponent& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}
    inline NetworkPathComponent& WithComponentId(const char* value) { SetComponentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of component.</p> <p>Length Constraints: Minimum of 1. Maximum of
     * 32.</p>
     */
    inline const Aws::String& GetComponentType() const{ return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    inline void SetComponentType(const Aws::String& value) { m_componentTypeHasBeenSet = true; m_componentType = value; }
    inline void SetComponentType(Aws::String&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::move(value); }
    inline void SetComponentType(const char* value) { m_componentTypeHasBeenSet = true; m_componentType.assign(value); }
    inline NetworkPathComponent& WithComponentType(const Aws::String& value) { SetComponentType(value); return *this;}
    inline NetworkPathComponent& WithComponentType(Aws::String&& value) { SetComponentType(std::move(value)); return *this;}
    inline NetworkPathComponent& WithComponentType(const char* value) { SetComponentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the component that comes after the current component in the
     * network path.</p>
     */
    inline const NetworkHeader& GetEgress() const{ return m_egress; }
    inline bool EgressHasBeenSet() const { return m_egressHasBeenSet; }
    inline void SetEgress(const NetworkHeader& value) { m_egressHasBeenSet = true; m_egress = value; }
    inline void SetEgress(NetworkHeader&& value) { m_egressHasBeenSet = true; m_egress = std::move(value); }
    inline NetworkPathComponent& WithEgress(const NetworkHeader& value) { SetEgress(value); return *this;}
    inline NetworkPathComponent& WithEgress(NetworkHeader&& value) { SetEgress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the component that comes before the current node in the
     * network path.</p>
     */
    inline const NetworkHeader& GetIngress() const{ return m_ingress; }
    inline bool IngressHasBeenSet() const { return m_ingressHasBeenSet; }
    inline void SetIngress(const NetworkHeader& value) { m_ingressHasBeenSet = true; m_ingress = value; }
    inline void SetIngress(NetworkHeader&& value) { m_ingressHasBeenSet = true; m_ingress = std::move(value); }
    inline NetworkPathComponent& WithIngress(const NetworkHeader& value) { SetIngress(value); return *this;}
    inline NetworkPathComponent& WithIngress(NetworkHeader&& value) { SetIngress(std::move(value)); return *this;}
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
