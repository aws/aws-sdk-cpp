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
    AWS_TAXSETTINGS_API PutTaxExemptionRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    PutTaxExemptionRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    PutTaxExemptionRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Authority& GetAuthority() const { return m_authority; }
    inline bool AuthorityHasBeenSet() const { return m_authorityHasBeenSet; }
    template<typename AuthorityT = Authority>
    void SetAuthority(AuthorityT&& value) { m_authorityHasBeenSet = true; m_authority = std::forward<AuthorityT>(value); }
    template<typename AuthorityT = Authority>
    PutTaxExemptionRequest& WithAuthority(AuthorityT&& value) { SetAuthority(std::forward<AuthorityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExemptionCertificate& GetExemptionCertificate() const { return m_exemptionCertificate; }
    inline bool ExemptionCertificateHasBeenSet() const { return m_exemptionCertificateHasBeenSet; }
    template<typename ExemptionCertificateT = ExemptionCertificate>
    void SetExemptionCertificate(ExemptionCertificateT&& value) { m_exemptionCertificateHasBeenSet = true; m_exemptionCertificate = std::forward<ExemptionCertificateT>(value); }
    template<typename ExemptionCertificateT = ExemptionCertificate>
    PutTaxExemptionRequest& WithExemptionCertificate(ExemptionCertificateT&& value) { SetExemptionCertificate(std::forward<ExemptionCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exemption type. Use the supported tax exemption type description. </p>
     */
    inline const Aws::String& GetExemptionType() const { return m_exemptionType; }
    inline bool ExemptionTypeHasBeenSet() const { return m_exemptionTypeHasBeenSet; }
    template<typename ExemptionTypeT = Aws::String>
    void SetExemptionType(ExemptionTypeT&& value) { m_exemptionTypeHasBeenSet = true; m_exemptionType = std::forward<ExemptionTypeT>(value); }
    template<typename ExemptionTypeT = Aws::String>
    PutTaxExemptionRequest& WithExemptionType(ExemptionTypeT&& value) { SetExemptionType(std::forward<ExemptionTypeT>(value)); return *this;}
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
