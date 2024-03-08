/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/AutoUpdate.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/textract/model/FeatureType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class CreateAdapterRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API CreateAdapterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAdapter"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name to be assigned to the adapter being created.</p>
     */
    inline const Aws::String& GetAdapterName() const{ return m_adapterName; }

    /**
     * <p>The name to be assigned to the adapter being created.</p>
     */
    inline bool AdapterNameHasBeenSet() const { return m_adapterNameHasBeenSet; }

    /**
     * <p>The name to be assigned to the adapter being created.</p>
     */
    inline void SetAdapterName(const Aws::String& value) { m_adapterNameHasBeenSet = true; m_adapterName = value; }

    /**
     * <p>The name to be assigned to the adapter being created.</p>
     */
    inline void SetAdapterName(Aws::String&& value) { m_adapterNameHasBeenSet = true; m_adapterName = std::move(value); }

    /**
     * <p>The name to be assigned to the adapter being created.</p>
     */
    inline void SetAdapterName(const char* value) { m_adapterNameHasBeenSet = true; m_adapterName.assign(value); }

    /**
     * <p>The name to be assigned to the adapter being created.</p>
     */
    inline CreateAdapterRequest& WithAdapterName(const Aws::String& value) { SetAdapterName(value); return *this;}

    /**
     * <p>The name to be assigned to the adapter being created.</p>
     */
    inline CreateAdapterRequest& WithAdapterName(Aws::String&& value) { SetAdapterName(std::move(value)); return *this;}

    /**
     * <p>The name to be assigned to the adapter being created.</p>
     */
    inline CreateAdapterRequest& WithAdapterName(const char* value) { SetAdapterName(value); return *this;}


    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapter requests, the same session is returned. This token
     * is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapter requests, the same session is returned. This token
     * is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapter requests, the same session is returned. This token
     * is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapter requests, the same session is returned. This token
     * is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapter requests, the same session is returned. This token
     * is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapter requests, the same session is returned. This token
     * is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline CreateAdapterRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapter requests, the same session is returned. This token
     * is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline CreateAdapterRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapter requests, the same session is returned. This token
     * is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline CreateAdapterRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The description to be assigned to the adapter being created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to be assigned to the adapter being created.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description to be assigned to the adapter being created.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description to be assigned to the adapter being created.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description to be assigned to the adapter being created.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description to be assigned to the adapter being created.</p>
     */
    inline CreateAdapterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to be assigned to the adapter being created.</p>
     */
    inline CreateAdapterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to be assigned to the adapter being created.</p>
     */
    inline CreateAdapterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of feature that the adapter is being trained on. Currrenly,
     * supported feature types are: <code>QUERIES</code> </p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const{ return m_featureTypes; }

    /**
     * <p>The type of feature that the adapter is being trained on. Currrenly,
     * supported feature types are: <code>QUERIES</code> </p>
     */
    inline bool FeatureTypesHasBeenSet() const { return m_featureTypesHasBeenSet; }

    /**
     * <p>The type of feature that the adapter is being trained on. Currrenly,
     * supported feature types are: <code>QUERIES</code> </p>
     */
    inline void SetFeatureTypes(const Aws::Vector<FeatureType>& value) { m_featureTypesHasBeenSet = true; m_featureTypes = value; }

    /**
     * <p>The type of feature that the adapter is being trained on. Currrenly,
     * supported feature types are: <code>QUERIES</code> </p>
     */
    inline void SetFeatureTypes(Aws::Vector<FeatureType>&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::move(value); }

    /**
     * <p>The type of feature that the adapter is being trained on. Currrenly,
     * supported feature types are: <code>QUERIES</code> </p>
     */
    inline CreateAdapterRequest& WithFeatureTypes(const Aws::Vector<FeatureType>& value) { SetFeatureTypes(value); return *this;}

    /**
     * <p>The type of feature that the adapter is being trained on. Currrenly,
     * supported feature types are: <code>QUERIES</code> </p>
     */
    inline CreateAdapterRequest& WithFeatureTypes(Aws::Vector<FeatureType>&& value) { SetFeatureTypes(std::move(value)); return *this;}

    /**
     * <p>The type of feature that the adapter is being trained on. Currrenly,
     * supported feature types are: <code>QUERIES</code> </p>
     */
    inline CreateAdapterRequest& AddFeatureTypes(const FeatureType& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }

    /**
     * <p>The type of feature that the adapter is being trained on. Currrenly,
     * supported feature types are: <code>QUERIES</code> </p>
     */
    inline CreateAdapterRequest& AddFeatureTypes(FeatureType&& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Controls whether or not the adapter should automatically update.</p>
     */
    inline const AutoUpdate& GetAutoUpdate() const{ return m_autoUpdate; }

    /**
     * <p>Controls whether or not the adapter should automatically update.</p>
     */
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }

    /**
     * <p>Controls whether or not the adapter should automatically update.</p>
     */
    inline void SetAutoUpdate(const AutoUpdate& value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }

    /**
     * <p>Controls whether or not the adapter should automatically update.</p>
     */
    inline void SetAutoUpdate(AutoUpdate&& value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = std::move(value); }

    /**
     * <p>Controls whether or not the adapter should automatically update.</p>
     */
    inline CreateAdapterRequest& WithAutoUpdate(const AutoUpdate& value) { SetAutoUpdate(value); return *this;}

    /**
     * <p>Controls whether or not the adapter should automatically update.</p>
     */
    inline CreateAdapterRequest& WithAutoUpdate(AutoUpdate&& value) { SetAutoUpdate(std::move(value)); return *this;}


    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline CreateAdapterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline CreateAdapterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline CreateAdapterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline CreateAdapterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline CreateAdapterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline CreateAdapterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline CreateAdapterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline CreateAdapterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to be added to the adapter.</p>
     */
    inline CreateAdapterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_adapterName;
    bool m_adapterNameHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<FeatureType> m_featureTypes;
    bool m_featureTypesHasBeenSet = false;

    AutoUpdate m_autoUpdate;
    bool m_autoUpdateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
