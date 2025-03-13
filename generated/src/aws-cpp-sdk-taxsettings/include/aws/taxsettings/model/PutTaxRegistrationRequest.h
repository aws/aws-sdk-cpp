/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/TaxSettingsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/TaxRegistrationEntry.h>
#include <utility>

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

  /**
   */
  class PutTaxRegistrationRequest : public TaxSettingsRequest
  {
  public:
    AWS_TAXSETTINGS_API PutTaxRegistrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTaxRegistration"; }

    AWS_TAXSETTINGS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Your unique account identifier. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    PutTaxRegistrationRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Your TRN information that will be stored to the account mentioned in
     * <code>accountId</code>. </p>
     */
    inline const TaxRegistrationEntry& GetTaxRegistrationEntry() const { return m_taxRegistrationEntry; }
    inline bool TaxRegistrationEntryHasBeenSet() const { return m_taxRegistrationEntryHasBeenSet; }
    template<typename TaxRegistrationEntryT = TaxRegistrationEntry>
    void SetTaxRegistrationEntry(TaxRegistrationEntryT&& value) { m_taxRegistrationEntryHasBeenSet = true; m_taxRegistrationEntry = std::forward<TaxRegistrationEntryT>(value); }
    template<typename TaxRegistrationEntryT = TaxRegistrationEntry>
    PutTaxRegistrationRequest& WithTaxRegistrationEntry(TaxRegistrationEntryT&& value) { SetTaxRegistrationEntry(std::forward<TaxRegistrationEntryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    TaxRegistrationEntry m_taxRegistrationEntry;
    bool m_taxRegistrationEntryHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
