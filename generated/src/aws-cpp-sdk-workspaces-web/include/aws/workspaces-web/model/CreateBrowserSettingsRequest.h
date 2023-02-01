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
  class CreateBrowserSettingsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API CreateBrowserSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBrowserSettings"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const{ return m_additionalEncryptionContext; }

    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }

    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline void SetAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = value; }

    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline void SetAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::move(value); }

    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline CreateBrowserSettingsRequest& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}

    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline CreateBrowserSettingsRequest& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline CreateBrowserSettingsRequest& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline CreateBrowserSettingsRequest& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline CreateBrowserSettingsRequest& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline CreateBrowserSettingsRequest& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline CreateBrowserSettingsRequest& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline CreateBrowserSettingsRequest& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional encryption context of the browser settings.</p>
     */
    inline CreateBrowserSettingsRequest& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline const Aws::String& GetBrowserPolicy() const{ return m_browserPolicy; }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline bool BrowserPolicyHasBeenSet() const { return m_browserPolicyHasBeenSet; }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline void SetBrowserPolicy(const Aws::String& value) { m_browserPolicyHasBeenSet = true; m_browserPolicy = value; }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline void SetBrowserPolicy(Aws::String&& value) { m_browserPolicyHasBeenSet = true; m_browserPolicy = std::move(value); }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline void SetBrowserPolicy(const char* value) { m_browserPolicyHasBeenSet = true; m_browserPolicy.assign(value); }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline CreateBrowserSettingsRequest& WithBrowserPolicy(const Aws::String& value) { SetBrowserPolicy(value); return *this;}

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline CreateBrowserSettingsRequest& WithBrowserPolicy(Aws::String&& value) { SetBrowserPolicy(std::move(value)); return *this;}

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline CreateBrowserSettingsRequest& WithBrowserPolicy(const char* value) { SetBrowserPolicy(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request.</p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request.</p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request.</p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request.</p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request.</p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request.</p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK. </p>
     */
    inline CreateBrowserSettingsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request.</p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK. </p>
     */
    inline CreateBrowserSettingsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request.</p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK. </p>
     */
    inline CreateBrowserSettingsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The custom managed key of the browser settings.</p>
     */
    inline const Aws::String& GetCustomerManagedKey() const{ return m_customerManagedKey; }

    /**
     * <p>The custom managed key of the browser settings.</p>
     */
    inline bool CustomerManagedKeyHasBeenSet() const { return m_customerManagedKeyHasBeenSet; }

    /**
     * <p>The custom managed key of the browser settings.</p>
     */
    inline void SetCustomerManagedKey(const Aws::String& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = value; }

    /**
     * <p>The custom managed key of the browser settings.</p>
     */
    inline void SetCustomerManagedKey(Aws::String&& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = std::move(value); }

    /**
     * <p>The custom managed key of the browser settings.</p>
     */
    inline void SetCustomerManagedKey(const char* value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey.assign(value); }

    /**
     * <p>The custom managed key of the browser settings.</p>
     */
    inline CreateBrowserSettingsRequest& WithCustomerManagedKey(const Aws::String& value) { SetCustomerManagedKey(value); return *this;}

    /**
     * <p>The custom managed key of the browser settings.</p>
     */
    inline CreateBrowserSettingsRequest& WithCustomerManagedKey(Aws::String&& value) { SetCustomerManagedKey(std::move(value)); return *this;}

    /**
     * <p>The custom managed key of the browser settings.</p>
     */
    inline CreateBrowserSettingsRequest& WithCustomerManagedKey(const char* value) { SetCustomerManagedKey(value); return *this;}


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
    inline CreateBrowserSettingsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the browser settings resource. A tag is a key-value
     * pair.</p>
     */
    inline CreateBrowserSettingsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the browser settings resource. A tag is a key-value
     * pair.</p>
     */
    inline CreateBrowserSettingsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to add to the browser settings resource. A tag is a key-value
     * pair.</p>
     */
    inline CreateBrowserSettingsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;

    Aws::String m_browserPolicy;
    bool m_browserPolicyHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_customerManagedKey;
    bool m_customerManagedKeyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
