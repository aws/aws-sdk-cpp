/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails.h>
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
   * <p>The configuration details for the App Mesh proxy.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionProxyConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionProxyConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionProxyConfigurationDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionProxyConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionProxyConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline AwsEcsTaskDefinitionProxyConfigurationDetails& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline AwsEcsTaskDefinitionProxyConfigurationDetails& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline AwsEcsTaskDefinitionProxyConfigurationDetails& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The set of network configuration parameters to provide to the Container
     * Network Interface (CNI) plugin, specified as key-value pairs.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails>& GetProxyConfigurationProperties() const{ return m_proxyConfigurationProperties; }

    /**
     * <p>The set of network configuration parameters to provide to the Container
     * Network Interface (CNI) plugin, specified as key-value pairs.</p>
     */
    inline bool ProxyConfigurationPropertiesHasBeenSet() const { return m_proxyConfigurationPropertiesHasBeenSet; }

    /**
     * <p>The set of network configuration parameters to provide to the Container
     * Network Interface (CNI) plugin, specified as key-value pairs.</p>
     */
    inline void SetProxyConfigurationProperties(const Aws::Vector<AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails>& value) { m_proxyConfigurationPropertiesHasBeenSet = true; m_proxyConfigurationProperties = value; }

    /**
     * <p>The set of network configuration parameters to provide to the Container
     * Network Interface (CNI) plugin, specified as key-value pairs.</p>
     */
    inline void SetProxyConfigurationProperties(Aws::Vector<AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails>&& value) { m_proxyConfigurationPropertiesHasBeenSet = true; m_proxyConfigurationProperties = std::move(value); }

    /**
     * <p>The set of network configuration parameters to provide to the Container
     * Network Interface (CNI) plugin, specified as key-value pairs.</p>
     */
    inline AwsEcsTaskDefinitionProxyConfigurationDetails& WithProxyConfigurationProperties(const Aws::Vector<AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails>& value) { SetProxyConfigurationProperties(value); return *this;}

    /**
     * <p>The set of network configuration parameters to provide to the Container
     * Network Interface (CNI) plugin, specified as key-value pairs.</p>
     */
    inline AwsEcsTaskDefinitionProxyConfigurationDetails& WithProxyConfigurationProperties(Aws::Vector<AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails>&& value) { SetProxyConfigurationProperties(std::move(value)); return *this;}

    /**
     * <p>The set of network configuration parameters to provide to the Container
     * Network Interface (CNI) plugin, specified as key-value pairs.</p>
     */
    inline AwsEcsTaskDefinitionProxyConfigurationDetails& AddProxyConfigurationProperties(const AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails& value) { m_proxyConfigurationPropertiesHasBeenSet = true; m_proxyConfigurationProperties.push_back(value); return *this; }

    /**
     * <p>The set of network configuration parameters to provide to the Container
     * Network Interface (CNI) plugin, specified as key-value pairs.</p>
     */
    inline AwsEcsTaskDefinitionProxyConfigurationDetails& AddProxyConfigurationProperties(AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails&& value) { m_proxyConfigurationPropertiesHasBeenSet = true; m_proxyConfigurationProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>The proxy type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The proxy type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The proxy type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The proxy type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The proxy type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The proxy type.</p>
     */
    inline AwsEcsTaskDefinitionProxyConfigurationDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The proxy type.</p>
     */
    inline AwsEcsTaskDefinitionProxyConfigurationDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The proxy type.</p>
     */
    inline AwsEcsTaskDefinitionProxyConfigurationDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails> m_proxyConfigurationProperties;
    bool m_proxyConfigurationPropertiesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
