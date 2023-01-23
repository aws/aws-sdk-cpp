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
    AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceTagMapping();
    AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceTagMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceTagMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline ResourceTagMapping& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline ResourceTagMapping& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline ResourceTagMapping& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The tags that have been applied to one or more Amazon Web Services
     * resources.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that have been applied to one or more Amazon Web Services
     * resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that have been applied to one or more Amazon Web Services
     * resources.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that have been applied to one or more Amazon Web Services
     * resources.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that have been applied to one or more Amazon Web Services
     * resources.</p>
     */
    inline ResourceTagMapping& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that have been applied to one or more Amazon Web Services
     * resources.</p>
     */
    inline ResourceTagMapping& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that have been applied to one or more Amazon Web Services
     * resources.</p>
     */
    inline ResourceTagMapping& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags that have been applied to one or more Amazon Web Services
     * resources.</p>
     */
    inline ResourceTagMapping& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Information that shows whether a resource is compliant with the effective tag
     * policy, including details on any noncompliant tag keys.</p>
     */
    inline const ComplianceDetails& GetComplianceDetails() const{ return m_complianceDetails; }

    /**
     * <p>Information that shows whether a resource is compliant with the effective tag
     * policy, including details on any noncompliant tag keys.</p>
     */
    inline bool ComplianceDetailsHasBeenSet() const { return m_complianceDetailsHasBeenSet; }

    /**
     * <p>Information that shows whether a resource is compliant with the effective tag
     * policy, including details on any noncompliant tag keys.</p>
     */
    inline void SetComplianceDetails(const ComplianceDetails& value) { m_complianceDetailsHasBeenSet = true; m_complianceDetails = value; }

    /**
     * <p>Information that shows whether a resource is compliant with the effective tag
     * policy, including details on any noncompliant tag keys.</p>
     */
    inline void SetComplianceDetails(ComplianceDetails&& value) { m_complianceDetailsHasBeenSet = true; m_complianceDetails = std::move(value); }

    /**
     * <p>Information that shows whether a resource is compliant with the effective tag
     * policy, including details on any noncompliant tag keys.</p>
     */
    inline ResourceTagMapping& WithComplianceDetails(const ComplianceDetails& value) { SetComplianceDetails(value); return *this;}

    /**
     * <p>Information that shows whether a resource is compliant with the effective tag
     * policy, including details on any noncompliant tag keys.</p>
     */
    inline ResourceTagMapping& WithComplianceDetails(ComplianceDetails&& value) { SetComplianceDetails(std::move(value)); return *this;}

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
