/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AccountReceiver.h>
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
   * <p>Represents the entity that received the Engagement Invitation, including
   * account and company details. This field is essential for tracking the partner
   * who is being invited to collaborate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/Receiver">AWS
   * API Reference</a></p>
   */
  class Receiver
  {
  public:
    AWS_PARTNERCENTRALSELLING_API Receiver();
    AWS_PARTNERCENTRALSELLING_API Receiver(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Receiver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the AWS account of the partner who received the Engagement
     * Invitation. This field is used to track the invitation recipient within the AWS
     * ecosystem.</p>
     */
    inline const AccountReceiver& GetAccount() const{ return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    inline void SetAccount(const AccountReceiver& value) { m_accountHasBeenSet = true; m_account = value; }
    inline void SetAccount(AccountReceiver&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }
    inline Receiver& WithAccount(const AccountReceiver& value) { SetAccount(value); return *this;}
    inline Receiver& WithAccount(AccountReceiver&& value) { SetAccount(std::move(value)); return *this;}
    ///@}
  private:

    AccountReceiver m_account;
    bool m_accountHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
