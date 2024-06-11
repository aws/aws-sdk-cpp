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
    AWS_TAXSETTINGS_API AccountDetails();
    AWS_TAXSETTINGS_API AccountDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API AccountDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of unique account identifiers. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AccountDetails& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AccountDetails& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AccountDetails& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The meta data information associated with the account. </p>
     */
    inline const AccountMetaData& GetAccountMetaData() const{ return m_accountMetaData; }
    inline bool AccountMetaDataHasBeenSet() const { return m_accountMetaDataHasBeenSet; }
    inline void SetAccountMetaData(const AccountMetaData& value) { m_accountMetaDataHasBeenSet = true; m_accountMetaData = value; }
    inline void SetAccountMetaData(AccountMetaData&& value) { m_accountMetaDataHasBeenSet = true; m_accountMetaData = std::move(value); }
    inline AccountDetails& WithAccountMetaData(const AccountMetaData& value) { SetAccountMetaData(value); return *this;}
    inline AccountDetails& WithAccountMetaData(AccountMetaData&& value) { SetAccountMetaData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Tax inheritance information associated with the account. </p>
     */
    inline const TaxInheritanceDetails& GetTaxInheritanceDetails() const{ return m_taxInheritanceDetails; }
    inline bool TaxInheritanceDetailsHasBeenSet() const { return m_taxInheritanceDetailsHasBeenSet; }
    inline void SetTaxInheritanceDetails(const TaxInheritanceDetails& value) { m_taxInheritanceDetailsHasBeenSet = true; m_taxInheritanceDetails = value; }
    inline void SetTaxInheritanceDetails(TaxInheritanceDetails&& value) { m_taxInheritanceDetailsHasBeenSet = true; m_taxInheritanceDetails = std::move(value); }
    inline AccountDetails& WithTaxInheritanceDetails(const TaxInheritanceDetails& value) { SetTaxInheritanceDetails(value); return *this;}
    inline AccountDetails& WithTaxInheritanceDetails(TaxInheritanceDetails&& value) { SetTaxInheritanceDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your TRN information. Instead of having full legal address, here TRN
     * information will have jurisdiction details (for example, country code and
     * state/region/province if applicable). </p>
     */
    inline const TaxRegistrationWithJurisdiction& GetTaxRegistration() const{ return m_taxRegistration; }
    inline bool TaxRegistrationHasBeenSet() const { return m_taxRegistrationHasBeenSet; }
    inline void SetTaxRegistration(const TaxRegistrationWithJurisdiction& value) { m_taxRegistrationHasBeenSet = true; m_taxRegistration = value; }
    inline void SetTaxRegistration(TaxRegistrationWithJurisdiction&& value) { m_taxRegistrationHasBeenSet = true; m_taxRegistration = std::move(value); }
    inline AccountDetails& WithTaxRegistration(const TaxRegistrationWithJurisdiction& value) { SetTaxRegistration(value); return *this;}
    inline AccountDetails& WithTaxRegistration(TaxRegistrationWithJurisdiction&& value) { SetTaxRegistration(std::move(value)); return *this;}
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
