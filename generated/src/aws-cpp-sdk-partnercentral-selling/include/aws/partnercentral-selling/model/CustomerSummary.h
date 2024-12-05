/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AccountSummary.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>An object that contains a <code>Customer</code> object's subset of
   * fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CustomerSummary">AWS
   * API Reference</a></p>
   */
  class CustomerSummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API CustomerSummary();
    AWS_PARTNERCENTRALSELLING_API CustomerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API CustomerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains a customer's account details.</p>
     */
    inline const AccountSummary& GetAccount() const{ return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    inline void SetAccount(const AccountSummary& value) { m_accountHasBeenSet = true; m_account = value; }
    inline void SetAccount(AccountSummary&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }
    inline CustomerSummary& WithAccount(const AccountSummary& value) { SetAccount(value); return *this;}
    inline CustomerSummary& WithAccount(AccountSummary&& value) { SetAccount(std::move(value)); return *this;}
    ///@}
  private:

    AccountSummary m_account;
    bool m_accountHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
