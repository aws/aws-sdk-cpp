/**
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
   * <p>A combination of a bucket and Region that's part of a Multi-Region Access
   * Point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/RegionReport">AWS
   * API Reference</a></p>
   */
  class RegionReport
  {
  public:
    AWS_S3CONTROL_API RegionReport();
    AWS_S3CONTROL_API RegionReport(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API RegionReport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline RegionReport& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline RegionReport& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline RegionReport& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline RegionReport& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline RegionReport& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline RegionReport& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket that's
     * associated with this Multi-Region Access Point.</p>
     */
    inline const Aws::String& GetBucketAccountId() const{ return m_bucketAccountId; }
    inline bool BucketAccountIdHasBeenSet() const { return m_bucketAccountIdHasBeenSet; }
    inline void SetBucketAccountId(const Aws::String& value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId = value; }
    inline void SetBucketAccountId(Aws::String&& value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId = std::move(value); }
    inline void SetBucketAccountId(const char* value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId.assign(value); }
    inline RegionReport& WithBucketAccountId(const Aws::String& value) { SetBucketAccountId(value); return *this;}
    inline RegionReport& WithBucketAccountId(Aws::String&& value) { SetBucketAccountId(std::move(value)); return *this;}
    inline RegionReport& WithBucketAccountId(const char* value) { SetBucketAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_bucketAccountId;
    bool m_bucketAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
