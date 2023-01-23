/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class DisassociateConnectorRequest : public SMSRequest
  {
  public:
    AWS_SMS_API DisassociateConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateConnector"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the connector.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }

    /**
     * <p>The ID of the connector.</p>
     */
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }

    /**
     * <p>The ID of the connector.</p>
     */
    inline void SetConnectorId(const Aws::String& value) { m_connectorIdHasBeenSet = true; m_connectorId = value; }

    /**
     * <p>The ID of the connector.</p>
     */
    inline void SetConnectorId(Aws::String&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::move(value); }

    /**
     * <p>The ID of the connector.</p>
     */
    inline void SetConnectorId(const char* value) { m_connectorIdHasBeenSet = true; m_connectorId.assign(value); }

    /**
     * <p>The ID of the connector.</p>
     */
    inline DisassociateConnectorRequest& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}

    /**
     * <p>The ID of the connector.</p>
     */
    inline DisassociateConnectorRequest& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the connector.</p>
     */
    inline DisassociateConnectorRequest& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}

  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
