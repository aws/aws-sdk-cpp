/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/Address.h>
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
   * <p>Specifies the <code>Customer</code>'s account details associated with the
   * <code>Opportunity</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/Account">AWS
   * API Reference</a></p>
   */
  class Account
  {
  public:
    AWS_PARTNERCENTRALSELLING_API Account();
    AWS_PARTNERCENTRALSELLING_API Account(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Account& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s address details associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const Address& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Address& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Address&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline Account& WithAddress(const Address& value) { SetAddress(value); return *this;}
    inline Account& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>Customer</code> Amazon Web Services account ID associated
     * with the <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline Account& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline Account& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline Account& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
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
    inline Account& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}
    inline Account& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}
    inline Account& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the <code>Customer</code> DUNS number, if available.</p>
     */
    inline const Aws::String& GetDuns() const{ return m_duns; }
    inline bool DunsHasBeenSet() const { return m_dunsHasBeenSet; }
    inline void SetDuns(const Aws::String& value) { m_dunsHasBeenSet = true; m_duns = value; }
    inline void SetDuns(Aws::String&& value) { m_dunsHasBeenSet = true; m_duns = std::move(value); }
    inline void SetDuns(const char* value) { m_dunsHasBeenSet = true; m_duns.assign(value); }
    inline Account& WithDuns(const Aws::String& value) { SetDuns(value); return *this;}
    inline Account& WithDuns(Aws::String&& value) { SetDuns(std::move(value)); return *this;}
    inline Account& WithDuns(const char* value) { SetDuns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the industry the end <code>Customer</code> belongs to that's
     * associated with the <code>Opportunity</code>. It refers to the category or
     * sector where the customer's business operates. This is a required field.</p>
     */
    inline const Industry& GetIndustry() const{ return m_industry; }
    inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
    inline void SetIndustry(const Industry& value) { m_industryHasBeenSet = true; m_industry = value; }
    inline void SetIndustry(Industry&& value) { m_industryHasBeenSet = true; m_industry = std::move(value); }
    inline Account& WithIndustry(const Industry& value) { SetIndustry(value); return *this;}
    inline Account& WithIndustry(Industry&& value) { SetIndustry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s industry associated with the
     * <code>Opportunity</code>, when the selected value in the <code>Industry</code>
     * field is <code>Other</code>.</p>
     */
    inline const Aws::String& GetOtherIndustry() const{ return m_otherIndustry; }
    inline bool OtherIndustryHasBeenSet() const { return m_otherIndustryHasBeenSet; }
    inline void SetOtherIndustry(const Aws::String& value) { m_otherIndustryHasBeenSet = true; m_otherIndustry = value; }
    inline void SetOtherIndustry(Aws::String&& value) { m_otherIndustryHasBeenSet = true; m_otherIndustry = std::move(value); }
    inline void SetOtherIndustry(const char* value) { m_otherIndustryHasBeenSet = true; m_otherIndustry.assign(value); }
    inline Account& WithOtherIndustry(const Aws::String& value) { SetOtherIndustry(value); return *this;}
    inline Account& WithOtherIndustry(Aws::String&& value) { SetOtherIndustry(std::move(value)); return *this;}
    inline Account& WithOtherIndustry(const char* value) { SetOtherIndustry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end customer's company website URL associated with the
     * <code>Opportunity</code>. This value is crucial to map the customer within the
     * Amazon Web Services CRM system. This field is required in all cases except when
     * the opportunity is related to national security.</p>
     */
    inline const Aws::String& GetWebsiteUrl() const{ return m_websiteUrl; }
    inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
    inline void SetWebsiteUrl(const Aws::String& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = value; }
    inline void SetWebsiteUrl(Aws::String&& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = std::move(value); }
    inline void SetWebsiteUrl(const char* value) { m_websiteUrlHasBeenSet = true; m_websiteUrl.assign(value); }
    inline Account& WithWebsiteUrl(const Aws::String& value) { SetWebsiteUrl(value); return *this;}
    inline Account& WithWebsiteUrl(Aws::String&& value) { SetWebsiteUrl(std::move(value)); return *this;}
    inline Account& WithWebsiteUrl(const char* value) { SetWebsiteUrl(value); return *this;}
    ///@}
  private:

    Address m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_duns;
    bool m_dunsHasBeenSet = false;

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
