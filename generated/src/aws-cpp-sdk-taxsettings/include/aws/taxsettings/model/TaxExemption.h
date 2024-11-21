/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/Authority.h>
#include <aws/core/utils/DateTime.h>
#include <aws/taxsettings/model/EntityExemptionAccountStatus.h>
#include <aws/taxsettings/model/TaxExemptionType.h>
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
namespace TaxSettings
{
namespace Model
{

  /**
   * <p>The tax exemption. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/TaxExemption">AWS
   * API Reference</a></p>
   */
  class TaxExemption
  {
  public:
    AWS_TAXSETTINGS_API TaxExemption();
    AWS_TAXSETTINGS_API TaxExemption(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxExemption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The address domain associate with tax exemption. </p>
     */
    inline const Authority& GetAuthority() const{ return m_authority; }
    inline bool AuthorityHasBeenSet() const { return m_authorityHasBeenSet; }
    inline void SetAuthority(const Authority& value) { m_authorityHasBeenSet = true; m_authority = value; }
    inline void SetAuthority(Authority&& value) { m_authorityHasBeenSet = true; m_authority = std::move(value); }
    inline TaxExemption& WithAuthority(const Authority& value) { SetAuthority(value); return *this;}
    inline TaxExemption& WithAuthority(Authority&& value) { SetAuthority(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption effective date. </p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveDate() const{ return m_effectiveDate; }
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }
    inline void SetEffectiveDate(const Aws::Utils::DateTime& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = value; }
    inline void SetEffectiveDate(Aws::Utils::DateTime&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::move(value); }
    inline TaxExemption& WithEffectiveDate(const Aws::Utils::DateTime& value) { SetEffectiveDate(value); return *this;}
    inline TaxExemption& WithEffectiveDate(Aws::Utils::DateTime&& value) { SetEffectiveDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption expiration date. </p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }
    inline TaxExemption& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}
    inline TaxExemption& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption status. </p>
     */
    inline const EntityExemptionAccountStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EntityExemptionAccountStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EntityExemptionAccountStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TaxExemption& WithStatus(const EntityExemptionAccountStatus& value) { SetStatus(value); return *this;}
    inline TaxExemption& WithStatus(EntityExemptionAccountStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption recording time in the <code>TaxSettings</code> system. </p>
     */
    inline const Aws::Utils::DateTime& GetSystemEffectiveDate() const{ return m_systemEffectiveDate; }
    inline bool SystemEffectiveDateHasBeenSet() const { return m_systemEffectiveDateHasBeenSet; }
    inline void SetSystemEffectiveDate(const Aws::Utils::DateTime& value) { m_systemEffectiveDateHasBeenSet = true; m_systemEffectiveDate = value; }
    inline void SetSystemEffectiveDate(Aws::Utils::DateTime&& value) { m_systemEffectiveDateHasBeenSet = true; m_systemEffectiveDate = std::move(value); }
    inline TaxExemption& WithSystemEffectiveDate(const Aws::Utils::DateTime& value) { SetSystemEffectiveDate(value); return *this;}
    inline TaxExemption& WithSystemEffectiveDate(Aws::Utils::DateTime&& value) { SetSystemEffectiveDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption type. </p>
     */
    inline const TaxExemptionType& GetTaxExemptionType() const{ return m_taxExemptionType; }
    inline bool TaxExemptionTypeHasBeenSet() const { return m_taxExemptionTypeHasBeenSet; }
    inline void SetTaxExemptionType(const TaxExemptionType& value) { m_taxExemptionTypeHasBeenSet = true; m_taxExemptionType = value; }
    inline void SetTaxExemptionType(TaxExemptionType&& value) { m_taxExemptionTypeHasBeenSet = true; m_taxExemptionType = std::move(value); }
    inline TaxExemption& WithTaxExemptionType(const TaxExemptionType& value) { SetTaxExemptionType(value); return *this;}
    inline TaxExemption& WithTaxExemptionType(TaxExemptionType&& value) { SetTaxExemptionType(std::move(value)); return *this;}
    ///@}
  private:

    Authority m_authority;
    bool m_authorityHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveDate;
    bool m_effectiveDateHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    EntityExemptionAccountStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_systemEffectiveDate;
    bool m_systemEffectiveDateHasBeenSet = false;

    TaxExemptionType m_taxExemptionType;
    bool m_taxExemptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
