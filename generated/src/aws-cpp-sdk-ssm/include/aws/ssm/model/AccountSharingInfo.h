/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information includes the Amazon Web Services account ID where the current
   * document is shared and the version shared with that account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AccountSharingInfo">AWS
   * API Reference</a></p>
   */
  class AccountSharingInfo
  {
  public:
    AWS_SSM_API AccountSharingInfo() = default;
    AWS_SSM_API AccountSharingInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AccountSharingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID where the current document is shared.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AccountSharingInfo& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline const Aws::String& GetSharedDocumentVersion() const { return m_sharedDocumentVersion; }
    inline bool SharedDocumentVersionHasBeenSet() const { return m_sharedDocumentVersionHasBeenSet; }
    template<typename SharedDocumentVersionT = Aws::String>
    void SetSharedDocumentVersion(SharedDocumentVersionT&& value) { m_sharedDocumentVersionHasBeenSet = true; m_sharedDocumentVersion = std::forward<SharedDocumentVersionT>(value); }
    template<typename SharedDocumentVersionT = Aws::String>
    AccountSharingInfo& WithSharedDocumentVersion(SharedDocumentVersionT&& value) { SetSharedDocumentVersion(std::forward<SharedDocumentVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_sharedDocumentVersion;
    bool m_sharedDocumentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
