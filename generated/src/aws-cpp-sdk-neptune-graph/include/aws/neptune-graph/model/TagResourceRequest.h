/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>ARN of the resource for which tags need to be added.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>ARN of the resource for which tags need to be added.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>ARN of the resource for which tags need to be added.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>ARN of the resource for which tags need to be added.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>ARN of the resource for which tags need to be added.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>ARN of the resource for which tags need to be added.</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>ARN of the resource for which tags need to be added.</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the resource for which tags need to be added.</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline TagResourceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be assigned to the Neptune Analytics resource.</p> <p>The tags
     * are metadata that are specified as a list of key-value pairs:</p> <p> <b>Key</b>
     * (string)   –   A key is the required name of the tag. The string value can be
     * from 1 to 128 Unicode characters in length. It can't be prefixed with
     * <code>aws:</code> and can only contain the set of Unicode characters specified
     * by this Java regular expression:
     * <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p> <p> <b>Value</b> (string)  
     * –   A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length. It can't be prefixed with <code>aws:</code>
     * and can only contain the set of Unicode characters specified by this Java
     * regular expression: <code>"^([\p{L}\p{Z}\p{N}_.:/=+\-]*)$")</code>.</p>
     */
    inline TagResourceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
