﻿/**
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
   * <p>Engagement members are the participants in an Engagement, which is likely a
   * collaborative project or business opportunity within the AWS partner network.
   * Members can be different partner organizations or AWS accounts that are working
   * together on a specific engagement. </p> <p>Each member is represented by their
   * AWS Account ID, Company Name, and associated details. Members have a status
   * within the Engagement (PENDING, ACCEPTED, REJECTED, or WITHDRAWN), indicating
   * their current state of participation. Only existing members of an Engagement can
   * view the list of other members. This implies a level of privacy and access
   * control within the Engagement structure. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementMember">AWS
   * API Reference</a></p>
   */
  class EngagementMember
  {
  public:
    AWS_PARTNERCENTRALSELLING_API EngagementMember();
    AWS_PARTNERCENTRALSELLING_API EngagementMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API EngagementMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is the unique identifier for the AWS account associated with the member
     * organization. It's used for AWS-related operations and identity verification.
     * </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline EngagementMember& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline EngagementMember& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline EngagementMember& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The official name of the member's company or organization.</p>
     */
    inline const Aws::String& GetCompanyName() const{ return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    inline void SetCompanyName(const Aws::String& value) { m_companyNameHasBeenSet = true; m_companyName = value; }
    inline void SetCompanyName(Aws::String&& value) { m_companyNameHasBeenSet = true; m_companyName = std::move(value); }
    inline void SetCompanyName(const char* value) { m_companyNameHasBeenSet = true; m_companyName.assign(value); }
    inline EngagementMember& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}
    inline EngagementMember& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}
    inline EngagementMember& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}
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
    inline EngagementMember& WithWebsiteUrl(const Aws::String& value) { SetWebsiteUrl(value); return *this;}
    inline EngagementMember& WithWebsiteUrl(Aws::String&& value) { SetWebsiteUrl(std::move(value)); return *this;}
    inline EngagementMember& WithWebsiteUrl(const char* value) { SetWebsiteUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_websiteUrl;
    bool m_websiteUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
