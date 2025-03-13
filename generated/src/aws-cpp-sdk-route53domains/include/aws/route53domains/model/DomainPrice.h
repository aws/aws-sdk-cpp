/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/PriceWithCurrency.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Information about the domain price associated with a TLD.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DomainPrice">AWS
   * API Reference</a></p>
   */
  class DomainPrice
  {
  public:
    AWS_ROUTE53DOMAINS_API DomainPrice() = default;
    AWS_ROUTE53DOMAINS_API DomainPrice(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API DomainPrice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the TLD for which the prices apply.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DomainPrice& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The price for domain registration with Route 53.</p>
     */
    inline const PriceWithCurrency& GetRegistrationPrice() const { return m_registrationPrice; }
    inline bool RegistrationPriceHasBeenSet() const { return m_registrationPriceHasBeenSet; }
    template<typename RegistrationPriceT = PriceWithCurrency>
    void SetRegistrationPrice(RegistrationPriceT&& value) { m_registrationPriceHasBeenSet = true; m_registrationPrice = std::forward<RegistrationPriceT>(value); }
    template<typename RegistrationPriceT = PriceWithCurrency>
    DomainPrice& WithRegistrationPrice(RegistrationPriceT&& value) { SetRegistrationPrice(std::forward<RegistrationPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The price for transferring the domain registration to Route 53.</p>
     */
    inline const PriceWithCurrency& GetTransferPrice() const { return m_transferPrice; }
    inline bool TransferPriceHasBeenSet() const { return m_transferPriceHasBeenSet; }
    template<typename TransferPriceT = PriceWithCurrency>
    void SetTransferPrice(TransferPriceT&& value) { m_transferPriceHasBeenSet = true; m_transferPrice = std::forward<TransferPriceT>(value); }
    template<typename TransferPriceT = PriceWithCurrency>
    DomainPrice& WithTransferPrice(TransferPriceT&& value) { SetTransferPrice(std::forward<TransferPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The price for renewing domain registration with Route 53.</p>
     */
    inline const PriceWithCurrency& GetRenewalPrice() const { return m_renewalPrice; }
    inline bool RenewalPriceHasBeenSet() const { return m_renewalPriceHasBeenSet; }
    template<typename RenewalPriceT = PriceWithCurrency>
    void SetRenewalPrice(RenewalPriceT&& value) { m_renewalPriceHasBeenSet = true; m_renewalPrice = std::forward<RenewalPriceT>(value); }
    template<typename RenewalPriceT = PriceWithCurrency>
    DomainPrice& WithRenewalPrice(RenewalPriceT&& value) { SetRenewalPrice(std::forward<RenewalPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The price for changing domain ownership.</p>
     */
    inline const PriceWithCurrency& GetChangeOwnershipPrice() const { return m_changeOwnershipPrice; }
    inline bool ChangeOwnershipPriceHasBeenSet() const { return m_changeOwnershipPriceHasBeenSet; }
    template<typename ChangeOwnershipPriceT = PriceWithCurrency>
    void SetChangeOwnershipPrice(ChangeOwnershipPriceT&& value) { m_changeOwnershipPriceHasBeenSet = true; m_changeOwnershipPrice = std::forward<ChangeOwnershipPriceT>(value); }
    template<typename ChangeOwnershipPriceT = PriceWithCurrency>
    DomainPrice& WithChangeOwnershipPrice(ChangeOwnershipPriceT&& value) { SetChangeOwnershipPrice(std::forward<ChangeOwnershipPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The price for restoring the domain with Route 53.</p>
     */
    inline const PriceWithCurrency& GetRestorationPrice() const { return m_restorationPrice; }
    inline bool RestorationPriceHasBeenSet() const { return m_restorationPriceHasBeenSet; }
    template<typename RestorationPriceT = PriceWithCurrency>
    void SetRestorationPrice(RestorationPriceT&& value) { m_restorationPriceHasBeenSet = true; m_restorationPrice = std::forward<RestorationPriceT>(value); }
    template<typename RestorationPriceT = PriceWithCurrency>
    DomainPrice& WithRestorationPrice(RestorationPriceT&& value) { SetRestorationPrice(std::forward<RestorationPriceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PriceWithCurrency m_registrationPrice;
    bool m_registrationPriceHasBeenSet = false;

    PriceWithCurrency m_transferPrice;
    bool m_transferPriceHasBeenSet = false;

    PriceWithCurrency m_renewalPrice;
    bool m_renewalPriceHasBeenSet = false;

    PriceWithCurrency m_changeOwnershipPrice;
    bool m_changeOwnershipPriceHasBeenSet = false;

    PriceWithCurrency m_restorationPrice;
    bool m_restorationPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
