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
#include <aws/core/utils/UUID.h>

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
    AWS_MEDIALIVE_API CreateSignalMapRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSignalMap"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetCloudWatchAlarmTemplateGroupIdentifiers() const { return m_cloudWatchAlarmTemplateGroupIdentifiers; }
    inline bool CloudWatchAlarmTemplateGroupIdentifiersHasBeenSet() const { return m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet; }
    template<typename CloudWatchAlarmTemplateGroupIdentifiersT = Aws::Vector<Aws::String>>
    void SetCloudWatchAlarmTemplateGroupIdentifiers(CloudWatchAlarmTemplateGroupIdentifiersT&& value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers = std::forward<CloudWatchAlarmTemplateGroupIdentifiersT>(value); }
    template<typename CloudWatchAlarmTemplateGroupIdentifiersT = Aws::Vector<Aws::String>>
    CreateSignalMapRequest& WithCloudWatchAlarmTemplateGroupIdentifiers(CloudWatchAlarmTemplateGroupIdentifiersT&& value) { SetCloudWatchAlarmTemplateGroupIdentifiers(std::forward<CloudWatchAlarmTemplateGroupIdentifiersT>(value)); return *this;}
    template<typename CloudWatchAlarmTemplateGroupIdentifiersT = Aws::String>
    CreateSignalMapRequest& AddCloudWatchAlarmTemplateGroupIdentifiers(CloudWatchAlarmTemplateGroupIdentifiersT&& value) { m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifiers.emplace_back(std::forward<CloudWatchAlarmTemplateGroupIdentifiersT>(value)); return *this; }
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
    CreateSignalMapRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    CreateSignalMapRequest& WithDiscoveryEntryPointArn(DiscoveryEntryPointArnT&& value) { SetDiscoveryEntryPointArn(std::forward<DiscoveryEntryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetEventBridgeRuleTemplateGroupIdentifiers() const { return m_eventBridgeRuleTemplateGroupIdentifiers; }
    inline bool EventBridgeRuleTemplateGroupIdentifiersHasBeenSet() const { return m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet; }
    template<typename EventBridgeRuleTemplateGroupIdentifiersT = Aws::Vector<Aws::String>>
    void SetEventBridgeRuleTemplateGroupIdentifiers(EventBridgeRuleTemplateGroupIdentifiersT&& value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers = std::forward<EventBridgeRuleTemplateGroupIdentifiersT>(value); }
    template<typename EventBridgeRuleTemplateGroupIdentifiersT = Aws::Vector<Aws::String>>
    CreateSignalMapRequest& WithEventBridgeRuleTemplateGroupIdentifiers(EventBridgeRuleTemplateGroupIdentifiersT&& value) { SetEventBridgeRuleTemplateGroupIdentifiers(std::forward<EventBridgeRuleTemplateGroupIdentifiersT>(value)); return *this;}
    template<typename EventBridgeRuleTemplateGroupIdentifiersT = Aws::String>
    CreateSignalMapRequest& AddEventBridgeRuleTemplateGroupIdentifiers(EventBridgeRuleTemplateGroupIdentifiersT&& value) { m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifiers.emplace_back(std::forward<EventBridgeRuleTemplateGroupIdentifiersT>(value)); return *this; }
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
    CreateSignalMapRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSignalMapRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSignalMapRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * An ID that you assign to a create request. This ID ensures idempotency when
     * creating resources.
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSignalMapRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_requestIdHasBeenSet = true;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
