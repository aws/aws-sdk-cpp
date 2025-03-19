/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a service discovery registry to assign to the
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsServiceServiceRegistriesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsServiceServiceRegistriesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsServiceServiceRegistriesDetails() = default;
    AWS_SECURITYHUB_API AwsEcsServiceServiceRegistriesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServiceServiceRegistriesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container name value to use for the service discovery service.</p> <p>If
     * the task definition uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify <code>ContainerName</code> and
     * <code>ContainerPort</code>.</p> <p>If the task definition uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record, you must specify
     * either <code>ContainerName</code> and <code>ContainerPort</code>, or
     * <code>Port</code> , but not both.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    AwsEcsServiceServiceRegistriesDetails& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port value to use for the service discovery service.</p> <p>If the task
     * definition uses the <code>bridge</code> or <code>host</code> network mode, you
     * must specify <code>ContainerName</code> and <code>ContainerPort</code>.</p>
     * <p>If the task definition uses the <code>awsvpc</code> network mode and a type
     * SRV DNS record, you must specify either <code>ContainerName</code> and
     * <code>ContainerPort</code>, or <code>Port</code> , but not both.</p>
     */
    inline int GetContainerPort() const { return m_containerPort; }
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }
    inline AwsEcsServiceServiceRegistriesDetails& WithContainerPort(int value) { SetContainerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port value to use for a service discovery service that specifies an SRV
     * record. This field can be used if both the <code>awsvpc</code>awsvpc network
     * mode and SRV records are used.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline AwsEcsServiceServiceRegistriesDetails& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the service registry.</p>
     */
    inline const Aws::String& GetRegistryArn() const { return m_registryArn; }
    inline bool RegistryArnHasBeenSet() const { return m_registryArnHasBeenSet; }
    template<typename RegistryArnT = Aws::String>
    void SetRegistryArn(RegistryArnT&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::forward<RegistryArnT>(value); }
    template<typename RegistryArnT = Aws::String>
    AwsEcsServiceServiceRegistriesDetails& WithRegistryArn(RegistryArnT&& value) { SetRegistryArn(std::forward<RegistryArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    int m_containerPort{0};
    bool m_containerPortHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
