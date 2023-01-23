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
    AWS_SECURITYHUB_API AwsEcsServiceServiceRegistriesDetails();
    AWS_SECURITYHUB_API AwsEcsServiceServiceRegistriesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServiceServiceRegistriesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The container name value to use for the service discovery service.</p> <p>If
     * the task definition uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify <code>ContainerName</code> and
     * <code>ContainerPort</code>.</p> <p>If the task definition uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record, you must specify
     * either <code>ContainerName</code> and <code>ContainerPort</code>, or
     * <code>Port</code> , but not both.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The container name value to use for the service discovery service.</p> <p>If
     * the task definition uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify <code>ContainerName</code> and
     * <code>ContainerPort</code>.</p> <p>If the task definition uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record, you must specify
     * either <code>ContainerName</code> and <code>ContainerPort</code>, or
     * <code>Port</code> , but not both.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The container name value to use for the service discovery service.</p> <p>If
     * the task definition uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify <code>ContainerName</code> and
     * <code>ContainerPort</code>.</p> <p>If the task definition uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record, you must specify
     * either <code>ContainerName</code> and <code>ContainerPort</code>, or
     * <code>Port</code> , but not both.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The container name value to use for the service discovery service.</p> <p>If
     * the task definition uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify <code>ContainerName</code> and
     * <code>ContainerPort</code>.</p> <p>If the task definition uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record, you must specify
     * either <code>ContainerName</code> and <code>ContainerPort</code>, or
     * <code>Port</code> , but not both.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The container name value to use for the service discovery service.</p> <p>If
     * the task definition uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify <code>ContainerName</code> and
     * <code>ContainerPort</code>.</p> <p>If the task definition uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record, you must specify
     * either <code>ContainerName</code> and <code>ContainerPort</code>, or
     * <code>Port</code> , but not both.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The container name value to use for the service discovery service.</p> <p>If
     * the task definition uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify <code>ContainerName</code> and
     * <code>ContainerPort</code>.</p> <p>If the task definition uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record, you must specify
     * either <code>ContainerName</code> and <code>ContainerPort</code>, or
     * <code>Port</code> , but not both.</p>
     */
    inline AwsEcsServiceServiceRegistriesDetails& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The container name value to use for the service discovery service.</p> <p>If
     * the task definition uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify <code>ContainerName</code> and
     * <code>ContainerPort</code>.</p> <p>If the task definition uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record, you must specify
     * either <code>ContainerName</code> and <code>ContainerPort</code>, or
     * <code>Port</code> , but not both.</p>
     */
    inline AwsEcsServiceServiceRegistriesDetails& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The container name value to use for the service discovery service.</p> <p>If
     * the task definition uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify <code>ContainerName</code> and
     * <code>ContainerPort</code>.</p> <p>If the task definition uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record, you must specify
     * either <code>ContainerName</code> and <code>ContainerPort</code>, or
     * <code>Port</code> , but not both.</p>
     */
    inline AwsEcsServiceServiceRegistriesDetails& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The port value to use for the service discovery service.</p> <p>If the task
     * definition uses the <code>bridge</code> or <code>host</code> network mode, you
     * must specify <code>ContainerName</code> and <code>ContainerPort</code>.</p>
     * <p>If the task definition uses the <code>awsvpc</code> network mode and a type
     * SRV DNS record, you must specify either <code>ContainerName</code> and
     * <code>ContainerPort</code>, or <code>Port</code> , but not both.</p>
     */
    inline int GetContainerPort() const{ return m_containerPort; }

    /**
     * <p>The port value to use for the service discovery service.</p> <p>If the task
     * definition uses the <code>bridge</code> or <code>host</code> network mode, you
     * must specify <code>ContainerName</code> and <code>ContainerPort</code>.</p>
     * <p>If the task definition uses the <code>awsvpc</code> network mode and a type
     * SRV DNS record, you must specify either <code>ContainerName</code> and
     * <code>ContainerPort</code>, or <code>Port</code> , but not both.</p>
     */
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }

    /**
     * <p>The port value to use for the service discovery service.</p> <p>If the task
     * definition uses the <code>bridge</code> or <code>host</code> network mode, you
     * must specify <code>ContainerName</code> and <code>ContainerPort</code>.</p>
     * <p>If the task definition uses the <code>awsvpc</code> network mode and a type
     * SRV DNS record, you must specify either <code>ContainerName</code> and
     * <code>ContainerPort</code>, or <code>Port</code> , but not both.</p>
     */
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }

    /**
     * <p>The port value to use for the service discovery service.</p> <p>If the task
     * definition uses the <code>bridge</code> or <code>host</code> network mode, you
     * must specify <code>ContainerName</code> and <code>ContainerPort</code>.</p>
     * <p>If the task definition uses the <code>awsvpc</code> network mode and a type
     * SRV DNS record, you must specify either <code>ContainerName</code> and
     * <code>ContainerPort</code>, or <code>Port</code> , but not both.</p>
     */
    inline AwsEcsServiceServiceRegistriesDetails& WithContainerPort(int value) { SetContainerPort(value); return *this;}


    /**
     * <p>The port value to use for a service discovery service that specifies an SRV
     * record. This field can be used if both the <code>awsvpc</code>awsvpc network
     * mode and SRV records are used.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port value to use for a service discovery service that specifies an SRV
     * record. This field can be used if both the <code>awsvpc</code>awsvpc network
     * mode and SRV records are used.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port value to use for a service discovery service that specifies an SRV
     * record. This field can be used if both the <code>awsvpc</code>awsvpc network
     * mode and SRV records are used.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port value to use for a service discovery service that specifies an SRV
     * record. This field can be used if both the <code>awsvpc</code>awsvpc network
     * mode and SRV records are used.</p>
     */
    inline AwsEcsServiceServiceRegistriesDetails& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The ARN of the service registry.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }

    /**
     * <p>The ARN of the service registry.</p>
     */
    inline bool RegistryArnHasBeenSet() const { return m_registryArnHasBeenSet; }

    /**
     * <p>The ARN of the service registry.</p>
     */
    inline void SetRegistryArn(const Aws::String& value) { m_registryArnHasBeenSet = true; m_registryArn = value; }

    /**
     * <p>The ARN of the service registry.</p>
     */
    inline void SetRegistryArn(Aws::String&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::move(value); }

    /**
     * <p>The ARN of the service registry.</p>
     */
    inline void SetRegistryArn(const char* value) { m_registryArnHasBeenSet = true; m_registryArn.assign(value); }

    /**
     * <p>The ARN of the service registry.</p>
     */
    inline AwsEcsServiceServiceRegistriesDetails& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}

    /**
     * <p>The ARN of the service registry.</p>
     */
    inline AwsEcsServiceServiceRegistriesDetails& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the service registry.</p>
     */
    inline AwsEcsServiceServiceRegistriesDetails& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    int m_containerPort;
    bool m_containerPortHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
