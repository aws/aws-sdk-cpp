/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/taxsettings/model/TaxRegistrationDocument.h>
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
   * <p>Required information to verify your TRN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/VerificationDetails">AWS
   * API Reference</a></p>
   */
  class VerificationDetails
  {
  public:
    AWS_TAXSETTINGS_API VerificationDetails() = default;
    AWS_TAXSETTINGS_API VerificationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API VerificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Date of birth to verify your submitted TRN. Use the <code>YYYY-MM-DD</code>
     * format.</p>
     */
    inline const Aws::String& GetDateOfBirth() const { return m_dateOfBirth; }
    inline bool DateOfBirthHasBeenSet() const { return m_dateOfBirthHasBeenSet; }
    template<typename DateOfBirthT = Aws::String>
    void SetDateOfBirth(DateOfBirthT&& value) { m_dateOfBirthHasBeenSet = true; m_dateOfBirth = std::forward<DateOfBirthT>(value); }
    template<typename DateOfBirthT = Aws::String>
    VerificationDetails& WithDateOfBirth(DateOfBirthT&& value) { SetDateOfBirth(std::forward<DateOfBirthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax registration document, which is required for specific countries such
     * as Bangladesh, Kenya, South Korea and Spain.</p>
     */
    inline const Aws::Vector<TaxRegistrationDocument>& GetTaxRegistrationDocuments() const { return m_taxRegistrationDocuments; }
    inline bool TaxRegistrationDocumentsHasBeenSet() const { return m_taxRegistrationDocumentsHasBeenSet; }
    template<typename TaxRegistrationDocumentsT = Aws::Vector<TaxRegistrationDocument>>
    void SetTaxRegistrationDocuments(TaxRegistrationDocumentsT&& value) { m_taxRegistrationDocumentsHasBeenSet = true; m_taxRegistrationDocuments = std::forward<TaxRegistrationDocumentsT>(value); }
    template<typename TaxRegistrationDocumentsT = Aws::Vector<TaxRegistrationDocument>>
    VerificationDetails& WithTaxRegistrationDocuments(TaxRegistrationDocumentsT&& value) { SetTaxRegistrationDocuments(std::forward<TaxRegistrationDocumentsT>(value)); return *this;}
    template<typename TaxRegistrationDocumentsT = TaxRegistrationDocument>
    VerificationDetails& AddTaxRegistrationDocuments(TaxRegistrationDocumentsT&& value) { m_taxRegistrationDocumentsHasBeenSet = true; m_taxRegistrationDocuments.emplace_back(std::forward<TaxRegistrationDocumentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dateOfBirth;
    bool m_dateOfBirthHasBeenSet = false;

    Aws::Vector<TaxRegistrationDocument> m_taxRegistrationDocuments;
    bool m_taxRegistrationDocumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
