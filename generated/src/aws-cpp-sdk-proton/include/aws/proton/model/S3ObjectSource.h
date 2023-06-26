/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>Template bundle S3 bucket data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/S3ObjectSource">AWS
   * API Reference</a></p>
   */
  class S3ObjectSource
  {
  public:
    AWS_PROTON_API S3ObjectSource();
    AWS_PROTON_API S3ObjectSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API S3ObjectSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket that contains a template bundle.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the S3 bucket that contains a template bundle.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the S3 bucket that contains a template bundle.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the S3 bucket that contains a template bundle.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the S3 bucket that contains a template bundle.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the S3 bucket that contains a template bundle.</p>
     */
    inline S3ObjectSource& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the S3 bucket that contains a template bundle.</p>
     */
    inline S3ObjectSource& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket that contains a template bundle.</p>
     */
    inline S3ObjectSource& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The path to the S3 bucket that contains a template bundle.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The path to the S3 bucket that contains a template bundle.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The path to the S3 bucket that contains a template bundle.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The path to the S3 bucket that contains a template bundle.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The path to the S3 bucket that contains a template bundle.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The path to the S3 bucket that contains a template bundle.</p>
     */
    inline S3ObjectSource& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The path to the S3 bucket that contains a template bundle.</p>
     */
    inline S3ObjectSource& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The path to the S3 bucket that contains a template bundle.</p>
     */
    inline S3ObjectSource& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
