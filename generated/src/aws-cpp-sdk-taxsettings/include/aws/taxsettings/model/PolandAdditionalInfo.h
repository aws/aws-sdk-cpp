/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Additional tax information associated with your TRN in Poland.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/PolandAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class PolandAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API PolandAdditionalInfo();
    AWS_TAXSETTINGS_API PolandAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API PolandAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The individual tax registration number (NIP). Individual NIP is valid for
     * other taxes excluding VAT purposes. </p>
     */
    inline const Aws::String& GetIndividualRegistrationNumber() const{ return m_individualRegistrationNumber; }
    inline bool IndividualRegistrationNumberHasBeenSet() const { return m_individualRegistrationNumberHasBeenSet; }
    inline void SetIndividualRegistrationNumber(const Aws::String& value) { m_individualRegistrationNumberHasBeenSet = true; m_individualRegistrationNumber = value; }
    inline void SetIndividualRegistrationNumber(Aws::String&& value) { m_individualRegistrationNumberHasBeenSet = true; m_individualRegistrationNumber = std::move(value); }
    inline void SetIndividualRegistrationNumber(const char* value) { m_individualRegistrationNumberHasBeenSet = true; m_individualRegistrationNumber.assign(value); }
    inline PolandAdditionalInfo& WithIndividualRegistrationNumber(const Aws::String& value) { SetIndividualRegistrationNumber(value); return *this;}
    inline PolandAdditionalInfo& WithIndividualRegistrationNumber(Aws::String&& value) { SetIndividualRegistrationNumber(std::move(value)); return *this;}
    inline PolandAdditionalInfo& WithIndividualRegistrationNumber(const char* value) { SetIndividualRegistrationNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> True if your business is a member of a VAT group with a NIP active for VAT
     * purposes. Otherwise, this is false. </p>
     */
    inline bool GetIsGroupVatEnabled() const{ return m_isGroupVatEnabled; }
    inline bool IsGroupVatEnabledHasBeenSet() const { return m_isGroupVatEnabledHasBeenSet; }
    inline void SetIsGroupVatEnabled(bool value) { m_isGroupVatEnabledHasBeenSet = true; m_isGroupVatEnabled = value; }
    inline PolandAdditionalInfo& WithIsGroupVatEnabled(bool value) { SetIsGroupVatEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_individualRegistrationNumber;
    bool m_individualRegistrationNumberHasBeenSet = false;

    bool m_isGroupVatEnabled;
    bool m_isGroupVatEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
