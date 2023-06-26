/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/Tag.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class CreateSubnetGroupRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API CreateSubnetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubnetGroup"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the subnet group.</p>
     */
    inline const Aws::String& GetSubnetGroupName() const{ return m_subnetGroupName; }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline bool SubnetGroupNameHasBeenSet() const { return m_subnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline void SetSubnetGroupName(const Aws::String& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = value; }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline void SetSubnetGroupName(Aws::String&& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = std::move(value); }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline void SetSubnetGroupName(const char* value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName.assign(value); }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline CreateSubnetGroupRequest& WithSubnetGroupName(const Aws::String& value) { SetSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the subnet group.</p>
     */
    inline CreateSubnetGroupRequest& WithSubnetGroupName(Aws::String&& value) { SetSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the subnet group.</p>
     */
    inline CreateSubnetGroupRequest& WithSubnetGroupName(const char* value) { SetSubnetGroupName(value); return *this;}


    /**
     * <p>A description for the subnet group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the subnet group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the subnet group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the subnet group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the subnet group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the subnet group.</p>
     */
    inline CreateSubnetGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the subnet group.</p>
     */
    inline CreateSubnetGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the subnet group.</p>
     */
    inline CreateSubnetGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of VPC subnet IDs for the subnet group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of VPC subnet IDs for the subnet group.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of VPC subnet IDs for the subnet group.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of VPC subnet IDs for the subnet group.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of VPC subnet IDs for the subnet group.</p>
     */
    inline CreateSubnetGroupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of VPC subnet IDs for the subnet group.</p>
     */
    inline CreateSubnetGroupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC subnet IDs for the subnet group.</p>
     */
    inline CreateSubnetGroupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC subnet IDs for the subnet group.</p>
     */
    inline CreateSubnetGroupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of VPC subnet IDs for the subnet group.</p>
     */
    inline CreateSubnetGroupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline CreateSubnetGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline CreateSubnetGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline CreateSubnetGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline CreateSubnetGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_subnetGroupName;
    bool m_subnetGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
