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
   * <p>Defines the settings and parameters required for integrating external
   * security tools and services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ExternalIntegrationConfiguration">AWS
   * API Reference</a></p>
   */
  class ExternalIntegrationConfiguration
  {
  public:
    AWS_SECURITYHUB_API ExternalIntegrationConfiguration() = default;
    AWS_SECURITYHUB_API ExternalIntegrationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ExternalIntegrationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the connector that establishes the integration.</p>
     */
    inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
    template<typename ConnectorArnT = Aws::String>
    void SetConnectorArn(ConnectorArnT&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::forward<ConnectorArnT>(value); }
    template<typename ConnectorArnT = Aws::String>
    ExternalIntegrationConfiguration& WithConnectorArn(ConnectorArnT&& value) { SetConnectorArn(std::forward<ConnectorArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
