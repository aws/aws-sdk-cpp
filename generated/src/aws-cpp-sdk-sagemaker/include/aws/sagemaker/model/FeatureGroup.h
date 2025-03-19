/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/OnlineStoreConfig.h>
#include <aws/sagemaker/model/OfflineStoreConfig.h>
#include <aws/sagemaker/model/FeatureGroupStatus.h>
#include <aws/sagemaker/model/OfflineStoreStatus.h>
#include <aws/sagemaker/model/LastUpdateStatus.h>
#include <aws/sagemaker/model/FeatureDefinition.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Amazon SageMaker Feature Store stores features in a collection called Feature
   * Group. A Feature Group can be visualized as a table which has rows, with a
   * unique identifier for each row where each column in the table is a feature. In
   * principle, a Feature Group is composed of features and values per
   * features.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FeatureGroup">AWS
   * API Reference</a></p>
   */
  class FeatureGroup
  {
  public:
    AWS_SAGEMAKER_API FeatureGroup() = default;
    AWS_SAGEMAKER_API FeatureGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FeatureGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetFeatureGroupArn() const { return m_featureGroupArn; }
    inline bool FeatureGroupArnHasBeenSet() const { return m_featureGroupArnHasBeenSet; }
    template<typename FeatureGroupArnT = Aws::String>
    void SetFeatureGroupArn(FeatureGroupArnT&& value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn = std::forward<FeatureGroupArnT>(value); }
    template<typename FeatureGroupArnT = Aws::String>
    FeatureGroup& WithFeatureGroupArn(FeatureGroupArnT&& value) { SetFeatureGroupArn(std::forward<FeatureGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    template<typename FeatureGroupNameT = Aws::String>
    void SetFeatureGroupName(FeatureGroupNameT&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::forward<FeatureGroupNameT>(value); }
    template<typename FeatureGroupNameT = Aws::String>
    FeatureGroup& WithFeatureGroupName(FeatureGroupNameT&& value) { SetFeatureGroupName(std::forward<FeatureGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>Feature</code> whose value uniquely identifies a
     * <code>Record</code> defined in the <code>FeatureGroup</code>
     * <code>FeatureDefinitions</code>.</p>
     */
    inline const Aws::String& GetRecordIdentifierFeatureName() const { return m_recordIdentifierFeatureName; }
    inline bool RecordIdentifierFeatureNameHasBeenSet() const { return m_recordIdentifierFeatureNameHasBeenSet; }
    template<typename RecordIdentifierFeatureNameT = Aws::String>
    void SetRecordIdentifierFeatureName(RecordIdentifierFeatureNameT&& value) { m_recordIdentifierFeatureNameHasBeenSet = true; m_recordIdentifierFeatureName = std::forward<RecordIdentifierFeatureNameT>(value); }
    template<typename RecordIdentifierFeatureNameT = Aws::String>
    FeatureGroup& WithRecordIdentifierFeatureName(RecordIdentifierFeatureNameT&& value) { SetRecordIdentifierFeatureName(std::forward<RecordIdentifierFeatureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the feature that stores the <code>EventTime</code> of a Record in
     * a <code>FeatureGroup</code>.</p> <p>A <code>EventTime</code> is point in time
     * when a new event occurs that corresponds to the creation or update of a
     * <code>Record</code> in <code>FeatureGroup</code>. All <code>Records</code> in
     * the <code>FeatureGroup</code> must have a corresponding
     * <code>EventTime</code>.</p>
     */
    inline const Aws::String& GetEventTimeFeatureName() const { return m_eventTimeFeatureName; }
    inline bool EventTimeFeatureNameHasBeenSet() const { return m_eventTimeFeatureNameHasBeenSet; }
    template<typename EventTimeFeatureNameT = Aws::String>
    void SetEventTimeFeatureName(EventTimeFeatureNameT&& value) { m_eventTimeFeatureNameHasBeenSet = true; m_eventTimeFeatureName = std::forward<EventTimeFeatureNameT>(value); }
    template<typename EventTimeFeatureNameT = Aws::String>
    FeatureGroup& WithEventTimeFeatureName(EventTimeFeatureNameT&& value) { SetEventTimeFeatureName(std::forward<EventTimeFeatureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Feature</code>s. Each <code>Feature</code> must include a
     * <code>FeatureName</code> and a <code>FeatureType</code>. </p> <p>Valid
     * <code>FeatureType</code>s are <code>Integral</code>, <code>Fractional</code> and
     * <code>String</code>. </p> <p> <code>FeatureName</code>s cannot be any of the
     * following: <code>is_deleted</code>, <code>write_time</code>,
     * <code>api_invocation_time</code>.</p> <p>You can create up to 2,500
     * <code>FeatureDefinition</code>s per <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Vector<FeatureDefinition>& GetFeatureDefinitions() const { return m_featureDefinitions; }
    inline bool FeatureDefinitionsHasBeenSet() const { return m_featureDefinitionsHasBeenSet; }
    template<typename FeatureDefinitionsT = Aws::Vector<FeatureDefinition>>
    void SetFeatureDefinitions(FeatureDefinitionsT&& value) { m_featureDefinitionsHasBeenSet = true; m_featureDefinitions = std::forward<FeatureDefinitionsT>(value); }
    template<typename FeatureDefinitionsT = Aws::Vector<FeatureDefinition>>
    FeatureGroup& WithFeatureDefinitions(FeatureDefinitionsT&& value) { SetFeatureDefinitions(std::forward<FeatureDefinitionsT>(value)); return *this;}
    template<typename FeatureDefinitionsT = FeatureDefinition>
    FeatureGroup& AddFeatureDefinitions(FeatureDefinitionsT&& value) { m_featureDefinitionsHasBeenSet = true; m_featureDefinitions.emplace_back(std::forward<FeatureDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time a <code>FeatureGroup</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    FeatureGroup& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating the last time you updated the feature group.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    FeatureGroup& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OnlineStoreConfig& GetOnlineStoreConfig() const { return m_onlineStoreConfig; }
    inline bool OnlineStoreConfigHasBeenSet() const { return m_onlineStoreConfigHasBeenSet; }
    template<typename OnlineStoreConfigT = OnlineStoreConfig>
    void SetOnlineStoreConfig(OnlineStoreConfigT&& value) { m_onlineStoreConfigHasBeenSet = true; m_onlineStoreConfig = std::forward<OnlineStoreConfigT>(value); }
    template<typename OnlineStoreConfigT = OnlineStoreConfig>
    FeatureGroup& WithOnlineStoreConfig(OnlineStoreConfigT&& value) { SetOnlineStoreConfig(std::forward<OnlineStoreConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OfflineStoreConfig& GetOfflineStoreConfig() const { return m_offlineStoreConfig; }
    inline bool OfflineStoreConfigHasBeenSet() const { return m_offlineStoreConfigHasBeenSet; }
    template<typename OfflineStoreConfigT = OfflineStoreConfig>
    void SetOfflineStoreConfig(OfflineStoreConfigT&& value) { m_offlineStoreConfigHasBeenSet = true; m_offlineStoreConfig = std::forward<OfflineStoreConfigT>(value); }
    template<typename OfflineStoreConfigT = OfflineStoreConfig>
    FeatureGroup& WithOfflineStoreConfig(OfflineStoreConfigT&& value) { SetOfflineStoreConfig(std::forward<OfflineStoreConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to create the
     * feature group.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    FeatureGroup& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FeatureGroup</code> status.</p>
     */
    inline FeatureGroupStatus GetFeatureGroupStatus() const { return m_featureGroupStatus; }
    inline bool FeatureGroupStatusHasBeenSet() const { return m_featureGroupStatusHasBeenSet; }
    inline void SetFeatureGroupStatus(FeatureGroupStatus value) { m_featureGroupStatusHasBeenSet = true; m_featureGroupStatus = value; }
    inline FeatureGroup& WithFeatureGroupStatus(FeatureGroupStatus value) { SetFeatureGroupStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const OfflineStoreStatus& GetOfflineStoreStatus() const { return m_offlineStoreStatus; }
    inline bool OfflineStoreStatusHasBeenSet() const { return m_offlineStoreStatusHasBeenSet; }
    template<typename OfflineStoreStatusT = OfflineStoreStatus>
    void SetOfflineStoreStatus(OfflineStoreStatusT&& value) { m_offlineStoreStatusHasBeenSet = true; m_offlineStoreStatus = std::forward<OfflineStoreStatusT>(value); }
    template<typename OfflineStoreStatusT = OfflineStoreStatus>
    FeatureGroup& WithOfflineStoreStatus(OfflineStoreStatusT&& value) { SetOfflineStoreStatus(std::forward<OfflineStoreStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the feature group was updated
     * successfully.</p>
     */
    inline const LastUpdateStatus& GetLastUpdateStatus() const { return m_lastUpdateStatus; }
    inline bool LastUpdateStatusHasBeenSet() const { return m_lastUpdateStatusHasBeenSet; }
    template<typename LastUpdateStatusT = LastUpdateStatus>
    void SetLastUpdateStatus(LastUpdateStatusT&& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = std::forward<LastUpdateStatusT>(value); }
    template<typename LastUpdateStatusT = LastUpdateStatus>
    FeatureGroup& WithLastUpdateStatus(LastUpdateStatusT&& value) { SetLastUpdateStatus(std::forward<LastUpdateStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the <code>FeatureGroup</code> failed to be replicated in the
     * <code>OfflineStore</code>. This is failure may be due to a failure to create a
     * <code>FeatureGroup</code> in or delete a <code>FeatureGroup</code> from the
     * <code>OfflineStore</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    FeatureGroup& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A free form description of a <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    FeatureGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags used to define a <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    FeatureGroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    FeatureGroup& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_featureGroupArn;
    bool m_featureGroupArnHasBeenSet = false;

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_recordIdentifierFeatureName;
    bool m_recordIdentifierFeatureNameHasBeenSet = false;

    Aws::String m_eventTimeFeatureName;
    bool m_eventTimeFeatureNameHasBeenSet = false;

    Aws::Vector<FeatureDefinition> m_featureDefinitions;
    bool m_featureDefinitionsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    OnlineStoreConfig m_onlineStoreConfig;
    bool m_onlineStoreConfigHasBeenSet = false;

    OfflineStoreConfig m_offlineStoreConfig;
    bool m_offlineStoreConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    FeatureGroupStatus m_featureGroupStatus{FeatureGroupStatus::NOT_SET};
    bool m_featureGroupStatusHasBeenSet = false;

    OfflineStoreStatus m_offlineStoreStatus;
    bool m_offlineStoreStatusHasBeenSet = false;

    LastUpdateStatus m_lastUpdateStatus;
    bool m_lastUpdateStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
