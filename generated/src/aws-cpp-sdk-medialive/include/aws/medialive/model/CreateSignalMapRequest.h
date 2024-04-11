/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for CreateSignalMapRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateSignalMapRequest">AWS
   * API Reference</a></p>
   */
  class CreateSignalMapRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API CreateSignalMapRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSignalMap"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    
    inline const Aws::Vector<Aws::String>& GetCloudWatchAlarmTemplateGroupIdentifiers() const{ return m_cloudWatchAlarmTemplateGroupIdentifiers; }

    
    inline bool CloudWatchAlarmTemplateGroupIdentifiersHasBeenSet() const { return m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet; }

    
    inline void SetCloudWatchAlarmTemplateGroupIdentifiers(const Aws::Vector<Aws::String>& value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers = value; }

    
    inline void SetCloudWatchAlarmTemplateGroupIdentifiers(Aws::Vector<Aws::String>&& value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers = std::move(value); }

    
    inline CreateSignalMapRequest& WithCloudWatchAlarmTemplateGroupIdentifiers(const Aws::Vector<Aws::String>& value) { SetCloudWatchAlarmTemplateGroupIdentifiers(value); return *this;}

    
    inline CreateSignalMapRequest& WithCloudWatchAlarmTemplateGroupIdentifiers(Aws::Vector<Aws::String>&& value) { SetCloudWatchAlarmTemplateGroupIdentifiers(std::move(value)); return *this;}

    
    inline CreateSignalMapRequest& AddCloudWatchAlarmTemplateGroupIdentifiers(const Aws::String& value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers.push_back(value); return *this; }

    
    inline CreateSignalMapRequest& AddCloudWatchAlarmTemplateGroupIdentifiers(Aws::String&& value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers.push_back(std::move(value)); return *this; }

    
    inline CreateSignalMapRequest& AddCloudWatchAlarmTemplateGroupIdentifiers(const char* value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers.push_back(value); return *this; }


    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A resource's optional description.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A resource's optional description.
     */
    inline CreateSignalMapRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A resource's optional description.
     */
    inline CreateSignalMapRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A resource's optional description.
     */
    inline CreateSignalMapRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline const Aws::String& GetDiscoveryEntryPointArn() const{ return m_discoveryEntryPointArn; }

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline bool DiscoveryEntryPointArnHasBeenSet() const { return m_discoveryEntryPointArnHasBeenSet; }

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline void SetDiscoveryEntryPointArn(const Aws::String& value) { m_discoveryEntryPointArnHasBeenSet = true; m_discoveryEntryPointArn = value; }

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline void SetDiscoveryEntryPointArn(Aws::String&& value) { m_discoveryEntryPointArnHasBeenSet = true; m_discoveryEntryPointArn = std::move(value); }

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline void SetDiscoveryEntryPointArn(const char* value) { m_discoveryEntryPointArnHasBeenSet = true; m_discoveryEntryPointArn.assign(value); }

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline CreateSignalMapRequest& WithDiscoveryEntryPointArn(const Aws::String& value) { SetDiscoveryEntryPointArn(value); return *this;}

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline CreateSignalMapRequest& WithDiscoveryEntryPointArn(Aws::String&& value) { SetDiscoveryEntryPointArn(std::move(value)); return *this;}

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline CreateSignalMapRequest& WithDiscoveryEntryPointArn(const char* value) { SetDiscoveryEntryPointArn(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetEventBridgeRuleTemplateGroupIdentifiers() const{ return m_eventBridgeRuleTemplateGroupIdentifiers; }

    
    inline bool EventBridgeRuleTemplateGroupIdentifiersHasBeenSet() const { return m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet; }

    
    inline void SetEventBridgeRuleTemplateGroupIdentifiers(const Aws::Vector<Aws::String>& value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers = value; }

    
    inline void SetEventBridgeRuleTemplateGroupIdentifiers(Aws::Vector<Aws::String>&& value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers = std::move(value); }

    
    inline CreateSignalMapRequest& WithEventBridgeRuleTemplateGroupIdentifiers(const Aws::Vector<Aws::String>& value) { SetEventBridgeRuleTemplateGroupIdentifiers(value); return *this;}

    
    inline CreateSignalMapRequest& WithEventBridgeRuleTemplateGroupIdentifiers(Aws::Vector<Aws::String>&& value) { SetEventBridgeRuleTemplateGroupIdentifiers(std::move(value)); return *this;}

    
    inline CreateSignalMapRequest& AddEventBridgeRuleTemplateGroupIdentifiers(const Aws::String& value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers.push_back(value); return *this; }

    
    inline CreateSignalMapRequest& AddEventBridgeRuleTemplateGroupIdentifiers(Aws::String&& value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers.push_back(std::move(value)); return *this; }

    
    inline CreateSignalMapRequest& AddEventBridgeRuleTemplateGroupIdentifiers(const char* value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers.push_back(value); return *this; }


    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline CreateSignalMapRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline CreateSignalMapRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline CreateSignalMapRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateSignalMapRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreateSignalMapRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateSignalMapRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline CreateSignalMapRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateSignalMapRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateSignalMapRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateSignalMapRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateSignalMapRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateSignalMapRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_cloudWatchAlarmTemplateGroupIdentifiers;
    bool m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_discoveryEntryPointArn;
    bool m_discoveryEntryPointArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventBridgeRuleTemplateGroupIdentifiers;
    bool m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
