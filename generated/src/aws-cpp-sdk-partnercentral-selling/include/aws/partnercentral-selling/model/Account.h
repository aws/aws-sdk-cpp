/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/Industry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/Address.h>
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
    AWS_PARTNERCENTRALSELLING_API Account() = default;
    AWS_PARTNERCENTRALSELLING_API Account(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Account& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the industry the end <code>Customer</code> belongs to that's
     * associated with the <code>Opportunity</code>. It refers to the category or
     * sector where the customer's business operates. This is a required field.</p>
     */
    inline Industry GetIndustry() const { return m_industry; }
    inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
    inline void SetIndustry(Industry value) { m_industryHasBeenSet = true; m_industry = value; }
    inline Account& WithIndustry(Industry value) { SetIndustry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s industry associated with the
     * <code>Opportunity</code>, when the selected value in the <code>Industry</code>
     * field is <code>Other</code>.</p>
     */
    inline const Aws::String& GetOtherIndustry() const { return m_otherIndustry; }
    inline bool OtherIndustryHasBeenSet() const { return m_otherIndustryHasBeenSet; }
    template<typename OtherIndustryT = Aws::String>
    void SetOtherIndustry(OtherIndustryT&& value) { m_otherIndustryHasBeenSet = true; m_otherIndustry = std::forward<OtherIndustryT>(value); }
    template<typename OtherIndustryT = Aws::String>
    Account& WithOtherIndustry(OtherIndustryT&& value) { SetOtherIndustry(std::forward<OtherIndustryT>(value)); return *this;}
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
    Account& WithCompanyName(CompanyNameT&& value) { SetCompanyName(std::forward<CompanyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end customer's company website URL associated with the
     * <code>Opportunity</code>. This value is crucial to map the customer within the
     * Amazon Web Services CRM system. This field is required in all cases except when
     * the opportunity is related to national security.</p>
     */
    inline const Aws::String& GetWebsiteUrl() const { return m_websiteUrl; }
    inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
    template<typename WebsiteUrlT = Aws::String>
    void SetWebsiteUrl(WebsiteUrlT&& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = std::forward<WebsiteUrlT>(value); }
    template<typename WebsiteUrlT = Aws::String>
    Account& WithWebsiteUrl(WebsiteUrlT&& value) { SetWebsiteUrl(std::forward<WebsiteUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>Customer</code> Amazon Web Services account ID associated
     * with the <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    Account& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s address details associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const Address& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Address>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Address>
    Account& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the <code>Customer</code> DUNS number, if available.</p>
     */
    inline const Aws::String& GetDuns() const { return m_duns; }
    inline bool DunsHasBeenSet() const { return m_dunsHasBeenSet; }
    template<typename DunsT = Aws::String>
    void SetDuns(DunsT&& value) { m_dunsHasBeenSet = true; m_duns = std::forward<DunsT>(value); }
    template<typename DunsT = Aws::String>
    Account& WithDuns(DunsT&& value) { SetDuns(std::forward<DunsT>(value)); return *this;}
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

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Address m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_duns;
    bool m_dunsHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
