/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    /**
     * The Amazon Resource Name (ARN) of the resource that you want to remove tags
     * from. To get the ARN, send a GET request with the resource name.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The Amazon Resource Name (ARN) of the resource that you want to remove tags
     * from. To get the ARN, send a GET request with the resource name.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the resource that you want to remove tags
     * from. To get the ARN, send a GET request with the resource name.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The Amazon Resource Name (ARN) of the resource that you want to remove tags
     * from. To get the ARN, send a GET request with the resource name.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the resource that you want to remove tags
     * from. To get the ARN, send a GET request with the resource name.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the resource that you want to remove tags
     * from. To get the ARN, send a GET request with the resource name.
     */
    inline UntagResourceRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the resource that you want to remove tags
     * from. To get the ARN, send a GET request with the resource name.
     */
    inline UntagResourceRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the resource that you want to remove tags
     * from. To get the ARN, send a GET request with the resource name.
     */
    inline UntagResourceRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The keys of the tags that you want to remove from the resource.
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * The keys of the tags that you want to remove from the resource.
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * The keys of the tags that you want to remove from the resource.
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * The keys of the tags that you want to remove from the resource.
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * The keys of the tags that you want to remove from the resource.
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * The keys of the tags that you want to remove from the resource.
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * The keys of the tags that you want to remove from the resource.
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * The keys of the tags that you want to remove from the resource.
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * The keys of the tags that you want to remove from the resource.
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
