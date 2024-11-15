/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/CountryCode.h>
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
   * <p>Contains details about the customer associated with the Engagement
   * Invitation, including company information and industry.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementCustomer">AWS
   * API Reference</a></p>
   */
  class EngagementCustomer
  {
  public:
    AWS_PARTNERCENTRALSELLING_API EngagementCustomer();
    AWS_PARTNERCENTRALSELLING_API EngagementCustomer(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API EngagementCustomer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the name of the customer’s company associated with the Engagement
     * Invitation. This field is used to identify the customer.</p>
     */
    inline const Aws::String& GetCompanyName() const{ return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    inline void SetCompanyName(const Aws::String& value) { m_companyNameHasBeenSet = true; m_companyName = value; }
    inline void SetCompanyName(Aws::String&& value) { m_companyNameHasBeenSet = true; m_companyName = std::move(value); }
    inline void SetCompanyName(const char* value) { m_companyNameHasBeenSet = true; m_companyName.assign(value); }
    inline EngagementCustomer& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}
    inline EngagementCustomer& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}
    inline EngagementCustomer& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the country in which the customer’s company operates. This field is
     * useful for understanding regional requirements or compliance needs.</p>
     */
    inline const CountryCode& GetCountryCode() const{ return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    inline void SetCountryCode(const CountryCode& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }
    inline void SetCountryCode(CountryCode&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }
    inline EngagementCustomer& WithCountryCode(const CountryCode& value) { SetCountryCode(value); return *this;}
    inline EngagementCustomer& WithCountryCode(CountryCode&& value) { SetCountryCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the industry to which the customer’s company belongs. This field
     * helps categorize the opportunity based on the customer’s business sector.</p>
     */
    inline const Industry& GetIndustry() const{ return m_industry; }
    inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
    inline void SetIndustry(const Industry& value) { m_industryHasBeenSet = true; m_industry = value; }
    inline void SetIndustry(Industry&& value) { m_industryHasBeenSet = true; m_industry = std::move(value); }
    inline EngagementCustomer& WithIndustry(const Industry& value) { SetIndustry(value); return *this;}
    inline EngagementCustomer& WithIndustry(Industry&& value) { SetIndustry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the website URL of the customer’s company. This field helps partners
     * verify the legitimacy and size of the customer organization.</p>
     */
    inline const Aws::String& GetWebsiteUrl() const{ return m_websiteUrl; }
    inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
    inline void SetWebsiteUrl(const Aws::String& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = value; }
    inline void SetWebsiteUrl(Aws::String&& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = std::move(value); }
    inline void SetWebsiteUrl(const char* value) { m_websiteUrlHasBeenSet = true; m_websiteUrl.assign(value); }
    inline EngagementCustomer& WithWebsiteUrl(const Aws::String& value) { SetWebsiteUrl(value); return *this;}
    inline EngagementCustomer& WithWebsiteUrl(Aws::String&& value) { SetWebsiteUrl(std::move(value)); return *this;}
    inline EngagementCustomer& WithWebsiteUrl(const char* value) { SetWebsiteUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    CountryCode m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Industry m_industry;
    bool m_industryHasBeenSet = false;

    Aws::String m_websiteUrl;
    bool m_websiteUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
