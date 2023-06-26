/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>The location of an output object in Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/OutPutS3Location">AWS
   * API Reference</a></p>
   */
  class OutPutS3Location
  {
  public:
    AWS_PANORAMA_API OutPutS3Location();
    AWS_PANORAMA_API OutPutS3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API OutPutS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The object's bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The object's bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The object's bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The object's bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The object's bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The object's bucket.</p>
     */
    inline OutPutS3Location& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The object's bucket.</p>
     */
    inline OutPutS3Location& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The object's bucket.</p>
     */
    inline OutPutS3Location& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The object's key.</p>
     */
    inline const Aws::String& GetObjectKey() const{ return m_objectKey; }

    /**
     * <p>The object's key.</p>
     */
    inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }

    /**
     * <p>The object's key.</p>
     */
    inline void SetObjectKey(const Aws::String& value) { m_objectKeyHasBeenSet = true; m_objectKey = value; }

    /**
     * <p>The object's key.</p>
     */
    inline void SetObjectKey(Aws::String&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::move(value); }

    /**
     * <p>The object's key.</p>
     */
    inline void SetObjectKey(const char* value) { m_objectKeyHasBeenSet = true; m_objectKey.assign(value); }

    /**
     * <p>The object's key.</p>
     */
    inline OutPutS3Location& WithObjectKey(const Aws::String& value) { SetObjectKey(value); return *this;}

    /**
     * <p>The object's key.</p>
     */
    inline OutPutS3Location& WithObjectKey(Aws::String&& value) { SetObjectKey(std::move(value)); return *this;}

    /**
     * <p>The object's key.</p>
     */
    inline OutPutS3Location& WithObjectKey(const char* value) { SetObjectKey(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_objectKey;
    bool m_objectKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
