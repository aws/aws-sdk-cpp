/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/SourceServerConnectorAction.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class UpdateSourceServerRequest : public MgnRequest
  {
  public:
    AWS_MGN_API UpdateSourceServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSourceServer"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Update Source Server request account ID.</p>
     */
    inline const Aws::String& GetAccountID() const{ return m_accountID; }

    /**
     * <p>Update Source Server request account ID.</p>
     */
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }

    /**
     * <p>Update Source Server request account ID.</p>
     */
    inline void SetAccountID(const Aws::String& value) { m_accountIDHasBeenSet = true; m_accountID = value; }

    /**
     * <p>Update Source Server request account ID.</p>
     */
    inline void SetAccountID(Aws::String&& value) { m_accountIDHasBeenSet = true; m_accountID = std::move(value); }

    /**
     * <p>Update Source Server request account ID.</p>
     */
    inline void SetAccountID(const char* value) { m_accountIDHasBeenSet = true; m_accountID.assign(value); }

    /**
     * <p>Update Source Server request account ID.</p>
     */
    inline UpdateSourceServerRequest& WithAccountID(const Aws::String& value) { SetAccountID(value); return *this;}

    /**
     * <p>Update Source Server request account ID.</p>
     */
    inline UpdateSourceServerRequest& WithAccountID(Aws::String&& value) { SetAccountID(std::move(value)); return *this;}

    /**
     * <p>Update Source Server request account ID.</p>
     */
    inline UpdateSourceServerRequest& WithAccountID(const char* value) { SetAccountID(value); return *this;}


    /**
     * <p>Update Source Server request connector action.</p>
     */
    inline const SourceServerConnectorAction& GetConnectorAction() const{ return m_connectorAction; }

    /**
     * <p>Update Source Server request connector action.</p>
     */
    inline bool ConnectorActionHasBeenSet() const { return m_connectorActionHasBeenSet; }

    /**
     * <p>Update Source Server request connector action.</p>
     */
    inline void SetConnectorAction(const SourceServerConnectorAction& value) { m_connectorActionHasBeenSet = true; m_connectorAction = value; }

    /**
     * <p>Update Source Server request connector action.</p>
     */
    inline void SetConnectorAction(SourceServerConnectorAction&& value) { m_connectorActionHasBeenSet = true; m_connectorAction = std::move(value); }

    /**
     * <p>Update Source Server request connector action.</p>
     */
    inline UpdateSourceServerRequest& WithConnectorAction(const SourceServerConnectorAction& value) { SetConnectorAction(value); return *this;}

    /**
     * <p>Update Source Server request connector action.</p>
     */
    inline UpdateSourceServerRequest& WithConnectorAction(SourceServerConnectorAction&& value) { SetConnectorAction(std::move(value)); return *this;}


    /**
     * <p>Update Source Server request source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Update Source Server request source server ID.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>Update Source Server request source server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>Update Source Server request source server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>Update Source Server request source server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>Update Source Server request source server ID.</p>
     */
    inline UpdateSourceServerRequest& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Update Source Server request source server ID.</p>
     */
    inline UpdateSourceServerRequest& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Update Source Server request source server ID.</p>
     */
    inline UpdateSourceServerRequest& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}

  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    SourceServerConnectorAction m_connectorAction;
    bool m_connectorActionHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
