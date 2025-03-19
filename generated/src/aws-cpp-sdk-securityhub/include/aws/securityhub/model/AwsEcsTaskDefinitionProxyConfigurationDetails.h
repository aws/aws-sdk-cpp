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
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionProxyConfigurationDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionProxyConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionProxyConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    AwsEcsTaskDefinitionProxyConfigurationDetails& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of network configuration parameters to provide to the Container
     * Network Interface (CNI) plugin, specified as key-value pairs.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails>& GetProxyConfigurationProperties() const { return m_proxyConfigurationProperties; }
    inline bool ProxyConfigurationPropertiesHasBeenSet() const { return m_proxyConfigurationPropertiesHasBeenSet; }
    template<typename ProxyConfigurationPropertiesT = Aws::Vector<AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails>>
    void SetProxyConfigurationProperties(ProxyConfigurationPropertiesT&& value) { m_proxyConfigurationPropertiesHasBeenSet = true; m_proxyConfigurationProperties = std::forward<ProxyConfigurationPropertiesT>(value); }
    template<typename ProxyConfigurationPropertiesT = Aws::Vector<AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails>>
    AwsEcsTaskDefinitionProxyConfigurationDetails& WithProxyConfigurationProperties(ProxyConfigurationPropertiesT&& value) { SetProxyConfigurationProperties(std::forward<ProxyConfigurationPropertiesT>(value)); return *this;}
    template<typename ProxyConfigurationPropertiesT = AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails>
    AwsEcsTaskDefinitionProxyConfigurationDetails& AddProxyConfigurationProperties(ProxyConfigurationPropertiesT&& value) { m_proxyConfigurationPropertiesHasBeenSet = true; m_proxyConfigurationProperties.emplace_back(std::forward<ProxyConfigurationPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The proxy type.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsEcsTaskDefinitionProxyConfigurationDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
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
