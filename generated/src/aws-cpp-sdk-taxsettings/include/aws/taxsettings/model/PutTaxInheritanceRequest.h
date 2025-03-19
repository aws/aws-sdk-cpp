/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/TaxSettingsRequest.h>
#include <aws/taxsettings/model/HeritageStatus.h>
#include <utility>

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

  /**
   */
  class PutTaxInheritanceRequest : public TaxSettingsRequest
  {
  public:
    AWS_TAXSETTINGS_API PutTaxInheritanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTaxInheritance"; }

    AWS_TAXSETTINGS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The tax inheritance status. </p>
     */
    inline HeritageStatus GetHeritageStatus() const { return m_heritageStatus; }
    inline bool HeritageStatusHasBeenSet() const { return m_heritageStatusHasBeenSet; }
    inline void SetHeritageStatus(HeritageStatus value) { m_heritageStatusHasBeenSet = true; m_heritageStatus = value; }
    inline PutTaxInheritanceRequest& WithHeritageStatus(HeritageStatus value) { SetHeritageStatus(value); return *this;}
    ///@}
  private:

    HeritageStatus m_heritageStatus{HeritageStatus::NOT_SET};
    bool m_heritageStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
