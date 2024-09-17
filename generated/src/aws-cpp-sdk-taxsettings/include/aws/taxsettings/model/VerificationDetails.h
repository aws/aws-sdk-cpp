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
    AWS_TAXSETTINGS_API VerificationDetails();
    AWS_TAXSETTINGS_API VerificationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API VerificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Date of birth to verify your submitted TRN. Use the <code>YYYY-MM-DD</code>
     * format.</p>
     */
    inline const Aws::String& GetDateOfBirth() const{ return m_dateOfBirth; }
    inline bool DateOfBirthHasBeenSet() const { return m_dateOfBirthHasBeenSet; }
    inline void SetDateOfBirth(const Aws::String& value) { m_dateOfBirthHasBeenSet = true; m_dateOfBirth = value; }
    inline void SetDateOfBirth(Aws::String&& value) { m_dateOfBirthHasBeenSet = true; m_dateOfBirth = std::move(value); }
    inline void SetDateOfBirth(const char* value) { m_dateOfBirthHasBeenSet = true; m_dateOfBirth.assign(value); }
    inline VerificationDetails& WithDateOfBirth(const Aws::String& value) { SetDateOfBirth(value); return *this;}
    inline VerificationDetails& WithDateOfBirth(Aws::String&& value) { SetDateOfBirth(std::move(value)); return *this;}
    inline VerificationDetails& WithDateOfBirth(const char* value) { SetDateOfBirth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax registration document, which is required for specific countries such
     * as Bangladesh, Kenya, South Korea and Spain.</p>
     */
    inline const Aws::Vector<TaxRegistrationDocument>& GetTaxRegistrationDocuments() const{ return m_taxRegistrationDocuments; }
    inline bool TaxRegistrationDocumentsHasBeenSet() const { return m_taxRegistrationDocumentsHasBeenSet; }
    inline void SetTaxRegistrationDocuments(const Aws::Vector<TaxRegistrationDocument>& value) { m_taxRegistrationDocumentsHasBeenSet = true; m_taxRegistrationDocuments = value; }
    inline void SetTaxRegistrationDocuments(Aws::Vector<TaxRegistrationDocument>&& value) { m_taxRegistrationDocumentsHasBeenSet = true; m_taxRegistrationDocuments = std::move(value); }
    inline VerificationDetails& WithTaxRegistrationDocuments(const Aws::Vector<TaxRegistrationDocument>& value) { SetTaxRegistrationDocuments(value); return *this;}
    inline VerificationDetails& WithTaxRegistrationDocuments(Aws::Vector<TaxRegistrationDocument>&& value) { SetTaxRegistrationDocuments(std::move(value)); return *this;}
    inline VerificationDetails& AddTaxRegistrationDocuments(const TaxRegistrationDocument& value) { m_taxRegistrationDocumentsHasBeenSet = true; m_taxRegistrationDocuments.push_back(value); return *this; }
    inline VerificationDetails& AddTaxRegistrationDocuments(TaxRegistrationDocument&& value) { m_taxRegistrationDocumentsHasBeenSet = true; m_taxRegistrationDocuments.push_back(std::move(value)); return *this; }
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
