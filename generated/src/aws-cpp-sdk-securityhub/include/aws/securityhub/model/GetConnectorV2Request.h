/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class GetConnectorV2Request : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetConnectorV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnectorV2"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The UUID of the connectorV2 to identify connectorV2 resource.</p>
     */
    inline const Aws::String& GetConnectorId() const { return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    template<typename ConnectorIdT = Aws::String>
    void SetConnectorId(ConnectorIdT&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::forward<ConnectorIdT>(value); }
    template<typename ConnectorIdT = Aws::String>
    GetConnectorV2Request& WithConnectorId(ConnectorIdT&& value) { SetConnectorId(std::forward<ConnectorIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
