/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/TaxSettingsRequest.h>
#include <aws/taxsettings/model/SupplementalTaxRegistrationEntry.h>
#include <utility>

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

  /**
   */
  class PutSupplementalTaxRegistrationRequest : public TaxSettingsRequest
  {
  public:
    AWS_TAXSETTINGS_API PutSupplementalTaxRegistrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSupplementalTaxRegistration"; }

    AWS_TAXSETTINGS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The supplemental TRN information that will be stored for the caller account
     * ID. </p>
     */
    inline const SupplementalTaxRegistrationEntry& GetTaxRegistrationEntry() const { return m_taxRegistrationEntry; }
    inline bool TaxRegistrationEntryHasBeenSet() const { return m_taxRegistrationEntryHasBeenSet; }
    template<typename TaxRegistrationEntryT = SupplementalTaxRegistrationEntry>
    void SetTaxRegistrationEntry(TaxRegistrationEntryT&& value) { m_taxRegistrationEntryHasBeenSet = true; m_taxRegistrationEntry = std::forward<TaxRegistrationEntryT>(value); }
    template<typename TaxRegistrationEntryT = SupplementalTaxRegistrationEntry>
    PutSupplementalTaxRegistrationRequest& WithTaxRegistrationEntry(TaxRegistrationEntryT&& value) { SetTaxRegistrationEntry(std::forward<TaxRegistrationEntryT>(value)); return *this;}
    ///@}
  private:

    SupplementalTaxRegistrationEntry m_taxRegistrationEntry;
    bool m_taxRegistrationEntryHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
