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
    AWS_TAXSETTINGS_API BatchPutTaxRegistrationRequest();

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
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }
    inline BatchPutTaxRegistrationRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}
    inline BatchPutTaxRegistrationRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}
    inline BatchPutTaxRegistrationRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    inline BatchPutTaxRegistrationRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }
    inline BatchPutTaxRegistrationRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Your TRN information that will be stored to the accounts mentioned in
     * <code>putEntries</code>. </p>
     */
    inline const TaxRegistrationEntry& GetTaxRegistrationEntry() const{ return m_taxRegistrationEntry; }
    inline bool TaxRegistrationEntryHasBeenSet() const { return m_taxRegistrationEntryHasBeenSet; }
    inline void SetTaxRegistrationEntry(const TaxRegistrationEntry& value) { m_taxRegistrationEntryHasBeenSet = true; m_taxRegistrationEntry = value; }
    inline void SetTaxRegistrationEntry(TaxRegistrationEntry&& value) { m_taxRegistrationEntryHasBeenSet = true; m_taxRegistrationEntry = std::move(value); }
    inline BatchPutTaxRegistrationRequest& WithTaxRegistrationEntry(const TaxRegistrationEntry& value) { SetTaxRegistrationEntry(value); return *this;}
    inline BatchPutTaxRegistrationRequest& WithTaxRegistrationEntry(TaxRegistrationEntry&& value) { SetTaxRegistrationEntry(std::move(value)); return *this;}
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
