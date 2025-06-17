/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class CreateTicketV2Request : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API CreateTicketV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTicketV2"; }

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
    CreateTicketV2Request& WithConnectorId(ConnectorIdT&& value) { SetConnectorId(std::forward<ConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The the unique ID for the finding.</p>
     */
    inline const Aws::String& GetFindingMetadataUid() const { return m_findingMetadataUid; }
    inline bool FindingMetadataUidHasBeenSet() const { return m_findingMetadataUidHasBeenSet; }
    template<typename FindingMetadataUidT = Aws::String>
    void SetFindingMetadataUid(FindingMetadataUidT&& value) { m_findingMetadataUidHasBeenSet = true; m_findingMetadataUid = std::forward<FindingMetadataUidT>(value); }
    template<typename FindingMetadataUidT = Aws::String>
    CreateTicketV2Request& WithFindingMetadataUid(FindingMetadataUidT&& value) { SetFindingMetadataUid(std::forward<FindingMetadataUidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateTicketV2Request& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_findingMetadataUid;
    bool m_findingMetadataUidHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
