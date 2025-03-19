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
   * <p>A port mapping for the container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The port number on the container that is bound to the user-specified or
     * automatically assigned host port.</p>
     */
    inline int GetContainerPort() const { return m_containerPort; }
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails& WithContainerPort(int value) { SetContainerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on the container instance to reserve for the container.</p>
     */
    inline int GetHostPort() const { return m_hostPort; }
    inline bool HostPortHasBeenSet() const { return m_hostPortHasBeenSet; }
    inline void SetHostPort(int value) { m_hostPortHasBeenSet = true; m_hostPort = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails& WithHostPort(int value) { SetHostPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used for the port mapping. The default is <code>tcp</code>.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}
  private:

    int m_containerPort{0};
    bool m_containerPortHasBeenSet = false;

    int m_hostPort{0};
    bool m_hostPortHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
