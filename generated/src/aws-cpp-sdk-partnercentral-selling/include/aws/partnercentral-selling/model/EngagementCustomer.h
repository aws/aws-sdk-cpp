/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/Industry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/CountryCode.h>
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
   * <p>Contains details about the customer associated with the Engagement
   * Invitation, including company information and industry.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementCustomer">AWS
   * API Reference</a></p>
   */
  class EngagementCustomer
  {
  public:
    AWS_PARTNERCENTRALSELLING_API EngagementCustomer() = default;
    AWS_PARTNERCENTRALSELLING_API EngagementCustomer(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API EngagementCustomer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the industry to which the customer’s company belongs. This field
     * helps categorize the opportunity based on the customer’s business sector.</p>
     */
    inline Industry GetIndustry() const { return m_industry; }
    inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
    inline void SetIndustry(Industry value) { m_industryHasBeenSet = true; m_industry = value; }
    inline EngagementCustomer& WithIndustry(Industry value) { SetIndustry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the name of the customer’s company associated with the Engagement
     * Invitation. This field is used to identify the customer.</p>
     */
    inline const Aws::String& GetCompanyName() const { return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    template<typename CompanyNameT = Aws::String>
    void SetCompanyName(CompanyNameT&& value) { m_companyNameHasBeenSet = true; m_companyName = std::forward<CompanyNameT>(value); }
    template<typename CompanyNameT = Aws::String>
    EngagementCustomer& WithCompanyName(CompanyNameT&& value) { SetCompanyName(std::forward<CompanyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the website URL of the customer’s company. This field helps partners
     * verify the legitimacy and size of the customer organization.</p>
     */
    inline const Aws::String& GetWebsiteUrl() const { return m_websiteUrl; }
    inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
    template<typename WebsiteUrlT = Aws::String>
    void SetWebsiteUrl(WebsiteUrlT&& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = std::forward<WebsiteUrlT>(value); }
    template<typename WebsiteUrlT = Aws::String>
    EngagementCustomer& WithWebsiteUrl(WebsiteUrlT&& value) { SetWebsiteUrl(std::forward<WebsiteUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the country in which the customer’s company operates. This field is
     * useful for understanding regional requirements or compliance needs.</p>
     */
    inline CountryCode GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    inline void SetCountryCode(CountryCode value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }
    inline EngagementCustomer& WithCountryCode(CountryCode value) { SetCountryCode(value); return *this;}
    ///@}
  private:

    Industry m_industry{Industry::NOT_SET};
    bool m_industryHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_websiteUrl;
    bool m_websiteUrlHasBeenSet = false;

    CountryCode m_countryCode{CountryCode::NOT_SET};
    bool m_countryCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
