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
    AWS_TAXSETTINGS_API TaxExemption() = default;
    AWS_TAXSETTINGS_API TaxExemption(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxExemption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The address domain associate with tax exemption. </p>
     */
    inline const Authority& GetAuthority() const { return m_authority; }
    inline bool AuthorityHasBeenSet() const { return m_authorityHasBeenSet; }
    template<typename AuthorityT = Authority>
    void SetAuthority(AuthorityT&& value) { m_authorityHasBeenSet = true; m_authority = std::forward<AuthorityT>(value); }
    template<typename AuthorityT = Authority>
    TaxExemption& WithAuthority(AuthorityT&& value) { SetAuthority(std::forward<AuthorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption effective date. </p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveDate() const { return m_effectiveDate; }
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }
    template<typename EffectiveDateT = Aws::Utils::DateTime>
    void SetEffectiveDate(EffectiveDateT&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::forward<EffectiveDateT>(value); }
    template<typename EffectiveDateT = Aws::Utils::DateTime>
    TaxExemption& WithEffectiveDate(EffectiveDateT&& value) { SetEffectiveDate(std::forward<EffectiveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption expiration date. </p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    TaxExemption& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption status. </p>
     */
    inline EntityExemptionAccountStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EntityExemptionAccountStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TaxExemption& WithStatus(EntityExemptionAccountStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption recording time in the <code>TaxSettings</code> system. </p>
     */
    inline const Aws::Utils::DateTime& GetSystemEffectiveDate() const { return m_systemEffectiveDate; }
    inline bool SystemEffectiveDateHasBeenSet() const { return m_systemEffectiveDateHasBeenSet; }
    template<typename SystemEffectiveDateT = Aws::Utils::DateTime>
    void SetSystemEffectiveDate(SystemEffectiveDateT&& value) { m_systemEffectiveDateHasBeenSet = true; m_systemEffectiveDate = std::forward<SystemEffectiveDateT>(value); }
    template<typename SystemEffectiveDateT = Aws::Utils::DateTime>
    TaxExemption& WithSystemEffectiveDate(SystemEffectiveDateT&& value) { SetSystemEffectiveDate(std::forward<SystemEffectiveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption type. </p>
     */
    inline const TaxExemptionType& GetTaxExemptionType() const { return m_taxExemptionType; }
    inline bool TaxExemptionTypeHasBeenSet() const { return m_taxExemptionTypeHasBeenSet; }
    template<typename TaxExemptionTypeT = TaxExemptionType>
    void SetTaxExemptionType(TaxExemptionTypeT&& value) { m_taxExemptionTypeHasBeenSet = true; m_taxExemptionType = std::forward<TaxExemptionTypeT>(value); }
    template<typename TaxExemptionTypeT = TaxExemptionType>
    TaxExemption& WithTaxExemptionType(TaxExemptionTypeT&& value) { SetTaxExemptionType(std::forward<TaxExemptionTypeT>(value)); return *this;}
    ///@}
  private:

    Authority m_authority;
    bool m_authorityHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveDate{};
    bool m_effectiveDateHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate{};
    bool m_expirationDateHasBeenSet = false;

    EntityExemptionAccountStatus m_status{EntityExemptionAccountStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_systemEffectiveDate{};
    bool m_systemEffectiveDateHasBeenSet = false;

    TaxExemptionType m_taxExemptionType;
    bool m_taxExemptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
