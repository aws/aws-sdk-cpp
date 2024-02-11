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
  class StopReplicationRequest : public MgnRequest
  {
  public:
    AWS_MGN_API StopReplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopReplication"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Stop Replication Request account ID.</p>
     */
    inline const Aws::String& GetAccountID() const{ return m_accountID; }

    /**
     * <p>Stop Replication Request account ID.</p>
     */
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }

    /**
     * <p>Stop Replication Request account ID.</p>
     */
    inline void SetAccountID(const Aws::String& value) { m_accountIDHasBeenSet = true; m_accountID = value; }

    /**
     * <p>Stop Replication Request account ID.</p>
     */
    inline void SetAccountID(Aws::String&& value) { m_accountIDHasBeenSet = true; m_accountID = std::move(value); }

    /**
     * <p>Stop Replication Request account ID.</p>
     */
    inline void SetAccountID(const char* value) { m_accountIDHasBeenSet = true; m_accountID.assign(value); }

    /**
     * <p>Stop Replication Request account ID.</p>
     */
    inline StopReplicationRequest& WithAccountID(const Aws::String& value) { SetAccountID(value); return *this;}

    /**
     * <p>Stop Replication Request account ID.</p>
     */
    inline StopReplicationRequest& WithAccountID(Aws::String&& value) { SetAccountID(std::move(value)); return *this;}

    /**
     * <p>Stop Replication Request account ID.</p>
     */
    inline StopReplicationRequest& WithAccountID(const char* value) { SetAccountID(value); return *this;}


    /**
     * <p>Stop Replication Request source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Stop Replication Request source server ID.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>Stop Replication Request source server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>Stop Replication Request source server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>Stop Replication Request source server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>Stop Replication Request source server ID.</p>
     */
    inline StopReplicationRequest& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Stop Replication Request source server ID.</p>
     */
    inline StopReplicationRequest& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Stop Replication Request source server ID.</p>
     */
    inline StopReplicationRequest& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}

  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
