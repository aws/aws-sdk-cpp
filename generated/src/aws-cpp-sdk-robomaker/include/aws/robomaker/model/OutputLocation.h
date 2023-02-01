/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>The output location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/OutputLocation">AWS
   * API Reference</a></p>
   */
  class OutputLocation
  {
  public:
    AWS_ROBOMAKER_API OutputLocation();
    AWS_ROBOMAKER_API OutputLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API OutputLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 bucket for output.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The S3 bucket for output.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The S3 bucket for output.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The S3 bucket for output.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The S3 bucket for output.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The S3 bucket for output.</p>
     */
    inline OutputLocation& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The S3 bucket for output.</p>
     */
    inline OutputLocation& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket for output.</p>
     */
    inline OutputLocation& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The S3 folder in the <code>s3Bucket</code> where output files will be
     * placed.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The S3 folder in the <code>s3Bucket</code> where output files will be
     * placed.</p>
     */
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }

    /**
     * <p>The S3 folder in the <code>s3Bucket</code> where output files will be
     * placed.</p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The S3 folder in the <code>s3Bucket</code> where output files will be
     * placed.</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    /**
     * <p>The S3 folder in the <code>s3Bucket</code> where output files will be
     * placed.</p>
     */
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    /**
     * <p>The S3 folder in the <code>s3Bucket</code> where output files will be
     * placed.</p>
     */
    inline OutputLocation& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The S3 folder in the <code>s3Bucket</code> where output files will be
     * placed.</p>
     */
    inline OutputLocation& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The S3 folder in the <code>s3Bucket</code> where output files will be
     * placed.</p>
     */
    inline OutputLocation& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
