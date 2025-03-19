/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/AccountMetaData.h>
#include <aws/taxsettings/model/TaxInheritanceDetails.h>
#include <aws/taxsettings/model/TaxRegistrationWithJurisdiction.h>
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
   * <p> An object with your <code>accountId</code> and TRN information.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/AccountDetails">AWS
   * API Reference</a></p>
   */
  class AccountDetails
  {
  public:
    AWS_TAXSETTINGS_API AccountDetails() = default;
    AWS_TAXSETTINGS_API AccountDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API AccountDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of unique account identifiers. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AccountDetails& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The meta data information associated with the account. </p>
     */
    inline const AccountMetaData& GetAccountMetaData() const { return m_accountMetaData; }
    inline bool AccountMetaDataHasBeenSet() const { return m_accountMetaDataHasBeenSet; }
    template<typename AccountMetaDataT = AccountMetaData>
    void SetAccountMetaData(AccountMetaDataT&& value) { m_accountMetaDataHasBeenSet = true; m_accountMetaData = std::forward<AccountMetaDataT>(value); }
    template<typename AccountMetaDataT = AccountMetaData>
    AccountDetails& WithAccountMetaData(AccountMetaDataT&& value) { SetAccountMetaData(std::forward<AccountMetaDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Tax inheritance information associated with the account. </p>
     */
    inline const TaxInheritanceDetails& GetTaxInheritanceDetails() const { return m_taxInheritanceDetails; }
    inline bool TaxInheritanceDetailsHasBeenSet() const { return m_taxInheritanceDetailsHasBeenSet; }
    template<typename TaxInheritanceDetailsT = TaxInheritanceDetails>
    void SetTaxInheritanceDetails(TaxInheritanceDetailsT&& value) { m_taxInheritanceDetailsHasBeenSet = true; m_taxInheritanceDetails = std::forward<TaxInheritanceDetailsT>(value); }
    template<typename TaxInheritanceDetailsT = TaxInheritanceDetails>
    AccountDetails& WithTaxInheritanceDetails(TaxInheritanceDetailsT&& value) { SetTaxInheritanceDetails(std::forward<TaxInheritanceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your TRN information. Instead of having full legal address, here TRN
     * information will have jurisdiction details (for example, country code and
     * state/region/province if applicable). </p>
     */
    inline const TaxRegistrationWithJurisdiction& GetTaxRegistration() const { return m_taxRegistration; }
    inline bool TaxRegistrationHasBeenSet() const { return m_taxRegistrationHasBeenSet; }
    template<typename TaxRegistrationT = TaxRegistrationWithJurisdiction>
    void SetTaxRegistration(TaxRegistrationT&& value) { m_taxRegistrationHasBeenSet = true; m_taxRegistration = std::forward<TaxRegistrationT>(value); }
    template<typename TaxRegistrationT = TaxRegistrationWithJurisdiction>
    AccountDetails& WithTaxRegistration(TaxRegistrationT&& value) { SetTaxRegistration(std::forward<TaxRegistrationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AccountMetaData m_accountMetaData;
    bool m_accountMetaDataHasBeenSet = false;

    TaxInheritanceDetails m_taxInheritanceDetails;
    bool m_taxInheritanceDetailsHasBeenSet = false;

    TaxRegistrationWithJurisdiction m_taxRegistration;
    bool m_taxRegistrationHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
