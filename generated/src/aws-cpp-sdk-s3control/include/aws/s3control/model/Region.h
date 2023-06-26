﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A Region that supports a Multi-Region Access Point as well as the associated
   * bucket for the Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/Region">AWS
   * API Reference</a></p>
   */
  class Region
  {
  public:
    AWS_S3CONTROL_API Region();
    AWS_S3CONTROL_API Region(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API Region& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The name of the associated bucket for the Region.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the associated bucket for the Region.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the associated bucket for the Region.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the associated bucket for the Region.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the associated bucket for the Region.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the associated bucket for the Region.</p>
     */
    inline Region& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the associated bucket for the Region.</p>
     */
    inline Region& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the associated bucket for the Region.</p>
     */
    inline Region& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket that's
     * associated with this Multi-Region Access Point.</p>
     */
    inline const Aws::String& GetBucketAccountId() const{ return m_bucketAccountId; }

    /**
     * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket that's
     * associated with this Multi-Region Access Point.</p>
     */
    inline bool BucketAccountIdHasBeenSet() const { return m_bucketAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket that's
     * associated with this Multi-Region Access Point.</p>
     */
    inline void SetBucketAccountId(const Aws::String& value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket that's
     * associated with this Multi-Region Access Point.</p>
     */
    inline void SetBucketAccountId(Aws::String&& value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket that's
     * associated with this Multi-Region Access Point.</p>
     */
    inline void SetBucketAccountId(const char* value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket that's
     * associated with this Multi-Region Access Point.</p>
     */
    inline Region& WithBucketAccountId(const Aws::String& value) { SetBucketAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket that's
     * associated with this Multi-Region Access Point.</p>
     */
    inline Region& WithBucketAccountId(Aws::String&& value) { SetBucketAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket that's
     * associated with this Multi-Region Access Point.</p>
     */
    inline Region& WithBucketAccountId(const char* value) { SetBucketAccountId(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_bucketAccountId;
    bool m_bucketAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
