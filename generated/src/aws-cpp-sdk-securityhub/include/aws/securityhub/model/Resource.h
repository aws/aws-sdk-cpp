/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Partition.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/DataClassificationDetails.h>
#include <aws/securityhub/model/ResourceDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A resource related to a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_SECURITYHUB_API Resource() = default;
    AWS_SECURITYHUB_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the resource that details are provided for. If possible, set
     * <code>Type</code> to one of the supported resource types. For example, if the
     * resource is an EC2 instance, then set <code>Type</code> to
     * <code>AwsEc2Instance</code>.</p> <p>If the resource does not match any of the
     * provided types, then set <code>Type</code> to <code>Other</code>. </p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 256.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Resource& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Resource& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canonical Amazon Web Services partition name that the Region is assigned
     * to.</p>
     */
    inline Partition GetPartition() const { return m_partition; }
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }
    inline void SetPartition(Partition value) { m_partitionHasBeenSet = true; m_partition = value; }
    inline Resource& WithPartition(Partition value) { SetPartition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canonical Amazon Web Services external Region name where this resource is
     * located.</p> <p>Length Constraints: Minimum length of 1. Maximum length of
     * 16.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Resource& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the role of the resource in the finding. A resource is either the
     * actor or target of the finding activity,</p>
     */
    inline const Aws::String& GetResourceRole() const { return m_resourceRole; }
    inline bool ResourceRoleHasBeenSet() const { return m_resourceRoleHasBeenSet; }
    template<typename ResourceRoleT = Aws::String>
    void SetResourceRole(ResourceRoleT&& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = std::forward<ResourceRoleT>(value); }
    template<typename ResourceRoleT = Aws::String>
    Resource& WithResourceRole(ResourceRoleT&& value) { SetResourceRole(std::forward<ResourceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed. Tags must follow <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html#tag-conventions">Amazon
     * Web Services tag naming limits and requirements</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Resource& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Resource& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Contains information about sensitive data that was detected on the
     * resource.</p>
     */
    inline const DataClassificationDetails& GetDataClassification() const { return m_dataClassification; }
    inline bool DataClassificationHasBeenSet() const { return m_dataClassificationHasBeenSet; }
    template<typename DataClassificationT = DataClassificationDetails>
    void SetDataClassification(DataClassificationT&& value) { m_dataClassificationHasBeenSet = true; m_dataClassification = std::forward<DataClassificationT>(value); }
    template<typename DataClassificationT = DataClassificationDetails>
    Resource& WithDataClassification(DataClassificationT&& value) { SetDataClassification(std::forward<DataClassificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline const ResourceDetails& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = ResourceDetails>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = ResourceDetails>
    Resource& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the application that is related to a finding. </p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    Resource& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the application that is related to a
     * finding. </p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    Resource& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Partition m_partition{Partition::NOT_SET};
    bool m_partitionHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_resourceRole;
    bool m_resourceRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    DataClassificationDetails m_dataClassification;
    bool m_dataClassificationHasBeenSet = false;

    ResourceDetails m_details;
    bool m_detailsHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
