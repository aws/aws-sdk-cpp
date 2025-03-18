/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/TaxSettingsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/taxsettings/model/TaxRegistrationEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

  /**
   */
  class BatchPutTaxRegistrationRequest : public TaxSettingsRequest
  {
  public:
    AWS_TAXSETTINGS_API BatchPutTaxRegistrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutTaxRegistration"; }

    AWS_TAXSETTINGS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> List of unique account identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    BatchPutTaxRegistrationRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    BatchPutTaxRegistrationRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Your TRN information that will be stored to the accounts mentioned in
     * <code>putEntries</code>. </p>
     */
    inline const TaxRegistrationEntry& GetTaxRegistrationEntry() const { return m_taxRegistrationEntry; }
    inline bool TaxRegistrationEntryHasBeenSet() const { return m_taxRegistrationEntryHasBeenSet; }
    template<typename TaxRegistrationEntryT = TaxRegistrationEntry>
    void SetTaxRegistrationEntry(TaxRegistrationEntryT&& value) { m_taxRegistrationEntryHasBeenSet = true; m_taxRegistrationEntry = std::forward<TaxRegistrationEntryT>(value); }
    template<typename TaxRegistrationEntryT = TaxRegistrationEntry>
    BatchPutTaxRegistrationRequest& WithTaxRegistrationEntry(TaxRegistrationEntryT&& value) { SetTaxRegistrationEntry(std::forward<TaxRegistrationEntryT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    TaxRegistrationEntry m_taxRegistrationEntry;
    bool m_taxRegistrationEntryHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
