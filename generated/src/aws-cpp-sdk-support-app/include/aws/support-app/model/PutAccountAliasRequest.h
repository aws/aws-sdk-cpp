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
    AWS_SUPPORTAPP_API PutAccountAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountAlias"; }

    AWS_SUPPORTAPP_API Aws::String SerializePayload() const override;


    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountAlias() const{ return m_accountAlias; }

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline bool AccountAliasHasBeenSet() const { return m_accountAliasHasBeenSet; }

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline void SetAccountAlias(const Aws::String& value) { m_accountAliasHasBeenSet = true; m_accountAlias = value; }

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline void SetAccountAlias(Aws::String&& value) { m_accountAliasHasBeenSet = true; m_accountAlias = std::move(value); }

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline void SetAccountAlias(const char* value) { m_accountAliasHasBeenSet = true; m_accountAlias.assign(value); }

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline PutAccountAliasRequest& WithAccountAlias(const Aws::String& value) { SetAccountAlias(value); return *this;}

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline PutAccountAliasRequest& WithAccountAlias(Aws::String&& value) { SetAccountAlias(std::move(value)); return *this;}

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline PutAccountAliasRequest& WithAccountAlias(const char* value) { SetAccountAlias(value); return *this;}

  private:

    Aws::String m_accountAlias;
    bool m_accountAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
