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
    AWS_TAXSETTINGS_API TaxExemptionDetails() = default;
    AWS_TAXSETTINGS_API TaxExemptionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxExemptionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The indicator if the tax exemption is inherited from the consolidated billing
     * family management account. </p>
     */
    inline bool GetHeritageObtainedDetails() const { return m_heritageObtainedDetails; }
    inline bool HeritageObtainedDetailsHasBeenSet() const { return m_heritageObtainedDetailsHasBeenSet; }
    inline void SetHeritageObtainedDetails(bool value) { m_heritageObtainedDetailsHasBeenSet = true; m_heritageObtainedDetails = value; }
    inline TaxExemptionDetails& WithHeritageObtainedDetails(bool value) { SetHeritageObtainedDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The consolidated billing family management account the tax exemption
     * inherited from. </p>
     */
    inline const Aws::String& GetHeritageObtainedParentEntity() const { return m_heritageObtainedParentEntity; }
    inline bool HeritageObtainedParentEntityHasBeenSet() const { return m_heritageObtainedParentEntityHasBeenSet; }
    template<typename HeritageObtainedParentEntityT = Aws::String>
    void SetHeritageObtainedParentEntity(HeritageObtainedParentEntityT&& value) { m_heritageObtainedParentEntityHasBeenSet = true; m_heritageObtainedParentEntity = std::forward<HeritageObtainedParentEntityT>(value); }
    template<typename HeritageObtainedParentEntityT = Aws::String>
    TaxExemptionDetails& WithHeritageObtainedParentEntity(HeritageObtainedParentEntityT&& value) { SetHeritageObtainedParentEntity(std::forward<HeritageObtainedParentEntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason of the heritage inheritance. </p>
     */
    inline const Aws::String& GetHeritageObtainedReason() const { return m_heritageObtainedReason; }
    inline bool HeritageObtainedReasonHasBeenSet() const { return m_heritageObtainedReasonHasBeenSet; }
    template<typename HeritageObtainedReasonT = Aws::String>
    void SetHeritageObtainedReason(HeritageObtainedReasonT&& value) { m_heritageObtainedReasonHasBeenSet = true; m_heritageObtainedReason = std::forward<HeritageObtainedReasonT>(value); }
    template<typename HeritageObtainedReasonT = Aws::String>
    TaxExemptionDetails& WithHeritageObtainedReason(HeritageObtainedReasonT&& value) { SetHeritageObtainedReason(std::forward<HeritageObtainedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tax exemptions. </p>
     */
    inline const Aws::Vector<TaxExemption>& GetTaxExemptions() const { return m_taxExemptions; }
    inline bool TaxExemptionsHasBeenSet() const { return m_taxExemptionsHasBeenSet; }
    template<typename TaxExemptionsT = Aws::Vector<TaxExemption>>
    void SetTaxExemptions(TaxExemptionsT&& value) { m_taxExemptionsHasBeenSet = true; m_taxExemptions = std::forward<TaxExemptionsT>(value); }
    template<typename TaxExemptionsT = Aws::Vector<TaxExemption>>
    TaxExemptionDetails& WithTaxExemptions(TaxExemptionsT&& value) { SetTaxExemptions(std::forward<TaxExemptionsT>(value)); return *this;}
    template<typename TaxExemptionsT = TaxExemption>
    TaxExemptionDetails& AddTaxExemptions(TaxExemptionsT&& value) { m_taxExemptionsHasBeenSet = true; m_taxExemptions.emplace_back(std::forward<TaxExemptionsT>(value)); return *this; }
    ///@}
  private:

    bool m_heritageObtainedDetails{false};
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
