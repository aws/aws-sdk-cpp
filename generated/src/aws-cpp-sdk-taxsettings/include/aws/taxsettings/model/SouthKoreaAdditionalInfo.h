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
   * <p>Additional tax information associated with your TRN in South
   * Korea.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/SouthKoreaAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class SouthKoreaAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API SouthKoreaAdditionalInfo() = default;
    AWS_TAXSETTINGS_API SouthKoreaAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API SouthKoreaAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The business legal name based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline const Aws::String& GetBusinessRepresentativeName() const { return m_businessRepresentativeName; }
    inline bool BusinessRepresentativeNameHasBeenSet() const { return m_businessRepresentativeNameHasBeenSet; }
    template<typename BusinessRepresentativeNameT = Aws::String>
    void SetBusinessRepresentativeName(BusinessRepresentativeNameT&& value) { m_businessRepresentativeNameHasBeenSet = true; m_businessRepresentativeName = std::forward<BusinessRepresentativeNameT>(value); }
    template<typename BusinessRepresentativeNameT = Aws::String>
    SouthKoreaAdditionalInfo& WithBusinessRepresentativeName(BusinessRepresentativeNameT&& value) { SetBusinessRepresentativeName(std::forward<BusinessRepresentativeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Item of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline const Aws::String& GetItemOfBusiness() const { return m_itemOfBusiness; }
    inline bool ItemOfBusinessHasBeenSet() const { return m_itemOfBusinessHasBeenSet; }
    template<typename ItemOfBusinessT = Aws::String>
    void SetItemOfBusiness(ItemOfBusinessT&& value) { m_itemOfBusinessHasBeenSet = true; m_itemOfBusiness = std::forward<ItemOfBusinessT>(value); }
    template<typename ItemOfBusinessT = Aws::String>
    SouthKoreaAdditionalInfo& WithItemOfBusiness(ItemOfBusinessT&& value) { SetItemOfBusiness(std::forward<ItemOfBusinessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Line of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline const Aws::String& GetLineOfBusiness() const { return m_lineOfBusiness; }
    inline bool LineOfBusinessHasBeenSet() const { return m_lineOfBusinessHasBeenSet; }
    template<typename LineOfBusinessT = Aws::String>
    void SetLineOfBusiness(LineOfBusinessT&& value) { m_lineOfBusinessHasBeenSet = true; m_lineOfBusiness = std::forward<LineOfBusinessT>(value); }
    template<typename LineOfBusinessT = Aws::String>
    SouthKoreaAdditionalInfo& WithLineOfBusiness(LineOfBusinessT&& value) { SetLineOfBusiness(std::forward<LineOfBusinessT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_businessRepresentativeName;
    bool m_businessRepresentativeNameHasBeenSet = false;

    Aws::String m_itemOfBusiness;
    bool m_itemOfBusinessHasBeenSet = false;

    Aws::String m_lineOfBusiness;
    bool m_lineOfBusinessHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
