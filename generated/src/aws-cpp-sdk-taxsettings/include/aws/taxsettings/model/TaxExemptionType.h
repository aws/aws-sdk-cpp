/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/Authority.h>
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
   * <p>The tax exemption type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/TaxExemptionType">AWS
   * API Reference</a></p>
   */
  class TaxExemptionType
  {
  public:
    AWS_TAXSETTINGS_API TaxExemptionType() = default;
    AWS_TAXSETTINGS_API TaxExemptionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxExemptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tax exemption's applicable jurisdictions. </p>
     */
    inline const Aws::Vector<Authority>& GetApplicableJurisdictions() const { return m_applicableJurisdictions; }
    inline bool ApplicableJurisdictionsHasBeenSet() const { return m_applicableJurisdictionsHasBeenSet; }
    template<typename ApplicableJurisdictionsT = Aws::Vector<Authority>>
    void SetApplicableJurisdictions(ApplicableJurisdictionsT&& value) { m_applicableJurisdictionsHasBeenSet = true; m_applicableJurisdictions = std::forward<ApplicableJurisdictionsT>(value); }
    template<typename ApplicableJurisdictionsT = Aws::Vector<Authority>>
    TaxExemptionType& WithApplicableJurisdictions(ApplicableJurisdictionsT&& value) { SetApplicableJurisdictions(std::forward<ApplicableJurisdictionsT>(value)); return *this;}
    template<typename ApplicableJurisdictionsT = Authority>
    TaxExemptionType& AddApplicableJurisdictions(ApplicableJurisdictionsT&& value) { m_applicableJurisdictionsHasBeenSet = true; m_applicableJurisdictions.emplace_back(std::forward<ApplicableJurisdictionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tax exemption's type description. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TaxExemptionType& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption's type display name. </p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    TaxExemptionType& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Authority> m_applicableJurisdictions;
    bool m_applicableJurisdictionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
