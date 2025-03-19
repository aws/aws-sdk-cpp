/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/SuccessfulMonitorDeployment.h>
#include <aws/medialive/model/MonitorDeployment.h>
#include <aws/medialive/model/SignalMapStatus.h>
#include <aws/medialive/model/MediaResource.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for StartUpdateSignalMapResponse<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartUpdateSignalMapResponse">AWS
   * API Reference</a></p>
   */
  class StartUpdateSignalMapResult
  {
  public:
    AWS_MEDIALIVE_API StartUpdateSignalMapResult() = default;
    AWS_MEDIALIVE_API StartUpdateSignalMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API StartUpdateSignalMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    StartUpdateSignalMapResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetCloudWatchAlarmTemplateGroupIds() const { return m_cloudWatchAlarmTemplateGroupIds; }
    template<typename CloudWatchAlarmTemplateGroupIdsT = Aws::Vector<Aws::String>>
    void SetCloudWatchAlarmTemplateGroupIds(CloudWatchAlarmTemplateGroupIdsT&& value) { m_cloudWatchAlarmTemplateGroupIdsHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIds = std::forward<CloudWatchAlarmTemplateGroupIdsT>(value); }
    template<typename CloudWatchAlarmTemplateGroupIdsT = Aws::Vector<Aws::String>>
    StartUpdateSignalMapResult& WithCloudWatchAlarmTemplateGroupIds(CloudWatchAlarmTemplateGroupIdsT&& value) { SetCloudWatchAlarmTemplateGroupIds(std::forward<CloudWatchAlarmTemplateGroupIdsT>(value)); return *this;}
    template<typename CloudWatchAlarmTemplateGroupIdsT = Aws::String>
    StartUpdateSignalMapResult& AddCloudWatchAlarmTemplateGroupIds(CloudWatchAlarmTemplateGroupIdsT&& value) { m_cloudWatchAlarmTemplateGroupIdsHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIds.emplace_back(std::forward<CloudWatchAlarmTemplateGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    StartUpdateSignalMapResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartUpdateSignalMapResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline const Aws::String& GetDiscoveryEntryPointArn() const { return m_discoveryEntryPointArn; }
    template<typename DiscoveryEntryPointArnT = Aws::String>
    void SetDiscoveryEntryPointArn(DiscoveryEntryPointArnT&& value) { m_discoveryEntryPointArnHasBeenSet = true; m_discoveryEntryPointArn = std::forward<DiscoveryEntryPointArnT>(value); }
    template<typename DiscoveryEntryPointArnT = Aws::String>
    StartUpdateSignalMapResult& WithDiscoveryEntryPointArn(DiscoveryEntryPointArnT&& value) { SetDiscoveryEntryPointArn(std::forward<DiscoveryEntryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Error message associated with a failed creation or failed update attempt of a
     * signal map.
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    StartUpdateSignalMapResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetEventBridgeRuleTemplateGroupIds() const { return m_eventBridgeRuleTemplateGroupIds; }
    template<typename EventBridgeRuleTemplateGroupIdsT = Aws::Vector<Aws::String>>
    void SetEventBridgeRuleTemplateGroupIds(EventBridgeRuleTemplateGroupIdsT&& value) { m_eventBridgeRuleTemplateGroupIdsHasBeenSet = true; m_eventBridgeRuleTemplateGroupIds = std::forward<EventBridgeRuleTemplateGroupIdsT>(value); }
    template<typename EventBridgeRuleTemplateGroupIdsT = Aws::Vector<Aws::String>>
    StartUpdateSignalMapResult& WithEventBridgeRuleTemplateGroupIds(EventBridgeRuleTemplateGroupIdsT&& value) { SetEventBridgeRuleTemplateGroupIds(std::forward<EventBridgeRuleTemplateGroupIdsT>(value)); return *this;}
    template<typename EventBridgeRuleTemplateGroupIdsT = Aws::String>
    StartUpdateSignalMapResult& AddEventBridgeRuleTemplateGroupIds(EventBridgeRuleTemplateGroupIdsT&& value) { m_eventBridgeRuleTemplateGroupIdsHasBeenSet = true; m_eventBridgeRuleTemplateGroupIds.emplace_back(std::forward<EventBridgeRuleTemplateGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, MediaResource>& GetFailedMediaResourceMap() const { return m_failedMediaResourceMap; }
    template<typename FailedMediaResourceMapT = Aws::Map<Aws::String, MediaResource>>
    void SetFailedMediaResourceMap(FailedMediaResourceMapT&& value) { m_failedMediaResourceMapHasBeenSet = true; m_failedMediaResourceMap = std::forward<FailedMediaResourceMapT>(value); }
    template<typename FailedMediaResourceMapT = Aws::Map<Aws::String, MediaResource>>
    StartUpdateSignalMapResult& WithFailedMediaResourceMap(FailedMediaResourceMapT&& value) { SetFailedMediaResourceMap(std::forward<FailedMediaResourceMapT>(value)); return *this;}
    template<typename FailedMediaResourceMapKeyT = Aws::String, typename FailedMediaResourceMapValueT = MediaResource>
    StartUpdateSignalMapResult& AddFailedMediaResourceMap(FailedMediaResourceMapKeyT&& key, FailedMediaResourceMapValueT&& value) {
      m_failedMediaResourceMapHasBeenSet = true; m_failedMediaResourceMap.emplace(std::forward<FailedMediaResourceMapKeyT>(key), std::forward<FailedMediaResourceMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * A signal map's id.
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    StartUpdateSignalMapResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetLastDiscoveredAt() const { return m_lastDiscoveredAt; }
    template<typename LastDiscoveredAtT = Aws::Utils::DateTime>
    void SetLastDiscoveredAt(LastDiscoveredAtT&& value) { m_lastDiscoveredAtHasBeenSet = true; m_lastDiscoveredAt = std::forward<LastDiscoveredAtT>(value); }
    template<typename LastDiscoveredAtT = Aws::Utils::DateTime>
    StartUpdateSignalMapResult& WithLastDiscoveredAt(LastDiscoveredAtT&& value) { SetLastDiscoveredAt(std::forward<LastDiscoveredAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SuccessfulMonitorDeployment& GetLastSuccessfulMonitorDeployment() const { return m_lastSuccessfulMonitorDeployment; }
    template<typename LastSuccessfulMonitorDeploymentT = SuccessfulMonitorDeployment>
    void SetLastSuccessfulMonitorDeployment(LastSuccessfulMonitorDeploymentT&& value) { m_lastSuccessfulMonitorDeploymentHasBeenSet = true; m_lastSuccessfulMonitorDeployment = std::forward<LastSuccessfulMonitorDeploymentT>(value); }
    template<typename LastSuccessfulMonitorDeploymentT = SuccessfulMonitorDeployment>
    StartUpdateSignalMapResult& WithLastSuccessfulMonitorDeployment(LastSuccessfulMonitorDeploymentT&& value) { SetLastSuccessfulMonitorDeployment(std::forward<LastSuccessfulMonitorDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, MediaResource>& GetMediaResourceMap() const { return m_mediaResourceMap; }
    template<typename MediaResourceMapT = Aws::Map<Aws::String, MediaResource>>
    void SetMediaResourceMap(MediaResourceMapT&& value) { m_mediaResourceMapHasBeenSet = true; m_mediaResourceMap = std::forward<MediaResourceMapT>(value); }
    template<typename MediaResourceMapT = Aws::Map<Aws::String, MediaResource>>
    StartUpdateSignalMapResult& WithMediaResourceMap(MediaResourceMapT&& value) { SetMediaResourceMap(std::forward<MediaResourceMapT>(value)); return *this;}
    template<typename MediaResourceMapKeyT = Aws::String, typename MediaResourceMapValueT = MediaResource>
    StartUpdateSignalMapResult& AddMediaResourceMap(MediaResourceMapKeyT&& key, MediaResourceMapValueT&& value) {
      m_mediaResourceMapHasBeenSet = true; m_mediaResourceMap.emplace(std::forward<MediaResourceMapKeyT>(key), std::forward<MediaResourceMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    StartUpdateSignalMapResult& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If true, there are pending monitor changes for this signal map that can be
     * deployed.
     */
    inline bool GetMonitorChangesPendingDeployment() const { return m_monitorChangesPendingDeployment; }
    inline void SetMonitorChangesPendingDeployment(bool value) { m_monitorChangesPendingDeploymentHasBeenSet = true; m_monitorChangesPendingDeployment = value; }
    inline StartUpdateSignalMapResult& WithMonitorChangesPendingDeployment(bool value) { SetMonitorChangesPendingDeployment(value); return *this;}
    ///@}

    ///@{
    
    inline const MonitorDeployment& GetMonitorDeployment() const { return m_monitorDeployment; }
    template<typename MonitorDeploymentT = MonitorDeployment>
    void SetMonitorDeployment(MonitorDeploymentT&& value) { m_monitorDeploymentHasBeenSet = true; m_monitorDeployment = std::forward<MonitorDeploymentT>(value); }
    template<typename MonitorDeploymentT = MonitorDeployment>
    StartUpdateSignalMapResult& WithMonitorDeployment(MonitorDeploymentT&& value) { SetMonitorDeployment(std::forward<MonitorDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartUpdateSignalMapResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline SignalMapStatus GetStatus() const { return m_status; }
    inline void SetStatus(SignalMapStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StartUpdateSignalMapResult& WithStatus(SignalMapStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartUpdateSignalMapResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartUpdateSignalMapResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartUpdateSignalMapResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_cloudWatchAlarmTemplateGroupIds;
    bool m_cloudWatchAlarmTemplateGroupIdsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_discoveryEntryPointArn;
    bool m_discoveryEntryPointArnHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventBridgeRuleTemplateGroupIds;
    bool m_eventBridgeRuleTemplateGroupIdsHasBeenSet = false;

    Aws::Map<Aws::String, MediaResource> m_failedMediaResourceMap;
    bool m_failedMediaResourceMapHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastDiscoveredAt{};
    bool m_lastDiscoveredAtHasBeenSet = false;

    SuccessfulMonitorDeployment m_lastSuccessfulMonitorDeployment;
    bool m_lastSuccessfulMonitorDeploymentHasBeenSet = false;

    Aws::Map<Aws::String, MediaResource> m_mediaResourceMap;
    bool m_mediaResourceMapHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    bool m_monitorChangesPendingDeployment{false};
    bool m_monitorChangesPendingDeploymentHasBeenSet = false;

    MonitorDeployment m_monitorDeployment;
    bool m_monitorDeploymentHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SignalMapStatus m_status{SignalMapStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
