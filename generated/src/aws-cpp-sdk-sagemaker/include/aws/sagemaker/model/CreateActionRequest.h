/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ActionSource.h>
#include <aws/sagemaker/model/ActionStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/MetadataProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateActionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAction"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the action. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the action. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the action. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the action. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the action. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline CreateActionRequest& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline CreateActionRequest& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the action. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline CreateActionRequest& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline const ActionSource& GetSource() const{ return m_source; }

    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline void SetSource(const ActionSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline void SetSource(ActionSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline CreateActionRequest& WithSource(const ActionSource& value) { SetSource(value); return *this;}

    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline CreateActionRequest& WithSource(ActionSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The action type.</p>
     */
    inline const Aws::String& GetActionType() const{ return m_actionType; }

    /**
     * <p>The action type.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The action type.</p>
     */
    inline void SetActionType(const Aws::String& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The action type.</p>
     */
    inline void SetActionType(Aws::String&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The action type.</p>
     */
    inline void SetActionType(const char* value) { m_actionTypeHasBeenSet = true; m_actionType.assign(value); }

    /**
     * <p>The action type.</p>
     */
    inline CreateActionRequest& WithActionType(const Aws::String& value) { SetActionType(value); return *this;}

    /**
     * <p>The action type.</p>
     */
    inline CreateActionRequest& WithActionType(Aws::String&& value) { SetActionType(std::move(value)); return *this;}

    /**
     * <p>The action type.</p>
     */
    inline CreateActionRequest& WithActionType(const char* value) { SetActionType(value); return *this;}


    /**
     * <p>The description of the action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the action.</p>
     */
    inline CreateActionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the action.</p>
     */
    inline CreateActionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the action.</p>
     */
    inline CreateActionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the action.</p>
     */
    inline const ActionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(const ActionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(ActionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the action.</p>
     */
    inline CreateActionRequest& WithStatus(const ActionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action.</p>
     */
    inline CreateActionRequest& WithStatus(ActionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }

    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline CreateActionRequest& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}

    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline CreateActionRequest& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline CreateActionRequest& AddProperties(const Aws::String& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }

    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline CreateActionRequest& AddProperties(Aws::String&& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline CreateActionRequest& AddProperties(const Aws::String& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline CreateActionRequest& AddProperties(Aws::String&& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline CreateActionRequest& AddProperties(const char* key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline CreateActionRequest& AddProperties(Aws::String&& key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of properties to add to the action.</p>
     */
    inline CreateActionRequest& AddProperties(const char* key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }


    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }

    
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }

    
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = value; }

    
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::move(value); }

    
    inline CreateActionRequest& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}

    
    inline CreateActionRequest& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}


    /**
     * <p>A list of tags to apply to the action.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to apply to the action.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to apply to the action.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to apply to the action.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to apply to the action.</p>
     */
    inline CreateActionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to apply to the action.</p>
     */
    inline CreateActionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to apply to the action.</p>
     */
    inline CreateActionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to apply to the action.</p>
     */
    inline CreateActionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    ActionSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_actionType;
    bool m_actionTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;

    MetadataProperties m_metadataProperties;
    bool m_metadataPropertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
