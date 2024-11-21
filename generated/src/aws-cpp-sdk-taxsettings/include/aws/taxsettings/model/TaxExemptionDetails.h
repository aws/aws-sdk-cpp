/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/taxsettings/model/TaxExemption.h>
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
   * <p>The tax exemption details. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/TaxExemptionDetails">AWS
   * API Reference</a></p>
   */
  class TaxExemptionDetails
  {
  public:
    AWS_TAXSETTINGS_API TaxExemptionDetails();
    AWS_TAXSETTINGS_API TaxExemptionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxExemptionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The indicator if the tax exemption is inherited from the consolidated billing
     * family management account. </p>
     */
    inline bool GetHeritageObtainedDetails() const{ return m_heritageObtainedDetails; }
    inline bool HeritageObtainedDetailsHasBeenSet() const { return m_heritageObtainedDetailsHasBeenSet; }
    inline void SetHeritageObtainedDetails(bool value) { m_heritageObtainedDetailsHasBeenSet = true; m_heritageObtainedDetails = value; }
    inline TaxExemptionDetails& WithHeritageObtainedDetails(bool value) { SetHeritageObtainedDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The consolidated billing family management account the tax exemption
     * inherited from. </p>
     */
    inline const Aws::String& GetHeritageObtainedParentEntity() const{ return m_heritageObtainedParentEntity; }
    inline bool HeritageObtainedParentEntityHasBeenSet() const { return m_heritageObtainedParentEntityHasBeenSet; }
    inline void SetHeritageObtainedParentEntity(const Aws::String& value) { m_heritageObtainedParentEntityHasBeenSet = true; m_heritageObtainedParentEntity = value; }
    inline void SetHeritageObtainedParentEntity(Aws::String&& value) { m_heritageObtainedParentEntityHasBeenSet = true; m_heritageObtainedParentEntity = std::move(value); }
    inline void SetHeritageObtainedParentEntity(const char* value) { m_heritageObtainedParentEntityHasBeenSet = true; m_heritageObtainedParentEntity.assign(value); }
    inline TaxExemptionDetails& WithHeritageObtainedParentEntity(const Aws::String& value) { SetHeritageObtainedParentEntity(value); return *this;}
    inline TaxExemptionDetails& WithHeritageObtainedParentEntity(Aws::String&& value) { SetHeritageObtainedParentEntity(std::move(value)); return *this;}
    inline TaxExemptionDetails& WithHeritageObtainedParentEntity(const char* value) { SetHeritageObtainedParentEntity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason of the heritage inheritance. </p>
     */
    inline const Aws::String& GetHeritageObtainedReason() const{ return m_heritageObtainedReason; }
    inline bool HeritageObtainedReasonHasBeenSet() const { return m_heritageObtainedReasonHasBeenSet; }
    inline void SetHeritageObtainedReason(const Aws::String& value) { m_heritageObtainedReasonHasBeenSet = true; m_heritageObtainedReason = value; }
    inline void SetHeritageObtainedReason(Aws::String&& value) { m_heritageObtainedReasonHasBeenSet = true; m_heritageObtainedReason = std::move(value); }
    inline void SetHeritageObtainedReason(const char* value) { m_heritageObtainedReasonHasBeenSet = true; m_heritageObtainedReason.assign(value); }
    inline TaxExemptionDetails& WithHeritageObtainedReason(const Aws::String& value) { SetHeritageObtainedReason(value); return *this;}
    inline TaxExemptionDetails& WithHeritageObtainedReason(Aws::String&& value) { SetHeritageObtainedReason(std::move(value)); return *this;}
    inline TaxExemptionDetails& WithHeritageObtainedReason(const char* value) { SetHeritageObtainedReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tax exemptions. </p>
     */
    inline const Aws::Vector<TaxExemption>& GetTaxExemptions() const{ return m_taxExemptions; }
    inline bool TaxExemptionsHasBeenSet() const { return m_taxExemptionsHasBeenSet; }
    inline void SetTaxExemptions(const Aws::Vector<TaxExemption>& value) { m_taxExemptionsHasBeenSet = true; m_taxExemptions = value; }
    inline void SetTaxExemptions(Aws::Vector<TaxExemption>&& value) { m_taxExemptionsHasBeenSet = true; m_taxExemptions = std::move(value); }
    inline TaxExemptionDetails& WithTaxExemptions(const Aws::Vector<TaxExemption>& value) { SetTaxExemptions(value); return *this;}
    inline TaxExemptionDetails& WithTaxExemptions(Aws::Vector<TaxExemption>&& value) { SetTaxExemptions(std::move(value)); return *this;}
    inline TaxExemptionDetails& AddTaxExemptions(const TaxExemption& value) { m_taxExemptionsHasBeenSet = true; m_taxExemptions.push_back(value); return *this; }
    inline TaxExemptionDetails& AddTaxExemptions(TaxExemption&& value) { m_taxExemptionsHasBeenSet = true; m_taxExemptions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_heritageObtainedDetails;
    bool m_heritageObtainedDetailsHasBeenSet = false;

    Aws::String m_heritageObtainedParentEntity;
    bool m_heritageObtainedParentEntityHasBeenSet = false;

    Aws::String m_heritageObtainedReason;
    bool m_heritageObtainedReasonHasBeenSet = false;

    Aws::Vector<TaxExemption> m_taxExemptions;
    bool m_taxExemptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
