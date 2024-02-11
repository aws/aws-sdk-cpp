/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/IpRule.h>
#include <aws/workspaces-web/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class CreateIpAccessSettingsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API CreateIpAccessSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIpAccessSettings"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const{ return m_additionalEncryptionContext; }

    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }

    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline void SetAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = value; }

    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline void SetAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::move(value); }

    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}

    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional encryption context of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline CreateIpAccessSettingsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline CreateIpAccessSettingsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline CreateIpAccessSettingsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The custom managed key of the IP access settings.</p>
     */
    inline const Aws::String& GetCustomerManagedKey() const{ return m_customerManagedKey; }

    /**
     * <p>The custom managed key of the IP access settings.</p>
     */
    inline bool CustomerManagedKeyHasBeenSet() const { return m_customerManagedKeyHasBeenSet; }

    /**
     * <p>The custom managed key of the IP access settings.</p>
     */
    inline void SetCustomerManagedKey(const Aws::String& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = value; }

    /**
     * <p>The custom managed key of the IP access settings.</p>
     */
    inline void SetCustomerManagedKey(Aws::String&& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = std::move(value); }

    /**
     * <p>The custom managed key of the IP access settings.</p>
     */
    inline void SetCustomerManagedKey(const char* value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey.assign(value); }

    /**
     * <p>The custom managed key of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithCustomerManagedKey(const Aws::String& value) { SetCustomerManagedKey(value); return *this;}

    /**
     * <p>The custom managed key of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithCustomerManagedKey(Aws::String&& value) { SetCustomerManagedKey(std::move(value)); return *this;}

    /**
     * <p>The custom managed key of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithCustomerManagedKey(const char* value) { SetCustomerManagedKey(value); return *this;}


    /**
     * <p>The description of the IP access settings.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline const Aws::Vector<IpRule>& GetIpRules() const{ return m_ipRules; }

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline bool IpRulesHasBeenSet() const { return m_ipRulesHasBeenSet; }

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline void SetIpRules(const Aws::Vector<IpRule>& value) { m_ipRulesHasBeenSet = true; m_ipRules = value; }

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline void SetIpRules(Aws::Vector<IpRule>&& value) { m_ipRulesHasBeenSet = true; m_ipRules = std::move(value); }

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithIpRules(const Aws::Vector<IpRule>& value) { SetIpRules(value); return *this;}

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& WithIpRules(Aws::Vector<IpRule>&& value) { SetIpRules(std::move(value)); return *this;}

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& AddIpRules(const IpRule& value) { m_ipRulesHasBeenSet = true; m_ipRules.push_back(value); return *this; }

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline CreateIpAccessSettingsRequest& AddIpRules(IpRule&& value) { m_ipRulesHasBeenSet = true; m_ipRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags to add to the browser settings resource. A tag is a key-value
     * pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the browser settings resource. A tag is a key-value
     * pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the browser settings resource. A tag is a key-value
     * pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the browser settings resource. A tag is a key-value
     * pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the browser settings resource. A tag is a key-value
     * pair.</p>
     */
    inline CreateIpAccessSettingsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the browser settings resource. A tag is a key-value
     * pair.</p>
     */
    inline CreateIpAccessSettingsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the browser settings resource. A tag is a key-value
     * pair.</p>
     */
    inline CreateIpAccessSettingsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to add to the browser settings resource. A tag is a key-value
     * pair.</p>
     */
    inline CreateIpAccessSettingsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_customerManagedKey;
    bool m_customerManagedKeyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<IpRule> m_ipRules;
    bool m_ipRulesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
