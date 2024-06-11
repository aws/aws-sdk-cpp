/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Provides the S3 bucket name and object name.</p> <p>The region for the S3
   * bucket containing the S3 object must match the region you use for Amazon
   * Rekognition operations.</p> <p>For Amazon Rekognition to process an S3 object,
   * the user must have permission to access the S3 object. For more information, see
   * How Amazon Rekognition works with IAM in the Amazon Rekognition Developer Guide.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/S3Object">AWS
   * API Reference</a></p>
   */
  class S3Object
  {
  public:
    AWS_REKOGNITION_API S3Object();
    AWS_REKOGNITION_API S3Object(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API S3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline S3Object& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline S3Object& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline S3Object& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 object key name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline S3Object& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline S3Object& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline S3Object& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the bucket is versioning enabled, you can specify the object version. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline S3Object& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline S3Object& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline S3Object& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
