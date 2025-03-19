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
    AWS_TAXSETTINGS_API EgyptAdditionalInfo() = default;
    AWS_TAXSETTINGS_API EgyptAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API EgyptAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identification number provided by the Egypt Tax Authority.</p>
     */
    inline const Aws::String& GetUniqueIdentificationNumber() const { return m_uniqueIdentificationNumber; }
    inline bool UniqueIdentificationNumberHasBeenSet() const { return m_uniqueIdentificationNumberHasBeenSet; }
    template<typename UniqueIdentificationNumberT = Aws::String>
    void SetUniqueIdentificationNumber(UniqueIdentificationNumberT&& value) { m_uniqueIdentificationNumberHasBeenSet = true; m_uniqueIdentificationNumber = std::forward<UniqueIdentificationNumberT>(value); }
    template<typename UniqueIdentificationNumberT = Aws::String>
    EgyptAdditionalInfo& WithUniqueIdentificationNumber(UniqueIdentificationNumberT&& value) { SetUniqueIdentificationNumber(std::forward<UniqueIdentificationNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration date of the unique identification number provided by the Egypt
     * Tax Authority.</p>
     */
    inline const Aws::String& GetUniqueIdentificationNumberExpirationDate() const { return m_uniqueIdentificationNumberExpirationDate; }
    inline bool UniqueIdentificationNumberExpirationDateHasBeenSet() const { return m_uniqueIdentificationNumberExpirationDateHasBeenSet; }
    template<typename UniqueIdentificationNumberExpirationDateT = Aws::String>
    void SetUniqueIdentificationNumberExpirationDate(UniqueIdentificationNumberExpirationDateT&& value) { m_uniqueIdentificationNumberExpirationDateHasBeenSet = true; m_uniqueIdentificationNumberExpirationDate = std::forward<UniqueIdentificationNumberExpirationDateT>(value); }
    template<typename UniqueIdentificationNumberExpirationDateT = Aws::String>
    EgyptAdditionalInfo& WithUniqueIdentificationNumberExpirationDate(UniqueIdentificationNumberExpirationDateT&& value) { SetUniqueIdentificationNumberExpirationDate(std::forward<UniqueIdentificationNumberExpirationDateT>(value)); return *this;}
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
