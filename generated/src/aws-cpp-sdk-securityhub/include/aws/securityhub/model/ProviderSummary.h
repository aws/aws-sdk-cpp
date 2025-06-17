/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ConnectorProviderName.h>
#include <aws/securityhub/model/ConnectorStatus.h>
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
   * <p>The connectorV2 third-party provider configuration summary.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ProviderSummary">AWS
   * API Reference</a></p>
   */
  class ProviderSummary
  {
  public:
    AWS_SECURITYHUB_API ProviderSummary() = default;
    AWS_SECURITYHUB_API ProviderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ProviderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the provider.</p>
     */
    inline ConnectorProviderName GetProviderName() const { return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    inline void SetProviderName(ConnectorProviderName value) { m_providerNameHasBeenSet = true; m_providerName = value; }
    inline ProviderSummary& WithProviderName(ConnectorProviderName value) { SetProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for the connectorV2.</p>
     */
    inline ConnectorStatus GetConnectorStatus() const { return m_connectorStatus; }
    inline bool ConnectorStatusHasBeenSet() const { return m_connectorStatusHasBeenSet; }
    inline void SetConnectorStatus(ConnectorStatus value) { m_connectorStatusHasBeenSet = true; m_connectorStatus = value; }
    inline ProviderSummary& WithConnectorStatus(ConnectorStatus value) { SetConnectorStatus(value); return *this;}
    ///@}
  private:

    ConnectorProviderName m_providerName{ConnectorProviderName::NOT_SET};
    bool m_providerNameHasBeenSet = false;

    ConnectorStatus m_connectorStatus{ConnectorStatus::NOT_SET};
    bool m_connectorStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
