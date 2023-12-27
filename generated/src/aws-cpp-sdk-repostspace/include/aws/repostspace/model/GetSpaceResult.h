/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/repostspace/model/ConfigurationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/repostspace/model/TierLevel.h>
#include <aws/repostspace/model/VanityDomainStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace repostspace
{
namespace Model
{
  class GetSpaceResult
  {
  public:
    AWS_REPOSTSPACE_API GetSpaceResult();
    AWS_REPOSTSPACE_API GetSpaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REPOSTSPACE_API GetSpaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline GetSpaceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline GetSpaceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline GetSpaceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Identity Center identifier for the Application Instance.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The Identity Center identifier for the Application Instance.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientId = value; }

    /**
     * <p>The Identity Center identifier for the Application Instance.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientId = std::move(value); }

    /**
     * <p>The Identity Center identifier for the Application Instance.</p>
     */
    inline void SetClientId(const char* value) { m_clientId.assign(value); }

    /**
     * <p>The Identity Center identifier for the Application Instance.</p>
     */
    inline GetSpaceResult& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The Identity Center identifier for the Application Instance.</p>
     */
    inline GetSpaceResult& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The Identity Center identifier for the Application Instance.</p>
     */
    inline GetSpaceResult& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline const ConfigurationStatus& GetConfigurationStatus() const{ return m_configurationStatus; }

    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline void SetConfigurationStatus(const ConfigurationStatus& value) { m_configurationStatus = value; }

    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline void SetConfigurationStatus(ConfigurationStatus&& value) { m_configurationStatus = std::move(value); }

    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline GetSpaceResult& WithConfigurationStatus(const ConfigurationStatus& value) { SetConfigurationStatus(value); return *this;}

    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline GetSpaceResult& WithConfigurationStatus(ConfigurationStatus&& value) { SetConfigurationStatus(std::move(value)); return *this;}


    /**
     * <p>The content size of the private re:Post.</p>
     */
    inline long long GetContentSize() const{ return m_contentSize; }

    /**
     * <p>The content size of the private re:Post.</p>
     */
    inline void SetContentSize(long long value) { m_contentSize = value; }

    /**
     * <p>The content size of the private re:Post.</p>
     */
    inline GetSpaceResult& WithContentSize(long long value) { SetContentSize(value); return *this;}


    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDateTime() const{ return m_createDateTime; }

    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline void SetCreateDateTime(const Aws::Utils::DateTime& value) { m_createDateTime = value; }

    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline void SetCreateDateTime(Aws::Utils::DateTime&& value) { m_createDateTime = std::move(value); }

    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline GetSpaceResult& WithCreateDateTime(const Aws::Utils::DateTime& value) { SetCreateDateTime(value); return *this;}

    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline GetSpaceResult& WithCreateDateTime(Aws::Utils::DateTime&& value) { SetCreateDateTime(std::move(value)); return *this;}


    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline const Aws::String& GetCustomerRoleArn() const{ return m_customerRoleArn; }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline void SetCustomerRoleArn(const Aws::String& value) { m_customerRoleArn = value; }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline void SetCustomerRoleArn(Aws::String&& value) { m_customerRoleArn = std::move(value); }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline void SetCustomerRoleArn(const char* value) { m_customerRoleArn.assign(value); }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline GetSpaceResult& WithCustomerRoleArn(const Aws::String& value) { SetCustomerRoleArn(value); return *this;}

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline GetSpaceResult& WithCustomerRoleArn(Aws::String&& value) { SetCustomerRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline GetSpaceResult& WithCustomerRoleArn(const char* value) { SetCustomerRoleArn(value); return *this;}


    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteDateTime() const{ return m_deleteDateTime; }

    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline void SetDeleteDateTime(const Aws::Utils::DateTime& value) { m_deleteDateTime = value; }

    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline void SetDeleteDateTime(Aws::Utils::DateTime&& value) { m_deleteDateTime = std::move(value); }

    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline GetSpaceResult& WithDeleteDateTime(const Aws::Utils::DateTime& value) { SetDeleteDateTime(value); return *this;}

    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline GetSpaceResult& WithDeleteDateTime(Aws::Utils::DateTime&& value) { SetDeleteDateTime(std::move(value)); return *this;}


    /**
     * <p>The description of the private re:Post.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the private re:Post.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the private re:Post.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the private re:Post.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the private re:Post.</p>
     */
    inline GetSpaceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the private re:Post.</p>
     */
    inline GetSpaceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the private re:Post.</p>
     */
    inline GetSpaceResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The list of groups that are administrators of the private re:Post.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupAdmins() const{ return m_groupAdmins; }

    /**
     * <p>The list of groups that are administrators of the private re:Post.</p>
     */
    inline void SetGroupAdmins(const Aws::Vector<Aws::String>& value) { m_groupAdmins = value; }

    /**
     * <p>The list of groups that are administrators of the private re:Post.</p>
     */
    inline void SetGroupAdmins(Aws::Vector<Aws::String>&& value) { m_groupAdmins = std::move(value); }

    /**
     * <p>The list of groups that are administrators of the private re:Post.</p>
     */
    inline GetSpaceResult& WithGroupAdmins(const Aws::Vector<Aws::String>& value) { SetGroupAdmins(value); return *this;}

    /**
     * <p>The list of groups that are administrators of the private re:Post.</p>
     */
    inline GetSpaceResult& WithGroupAdmins(Aws::Vector<Aws::String>&& value) { SetGroupAdmins(std::move(value)); return *this;}

    /**
     * <p>The list of groups that are administrators of the private re:Post.</p>
     */
    inline GetSpaceResult& AddGroupAdmins(const Aws::String& value) { m_groupAdmins.push_back(value); return *this; }

    /**
     * <p>The list of groups that are administrators of the private re:Post.</p>
     */
    inline GetSpaceResult& AddGroupAdmins(Aws::String&& value) { m_groupAdmins.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of groups that are administrators of the private re:Post.</p>
     */
    inline GetSpaceResult& AddGroupAdmins(const char* value) { m_groupAdmins.push_back(value); return *this; }


    /**
     * <p>The name of the private re:Post.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the private re:Post.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the private re:Post.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the private re:Post.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the private re:Post.</p>
     */
    inline GetSpaceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the private re:Post.</p>
     */
    inline GetSpaceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the private re:Post.</p>
     */
    inline GetSpaceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The AWS generated subdomain of the private re:Post</p>
     */
    inline const Aws::String& GetRandomDomain() const{ return m_randomDomain; }

    /**
     * <p>The AWS generated subdomain of the private re:Post</p>
     */
    inline void SetRandomDomain(const Aws::String& value) { m_randomDomain = value; }

    /**
     * <p>The AWS generated subdomain of the private re:Post</p>
     */
    inline void SetRandomDomain(Aws::String&& value) { m_randomDomain = std::move(value); }

    /**
     * <p>The AWS generated subdomain of the private re:Post</p>
     */
    inline void SetRandomDomain(const char* value) { m_randomDomain.assign(value); }

    /**
     * <p>The AWS generated subdomain of the private re:Post</p>
     */
    inline GetSpaceResult& WithRandomDomain(const Aws::String& value) { SetRandomDomain(value); return *this;}

    /**
     * <p>The AWS generated subdomain of the private re:Post</p>
     */
    inline GetSpaceResult& WithRandomDomain(Aws::String&& value) { SetRandomDomain(std::move(value)); return *this;}

    /**
     * <p>The AWS generated subdomain of the private re:Post</p>
     */
    inline GetSpaceResult& WithRandomDomain(const char* value) { SetRandomDomain(value); return *this;}


    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const{ return m_spaceId; }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline void SetSpaceId(const Aws::String& value) { m_spaceId = value; }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline void SetSpaceId(Aws::String&& value) { m_spaceId = std::move(value); }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline void SetSpaceId(const char* value) { m_spaceId.assign(value); }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline GetSpaceResult& WithSpaceId(const Aws::String& value) { SetSpaceId(value); return *this;}

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline GetSpaceResult& WithSpaceId(Aws::String&& value) { SetSpaceId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline GetSpaceResult& WithSpaceId(const char* value) { SetSpaceId(value); return *this;}


    /**
     * <p>The creation or deletion status of the private re:Post.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The creation or deletion status of the private re:Post.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The creation or deletion status of the private re:Post.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The creation or deletion status of the private re:Post.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The creation or deletion status of the private re:Post.</p>
     */
    inline GetSpaceResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The creation or deletion status of the private re:Post.</p>
     */
    inline GetSpaceResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The creation or deletion status of the private re:Post.</p>
     */
    inline GetSpaceResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The storage limit of the private re:Post.</p>
     */
    inline long long GetStorageLimit() const{ return m_storageLimit; }

    /**
     * <p>The storage limit of the private re:Post.</p>
     */
    inline void SetStorageLimit(long long value) { m_storageLimit = value; }

    /**
     * <p>The storage limit of the private re:Post.</p>
     */
    inline GetSpaceResult& WithStorageLimit(long long value) { SetStorageLimit(value); return *this;}


    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline const TierLevel& GetTier() const{ return m_tier; }

    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline void SetTier(const TierLevel& value) { m_tier = value; }

    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline void SetTier(TierLevel&& value) { m_tier = std::move(value); }

    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline GetSpaceResult& WithTier(const TierLevel& value) { SetTier(value); return *this;}

    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline GetSpaceResult& WithTier(TierLevel&& value) { SetTier(std::move(value)); return *this;}


    /**
     * <p>The list of users that are administrators of the private re:Post.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserAdmins() const{ return m_userAdmins; }

    /**
     * <p>The list of users that are administrators of the private re:Post.</p>
     */
    inline void SetUserAdmins(const Aws::Vector<Aws::String>& value) { m_userAdmins = value; }

    /**
     * <p>The list of users that are administrators of the private re:Post.</p>
     */
    inline void SetUserAdmins(Aws::Vector<Aws::String>&& value) { m_userAdmins = std::move(value); }

    /**
     * <p>The list of users that are administrators of the private re:Post.</p>
     */
    inline GetSpaceResult& WithUserAdmins(const Aws::Vector<Aws::String>& value) { SetUserAdmins(value); return *this;}

    /**
     * <p>The list of users that are administrators of the private re:Post.</p>
     */
    inline GetSpaceResult& WithUserAdmins(Aws::Vector<Aws::String>&& value) { SetUserAdmins(std::move(value)); return *this;}

    /**
     * <p>The list of users that are administrators of the private re:Post.</p>
     */
    inline GetSpaceResult& AddUserAdmins(const Aws::String& value) { m_userAdmins.push_back(value); return *this; }

    /**
     * <p>The list of users that are administrators of the private re:Post.</p>
     */
    inline GetSpaceResult& AddUserAdmins(Aws::String&& value) { m_userAdmins.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of users that are administrators of the private re:Post.</p>
     */
    inline GetSpaceResult& AddUserAdmins(const char* value) { m_userAdmins.push_back(value); return *this; }


    /**
     * <p>The number of users that have onboarded to the private re:Post.</p>
     */
    inline int GetUserCount() const{ return m_userCount; }

    /**
     * <p>The number of users that have onboarded to the private re:Post.</p>
     */
    inline void SetUserCount(int value) { m_userCount = value; }

    /**
     * <p>The number of users that have onboarded to the private re:Post.</p>
     */
    inline GetSpaceResult& WithUserCount(int value) { SetUserCount(value); return *this;}


    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline const Aws::String& GetUserKMSKey() const{ return m_userKMSKey; }

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline void SetUserKMSKey(const Aws::String& value) { m_userKMSKey = value; }

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline void SetUserKMSKey(Aws::String&& value) { m_userKMSKey = std::move(value); }

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline void SetUserKMSKey(const char* value) { m_userKMSKey.assign(value); }

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline GetSpaceResult& WithUserKMSKey(const Aws::String& value) { SetUserKMSKey(value); return *this;}

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline GetSpaceResult& WithUserKMSKey(Aws::String&& value) { SetUserKMSKey(std::move(value)); return *this;}

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline GetSpaceResult& WithUserKMSKey(const char* value) { SetUserKMSKey(value); return *this;}


    /**
     * <p>The custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline const Aws::String& GetVanityDomain() const{ return m_vanityDomain; }

    /**
     * <p>The custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline void SetVanityDomain(const Aws::String& value) { m_vanityDomain = value; }

    /**
     * <p>The custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline void SetVanityDomain(Aws::String&& value) { m_vanityDomain = std::move(value); }

    /**
     * <p>The custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline void SetVanityDomain(const char* value) { m_vanityDomain.assign(value); }

    /**
     * <p>The custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline GetSpaceResult& WithVanityDomain(const Aws::String& value) { SetVanityDomain(value); return *this;}

    /**
     * <p>The custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline GetSpaceResult& WithVanityDomain(Aws::String&& value) { SetVanityDomain(std::move(value)); return *this;}

    /**
     * <p>The custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline GetSpaceResult& WithVanityDomain(const char* value) { SetVanityDomain(value); return *this;}


    /**
     * <p>The approval status of the custom subdomain.</p>
     */
    inline const VanityDomainStatus& GetVanityDomainStatus() const{ return m_vanityDomainStatus; }

    /**
     * <p>The approval status of the custom subdomain.</p>
     */
    inline void SetVanityDomainStatus(const VanityDomainStatus& value) { m_vanityDomainStatus = value; }

    /**
     * <p>The approval status of the custom subdomain.</p>
     */
    inline void SetVanityDomainStatus(VanityDomainStatus&& value) { m_vanityDomainStatus = std::move(value); }

    /**
     * <p>The approval status of the custom subdomain.</p>
     */
    inline GetSpaceResult& WithVanityDomainStatus(const VanityDomainStatus& value) { SetVanityDomainStatus(value); return *this;}

    /**
     * <p>The approval status of the custom subdomain.</p>
     */
    inline GetSpaceResult& WithVanityDomainStatus(VanityDomainStatus&& value) { SetVanityDomainStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSpaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSpaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSpaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_clientId;

    ConfigurationStatus m_configurationStatus;

    long long m_contentSize;

    Aws::Utils::DateTime m_createDateTime;

    Aws::String m_customerRoleArn;

    Aws::Utils::DateTime m_deleteDateTime;

    Aws::String m_description;

    Aws::Vector<Aws::String> m_groupAdmins;

    Aws::String m_name;

    Aws::String m_randomDomain;

    Aws::String m_spaceId;

    Aws::String m_status;

    long long m_storageLimit;

    TierLevel m_tier;

    Aws::Vector<Aws::String> m_userAdmins;

    int m_userCount;

    Aws::String m_userKMSKey;

    Aws::String m_vanityDomain;

    VanityDomainStatus m_vanityDomainStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
