/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/repostspace/model/ConfigurationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/repostspace/model/TierLevel.h>
#include <aws/repostspace/model/VanityDomainStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/repostspace/model/Role.h>
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


    ///@{
    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetSpaceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetSpaceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetSpaceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Identity Center identifier for the Application Instance.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline void SetClientId(const Aws::String& value) { m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientId.assign(value); }
    inline GetSpaceResult& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline GetSpaceResult& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline GetSpaceResult& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline const ConfigurationStatus& GetConfigurationStatus() const{ return m_configurationStatus; }
    inline void SetConfigurationStatus(const ConfigurationStatus& value) { m_configurationStatus = value; }
    inline void SetConfigurationStatus(ConfigurationStatus&& value) { m_configurationStatus = std::move(value); }
    inline GetSpaceResult& WithConfigurationStatus(const ConfigurationStatus& value) { SetConfigurationStatus(value); return *this;}
    inline GetSpaceResult& WithConfigurationStatus(ConfigurationStatus&& value) { SetConfigurationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content size of the private re:Post.</p>
     */
    inline long long GetContentSize() const{ return m_contentSize; }
    inline void SetContentSize(long long value) { m_contentSize = value; }
    inline GetSpaceResult& WithContentSize(long long value) { SetContentSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDateTime() const{ return m_createDateTime; }
    inline void SetCreateDateTime(const Aws::Utils::DateTime& value) { m_createDateTime = value; }
    inline void SetCreateDateTime(Aws::Utils::DateTime&& value) { m_createDateTime = std::move(value); }
    inline GetSpaceResult& WithCreateDateTime(const Aws::Utils::DateTime& value) { SetCreateDateTime(value); return *this;}
    inline GetSpaceResult& WithCreateDateTime(Aws::Utils::DateTime&& value) { SetCreateDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline const Aws::String& GetCustomerRoleArn() const{ return m_customerRoleArn; }
    inline void SetCustomerRoleArn(const Aws::String& value) { m_customerRoleArn = value; }
    inline void SetCustomerRoleArn(Aws::String&& value) { m_customerRoleArn = std::move(value); }
    inline void SetCustomerRoleArn(const char* value) { m_customerRoleArn.assign(value); }
    inline GetSpaceResult& WithCustomerRoleArn(const Aws::String& value) { SetCustomerRoleArn(value); return *this;}
    inline GetSpaceResult& WithCustomerRoleArn(Aws::String&& value) { SetCustomerRoleArn(std::move(value)); return *this;}
    inline GetSpaceResult& WithCustomerRoleArn(const char* value) { SetCustomerRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteDateTime() const{ return m_deleteDateTime; }
    inline void SetDeleteDateTime(const Aws::Utils::DateTime& value) { m_deleteDateTime = value; }
    inline void SetDeleteDateTime(Aws::Utils::DateTime&& value) { m_deleteDateTime = std::move(value); }
    inline GetSpaceResult& WithDeleteDateTime(const Aws::Utils::DateTime& value) { SetDeleteDateTime(value); return *this;}
    inline GetSpaceResult& WithDeleteDateTime(Aws::Utils::DateTime&& value) { SetDeleteDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the private re:Post.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetSpaceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetSpaceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetSpaceResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the private re:Post.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetSpaceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetSpaceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetSpaceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS generated subdomain of the private re:Post</p>
     */
    inline const Aws::String& GetRandomDomain() const{ return m_randomDomain; }
    inline void SetRandomDomain(const Aws::String& value) { m_randomDomain = value; }
    inline void SetRandomDomain(Aws::String&& value) { m_randomDomain = std::move(value); }
    inline void SetRandomDomain(const char* value) { m_randomDomain.assign(value); }
    inline GetSpaceResult& WithRandomDomain(const Aws::String& value) { SetRandomDomain(value); return *this;}
    inline GetSpaceResult& WithRandomDomain(Aws::String&& value) { SetRandomDomain(std::move(value)); return *this;}
    inline GetSpaceResult& WithRandomDomain(const char* value) { SetRandomDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of accessor identifiers and their roles.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Role>>& GetRoles() const{ return m_roles; }
    inline void SetRoles(const Aws::Map<Aws::String, Aws::Vector<Role>>& value) { m_roles = value; }
    inline void SetRoles(Aws::Map<Aws::String, Aws::Vector<Role>>&& value) { m_roles = std::move(value); }
    inline GetSpaceResult& WithRoles(const Aws::Map<Aws::String, Aws::Vector<Role>>& value) { SetRoles(value); return *this;}
    inline GetSpaceResult& WithRoles(Aws::Map<Aws::String, Aws::Vector<Role>>&& value) { SetRoles(std::move(value)); return *this;}
    inline GetSpaceResult& AddRoles(const Aws::String& key, const Aws::Vector<Role>& value) { m_roles.emplace(key, value); return *this; }
    inline GetSpaceResult& AddRoles(Aws::String&& key, const Aws::Vector<Role>& value) { m_roles.emplace(std::move(key), value); return *this; }
    inline GetSpaceResult& AddRoles(const Aws::String& key, Aws::Vector<Role>&& value) { m_roles.emplace(key, std::move(value)); return *this; }
    inline GetSpaceResult& AddRoles(Aws::String&& key, Aws::Vector<Role>&& value) { m_roles.emplace(std::move(key), std::move(value)); return *this; }
    inline GetSpaceResult& AddRoles(const char* key, Aws::Vector<Role>&& value) { m_roles.emplace(key, std::move(value)); return *this; }
    inline GetSpaceResult& AddRoles(const char* key, const Aws::Vector<Role>& value) { m_roles.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const{ return m_spaceId; }
    inline void SetSpaceId(const Aws::String& value) { m_spaceId = value; }
    inline void SetSpaceId(Aws::String&& value) { m_spaceId = std::move(value); }
    inline void SetSpaceId(const char* value) { m_spaceId.assign(value); }
    inline GetSpaceResult& WithSpaceId(const Aws::String& value) { SetSpaceId(value); return *this;}
    inline GetSpaceResult& WithSpaceId(Aws::String&& value) { SetSpaceId(std::move(value)); return *this;}
    inline GetSpaceResult& WithSpaceId(const char* value) { SetSpaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation or deletion status of the private re:Post.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline GetSpaceResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline GetSpaceResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline GetSpaceResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage limit of the private re:Post.</p>
     */
    inline long long GetStorageLimit() const{ return m_storageLimit; }
    inline void SetStorageLimit(long long value) { m_storageLimit = value; }
    inline GetSpaceResult& WithStorageLimit(long long value) { SetStorageLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline const TierLevel& GetTier() const{ return m_tier; }
    inline void SetTier(const TierLevel& value) { m_tier = value; }
    inline void SetTier(TierLevel&& value) { m_tier = std::move(value); }
    inline GetSpaceResult& WithTier(const TierLevel& value) { SetTier(value); return *this;}
    inline GetSpaceResult& WithTier(TierLevel&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users that have onboarded to the private re:Post.</p>
     */
    inline int GetUserCount() const{ return m_userCount; }
    inline void SetUserCount(int value) { m_userCount = value; }
    inline GetSpaceResult& WithUserCount(int value) { SetUserCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline const Aws::String& GetUserKMSKey() const{ return m_userKMSKey; }
    inline void SetUserKMSKey(const Aws::String& value) { m_userKMSKey = value; }
    inline void SetUserKMSKey(Aws::String&& value) { m_userKMSKey = std::move(value); }
    inline void SetUserKMSKey(const char* value) { m_userKMSKey.assign(value); }
    inline GetSpaceResult& WithUserKMSKey(const Aws::String& value) { SetUserKMSKey(value); return *this;}
    inline GetSpaceResult& WithUserKMSKey(Aws::String&& value) { SetUserKMSKey(std::move(value)); return *this;}
    inline GetSpaceResult& WithUserKMSKey(const char* value) { SetUserKMSKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline const Aws::String& GetVanityDomain() const{ return m_vanityDomain; }
    inline void SetVanityDomain(const Aws::String& value) { m_vanityDomain = value; }
    inline void SetVanityDomain(Aws::String&& value) { m_vanityDomain = std::move(value); }
    inline void SetVanityDomain(const char* value) { m_vanityDomain.assign(value); }
    inline GetSpaceResult& WithVanityDomain(const Aws::String& value) { SetVanityDomain(value); return *this;}
    inline GetSpaceResult& WithVanityDomain(Aws::String&& value) { SetVanityDomain(std::move(value)); return *this;}
    inline GetSpaceResult& WithVanityDomain(const char* value) { SetVanityDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the custom subdomain.</p>
     */
    inline const VanityDomainStatus& GetVanityDomainStatus() const{ return m_vanityDomainStatus; }
    inline void SetVanityDomainStatus(const VanityDomainStatus& value) { m_vanityDomainStatus = value; }
    inline void SetVanityDomainStatus(VanityDomainStatus&& value) { m_vanityDomainStatus = std::move(value); }
    inline GetSpaceResult& WithVanityDomainStatus(const VanityDomainStatus& value) { SetVanityDomainStatus(value); return *this;}
    inline GetSpaceResult& WithVanityDomainStatus(VanityDomainStatus&& value) { SetVanityDomainStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSpaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSpaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSpaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_clientId;

    ConfigurationStatus m_configurationStatus;

    long long m_contentSize;

    Aws::Utils::DateTime m_createDateTime;

    Aws::String m_customerRoleArn;

    Aws::Utils::DateTime m_deleteDateTime;

    Aws::String m_description;

    Aws::String m_name;

    Aws::String m_randomDomain;

    Aws::Map<Aws::String, Aws::Vector<Role>> m_roles;

    Aws::String m_spaceId;

    Aws::String m_status;

    long long m_storageLimit;

    TierLevel m_tier;

    int m_userCount;

    Aws::String m_userKMSKey;

    Aws::String m_vanityDomain;

    VanityDomainStatus m_vanityDomainStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
