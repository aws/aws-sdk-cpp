/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/TaxSettingsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

  /**
   */
  class DeleteSupplementalTaxRegistrationRequest : public TaxSettingsRequest
  {
  public:
    AWS_TAXSETTINGS_API DeleteSupplementalTaxRegistrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSupplementalTaxRegistration"; }

    AWS_TAXSETTINGS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The unique authority Id for the supplemental TRN information that needs to
     * be deleted. </p>
     */
    inline const Aws::String& GetAuthorityId() const{ return m_authorityId; }
    inline bool AuthorityIdHasBeenSet() const { return m_authorityIdHasBeenSet; }
    inline void SetAuthorityId(const Aws::String& value) { m_authorityIdHasBeenSet = true; m_authorityId = value; }
    inline void SetAuthorityId(Aws::String&& value) { m_authorityIdHasBeenSet = true; m_authorityId = std::move(value); }
    inline void SetAuthorityId(const char* value) { m_authorityIdHasBeenSet = true; m_authorityId.assign(value); }
    inline DeleteSupplementalTaxRegistrationRequest& WithAuthorityId(const Aws::String& value) { SetAuthorityId(value); return *this;}
    inline DeleteSupplementalTaxRegistrationRequest& WithAuthorityId(Aws::String&& value) { SetAuthorityId(std::move(value)); return *this;}
    inline DeleteSupplementalTaxRegistrationRequest& WithAuthorityId(const char* value) { SetAuthorityId(value); return *this;}
    ///@}
  private:

    Aws::String m_authorityId;
    bool m_authorityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
