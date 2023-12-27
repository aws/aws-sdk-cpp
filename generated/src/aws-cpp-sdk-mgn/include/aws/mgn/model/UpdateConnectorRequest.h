/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ConnectorSsmCommandConfig.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class UpdateConnectorRequest : public MgnRequest
  {
  public:
    AWS_MGN_API UpdateConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnector"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Update Connector request connector ID.</p>
     */
    inline const Aws::String& GetConnectorID() const{ return m_connectorID; }

    /**
     * <p>Update Connector request connector ID.</p>
     */
    inline bool ConnectorIDHasBeenSet() const { return m_connectorIDHasBeenSet; }

    /**
     * <p>Update Connector request connector ID.</p>
     */
    inline void SetConnectorID(const Aws::String& value) { m_connectorIDHasBeenSet = true; m_connectorID = value; }

    /**
     * <p>Update Connector request connector ID.</p>
     */
    inline void SetConnectorID(Aws::String&& value) { m_connectorIDHasBeenSet = true; m_connectorID = std::move(value); }

    /**
     * <p>Update Connector request connector ID.</p>
     */
    inline void SetConnectorID(const char* value) { m_connectorIDHasBeenSet = true; m_connectorID.assign(value); }

    /**
     * <p>Update Connector request connector ID.</p>
     */
    inline UpdateConnectorRequest& WithConnectorID(const Aws::String& value) { SetConnectorID(value); return *this;}

    /**
     * <p>Update Connector request connector ID.</p>
     */
    inline UpdateConnectorRequest& WithConnectorID(Aws::String&& value) { SetConnectorID(std::move(value)); return *this;}

    /**
     * <p>Update Connector request connector ID.</p>
     */
    inline UpdateConnectorRequest& WithConnectorID(const char* value) { SetConnectorID(value); return *this;}


    /**
     * <p>Update Connector request name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Update Connector request name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Update Connector request name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Update Connector request name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Update Connector request name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Update Connector request name.</p>
     */
    inline UpdateConnectorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Update Connector request name.</p>
     */
    inline UpdateConnectorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Update Connector request name.</p>
     */
    inline UpdateConnectorRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Update Connector request SSM command config.</p>
     */
    inline const ConnectorSsmCommandConfig& GetSsmCommandConfig() const{ return m_ssmCommandConfig; }

    /**
     * <p>Update Connector request SSM command config.</p>
     */
    inline bool SsmCommandConfigHasBeenSet() const { return m_ssmCommandConfigHasBeenSet; }

    /**
     * <p>Update Connector request SSM command config.</p>
     */
    inline void SetSsmCommandConfig(const ConnectorSsmCommandConfig& value) { m_ssmCommandConfigHasBeenSet = true; m_ssmCommandConfig = value; }

    /**
     * <p>Update Connector request SSM command config.</p>
     */
    inline void SetSsmCommandConfig(ConnectorSsmCommandConfig&& value) { m_ssmCommandConfigHasBeenSet = true; m_ssmCommandConfig = std::move(value); }

    /**
     * <p>Update Connector request SSM command config.</p>
     */
    inline UpdateConnectorRequest& WithSsmCommandConfig(const ConnectorSsmCommandConfig& value) { SetSsmCommandConfig(value); return *this;}

    /**
     * <p>Update Connector request SSM command config.</p>
     */
    inline UpdateConnectorRequest& WithSsmCommandConfig(ConnectorSsmCommandConfig&& value) { SetSsmCommandConfig(std::move(value)); return *this;}

  private:

    Aws::String m_connectorID;
    bool m_connectorIDHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConnectorSsmCommandConfig m_ssmCommandConfig;
    bool m_ssmCommandConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
