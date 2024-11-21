/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/TaxSettingsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/taxsettings/model/Authority.h>
#include <aws/taxsettings/model/ExemptionCertificate.h>
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
  class PutTaxExemptionRequest : public TaxSettingsRequest
  {
  public:
    AWS_TAXSETTINGS_API PutTaxExemptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTaxExemption"; }

    AWS_TAXSETTINGS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The list of unique account identifiers. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }
    inline PutTaxExemptionRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}
    inline PutTaxExemptionRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}
    inline PutTaxExemptionRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    inline PutTaxExemptionRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }
    inline PutTaxExemptionRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Authority& GetAuthority() const{ return m_authority; }
    inline bool AuthorityHasBeenSet() const { return m_authorityHasBeenSet; }
    inline void SetAuthority(const Authority& value) { m_authorityHasBeenSet = true; m_authority = value; }
    inline void SetAuthority(Authority&& value) { m_authorityHasBeenSet = true; m_authority = std::move(value); }
    inline PutTaxExemptionRequest& WithAuthority(const Authority& value) { SetAuthority(value); return *this;}
    inline PutTaxExemptionRequest& WithAuthority(Authority&& value) { SetAuthority(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExemptionCertificate& GetExemptionCertificate() const{ return m_exemptionCertificate; }
    inline bool ExemptionCertificateHasBeenSet() const { return m_exemptionCertificateHasBeenSet; }
    inline void SetExemptionCertificate(const ExemptionCertificate& value) { m_exemptionCertificateHasBeenSet = true; m_exemptionCertificate = value; }
    inline void SetExemptionCertificate(ExemptionCertificate&& value) { m_exemptionCertificateHasBeenSet = true; m_exemptionCertificate = std::move(value); }
    inline PutTaxExemptionRequest& WithExemptionCertificate(const ExemptionCertificate& value) { SetExemptionCertificate(value); return *this;}
    inline PutTaxExemptionRequest& WithExemptionCertificate(ExemptionCertificate&& value) { SetExemptionCertificate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exemption type. </p>
     */
    inline const Aws::String& GetExemptionType() const{ return m_exemptionType; }
    inline bool ExemptionTypeHasBeenSet() const { return m_exemptionTypeHasBeenSet; }
    inline void SetExemptionType(const Aws::String& value) { m_exemptionTypeHasBeenSet = true; m_exemptionType = value; }
    inline void SetExemptionType(Aws::String&& value) { m_exemptionTypeHasBeenSet = true; m_exemptionType = std::move(value); }
    inline void SetExemptionType(const char* value) { m_exemptionTypeHasBeenSet = true; m_exemptionType.assign(value); }
    inline PutTaxExemptionRequest& WithExemptionType(const Aws::String& value) { SetExemptionType(value); return *this;}
    inline PutTaxExemptionRequest& WithExemptionType(Aws::String&& value) { SetExemptionType(std::move(value)); return *this;}
    inline PutTaxExemptionRequest& WithExemptionType(const char* value) { SetExemptionType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Authority m_authority;
    bool m_authorityHasBeenSet = false;

    ExemptionCertificate m_exemptionCertificate;
    bool m_exemptionCertificateHasBeenSet = false;

    Aws::String m_exemptionType;
    bool m_exemptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
