/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/RegistrationType.h>
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
   * <p>Additional tax information associated with your TRN in Spain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/SpainAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class SpainAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API SpainAdditionalInfo();
    AWS_TAXSETTINGS_API SpainAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API SpainAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The registration type in Spain.</p>
     */
    inline const RegistrationType& GetRegistrationType() const{ return m_registrationType; }
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
    inline void SetRegistrationType(const RegistrationType& value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }
    inline void SetRegistrationType(RegistrationType&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::move(value); }
    inline SpainAdditionalInfo& WithRegistrationType(const RegistrationType& value) { SetRegistrationType(value); return *this;}
    inline SpainAdditionalInfo& WithRegistrationType(RegistrationType&& value) { SetRegistrationType(std::move(value)); return *this;}
    ///@}
  private:

    RegistrationType m_registrationType;
    bool m_registrationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
