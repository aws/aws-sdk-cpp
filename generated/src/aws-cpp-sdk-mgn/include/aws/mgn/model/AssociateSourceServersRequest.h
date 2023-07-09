﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class AssociateSourceServersRequest : public MgnRequest
  {
  public:
    AWS_MGN_API AssociateSourceServersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSourceServers"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Account ID.</p>
     */
    inline const Aws::String& GetAccountID() const{ return m_accountID; }

    /**
     * <p>Account ID.</p>
     */
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }

    /**
     * <p>Account ID.</p>
     */
    inline void SetAccountID(const Aws::String& value) { m_accountIDHasBeenSet = true; m_accountID = value; }

    /**
     * <p>Account ID.</p>
     */
    inline void SetAccountID(Aws::String&& value) { m_accountIDHasBeenSet = true; m_accountID = std::move(value); }

    /**
     * <p>Account ID.</p>
     */
    inline void SetAccountID(const char* value) { m_accountIDHasBeenSet = true; m_accountID.assign(value); }

    /**
     * <p>Account ID.</p>
     */
    inline AssociateSourceServersRequest& WithAccountID(const Aws::String& value) { SetAccountID(value); return *this;}

    /**
     * <p>Account ID.</p>
     */
    inline AssociateSourceServersRequest& WithAccountID(Aws::String&& value) { SetAccountID(std::move(value)); return *this;}

    /**
     * <p>Account ID.</p>
     */
    inline AssociateSourceServersRequest& WithAccountID(const char* value) { SetAccountID(value); return *this;}


    /**
     * <p>Application ID.</p>
     */
    inline const Aws::String& GetApplicationID() const{ return m_applicationID; }

    /**
     * <p>Application ID.</p>
     */
    inline bool ApplicationIDHasBeenSet() const { return m_applicationIDHasBeenSet; }

    /**
     * <p>Application ID.</p>
     */
    inline void SetApplicationID(const Aws::String& value) { m_applicationIDHasBeenSet = true; m_applicationID = value; }

    /**
     * <p>Application ID.</p>
     */
    inline void SetApplicationID(Aws::String&& value) { m_applicationIDHasBeenSet = true; m_applicationID = std::move(value); }

    /**
     * <p>Application ID.</p>
     */
    inline void SetApplicationID(const char* value) { m_applicationIDHasBeenSet = true; m_applicationID.assign(value); }

    /**
     * <p>Application ID.</p>
     */
    inline AssociateSourceServersRequest& WithApplicationID(const Aws::String& value) { SetApplicationID(value); return *this;}

    /**
     * <p>Application ID.</p>
     */
    inline AssociateSourceServersRequest& WithApplicationID(Aws::String&& value) { SetApplicationID(std::move(value)); return *this;}

    /**
     * <p>Application ID.</p>
     */
    inline AssociateSourceServersRequest& WithApplicationID(const char* value) { SetApplicationID(value); return *this;}


    /**
     * <p>Source server IDs list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceServerIDs() const{ return m_sourceServerIDs; }

    /**
     * <p>Source server IDs list.</p>
     */
    inline bool SourceServerIDsHasBeenSet() const { return m_sourceServerIDsHasBeenSet; }

    /**
     * <p>Source server IDs list.</p>
     */
    inline void SetSourceServerIDs(const Aws::Vector<Aws::String>& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = value; }

    /**
     * <p>Source server IDs list.</p>
     */
    inline void SetSourceServerIDs(Aws::Vector<Aws::String>&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = std::move(value); }

    /**
     * <p>Source server IDs list.</p>
     */
    inline AssociateSourceServersRequest& WithSourceServerIDs(const Aws::Vector<Aws::String>& value) { SetSourceServerIDs(value); return *this;}

    /**
     * <p>Source server IDs list.</p>
     */
    inline AssociateSourceServersRequest& WithSourceServerIDs(Aws::Vector<Aws::String>&& value) { SetSourceServerIDs(std::move(value)); return *this;}

    /**
     * <p>Source server IDs list.</p>
     */
    inline AssociateSourceServersRequest& AddSourceServerIDs(const Aws::String& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }

    /**
     * <p>Source server IDs list.</p>
     */
    inline AssociateSourceServersRequest& AddSourceServerIDs(Aws::String&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>Source server IDs list.</p>
     */
    inline AssociateSourceServersRequest& AddSourceServerIDs(const char* value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }

  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    Aws::String m_applicationID;
    bool m_applicationIDHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceServerIDs;
    bool m_sourceServerIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
