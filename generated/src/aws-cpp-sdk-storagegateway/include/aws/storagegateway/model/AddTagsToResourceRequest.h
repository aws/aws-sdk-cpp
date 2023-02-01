/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>AddTagsToResourceInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AddTagsToResourceInput">AWS
   * API Reference</a></p>
   */
  class AddTagsToResourceRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API AddTagsToResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTagsToResource"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline AddTagsToResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline AddTagsToResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline AddTagsToResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. The maximum length of a tag's key
     * is 128 characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. The maximum length of a tag's key
     * is 128 characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. The maximum length of a tag's key
     * is 128 characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. The maximum length of a tag's key
     * is 128 characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. The maximum length of a tag's key
     * is 128 characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline AddTagsToResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. The maximum length of a tag's key
     * is 128 characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline AddTagsToResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. The maximum length of a tag's key
     * is 128 characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline AddTagsToResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. The maximum length of a tag's key
     * is 128 characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline AddTagsToResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
