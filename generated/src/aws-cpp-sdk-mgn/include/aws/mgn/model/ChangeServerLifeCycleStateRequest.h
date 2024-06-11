﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ChangeServerLifeCycleStateSourceServerLifecycle.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class ChangeServerLifeCycleStateRequest : public MgnRequest
  {
  public:
    AWS_MGN_API ChangeServerLifeCycleStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangeServerLifeCycleState"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The request to change the source server migration account ID.</p>
     */
    inline const Aws::String& GetAccountID() const{ return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    inline void SetAccountID(const Aws::String& value) { m_accountIDHasBeenSet = true; m_accountID = value; }
    inline void SetAccountID(Aws::String&& value) { m_accountIDHasBeenSet = true; m_accountID = std::move(value); }
    inline void SetAccountID(const char* value) { m_accountIDHasBeenSet = true; m_accountID.assign(value); }
    inline ChangeServerLifeCycleStateRequest& WithAccountID(const Aws::String& value) { SetAccountID(value); return *this;}
    inline ChangeServerLifeCycleStateRequest& WithAccountID(Aws::String&& value) { SetAccountID(std::move(value)); return *this;}
    inline ChangeServerLifeCycleStateRequest& WithAccountID(const char* value) { SetAccountID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request to change the source server migration lifecycle state.</p>
     */
    inline const ChangeServerLifeCycleStateSourceServerLifecycle& GetLifeCycle() const{ return m_lifeCycle; }
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }
    inline void SetLifeCycle(const ChangeServerLifeCycleStateSourceServerLifecycle& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = value; }
    inline void SetLifeCycle(ChangeServerLifeCycleStateSourceServerLifecycle&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::move(value); }
    inline ChangeServerLifeCycleStateRequest& WithLifeCycle(const ChangeServerLifeCycleStateSourceServerLifecycle& value) { SetLifeCycle(value); return *this;}
    inline ChangeServerLifeCycleStateRequest& WithLifeCycle(ChangeServerLifeCycleStateSourceServerLifecycle&& value) { SetLifeCycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request to change the source server migration lifecycle state by source
     * server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }
    inline ChangeServerLifeCycleStateRequest& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline ChangeServerLifeCycleStateRequest& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline ChangeServerLifeCycleStateRequest& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    ChangeServerLifeCycleStateSourceServerLifecycle m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
