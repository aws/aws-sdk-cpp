/**
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
    AWS_WORKSPACES_API AccountLink() = default;
    AWS_WORKSPACES_API AccountLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API AccountLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the account link.</p>
     */
    inline const Aws::String& GetAccountLinkId() const { return m_accountLinkId; }
    inline bool AccountLinkIdHasBeenSet() const { return m_accountLinkIdHasBeenSet; }
    template<typename AccountLinkIdT = Aws::String>
    void SetAccountLinkId(AccountLinkIdT&& value) { m_accountLinkIdHasBeenSet = true; m_accountLinkId = std::forward<AccountLinkIdT>(value); }
    template<typename AccountLinkIdT = Aws::String>
    AccountLink& WithAccountLinkId(AccountLinkIdT&& value) { SetAccountLinkId(std::forward<AccountLinkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the account link.</p>
     */
    inline AccountLinkStatusEnum GetAccountLinkStatus() const { return m_accountLinkStatus; }
    inline bool AccountLinkStatusHasBeenSet() const { return m_accountLinkStatusHasBeenSet; }
    inline void SetAccountLinkStatus(AccountLinkStatusEnum value) { m_accountLinkStatusHasBeenSet = true; m_accountLinkStatus = value; }
    inline AccountLink& WithAccountLinkStatus(AccountLinkStatusEnum value) { SetAccountLinkStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the source account.</p>
     */
    inline const Aws::String& GetSourceAccountId() const { return m_sourceAccountId; }
    inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }
    template<typename SourceAccountIdT = Aws::String>
    void SetSourceAccountId(SourceAccountIdT&& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = std::forward<SourceAccountIdT>(value); }
    template<typename SourceAccountIdT = Aws::String>
    AccountLink& WithSourceAccountId(SourceAccountIdT&& value) { SetSourceAccountId(std::forward<SourceAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the target account.</p>
     */
    inline const Aws::String& GetTargetAccountId() const { return m_targetAccountId; }
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }
    template<typename TargetAccountIdT = Aws::String>
    void SetTargetAccountId(TargetAccountIdT&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::forward<TargetAccountIdT>(value); }
    template<typename TargetAccountIdT = Aws::String>
    AccountLink& WithTargetAccountId(TargetAccountIdT&& value) { SetTargetAccountId(std::forward<TargetAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountLinkId;
    bool m_accountLinkIdHasBeenSet = false;

    AccountLinkStatusEnum m_accountLinkStatus{AccountLinkStatusEnum::NOT_SET};
    bool m_accountLinkStatusHasBeenSet = false;

    Aws::String m_sourceAccountId;
    bool m_sourceAccountIdHasBeenSet = false;

    Aws::String m_targetAccountId;
    bool m_targetAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
