/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class DeleteConnectorRequest : public MgnRequest
  {
  public:
    AWS_MGN_API DeleteConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConnector"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Delete Connector request connector ID.</p>
     */
    inline const Aws::String& GetConnectorID() const{ return m_connectorID; }

    /**
     * <p>Delete Connector request connector ID.</p>
     */
    inline bool ConnectorIDHasBeenSet() const { return m_connectorIDHasBeenSet; }

    /**
     * <p>Delete Connector request connector ID.</p>
     */
    inline void SetConnectorID(const Aws::String& value) { m_connectorIDHasBeenSet = true; m_connectorID = value; }

    /**
     * <p>Delete Connector request connector ID.</p>
     */
    inline void SetConnectorID(Aws::String&& value) { m_connectorIDHasBeenSet = true; m_connectorID = std::move(value); }

    /**
     * <p>Delete Connector request connector ID.</p>
     */
    inline void SetConnectorID(const char* value) { m_connectorIDHasBeenSet = true; m_connectorID.assign(value); }

    /**
     * <p>Delete Connector request connector ID.</p>
     */
    inline DeleteConnectorRequest& WithConnectorID(const Aws::String& value) { SetConnectorID(value); return *this;}

    /**
     * <p>Delete Connector request connector ID.</p>
     */
    inline DeleteConnectorRequest& WithConnectorID(Aws::String&& value) { SetConnectorID(std::move(value)); return *this;}

    /**
     * <p>Delete Connector request connector ID.</p>
     */
    inline DeleteConnectorRequest& WithConnectorID(const char* value) { SetConnectorID(value); return *this;}

  private:

    Aws::String m_connectorID;
    bool m_connectorIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
