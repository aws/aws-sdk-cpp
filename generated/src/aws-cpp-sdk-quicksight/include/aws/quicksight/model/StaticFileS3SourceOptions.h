/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The structure that contains the Amazon S3 location to download the static
   * file from.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StaticFileS3SourceOptions">AWS
   * API Reference</a></p>
   */
  class StaticFileS3SourceOptions
  {
  public:
    AWS_QUICKSIGHT_API StaticFileS3SourceOptions();
    AWS_QUICKSIGHT_API StaticFileS3SourceOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StaticFileS3SourceOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline StaticFileS3SourceOptions& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline StaticFileS3SourceOptions& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline StaticFileS3SourceOptions& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the static file in the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetObjectKey() const{ return m_objectKey; }
    inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }
    inline void SetObjectKey(const Aws::String& value) { m_objectKeyHasBeenSet = true; m_objectKey = value; }
    inline void SetObjectKey(Aws::String&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::move(value); }
    inline void SetObjectKey(const char* value) { m_objectKeyHasBeenSet = true; m_objectKey.assign(value); }
    inline StaticFileS3SourceOptions& WithObjectKey(const Aws::String& value) { SetObjectKey(value); return *this;}
    inline StaticFileS3SourceOptions& WithObjectKey(Aws::String&& value) { SetObjectKey(std::move(value)); return *this;}
    inline StaticFileS3SourceOptions& WithObjectKey(const char* value) { SetObjectKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region of the Amazon S3 account that contains the bucket.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline StaticFileS3SourceOptions& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline StaticFileS3SourceOptions& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline StaticFileS3SourceOptions& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKey;
    bool m_objectKeyHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
