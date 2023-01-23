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
    AWS_ROUTE53DOMAINS_API DomainPrice();
    AWS_ROUTE53DOMAINS_API DomainPrice(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API DomainPrice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the TLD for which the prices apply.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the TLD for which the prices apply.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the TLD for which the prices apply.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the TLD for which the prices apply.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the TLD for which the prices apply.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the TLD for which the prices apply.</p>
     */
    inline DomainPrice& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the TLD for which the prices apply.</p>
     */
    inline DomainPrice& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the TLD for which the prices apply.</p>
     */
    inline DomainPrice& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The price for domain registration with Route 53.</p>
     */
    inline const PriceWithCurrency& GetRegistrationPrice() const{ return m_registrationPrice; }

    /**
     * <p>The price for domain registration with Route 53.</p>
     */
    inline bool RegistrationPriceHasBeenSet() const { return m_registrationPriceHasBeenSet; }

    /**
     * <p>The price for domain registration with Route 53.</p>
     */
    inline void SetRegistrationPrice(const PriceWithCurrency& value) { m_registrationPriceHasBeenSet = true; m_registrationPrice = value; }

    /**
     * <p>The price for domain registration with Route 53.</p>
     */
    inline void SetRegistrationPrice(PriceWithCurrency&& value) { m_registrationPriceHasBeenSet = true; m_registrationPrice = std::move(value); }

    /**
     * <p>The price for domain registration with Route 53.</p>
     */
    inline DomainPrice& WithRegistrationPrice(const PriceWithCurrency& value) { SetRegistrationPrice(value); return *this;}

    /**
     * <p>The price for domain registration with Route 53.</p>
     */
    inline DomainPrice& WithRegistrationPrice(PriceWithCurrency&& value) { SetRegistrationPrice(std::move(value)); return *this;}


    /**
     * <p>The price for transferring the domain registration to Route 53.</p>
     */
    inline const PriceWithCurrency& GetTransferPrice() const{ return m_transferPrice; }

    /**
     * <p>The price for transferring the domain registration to Route 53.</p>
     */
    inline bool TransferPriceHasBeenSet() const { return m_transferPriceHasBeenSet; }

    /**
     * <p>The price for transferring the domain registration to Route 53.</p>
     */
    inline void SetTransferPrice(const PriceWithCurrency& value) { m_transferPriceHasBeenSet = true; m_transferPrice = value; }

    /**
     * <p>The price for transferring the domain registration to Route 53.</p>
     */
    inline void SetTransferPrice(PriceWithCurrency&& value) { m_transferPriceHasBeenSet = true; m_transferPrice = std::move(value); }

    /**
     * <p>The price for transferring the domain registration to Route 53.</p>
     */
    inline DomainPrice& WithTransferPrice(const PriceWithCurrency& value) { SetTransferPrice(value); return *this;}

    /**
     * <p>The price for transferring the domain registration to Route 53.</p>
     */
    inline DomainPrice& WithTransferPrice(PriceWithCurrency&& value) { SetTransferPrice(std::move(value)); return *this;}


    /**
     * <p>The price for renewing domain registration with Route 53.</p>
     */
    inline const PriceWithCurrency& GetRenewalPrice() const{ return m_renewalPrice; }

    /**
     * <p>The price for renewing domain registration with Route 53.</p>
     */
    inline bool RenewalPriceHasBeenSet() const { return m_renewalPriceHasBeenSet; }

    /**
     * <p>The price for renewing domain registration with Route 53.</p>
     */
    inline void SetRenewalPrice(const PriceWithCurrency& value) { m_renewalPriceHasBeenSet = true; m_renewalPrice = value; }

    /**
     * <p>The price for renewing domain registration with Route 53.</p>
     */
    inline void SetRenewalPrice(PriceWithCurrency&& value) { m_renewalPriceHasBeenSet = true; m_renewalPrice = std::move(value); }

    /**
     * <p>The price for renewing domain registration with Route 53.</p>
     */
    inline DomainPrice& WithRenewalPrice(const PriceWithCurrency& value) { SetRenewalPrice(value); return *this;}

    /**
     * <p>The price for renewing domain registration with Route 53.</p>
     */
    inline DomainPrice& WithRenewalPrice(PriceWithCurrency&& value) { SetRenewalPrice(std::move(value)); return *this;}


    /**
     * <p>The price for changing domain ownership.</p>
     */
    inline const PriceWithCurrency& GetChangeOwnershipPrice() const{ return m_changeOwnershipPrice; }

    /**
     * <p>The price for changing domain ownership.</p>
     */
    inline bool ChangeOwnershipPriceHasBeenSet() const { return m_changeOwnershipPriceHasBeenSet; }

    /**
     * <p>The price for changing domain ownership.</p>
     */
    inline void SetChangeOwnershipPrice(const PriceWithCurrency& value) { m_changeOwnershipPriceHasBeenSet = true; m_changeOwnershipPrice = value; }

    /**
     * <p>The price for changing domain ownership.</p>
     */
    inline void SetChangeOwnershipPrice(PriceWithCurrency&& value) { m_changeOwnershipPriceHasBeenSet = true; m_changeOwnershipPrice = std::move(value); }

    /**
     * <p>The price for changing domain ownership.</p>
     */
    inline DomainPrice& WithChangeOwnershipPrice(const PriceWithCurrency& value) { SetChangeOwnershipPrice(value); return *this;}

    /**
     * <p>The price for changing domain ownership.</p>
     */
    inline DomainPrice& WithChangeOwnershipPrice(PriceWithCurrency&& value) { SetChangeOwnershipPrice(std::move(value)); return *this;}


    /**
     * <p>The price for restoring the domain with Route 53.</p>
     */
    inline const PriceWithCurrency& GetRestorationPrice() const{ return m_restorationPrice; }

    /**
     * <p>The price for restoring the domain with Route 53.</p>
     */
    inline bool RestorationPriceHasBeenSet() const { return m_restorationPriceHasBeenSet; }

    /**
     * <p>The price for restoring the domain with Route 53.</p>
     */
    inline void SetRestorationPrice(const PriceWithCurrency& value) { m_restorationPriceHasBeenSet = true; m_restorationPrice = value; }

    /**
     * <p>The price for restoring the domain with Route 53.</p>
     */
    inline void SetRestorationPrice(PriceWithCurrency&& value) { m_restorationPriceHasBeenSet = true; m_restorationPrice = std::move(value); }

    /**
     * <p>The price for restoring the domain with Route 53.</p>
     */
    inline DomainPrice& WithRestorationPrice(const PriceWithCurrency& value) { SetRestorationPrice(value); return *this;}

    /**
     * <p>The price for restoring the domain with Route 53.</p>
     */
    inline DomainPrice& WithRestorationPrice(PriceWithCurrency&& value) { SetRestorationPrice(std::move(value)); return *this;}

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
