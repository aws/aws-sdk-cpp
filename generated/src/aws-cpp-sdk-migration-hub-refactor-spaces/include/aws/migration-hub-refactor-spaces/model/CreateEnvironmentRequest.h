/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/model/NetworkFabricType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   */
  class CreateEnvironmentRequest : public MigrationHubRefactorSpacesRequest
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateEnvironmentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateEnvironmentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateEnvironmentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The network fabric type of the environment.</p>
     */
    inline const NetworkFabricType& GetNetworkFabricType() const{ return m_networkFabricType; }

    /**
     * <p>The network fabric type of the environment.</p>
     */
    inline bool NetworkFabricTypeHasBeenSet() const { return m_networkFabricTypeHasBeenSet; }

    /**
     * <p>The network fabric type of the environment.</p>
     */
    inline void SetNetworkFabricType(const NetworkFabricType& value) { m_networkFabricTypeHasBeenSet = true; m_networkFabricType = value; }

    /**
     * <p>The network fabric type of the environment.</p>
     */
    inline void SetNetworkFabricType(NetworkFabricType&& value) { m_networkFabricTypeHasBeenSet = true; m_networkFabricType = std::move(value); }

    /**
     * <p>The network fabric type of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithNetworkFabricType(const NetworkFabricType& value) { SetNetworkFabricType(value); return *this;}

    /**
     * <p>The network fabric type of the environment.</p>
     */
    inline CreateEnvironmentRequest& WithNetworkFabricType(NetworkFabricType&& value) { SetNetworkFabricType(std::move(value)); return *this;}


    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateEnvironmentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateEnvironmentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the environment. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NetworkFabricType m_networkFabricType;
    bool m_networkFabricTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
