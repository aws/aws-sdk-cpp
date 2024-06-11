/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>The S3 bucket name and file name that identifies the document.</p> <p>The AWS
   * Region for the S3 bucket that contains the document must match the Region that
   * you use for Amazon Textract operations.</p> <p>For Amazon Textract to process a
   * file in an S3 bucket, the user must have permission to access the S3 bucket and
   * file. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/S3Object">AWS
   * API Reference</a></p>
   */
  class S3Object
  {
  public:
    AWS_TEXTRACT_API S3Object();
    AWS_TEXTRACT_API S3Object(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API S3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 bucket. Note that the # character is not valid in the file
     * name.</p>
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
     * <p>The file name of the input document. Synchronous operations can use image
     * files that are in JPEG or PNG format. Asynchronous operations also support PDF
     * and TIFF format files.</p>
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
     * <p>If the bucket has versioning enabled, you can specify the object version.
     * </p>
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
} // namespace Textract
} // namespace Aws
