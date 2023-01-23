/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the resource to add a tag to.</p> <p>You can specify any of the
     * following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource to add a tag to.</p> <p>You can specify any of the
     * following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource to add a tag to.</p> <p>You can specify any of the
     * following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource to add a tag to.</p> <p>You can specify any of the
     * following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource to add a tag to.</p> <p>You can specify any of the
     * following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource to add a tag to.</p> <p>You can specify any of the
     * following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline TagResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource to add a tag to.</p> <p>You can specify any of the
     * following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline TagResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource to add a tag to.</p> <p>You can specify any of the
     * following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline TagResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>A list of tags to add to the specified resource.</p> <p>For each tag in the
     * list, you must specify both a tag key and a value. The value can be an empty
     * string, but you can't set it to <code>null</code>.</p>  <p>If any one of
     * the tags is invalid or if you exceed the maximum allowed number of tags for a
     * resource, then the entire request fails.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to add to the specified resource.</p> <p>For each tag in the
     * list, you must specify both a tag key and a value. The value can be an empty
     * string, but you can't set it to <code>null</code>.</p>  <p>If any one of
     * the tags is invalid or if you exceed the maximum allowed number of tags for a
     * resource, then the entire request fails.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to add to the specified resource.</p> <p>For each tag in the
     * list, you must specify both a tag key and a value. The value can be an empty
     * string, but you can't set it to <code>null</code>.</p>  <p>If any one of
     * the tags is invalid or if you exceed the maximum allowed number of tags for a
     * resource, then the entire request fails.</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to add to the specified resource.</p> <p>For each tag in the
     * list, you must specify both a tag key and a value. The value can be an empty
     * string, but you can't set it to <code>null</code>.</p>  <p>If any one of
     * the tags is invalid or if you exceed the maximum allowed number of tags for a
     * resource, then the entire request fails.</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to add to the specified resource.</p> <p>For each tag in the
     * list, you must specify both a tag key and a value. The value can be an empty
     * string, but you can't set it to <code>null</code>.</p>  <p>If any one of
     * the tags is invalid or if you exceed the maximum allowed number of tags for a
     * resource, then the entire request fails.</p> 
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to add to the specified resource.</p> <p>For each tag in the
     * list, you must specify both a tag key and a value. The value can be an empty
     * string, but you can't set it to <code>null</code>.</p>  <p>If any one of
     * the tags is invalid or if you exceed the maximum allowed number of tags for a
     * resource, then the entire request fails.</p> 
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to add to the specified resource.</p> <p>For each tag in the
     * list, you must specify both a tag key and a value. The value can be an empty
     * string, but you can't set it to <code>null</code>.</p>  <p>If any one of
     * the tags is invalid or if you exceed the maximum allowed number of tags for a
     * resource, then the entire request fails.</p> 
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to add to the specified resource.</p> <p>For each tag in the
     * list, you must specify both a tag key and a value. The value can be an empty
     * string, but you can't set it to <code>null</code>.</p>  <p>If any one of
     * the tags is invalid or if you exceed the maximum allowed number of tags for a
     * resource, then the entire request fails.</p> 
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
