/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/Industry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/AddressSummary.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>An object that contains an <code>Account</code>'s subset of
   * fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AccountSummary">AWS
   * API Reference</a></p>
   */
  class AccountSummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API AccountSummary() = default;
    AWS_PARTNERCENTRALSELLING_API AccountSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AccountSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies which industry the end <code>Customer</code> belongs to associated
     * with the <code>Opportunity</code>. It refers to the category or sector that the
     * customer's business operates in.</p> <p>To submit a value outside the picklist,
     * use <code>Other</code>.</p> <p>Conditionally mandatory if <code>Other</code> is
     * selected for Industry Vertical in LOVs.</p>
     */
    inline Industry GetIndustry() const { return m_industry; }
    inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
    inline void SetIndustry(Industry value) { m_industryHasBeenSet = true; m_industry = value; }
    inline AccountSummary& WithIndustry(Industry value) { SetIndustry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s industry associated with the <code>
     * Opportunity</code>, when the selected value in the <code>Industry</code> field
     * is <code>Other</code>. This field is relevant when the customer's industry
     * doesn't fall under the predefined picklist values and requires a custom
     * description.</p>
     */
    inline const Aws::String& GetOtherIndustry() const { return m_otherIndustry; }
    inline bool OtherIndustryHasBeenSet() const { return m_otherIndustryHasBeenSet; }
    template<typename OtherIndustryT = Aws::String>
    void SetOtherIndustry(OtherIndustryT&& value) { m_otherIndustryHasBeenSet = true; m_otherIndustry = std::forward<OtherIndustryT>(value); }
    template<typename OtherIndustryT = Aws::String>
    AccountSummary& WithOtherIndustry(OtherIndustryT&& value) { SetOtherIndustry(std::forward<OtherIndustryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s company name associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetCompanyName() const { return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    template<typename CompanyNameT = Aws::String>
    void SetCompanyName(CompanyNameT&& value) { m_companyNameHasBeenSet = true; m_companyName = std::forward<CompanyNameT>(value); }
    template<typename CompanyNameT = Aws::String>
    AccountSummary& WithCompanyName(CompanyNameT&& value) { SetCompanyName(std::forward<CompanyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end customer's company website URL associated with the
     * <code>Opportunity</code>. This value is crucial to map the customer within the
     * Amazon Web Services CRM system.</p>
     */
    inline const Aws::String& GetWebsiteUrl() const { return m_websiteUrl; }
    inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
    template<typename WebsiteUrlT = Aws::String>
    void SetWebsiteUrl(WebsiteUrlT&& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = std::forward<WebsiteUrlT>(value); }
    template<typename WebsiteUrlT = Aws::String>
    AccountSummary& WithWebsiteUrl(WebsiteUrlT&& value) { SetWebsiteUrl(std::forward<WebsiteUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s address details associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const AddressSummary& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = AddressSummary>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = AddressSummary>
    AccountSummary& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}
  private:

    Industry m_industry{Industry::NOT_SET};
    bool m_industryHasBeenSet = false;

    Aws::String m_otherIndustry;
    bool m_otherIndustryHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_websiteUrl;
    bool m_websiteUrlHasBeenSet = false;

    AddressSummary m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
