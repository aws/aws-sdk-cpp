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
   * <p>A Region that supports a Multi-Region Access Point as well as the associated
   * bucket for the Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/Region">AWS
   * API Reference</a></p>
   */
  class Region
  {
  public:
    AWS_S3CONTROL_API Region() = default;
    AWS_S3CONTROL_API Region(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API Region& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the associated bucket for the Region.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    Region& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket that's
     * associated with this Multi-Region Access Point.</p>
     */
    inline const Aws::String& GetBucketAccountId() const { return m_bucketAccountId; }
    inline bool BucketAccountIdHasBeenSet() const { return m_bucketAccountIdHasBeenSet; }
    template<typename BucketAccountIdT = Aws::String>
    void SetBucketAccountId(BucketAccountIdT&& value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId = std::forward<BucketAccountIdT>(value); }
    template<typename BucketAccountIdT = Aws::String>
    Region& WithBucketAccountId(BucketAccountIdT&& value) { SetBucketAccountId(std::forward<BucketAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_bucketAccountId;
    bool m_bucketAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
