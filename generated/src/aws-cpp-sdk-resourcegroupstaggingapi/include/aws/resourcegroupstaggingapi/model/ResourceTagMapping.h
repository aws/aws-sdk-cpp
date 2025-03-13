/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resourcegroupstaggingapi/model/ComplianceDetails.h>
#include <aws/resourcegroupstaggingapi/model/Tag.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   * <p>A list of resource ARNs and the tags (keys and values) that are associated
   * with each.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/ResourceTagMapping">AWS
   * API Reference</a></p>
   */
  class ResourceTagMapping
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceTagMapping() = default;
    AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceTagMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceTagMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    ResourceTagMapping& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that have been applied to one or more Amazon Web Services
     * resources.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ResourceTagMapping& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ResourceTagMapping& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information that shows whether a resource is compliant with the effective tag
     * policy, including details on any noncompliant tag keys.</p>
     */
    inline const ComplianceDetails& GetComplianceDetails() const { return m_complianceDetails; }
    inline bool ComplianceDetailsHasBeenSet() const { return m_complianceDetailsHasBeenSet; }
    template<typename ComplianceDetailsT = ComplianceDetails>
    void SetComplianceDetails(ComplianceDetailsT&& value) { m_complianceDetailsHasBeenSet = true; m_complianceDetails = std::forward<ComplianceDetailsT>(value); }
    template<typename ComplianceDetailsT = ComplianceDetails>
    ResourceTagMapping& WithComplianceDetails(ComplianceDetailsT&& value) { SetComplianceDetails(std::forward<ComplianceDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ComplianceDetails m_complianceDetails;
    bool m_complianceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
