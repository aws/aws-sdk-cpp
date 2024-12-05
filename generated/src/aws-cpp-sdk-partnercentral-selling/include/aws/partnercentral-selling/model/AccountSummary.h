/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AddressSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/Industry.h>
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
    AWS_PARTNERCENTRALSELLING_API AccountSummary();
    AWS_PARTNERCENTRALSELLING_API AccountSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AccountSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s address details associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const AddressSummary& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const AddressSummary& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(AddressSummary&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline AccountSummary& WithAddress(const AddressSummary& value) { SetAddress(value); return *this;}
    inline AccountSummary& WithAddress(AddressSummary&& value) { SetAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s company name associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetCompanyName() const{ return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    inline void SetCompanyName(const Aws::String& value) { m_companyNameHasBeenSet = true; m_companyName = value; }
    inline void SetCompanyName(Aws::String&& value) { m_companyNameHasBeenSet = true; m_companyName = std::move(value); }
    inline void SetCompanyName(const char* value) { m_companyNameHasBeenSet = true; m_companyName.assign(value); }
    inline AccountSummary& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}
    inline AccountSummary& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}
    inline AccountSummary& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which industry the end <code>Customer</code> belongs to associated
     * with the <code>Opportunity</code>. It refers to the category or sector that the
     * customer's business operates in.</p> <p>To submit a value outside the picklist,
     * use <code>Other</code>.</p> <p>Conditionally mandatory if <code>Other</code> is
     * selected for Industry Vertical in LOVs.</p>
     */
    inline const Industry& GetIndustry() const{ return m_industry; }
    inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
    inline void SetIndustry(const Industry& value) { m_industryHasBeenSet = true; m_industry = value; }
    inline void SetIndustry(Industry&& value) { m_industryHasBeenSet = true; m_industry = std::move(value); }
    inline AccountSummary& WithIndustry(const Industry& value) { SetIndustry(value); return *this;}
    inline AccountSummary& WithIndustry(Industry&& value) { SetIndustry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s industry associated with the <code>
     * Opportunity</code>, when the selected value in the <code>Industry</code> field
     * is <code>Other</code>. This field is relevant when the customer's industry
     * doesn't fall under the predefined picklist values and requires a custom
     * description.</p>
     */
    inline const Aws::String& GetOtherIndustry() const{ return m_otherIndustry; }
    inline bool OtherIndustryHasBeenSet() const { return m_otherIndustryHasBeenSet; }
    inline void SetOtherIndustry(const Aws::String& value) { m_otherIndustryHasBeenSet = true; m_otherIndustry = value; }
    inline void SetOtherIndustry(Aws::String&& value) { m_otherIndustryHasBeenSet = true; m_otherIndustry = std::move(value); }
    inline void SetOtherIndustry(const char* value) { m_otherIndustryHasBeenSet = true; m_otherIndustry.assign(value); }
    inline AccountSummary& WithOtherIndustry(const Aws::String& value) { SetOtherIndustry(value); return *this;}
    inline AccountSummary& WithOtherIndustry(Aws::String&& value) { SetOtherIndustry(std::move(value)); return *this;}
    inline AccountSummary& WithOtherIndustry(const char* value) { SetOtherIndustry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end customer's company website URL associated with the
     * <code>Opportunity</code>. This value is crucial to map the customer within the
     * Amazon Web Services CRM system.</p>
     */
    inline const Aws::String& GetWebsiteUrl() const{ return m_websiteUrl; }
    inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
    inline void SetWebsiteUrl(const Aws::String& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = value; }
    inline void SetWebsiteUrl(Aws::String&& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = std::move(value); }
    inline void SetWebsiteUrl(const char* value) { m_websiteUrlHasBeenSet = true; m_websiteUrl.assign(value); }
    inline AccountSummary& WithWebsiteUrl(const Aws::String& value) { SetWebsiteUrl(value); return *this;}
    inline AccountSummary& WithWebsiteUrl(Aws::String&& value) { SetWebsiteUrl(std::move(value)); return *this;}
    inline AccountSummary& WithWebsiteUrl(const char* value) { SetWebsiteUrl(value); return *this;}
    ///@}
  private:

    AddressSummary m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Industry m_industry;
    bool m_industryHasBeenSet = false;

    Aws::String m_otherIndustry;
    bool m_otherIndustryHasBeenSet = false;

    Aws::String m_websiteUrl;
    bool m_websiteUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
