/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for StartUpdateSignalMapRequest<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartUpdateSignalMapRequest">AWS
   * API Reference</a></p>
   */
  class StartUpdateSignalMapRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API StartUpdateSignalMapRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartUpdateSignalMap"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    
    inline const Aws::Vector<Aws::String>& GetCloudWatchAlarmTemplateGroupIdentifiers() const{ return m_cloudWatchAlarmTemplateGroupIdentifiers; }

    
    inline bool CloudWatchAlarmTemplateGroupIdentifiersHasBeenSet() const { return m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet; }

    
    inline void SetCloudWatchAlarmTemplateGroupIdentifiers(const Aws::Vector<Aws::String>& value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers = value; }

    
    inline void SetCloudWatchAlarmTemplateGroupIdentifiers(Aws::Vector<Aws::String>&& value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers = std::move(value); }

    
    inline StartUpdateSignalMapRequest& WithCloudWatchAlarmTemplateGroupIdentifiers(const Aws::Vector<Aws::String>& value) { SetCloudWatchAlarmTemplateGroupIdentifiers(value); return *this;}

    
    inline StartUpdateSignalMapRequest& WithCloudWatchAlarmTemplateGroupIdentifiers(Aws::Vector<Aws::String>&& value) { SetCloudWatchAlarmTemplateGroupIdentifiers(std::move(value)); return *this;}

    
    inline StartUpdateSignalMapRequest& AddCloudWatchAlarmTemplateGroupIdentifiers(const Aws::String& value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers.push_back(value); return *this; }

    
    inline StartUpdateSignalMapRequest& AddCloudWatchAlarmTemplateGroupIdentifiers(Aws::String&& value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers.push_back(std::move(value)); return *this; }

    
    inline StartUpdateSignalMapRequest& AddCloudWatchAlarmTemplateGroupIdentifiers(const char* value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers.push_back(value); return *this; }


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
    inline StartUpdateSignalMapRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A resource's optional description.
     */
    inline StartUpdateSignalMapRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A resource's optional description.
     */
    inline StartUpdateSignalMapRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline StartUpdateSignalMapRequest& WithDiscoveryEntryPointArn(const Aws::String& value) { SetDiscoveryEntryPointArn(value); return *this;}

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline StartUpdateSignalMapRequest& WithDiscoveryEntryPointArn(Aws::String&& value) { SetDiscoveryEntryPointArn(std::move(value)); return *this;}

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline StartUpdateSignalMapRequest& WithDiscoveryEntryPointArn(const char* value) { SetDiscoveryEntryPointArn(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetEventBridgeRuleTemplateGroupIdentifiers() const{ return m_eventBridgeRuleTemplateGroupIdentifiers; }

    
    inline bool EventBridgeRuleTemplateGroupIdentifiersHasBeenSet() const { return m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet; }

    
    inline void SetEventBridgeRuleTemplateGroupIdentifiers(const Aws::Vector<Aws::String>& value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers = value; }

    
    inline void SetEventBridgeRuleTemplateGroupIdentifiers(Aws::Vector<Aws::String>&& value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers = std::move(value); }

    
    inline StartUpdateSignalMapRequest& WithEventBridgeRuleTemplateGroupIdentifiers(const Aws::Vector<Aws::String>& value) { SetEventBridgeRuleTemplateGroupIdentifiers(value); return *this;}

    
    inline StartUpdateSignalMapRequest& WithEventBridgeRuleTemplateGroupIdentifiers(Aws::Vector<Aws::String>&& value) { SetEventBridgeRuleTemplateGroupIdentifiers(std::move(value)); return *this;}

    
    inline StartUpdateSignalMapRequest& AddEventBridgeRuleTemplateGroupIdentifiers(const Aws::String& value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers.push_back(value); return *this; }

    
    inline StartUpdateSignalMapRequest& AddEventBridgeRuleTemplateGroupIdentifiers(Aws::String&& value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers.push_back(std::move(value)); return *this; }

    
    inline StartUpdateSignalMapRequest& AddEventBridgeRuleTemplateGroupIdentifiers(const char* value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers.push_back(value); return *this; }


    /**
     * If true, will force a rediscovery of a signal map if an unchanged
     * discoveryEntryPointArn is provided.
     */
    inline bool GetForceRediscovery() const{ return m_forceRediscovery; }

    /**
     * If true, will force a rediscovery of a signal map if an unchanged
     * discoveryEntryPointArn is provided.
     */
    inline bool ForceRediscoveryHasBeenSet() const { return m_forceRediscoveryHasBeenSet; }

    /**
     * If true, will force a rediscovery of a signal map if an unchanged
     * discoveryEntryPointArn is provided.
     */
    inline void SetForceRediscovery(bool value) { m_forceRediscoveryHasBeenSet = true; m_forceRediscovery = value; }

    /**
     * If true, will force a rediscovery of a signal map if an unchanged
     * discoveryEntryPointArn is provided.
     */
    inline StartUpdateSignalMapRequest& WithForceRediscovery(bool value) { SetForceRediscovery(value); return *this;}


    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline StartUpdateSignalMapRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline StartUpdateSignalMapRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline StartUpdateSignalMapRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


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
    inline StartUpdateSignalMapRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline StartUpdateSignalMapRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline StartUpdateSignalMapRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_cloudWatchAlarmTemplateGroupIdentifiers;
    bool m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_discoveryEntryPointArn;
    bool m_discoveryEntryPointArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventBridgeRuleTemplateGroupIdentifiers;
    bool m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = false;

    bool m_forceRediscovery;
    bool m_forceRediscoveryHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
