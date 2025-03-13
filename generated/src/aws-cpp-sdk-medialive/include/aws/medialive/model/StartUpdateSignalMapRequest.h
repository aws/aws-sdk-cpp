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
    AWS_MEDIALIVE_API StartUpdateSignalMapRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartUpdateSignalMap"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetCloudWatchAlarmTemplateGroupIdentifiers() const { return m_cloudWatchAlarmTemplateGroupIdentifiers; }
    inline bool CloudWatchAlarmTemplateGroupIdentifiersHasBeenSet() const { return m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet; }
    template<typename CloudWatchAlarmTemplateGroupIdentifiersT = Aws::Vector<Aws::String>>
    void SetCloudWatchAlarmTemplateGroupIdentifiers(CloudWatchAlarmTemplateGroupIdentifiersT&& value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers = std::forward<CloudWatchAlarmTemplateGroupIdentifiersT>(value); }
    template<typename CloudWatchAlarmTemplateGroupIdentifiersT = Aws::Vector<Aws::String>>
    StartUpdateSignalMapRequest& WithCloudWatchAlarmTemplateGroupIdentifiers(CloudWatchAlarmTemplateGroupIdentifiersT&& value) { SetCloudWatchAlarmTemplateGroupIdentifiers(std::forward<CloudWatchAlarmTemplateGroupIdentifiersT>(value)); return *this;}
    template<typename CloudWatchAlarmTemplateGroupIdentifiersT = Aws::String>
    StartUpdateSignalMapRequest& AddCloudWatchAlarmTemplateGroupIdentifiers(CloudWatchAlarmTemplateGroupIdentifiersT&& value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers.emplace_back(std::forward<CloudWatchAlarmTemplateGroupIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartUpdateSignalMapRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline const Aws::String& GetDiscoveryEntryPointArn() const { return m_discoveryEntryPointArn; }
    inline bool DiscoveryEntryPointArnHasBeenSet() const { return m_discoveryEntryPointArnHasBeenSet; }
    template<typename DiscoveryEntryPointArnT = Aws::String>
    void SetDiscoveryEntryPointArn(DiscoveryEntryPointArnT&& value) { m_discoveryEntryPointArnHasBeenSet = true; m_discoveryEntryPointArn = std::forward<DiscoveryEntryPointArnT>(value); }
    template<typename DiscoveryEntryPointArnT = Aws::String>
    StartUpdateSignalMapRequest& WithDiscoveryEntryPointArn(DiscoveryEntryPointArnT&& value) { SetDiscoveryEntryPointArn(std::forward<DiscoveryEntryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetEventBridgeRuleTemplateGroupIdentifiers() const { return m_eventBridgeRuleTemplateGroupIdentifiers; }
    inline bool EventBridgeRuleTemplateGroupIdentifiersHasBeenSet() const { return m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet; }
    template<typename EventBridgeRuleTemplateGroupIdentifiersT = Aws::Vector<Aws::String>>
    void SetEventBridgeRuleTemplateGroupIdentifiers(EventBridgeRuleTemplateGroupIdentifiersT&& value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers = std::forward<EventBridgeRuleTemplateGroupIdentifiersT>(value); }
    template<typename EventBridgeRuleTemplateGroupIdentifiersT = Aws::Vector<Aws::String>>
    StartUpdateSignalMapRequest& WithEventBridgeRuleTemplateGroupIdentifiers(EventBridgeRuleTemplateGroupIdentifiersT&& value) { SetEventBridgeRuleTemplateGroupIdentifiers(std::forward<EventBridgeRuleTemplateGroupIdentifiersT>(value)); return *this;}
    template<typename EventBridgeRuleTemplateGroupIdentifiersT = Aws::String>
    StartUpdateSignalMapRequest& AddEventBridgeRuleTemplateGroupIdentifiers(EventBridgeRuleTemplateGroupIdentifiersT&& value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers.emplace_back(std::forward<EventBridgeRuleTemplateGroupIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * If true, will force a rediscovery of a signal map if an unchanged
     * discoveryEntryPointArn is provided.
     */
    inline bool GetForceRediscovery() const { return m_forceRediscovery; }
    inline bool ForceRediscoveryHasBeenSet() const { return m_forceRediscoveryHasBeenSet; }
    inline void SetForceRediscovery(bool value) { m_forceRediscoveryHasBeenSet = true; m_forceRediscovery = value; }
    inline StartUpdateSignalMapRequest& WithForceRediscovery(bool value) { SetForceRediscovery(value); return *this;}
    ///@}

    ///@{
    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    StartUpdateSignalMapRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartUpdateSignalMapRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_cloudWatchAlarmTemplateGroupIdentifiers;
    bool m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_discoveryEntryPointArn;
    bool m_discoveryEntryPointArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventBridgeRuleTemplateGroupIdentifiers;
    bool m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = false;

    bool m_forceRediscovery{false};
    bool m_forceRediscoveryHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
