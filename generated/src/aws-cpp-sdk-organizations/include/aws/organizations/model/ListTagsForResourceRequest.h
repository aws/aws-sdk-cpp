/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class ListTagsForResourceRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the resource with the tags to list.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
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
     * <p>The ID of the resource with the tags to list.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
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
     * <p>The ID of the resource with the tags to list.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
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
     * <p>The ID of the resource with the tags to list.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
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
     * <p>The ID of the resource with the tags to list.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
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
     * <p>The ID of the resource with the tags to list.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline ListTagsForResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource with the tags to list.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline ListTagsForResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource with the tags to list.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline ListTagsForResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
