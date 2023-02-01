/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/AppRegistryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

  /**
   */
  class CreateApplicationRequest : public AppRegistryRequest
  {
  public:
    AWS_APPREGISTRY_API CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_APPREGISTRY_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline CreateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline CreateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application. The name must be unique in the region in which
     * you are creating the application.</p>
     */
    inline CreateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline CreateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline CreateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline CreateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline CreateApplicationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline CreateApplicationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline CreateApplicationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline CreateApplicationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline CreateApplicationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline CreateApplicationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs you can use to associate with the application.</p>
     */
    inline CreateApplicationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A unique identifier that you provide to ensure idempotency. If you retry a
     * request that completed successfully using the same client token and the same
     * parameters, the retry succeeds without performing any further actions. If you
     * retry a successful request using the same client token, but one or more of the
     * parameters are different, the retry fails.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If you retry a
     * request that completed successfully using the same client token and the same
     * parameters, the retry succeeds without performing any further actions. If you
     * retry a successful request using the same client token, but one or more of the
     * parameters are different, the retry fails.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If you retry a
     * request that completed successfully using the same client token and the same
     * parameters, the retry succeeds without performing any further actions. If you
     * retry a successful request using the same client token, but one or more of the
     * parameters are different, the retry fails.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If you retry a
     * request that completed successfully using the same client token and the same
     * parameters, the retry succeeds without performing any further actions. If you
     * retry a successful request using the same client token, but one or more of the
     * parameters are different, the retry fails.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If you retry a
     * request that completed successfully using the same client token and the same
     * parameters, the retry succeeds without performing any further actions. If you
     * retry a successful request using the same client token, but one or more of the
     * parameters are different, the retry fails.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If you retry a
     * request that completed successfully using the same client token and the same
     * parameters, the retry succeeds without performing any further actions. If you
     * retry a successful request using the same client token, but one or more of the
     * parameters are different, the retry fails.</p>
     */
    inline CreateApplicationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If you retry a
     * request that completed successfully using the same client token and the same
     * parameters, the retry succeeds without performing any further actions. If you
     * retry a successful request using the same client token, but one or more of the
     * parameters are different, the retry fails.</p>
     */
    inline CreateApplicationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If you retry a
     * request that completed successfully using the same client token and the same
     * parameters, the retry succeeds without performing any further actions. If you
     * retry a successful request using the same client token, but one or more of the
     * parameters are different, the retry fails.</p>
     */
    inline CreateApplicationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
