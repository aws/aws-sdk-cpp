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
   * <p>Additional tax information to specify for a TRN in Egypt.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/EgyptAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class EgyptAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API EgyptAdditionalInfo();
    AWS_TAXSETTINGS_API EgyptAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API EgyptAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identification number provided by the Egypt Tax Authority.</p>
     */
    inline const Aws::String& GetUniqueIdentificationNumber() const{ return m_uniqueIdentificationNumber; }
    inline bool UniqueIdentificationNumberHasBeenSet() const { return m_uniqueIdentificationNumberHasBeenSet; }
    inline void SetUniqueIdentificationNumber(const Aws::String& value) { m_uniqueIdentificationNumberHasBeenSet = true; m_uniqueIdentificationNumber = value; }
    inline void SetUniqueIdentificationNumber(Aws::String&& value) { m_uniqueIdentificationNumberHasBeenSet = true; m_uniqueIdentificationNumber = std::move(value); }
    inline void SetUniqueIdentificationNumber(const char* value) { m_uniqueIdentificationNumberHasBeenSet = true; m_uniqueIdentificationNumber.assign(value); }
    inline EgyptAdditionalInfo& WithUniqueIdentificationNumber(const Aws::String& value) { SetUniqueIdentificationNumber(value); return *this;}
    inline EgyptAdditionalInfo& WithUniqueIdentificationNumber(Aws::String&& value) { SetUniqueIdentificationNumber(std::move(value)); return *this;}
    inline EgyptAdditionalInfo& WithUniqueIdentificationNumber(const char* value) { SetUniqueIdentificationNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration date of the unique identification number provided by the Egypt
     * Tax Authority.</p>
     */
    inline const Aws::String& GetUniqueIdentificationNumberExpirationDate() const{ return m_uniqueIdentificationNumberExpirationDate; }
    inline bool UniqueIdentificationNumberExpirationDateHasBeenSet() const { return m_uniqueIdentificationNumberExpirationDateHasBeenSet; }
    inline void SetUniqueIdentificationNumberExpirationDate(const Aws::String& value) { m_uniqueIdentificationNumberExpirationDateHasBeenSet = true; m_uniqueIdentificationNumberExpirationDate = value; }
    inline void SetUniqueIdentificationNumberExpirationDate(Aws::String&& value) { m_uniqueIdentificationNumberExpirationDateHasBeenSet = true; m_uniqueIdentificationNumberExpirationDate = std::move(value); }
    inline void SetUniqueIdentificationNumberExpirationDate(const char* value) { m_uniqueIdentificationNumberExpirationDateHasBeenSet = true; m_uniqueIdentificationNumberExpirationDate.assign(value); }
    inline EgyptAdditionalInfo& WithUniqueIdentificationNumberExpirationDate(const Aws::String& value) { SetUniqueIdentificationNumberExpirationDate(value); return *this;}
    inline EgyptAdditionalInfo& WithUniqueIdentificationNumberExpirationDate(Aws::String&& value) { SetUniqueIdentificationNumberExpirationDate(std::move(value)); return *this;}
    inline EgyptAdditionalInfo& WithUniqueIdentificationNumberExpirationDate(const char* value) { SetUniqueIdentificationNumberExpirationDate(value); return *this;}
    ///@}
  private:

    Aws::String m_uniqueIdentificationNumber;
    bool m_uniqueIdentificationNumberHasBeenSet = false;

    Aws::String m_uniqueIdentificationNumberExpirationDate;
    bool m_uniqueIdentificationNumberExpirationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
