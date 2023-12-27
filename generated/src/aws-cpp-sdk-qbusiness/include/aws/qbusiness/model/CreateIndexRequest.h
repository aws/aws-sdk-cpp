/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/IndexCapacityConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class CreateIndexRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CreateIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIndex"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Q application using the index.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q application using the index.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q application using the index.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q application using the index.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q application using the index.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q application using the index.</p>
     */
    inline CreateIndexRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q application using the index.</p>
     */
    inline CreateIndexRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q application using the index.</p>
     */
    inline CreateIndexRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The capacity units you want to provision for your index. You can add and
     * remove capacity to fit your usage needs.</p>
     */
    inline const IndexCapacityConfiguration& GetCapacityConfiguration() const{ return m_capacityConfiguration; }

    /**
     * <p>The capacity units you want to provision for your index. You can add and
     * remove capacity to fit your usage needs.</p>
     */
    inline bool CapacityConfigurationHasBeenSet() const { return m_capacityConfigurationHasBeenSet; }

    /**
     * <p>The capacity units you want to provision for your index. You can add and
     * remove capacity to fit your usage needs.</p>
     */
    inline void SetCapacityConfiguration(const IndexCapacityConfiguration& value) { m_capacityConfigurationHasBeenSet = true; m_capacityConfiguration = value; }

    /**
     * <p>The capacity units you want to provision for your index. You can add and
     * remove capacity to fit your usage needs.</p>
     */
    inline void SetCapacityConfiguration(IndexCapacityConfiguration&& value) { m_capacityConfigurationHasBeenSet = true; m_capacityConfiguration = std::move(value); }

    /**
     * <p>The capacity units you want to provision for your index. You can add and
     * remove capacity to fit your usage needs.</p>
     */
    inline CreateIndexRequest& WithCapacityConfiguration(const IndexCapacityConfiguration& value) { SetCapacityConfiguration(value); return *this;}

    /**
     * <p>The capacity units you want to provision for your index. You can add and
     * remove capacity to fit your usage needs.</p>
     */
    inline CreateIndexRequest& WithCapacityConfiguration(IndexCapacityConfiguration&& value) { SetCapacityConfiguration(std::move(value)); return *this;}


    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> API with the same client token will create
     * only one index.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> API with the same client token will create
     * only one index.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> API with the same client token will create
     * only one index.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> API with the same client token will create
     * only one index.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> API with the same client token will create
     * only one index.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> API with the same client token will create
     * only one index.</p>
     */
    inline CreateIndexRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> API with the same client token will create
     * only one index.</p>
     */
    inline CreateIndexRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the request to create an index. Multiple
     * calls to the <code>CreateIndex</code> API with the same client token will create
     * only one index.</p>
     */
    inline CreateIndexRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A description for the Amazon Q index.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the Amazon Q index.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the Amazon Q index.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the Amazon Q index.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the Amazon Q index.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the Amazon Q index.</p>
     */
    inline CreateIndexRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Q index.</p>
     */
    inline CreateIndexRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Q index.</p>
     */
    inline CreateIndexRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A name for the Amazon Q index.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>A name for the Amazon Q index.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>A name for the Amazon Q index.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>A name for the Amazon Q index.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>A name for the Amazon Q index.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>A name for the Amazon Q index.</p>
     */
    inline CreateIndexRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>A name for the Amazon Q index.</p>
     */
    inline CreateIndexRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>A name for the Amazon Q index.</p>
     */
    inline CreateIndexRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>A list of key-value pairs that identify or categorize the index. You can also
     * use tags to help control access to the index. Tag keys and values can consist of
     * Unicode letters, digits, white space, and any of the following symbols: _ . : /
     * = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that identify or categorize the index. You can also
     * use tags to help control access to the index. Tag keys and values can consist of
     * Unicode letters, digits, white space, and any of the following symbols: _ . : /
     * = + - @.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that identify or categorize the index. You can also
     * use tags to help control access to the index. Tag keys and values can consist of
     * Unicode letters, digits, white space, and any of the following symbols: _ . : /
     * = + - @.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that identify or categorize the index. You can also
     * use tags to help control access to the index. Tag keys and values can consist of
     * Unicode letters, digits, white space, and any of the following symbols: _ . : /
     * = + - @.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that identify or categorize the index. You can also
     * use tags to help control access to the index. Tag keys and values can consist of
     * Unicode letters, digits, white space, and any of the following symbols: _ . : /
     * = + - @.</p>
     */
    inline CreateIndexRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize the index. You can also
     * use tags to help control access to the index. Tag keys and values can consist of
     * Unicode letters, digits, white space, and any of the following symbols: _ . : /
     * = + - @.</p>
     */
    inline CreateIndexRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize the index. You can also
     * use tags to help control access to the index. Tag keys and values can consist of
     * Unicode letters, digits, white space, and any of the following symbols: _ . : /
     * = + - @.</p>
     */
    inline CreateIndexRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs that identify or categorize the index. You can also
     * use tags to help control access to the index. Tag keys and values can consist of
     * Unicode letters, digits, white space, and any of the following symbols: _ . : /
     * = + - @.</p>
     */
    inline CreateIndexRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    IndexCapacityConfiguration m_capacityConfiguration;
    bool m_capacityConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
