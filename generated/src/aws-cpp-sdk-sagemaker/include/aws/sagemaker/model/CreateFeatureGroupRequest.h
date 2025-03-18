/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OnlineStoreConfig.h>
#include <aws/sagemaker/model/OfflineStoreConfig.h>
#include <aws/sagemaker/model/ThroughputConfig.h>
#include <aws/sagemaker/model/FeatureDefinition.h>
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
  class CreateFeatureGroupRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateFeatureGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFeatureGroup"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the <code>FeatureGroup</code>. The name must be unique within an
     * Amazon Web Services Region in an Amazon Web Services account.</p> <p>The
     * name:</p> <ul> <li> <p>Must start with an alphanumeric character.</p> </li> <li>
     * <p>Can only include alphanumeric characters, underscores, and hyphens. Spaces
     * are not allowed.</p> </li> </ul>
     */
    inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    template<typename FeatureGroupNameT = Aws::String>
    void SetFeatureGroupName(FeatureGroupNameT&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::forward<FeatureGroupNameT>(value); }
    template<typename FeatureGroupNameT = Aws::String>
    CreateFeatureGroupRequest& WithFeatureGroupName(FeatureGroupNameT&& value) { SetFeatureGroupName(std::forward<FeatureGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>Feature</code> whose value uniquely identifies a
     * <code>Record</code> defined in the <code>FeatureStore</code>. Only the latest
     * record per identifier value will be stored in the <code>OnlineStore</code>.
     * <code>RecordIdentifierFeatureName</code> must be one of feature definitions'
     * names.</p> <p>You use the <code>RecordIdentifierFeatureName</code> to access
     * data in a <code>FeatureStore</code>.</p> <p>This name:</p> <ul> <li> <p>Must
     * start with an alphanumeric character.</p> </li> <li> <p>Can only contains
     * alphanumeric characters, hyphens, underscores. Spaces are not allowed. </p>
     * </li> </ul>
     */
    inline const Aws::String& GetRecordIdentifierFeatureName() const { return m_recordIdentifierFeatureName; }
    inline bool RecordIdentifierFeatureNameHasBeenSet() const { return m_recordIdentifierFeatureNameHasBeenSet; }
    template<typename RecordIdentifierFeatureNameT = Aws::String>
    void SetRecordIdentifierFeatureName(RecordIdentifierFeatureNameT&& value) { m_recordIdentifierFeatureNameHasBeenSet = true; m_recordIdentifierFeatureName = std::forward<RecordIdentifierFeatureNameT>(value); }
    template<typename RecordIdentifierFeatureNameT = Aws::String>
    CreateFeatureGroupRequest& WithRecordIdentifierFeatureName(RecordIdentifierFeatureNameT&& value) { SetRecordIdentifierFeatureName(std::forward<RecordIdentifierFeatureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the feature that stores the <code>EventTime</code> of a
     * <code>Record</code> in a <code>FeatureGroup</code>.</p> <p>An
     * <code>EventTime</code> is a point in time when a new event occurs that
     * corresponds to the creation or update of a <code>Record</code> in a
     * <code>FeatureGroup</code>. All <code>Records</code> in the
     * <code>FeatureGroup</code> must have a corresponding <code>EventTime</code>.</p>
     * <p>An <code>EventTime</code> can be a <code>String</code> or
     * <code>Fractional</code>. </p> <ul> <li> <p> <code>Fractional</code>:
     * <code>EventTime</code> feature values must be a Unix timestamp in seconds.</p>
     * </li> <li> <p> <code>String</code>: <code>EventTime</code> feature values must
     * be an ISO-8601 string in the format. The following formats are supported
     * <code>yyyy-MM-dd'T'HH:mm:ssZ</code> and <code>yyyy-MM-dd'T'HH:mm:ss.SSSZ</code>
     * where <code>yyyy</code>, <code>MM</code>, and <code>dd</code> represent the
     * year, month, and day respectively and <code>HH</code>, <code>mm</code>,
     * <code>ss</code>, and if applicable, <code>SSS</code> represent the hour, month,
     * second and milliseconds respsectively. <code>'T'</code> and <code>Z</code> are
     * constants.</p> </li> </ul>
     */
    inline const Aws::String& GetEventTimeFeatureName() const { return m_eventTimeFeatureName; }
    inline bool EventTimeFeatureNameHasBeenSet() const { return m_eventTimeFeatureNameHasBeenSet; }
    template<typename EventTimeFeatureNameT = Aws::String>
    void SetEventTimeFeatureName(EventTimeFeatureNameT&& value) { m_eventTimeFeatureNameHasBeenSet = true; m_eventTimeFeatureName = std::forward<EventTimeFeatureNameT>(value); }
    template<typename EventTimeFeatureNameT = Aws::String>
    CreateFeatureGroupRequest& WithEventTimeFeatureName(EventTimeFeatureNameT&& value) { SetEventTimeFeatureName(std::forward<EventTimeFeatureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Feature</code> names and types. <code>Name</code> and
     * <code>Type</code> is compulsory per <code>Feature</code>. </p> <p>Valid feature
     * <code>FeatureType</code>s are <code>Integral</code>, <code>Fractional</code> and
     * <code>String</code>.</p> <p> <code>FeatureName</code>s cannot be any of the
     * following: <code>is_deleted</code>, <code>write_time</code>,
     * <code>api_invocation_time</code> </p> <p>You can create up to 2,500
     * <code>FeatureDefinition</code>s per <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Vector<FeatureDefinition>& GetFeatureDefinitions() const { return m_featureDefinitions; }
    inline bool FeatureDefinitionsHasBeenSet() const { return m_featureDefinitionsHasBeenSet; }
    template<typename FeatureDefinitionsT = Aws::Vector<FeatureDefinition>>
    void SetFeatureDefinitions(FeatureDefinitionsT&& value) { m_featureDefinitionsHasBeenSet = true; m_featureDefinitions = std::forward<FeatureDefinitionsT>(value); }
    template<typename FeatureDefinitionsT = Aws::Vector<FeatureDefinition>>
    CreateFeatureGroupRequest& WithFeatureDefinitions(FeatureDefinitionsT&& value) { SetFeatureDefinitions(std::forward<FeatureDefinitionsT>(value)); return *this;}
    template<typename FeatureDefinitionsT = FeatureDefinition>
    CreateFeatureGroupRequest& AddFeatureDefinitions(FeatureDefinitionsT&& value) { m_featureDefinitionsHasBeenSet = true; m_featureDefinitions.emplace_back(std::forward<FeatureDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can turn the <code>OnlineStore</code> on or off by specifying
     * <code>True</code> for the <code>EnableOnlineStore</code> flag in
     * <code>OnlineStoreConfig</code>.</p> <p>You can also include an Amazon Web
     * Services KMS key ID (<code>KMSKeyId</code>) for at-rest encryption of the
     * <code>OnlineStore</code>.</p> <p>The default value is <code>False</code>.</p>
     */
    inline const OnlineStoreConfig& GetOnlineStoreConfig() const { return m_onlineStoreConfig; }
    inline bool OnlineStoreConfigHasBeenSet() const { return m_onlineStoreConfigHasBeenSet; }
    template<typename OnlineStoreConfigT = OnlineStoreConfig>
    void SetOnlineStoreConfig(OnlineStoreConfigT&& value) { m_onlineStoreConfigHasBeenSet = true; m_onlineStoreConfig = std::forward<OnlineStoreConfigT>(value); }
    template<typename OnlineStoreConfigT = OnlineStoreConfig>
    CreateFeatureGroupRequest& WithOnlineStoreConfig(OnlineStoreConfigT&& value) { SetOnlineStoreConfig(std::forward<OnlineStoreConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this to configure an <code>OfflineFeatureStore</code>. This parameter
     * allows you to specify:</p> <ul> <li> <p>The Amazon Simple Storage Service
     * (Amazon S3) location of an <code>OfflineStore</code>.</p> </li> <li> <p>A
     * configuration for an Amazon Web Services Glue or Amazon Web Services Hive data
     * catalog. </p> </li> <li> <p>An KMS encryption key to encrypt the Amazon S3
     * location used for <code>OfflineStore</code>. If KMS encryption key is not
     * specified, by default we encrypt all data at rest using Amazon Web Services KMS
     * key. By defining your <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucket-key.html">bucket-level
     * key</a> for SSE, you can reduce Amazon Web Services KMS requests costs by up to
     * 99 percent.</p> </li> <li> <p>Format for the offline store table. Supported
     * formats are Glue (Default) and <a href="https://iceberg.apache.org/">Apache
     * Iceberg</a>.</p> </li> </ul> <p>To learn more about this parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OfflineStoreConfig.html">OfflineStoreConfig</a>.</p>
     */
    inline const OfflineStoreConfig& GetOfflineStoreConfig() const { return m_offlineStoreConfig; }
    inline bool OfflineStoreConfigHasBeenSet() const { return m_offlineStoreConfigHasBeenSet; }
    template<typename OfflineStoreConfigT = OfflineStoreConfig>
    void SetOfflineStoreConfig(OfflineStoreConfigT&& value) { m_offlineStoreConfigHasBeenSet = true; m_offlineStoreConfig = std::forward<OfflineStoreConfigT>(value); }
    template<typename OfflineStoreConfigT = OfflineStoreConfig>
    CreateFeatureGroupRequest& WithOfflineStoreConfig(OfflineStoreConfigT&& value) { SetOfflineStoreConfig(std::forward<OfflineStoreConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ThroughputConfig& GetThroughputConfig() const { return m_throughputConfig; }
    inline bool ThroughputConfigHasBeenSet() const { return m_throughputConfigHasBeenSet; }
    template<typename ThroughputConfigT = ThroughputConfig>
    void SetThroughputConfig(ThroughputConfigT&& value) { m_throughputConfigHasBeenSet = true; m_throughputConfig = std::forward<ThroughputConfigT>(value); }
    template<typename ThroughputConfigT = ThroughputConfig>
    CreateFeatureGroupRequest& WithThroughputConfig(ThroughputConfigT&& value) { SetThroughputConfig(std::forward<ThroughputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to persist data
     * into the <code>OfflineStore</code> if an <code>OfflineStoreConfig</code> is
     * provided.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateFeatureGroupRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A free-form description of a <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateFeatureGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags used to identify <code>Features</code> in each
     * <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateFeatureGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateFeatureGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_recordIdentifierFeatureName;
    bool m_recordIdentifierFeatureNameHasBeenSet = false;

    Aws::String m_eventTimeFeatureName;
    bool m_eventTimeFeatureNameHasBeenSet = false;

    Aws::Vector<FeatureDefinition> m_featureDefinitions;
    bool m_featureDefinitionsHasBeenSet = false;

    OnlineStoreConfig m_onlineStoreConfig;
    bool m_onlineStoreConfigHasBeenSet = false;

    OfflineStoreConfig m_offlineStoreConfig;
    bool m_offlineStoreConfigHasBeenSet = false;

    ThroughputConfig m_throughputConfig;
    bool m_throughputConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
