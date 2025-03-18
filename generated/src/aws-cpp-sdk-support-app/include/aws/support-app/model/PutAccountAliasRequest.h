/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/support-app/SupportAppRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SupportApp
{
namespace Model
{

  /**
   */
  class PutAccountAliasRequest : public SupportAppRequest
  {
  public:
    AWS_SUPPORTAPP_API PutAccountAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountAlias"; }

    AWS_SUPPORTAPP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountAlias() const { return m_accountAlias; }
    inline bool AccountAliasHasBeenSet() const { return m_accountAliasHasBeenSet; }
    template<typename AccountAliasT = Aws::String>
    void SetAccountAlias(AccountAliasT&& value) { m_accountAliasHasBeenSet = true; m_accountAlias = std::forward<AccountAliasT>(value); }
    template<typename AccountAliasT = Aws::String>
    PutAccountAliasRequest& WithAccountAlias(AccountAliasT&& value) { SetAccountAlias(std::forward<AccountAliasT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountAlias;
    bool m_accountAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
