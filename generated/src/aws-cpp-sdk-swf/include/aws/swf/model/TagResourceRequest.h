/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/swf/model/ResourceTag.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public SWFRequest
  {
  public:
    AWS_SWF_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon SWF domain.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon SWF domain.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon SWF domain.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon SWF domain.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon SWF domain.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon SWF domain.</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon SWF domain.</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon SWF domain.</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The list of tags to add to a domain. </p> <p>Tags may only contain unicode
     * letters, digits, whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags to add to a domain. </p> <p>Tags may only contain unicode
     * letters, digits, whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags to add to a domain. </p> <p>Tags may only contain unicode
     * letters, digits, whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline void SetTags(const Aws::Vector<ResourceTag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags to add to a domain. </p> <p>Tags may only contain unicode
     * letters, digits, whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline void SetTags(Aws::Vector<ResourceTag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags to add to a domain. </p> <p>Tags may only contain unicode
     * letters, digits, whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<ResourceTag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags to add to a domain. </p> <p>Tags may only contain unicode
     * letters, digits, whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<ResourceTag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags to add to a domain. </p> <p>Tags may only contain unicode
     * letters, digits, whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline TagResourceRequest& AddTags(const ResourceTag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags to add to a domain. </p> <p>Tags may only contain unicode
     * letters, digits, whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline TagResourceRequest& AddTags(ResourceTag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<ResourceTag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
