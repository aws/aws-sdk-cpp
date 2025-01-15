/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The EngagementMemberSummary provides a snapshot of essential information
   * about participants in an AWS Partner Central Engagement. This compact data
   * structure encapsulates key details of each member, facilitating efficient
   * collaboration and management within the Engagement. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementMemberSummary">AWS
   * API Reference</a></p>
   */
  class EngagementMemberSummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API EngagementMemberSummary();
    AWS_PARTNERCENTRALSELLING_API EngagementMemberSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API EngagementMemberSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The official name of the member's company or organization.</p>
     */
    inline const Aws::String& GetCompanyName() const{ return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    inline void SetCompanyName(const Aws::String& value) { m_companyNameHasBeenSet = true; m_companyName = value; }
    inline void SetCompanyName(Aws::String&& value) { m_companyNameHasBeenSet = true; m_companyName = std::move(value); }
    inline void SetCompanyName(const char* value) { m_companyNameHasBeenSet = true; m_companyName.assign(value); }
    inline EngagementMemberSummary& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}
    inline EngagementMemberSummary& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}
    inline EngagementMemberSummary& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the member company's website. This offers a way to find more
     * information about the member organization and serves as an additional
     * identifier. </p>
     */
    inline const Aws::String& GetWebsiteUrl() const{ return m_websiteUrl; }
    inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
    inline void SetWebsiteUrl(const Aws::String& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = value; }
    inline void SetWebsiteUrl(Aws::String&& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = std::move(value); }
    inline void SetWebsiteUrl(const char* value) { m_websiteUrlHasBeenSet = true; m_websiteUrl.assign(value); }
    inline EngagementMemberSummary& WithWebsiteUrl(const Aws::String& value) { SetWebsiteUrl(value); return *this;}
    inline EngagementMemberSummary& WithWebsiteUrl(Aws::String&& value) { SetWebsiteUrl(std::move(value)); return *this;}
    inline EngagementMemberSummary& WithWebsiteUrl(const char* value) { SetWebsiteUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_websiteUrl;
    bool m_websiteUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
