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
    AWS_SECURITYHUB_API Resource();
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
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline Resource& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline Resource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline Resource& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canonical identifier for the given resource type.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Resource& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canonical Amazon Web Services partition name that the Region is assigned
     * to.</p>
     */
    inline const Partition& GetPartition() const{ return m_partition; }
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }
    inline void SetPartition(const Partition& value) { m_partitionHasBeenSet = true; m_partition = value; }
    inline void SetPartition(Partition&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }
    inline Resource& WithPartition(const Partition& value) { SetPartition(value); return *this;}
    inline Resource& WithPartition(Partition&& value) { SetPartition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canonical Amazon Web Services external Region name where this resource is
     * located.</p> <p>Length Constraints: Minimum length of 1. Maximum length of
     * 16.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline Resource& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline Resource& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline Resource& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the role of the resource in the finding. A resource is either the
     * actor or target of the finding activity,</p>
     */
    inline const Aws::String& GetResourceRole() const{ return m_resourceRole; }
    inline bool ResourceRoleHasBeenSet() const { return m_resourceRoleHasBeenSet; }
    inline void SetResourceRole(const Aws::String& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = value; }
    inline void SetResourceRole(Aws::String&& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = std::move(value); }
    inline void SetResourceRole(const char* value) { m_resourceRoleHasBeenSet = true; m_resourceRole.assign(value); }
    inline Resource& WithResourceRole(const Aws::String& value) { SetResourceRole(value); return *this;}
    inline Resource& WithResourceRole(Aws::String&& value) { SetResourceRole(std::move(value)); return *this;}
    inline Resource& WithResourceRole(const char* value) { SetResourceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services tags associated with a resource at the time the
     * finding was processed. Tags must follow <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html#tag-conventions">Amazon
     * Web Services tag naming limits and requirements</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Resource& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Resource& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Resource& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Resource& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Resource& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Resource& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Resource& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Resource& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Resource& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about sensitive data that was detected on the
     * resource.</p>
     */
    inline const DataClassificationDetails& GetDataClassification() const{ return m_dataClassification; }
    inline bool DataClassificationHasBeenSet() const { return m_dataClassificationHasBeenSet; }
    inline void SetDataClassification(const DataClassificationDetails& value) { m_dataClassificationHasBeenSet = true; m_dataClassification = value; }
    inline void SetDataClassification(DataClassificationDetails&& value) { m_dataClassificationHasBeenSet = true; m_dataClassification = std::move(value); }
    inline Resource& WithDataClassification(const DataClassificationDetails& value) { SetDataClassification(value); return *this;}
    inline Resource& WithDataClassification(DataClassificationDetails&& value) { SetDataClassification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional details about the resource related to a finding.</p>
     */
    inline const ResourceDetails& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const ResourceDetails& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(ResourceDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline Resource& WithDetails(const ResourceDetails& value) { SetDetails(value); return *this;}
    inline Resource& WithDetails(ResourceDetails&& value) { SetDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the application that is related to a finding. </p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline Resource& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline Resource& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline Resource& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the application that is related to a
     * finding. </p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }
    inline Resource& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline Resource& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline Resource& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Partition m_partition;
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
