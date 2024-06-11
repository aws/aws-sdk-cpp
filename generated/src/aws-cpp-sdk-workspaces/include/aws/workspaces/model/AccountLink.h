﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/AccountLinkStatusEnum.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Information about about the account link.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AccountLink">AWS
   * API Reference</a></p>
   */
  class AccountLink
  {
  public:
    AWS_WORKSPACES_API AccountLink();
    AWS_WORKSPACES_API AccountLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API AccountLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the account link.</p>
     */
    inline const Aws::String& GetAccountLinkId() const{ return m_accountLinkId; }
    inline bool AccountLinkIdHasBeenSet() const { return m_accountLinkIdHasBeenSet; }
    inline void SetAccountLinkId(const Aws::String& value) { m_accountLinkIdHasBeenSet = true; m_accountLinkId = value; }
    inline void SetAccountLinkId(Aws::String&& value) { m_accountLinkIdHasBeenSet = true; m_accountLinkId = std::move(value); }
    inline void SetAccountLinkId(const char* value) { m_accountLinkIdHasBeenSet = true; m_accountLinkId.assign(value); }
    inline AccountLink& WithAccountLinkId(const Aws::String& value) { SetAccountLinkId(value); return *this;}
    inline AccountLink& WithAccountLinkId(Aws::String&& value) { SetAccountLinkId(std::move(value)); return *this;}
    inline AccountLink& WithAccountLinkId(const char* value) { SetAccountLinkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the account link.</p>
     */
    inline const AccountLinkStatusEnum& GetAccountLinkStatus() const{ return m_accountLinkStatus; }
    inline bool AccountLinkStatusHasBeenSet() const { return m_accountLinkStatusHasBeenSet; }
    inline void SetAccountLinkStatus(const AccountLinkStatusEnum& value) { m_accountLinkStatusHasBeenSet = true; m_accountLinkStatus = value; }
    inline void SetAccountLinkStatus(AccountLinkStatusEnum&& value) { m_accountLinkStatusHasBeenSet = true; m_accountLinkStatus = std::move(value); }
    inline AccountLink& WithAccountLinkStatus(const AccountLinkStatusEnum& value) { SetAccountLinkStatus(value); return *this;}
    inline AccountLink& WithAccountLinkStatus(AccountLinkStatusEnum&& value) { SetAccountLinkStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the source account.</p>
     */
    inline const Aws::String& GetSourceAccountId() const{ return m_sourceAccountId; }
    inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }
    inline void SetSourceAccountId(const Aws::String& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = value; }
    inline void SetSourceAccountId(Aws::String&& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = std::move(value); }
    inline void SetSourceAccountId(const char* value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId.assign(value); }
    inline AccountLink& WithSourceAccountId(const Aws::String& value) { SetSourceAccountId(value); return *this;}
    inline AccountLink& WithSourceAccountId(Aws::String&& value) { SetSourceAccountId(std::move(value)); return *this;}
    inline AccountLink& WithSourceAccountId(const char* value) { SetSourceAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the target account.</p>
     */
    inline const Aws::String& GetTargetAccountId() const{ return m_targetAccountId; }
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }
    inline void SetTargetAccountId(const Aws::String& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = value; }
    inline void SetTargetAccountId(Aws::String&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::move(value); }
    inline void SetTargetAccountId(const char* value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId.assign(value); }
    inline AccountLink& WithTargetAccountId(const Aws::String& value) { SetTargetAccountId(value); return *this;}
    inline AccountLink& WithTargetAccountId(Aws::String&& value) { SetTargetAccountId(std::move(value)); return *this;}
    inline AccountLink& WithTargetAccountId(const char* value) { SetTargetAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_accountLinkId;
    bool m_accountLinkIdHasBeenSet = false;

    AccountLinkStatusEnum m_accountLinkStatus;
    bool m_accountLinkStatusHasBeenSet = false;

    Aws::String m_sourceAccountId;
    bool m_sourceAccountIdHasBeenSet = false;

    Aws::String m_targetAccountId;
    bool m_targetAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
