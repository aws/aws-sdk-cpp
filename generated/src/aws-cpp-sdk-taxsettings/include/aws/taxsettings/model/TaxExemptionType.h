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
    AWS_TAXSETTINGS_API TaxExemptionType();
    AWS_TAXSETTINGS_API TaxExemptionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxExemptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tax exemption's applicable jurisdictions. </p>
     */
    inline const Aws::Vector<Authority>& GetApplicableJurisdictions() const{ return m_applicableJurisdictions; }
    inline bool ApplicableJurisdictionsHasBeenSet() const { return m_applicableJurisdictionsHasBeenSet; }
    inline void SetApplicableJurisdictions(const Aws::Vector<Authority>& value) { m_applicableJurisdictionsHasBeenSet = true; m_applicableJurisdictions = value; }
    inline void SetApplicableJurisdictions(Aws::Vector<Authority>&& value) { m_applicableJurisdictionsHasBeenSet = true; m_applicableJurisdictions = std::move(value); }
    inline TaxExemptionType& WithApplicableJurisdictions(const Aws::Vector<Authority>& value) { SetApplicableJurisdictions(value); return *this;}
    inline TaxExemptionType& WithApplicableJurisdictions(Aws::Vector<Authority>&& value) { SetApplicableJurisdictions(std::move(value)); return *this;}
    inline TaxExemptionType& AddApplicableJurisdictions(const Authority& value) { m_applicableJurisdictionsHasBeenSet = true; m_applicableJurisdictions.push_back(value); return *this; }
    inline TaxExemptionType& AddApplicableJurisdictions(Authority&& value) { m_applicableJurisdictionsHasBeenSet = true; m_applicableJurisdictions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tax exemption's type description. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TaxExemptionType& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TaxExemptionType& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TaxExemptionType& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax exemption's type display name. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline TaxExemptionType& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline TaxExemptionType& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline TaxExemptionType& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
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
