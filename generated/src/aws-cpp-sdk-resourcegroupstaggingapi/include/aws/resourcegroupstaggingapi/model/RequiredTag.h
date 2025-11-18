/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ResourceGroupsTaggingAPI {
namespace Model {

/**
 * <p>Information that describes the required tags for a given resource
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/RequiredTag">AWS
 * API Reference</a></p>
 */
class RequiredTag {
 public:
  AWS_RESOURCEGROUPSTAGGINGAPI_API RequiredTag() = default;
  AWS_RESOURCEGROUPSTAGGINGAPI_API RequiredTag(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEGROUPSTAGGINGAPI_API RequiredTag& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Describes the resource type for the required tag keys.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  RequiredTag& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the CloudFormation resource type assigned the required tag
   * keys.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCloudFormationResourceTypes() const { return m_cloudFormationResourceTypes; }
  inline bool CloudFormationResourceTypesHasBeenSet() const { return m_cloudFormationResourceTypesHasBeenSet; }
  template <typename CloudFormationResourceTypesT = Aws::Vector<Aws::String>>
  void SetCloudFormationResourceTypes(CloudFormationResourceTypesT&& value) {
    m_cloudFormationResourceTypesHasBeenSet = true;
    m_cloudFormationResourceTypes = std::forward<CloudFormationResourceTypesT>(value);
  }
  template <typename CloudFormationResourceTypesT = Aws::Vector<Aws::String>>
  RequiredTag& WithCloudFormationResourceTypes(CloudFormationResourceTypesT&& value) {
    SetCloudFormationResourceTypes(std::forward<CloudFormationResourceTypesT>(value));
    return *this;
  }
  template <typename CloudFormationResourceTypesT = Aws::String>
  RequiredTag& AddCloudFormationResourceTypes(CloudFormationResourceTypesT&& value) {
    m_cloudFormationResourceTypesHasBeenSet = true;
    m_cloudFormationResourceTypes.emplace_back(std::forward<CloudFormationResourceTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>These tag keys are marked as <code>required</code> in the
   * <code>report_required_tag_for</code> block of the effective tag policy.</p>
   */
  inline const Aws::Vector<Aws::String>& GetReportingTagKeys() const { return m_reportingTagKeys; }
  inline bool ReportingTagKeysHasBeenSet() const { return m_reportingTagKeysHasBeenSet; }
  template <typename ReportingTagKeysT = Aws::Vector<Aws::String>>
  void SetReportingTagKeys(ReportingTagKeysT&& value) {
    m_reportingTagKeysHasBeenSet = true;
    m_reportingTagKeys = std::forward<ReportingTagKeysT>(value);
  }
  template <typename ReportingTagKeysT = Aws::Vector<Aws::String>>
  RequiredTag& WithReportingTagKeys(ReportingTagKeysT&& value) {
    SetReportingTagKeys(std::forward<ReportingTagKeysT>(value));
    return *this;
  }
  template <typename ReportingTagKeysT = Aws::String>
  RequiredTag& AddReportingTagKeys(ReportingTagKeysT&& value) {
    m_reportingTagKeysHasBeenSet = true;
    m_reportingTagKeys.emplace_back(std::forward<ReportingTagKeysT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceType;
  bool m_resourceTypeHasBeenSet = false;

  Aws::Vector<Aws::String> m_cloudFormationResourceTypes;
  bool m_cloudFormationResourceTypesHasBeenSet = false;

  Aws::Vector<Aws::String> m_reportingTagKeys;
  bool m_reportingTagKeysHasBeenSet = false;
};

}  // namespace Model
}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
