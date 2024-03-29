﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/neptunedata/model/Action.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace neptunedata
{
namespace Model
{

  /**
   */
  class ExecuteFastResetRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API ExecuteFastResetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteFastReset"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The fast reset action. One of the following values:</p> <ul> <li> <p> <b>
     * <code>initiateDatabaseReset</code> </b>   –   This action generates a unique
     * token needed to actually perform the fast reset.</p> </li> <li> <p> <b>
     * <code>performDatabaseReset</code> </b>   –   This action uses the token
     * generated by the <code>initiateDatabaseReset</code> action to actually perform
     * the fast reset.</p> <p/> </li> </ul>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>The fast reset action. One of the following values:</p> <ul> <li> <p> <b>
     * <code>initiateDatabaseReset</code> </b>   –   This action generates a unique
     * token needed to actually perform the fast reset.</p> </li> <li> <p> <b>
     * <code>performDatabaseReset</code> </b>   –   This action uses the token
     * generated by the <code>initiateDatabaseReset</code> action to actually perform
     * the fast reset.</p> <p/> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The fast reset action. One of the following values:</p> <ul> <li> <p> <b>
     * <code>initiateDatabaseReset</code> </b>   –   This action generates a unique
     * token needed to actually perform the fast reset.</p> </li> <li> <p> <b>
     * <code>performDatabaseReset</code> </b>   –   This action uses the token
     * generated by the <code>initiateDatabaseReset</code> action to actually perform
     * the fast reset.</p> <p/> </li> </ul>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The fast reset action. One of the following values:</p> <ul> <li> <p> <b>
     * <code>initiateDatabaseReset</code> </b>   –   This action generates a unique
     * token needed to actually perform the fast reset.</p> </li> <li> <p> <b>
     * <code>performDatabaseReset</code> </b>   –   This action uses the token
     * generated by the <code>initiateDatabaseReset</code> action to actually perform
     * the fast reset.</p> <p/> </li> </ul>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The fast reset action. One of the following values:</p> <ul> <li> <p> <b>
     * <code>initiateDatabaseReset</code> </b>   –   This action generates a unique
     * token needed to actually perform the fast reset.</p> </li> <li> <p> <b>
     * <code>performDatabaseReset</code> </b>   –   This action uses the token
     * generated by the <code>initiateDatabaseReset</code> action to actually perform
     * the fast reset.</p> <p/> </li> </ul>
     */
    inline ExecuteFastResetRequest& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>The fast reset action. One of the following values:</p> <ul> <li> <p> <b>
     * <code>initiateDatabaseReset</code> </b>   –   This action generates a unique
     * token needed to actually perform the fast reset.</p> </li> <li> <p> <b>
     * <code>performDatabaseReset</code> </b>   –   This action uses the token
     * generated by the <code>initiateDatabaseReset</code> action to actually perform
     * the fast reset.</p> <p/> </li> </ul>
     */
    inline ExecuteFastResetRequest& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The fast-reset token to initiate the reset.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The fast-reset token to initiate the reset.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The fast-reset token to initiate the reset.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The fast-reset token to initiate the reset.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The fast-reset token to initiate the reset.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The fast-reset token to initiate the reset.</p>
     */
    inline ExecuteFastResetRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The fast-reset token to initiate the reset.</p>
     */
    inline ExecuteFastResetRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The fast-reset token to initiate the reset.</p>
     */
    inline ExecuteFastResetRequest& WithToken(const char* value) { SetToken(value); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
