/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/AnalyticsS3ExportFileFormat.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>Contains information about where to publish the analytics
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/AnalyticsS3BucketDestination">AWS
   * API Reference</a></p>
   */
  class AnalyticsS3BucketDestination
  {
  public:
    AWS_S3_API AnalyticsS3BucketDestination() = default;
    AWS_S3_API AnalyticsS3BucketDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API AnalyticsS3BucketDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the file format used when exporting data to Amazon S3.</p>
     */
    inline AnalyticsS3ExportFileFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(AnalyticsS3ExportFileFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline AnalyticsS3BucketDestination& WithFormat(AnalyticsS3ExportFileFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID that owns the destination S3 bucket. If no account ID is
     * provided, the owner is not validated before exporting data.</p>  <p>
     * Although this value is optional, we strongly recommend that you set it to help
     * prevent problems if the destination bucket ownership changes. </p> 
     */
    inline const Aws::String& GetBucketAccountId() const { return m_bucketAccountId; }
    inline bool BucketAccountIdHasBeenSet() const { return m_bucketAccountIdHasBeenSet; }
    template<typename BucketAccountIdT = Aws::String>
    void SetBucketAccountId(BucketAccountIdT&& value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId = std::forward<BucketAccountIdT>(value); }
    template<typename BucketAccountIdT = Aws::String>
    AnalyticsS3BucketDestination& WithBucketAccountId(BucketAccountIdT&& value) { SetBucketAccountId(std::forward<BucketAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the bucket to which data is exported.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    AnalyticsS3BucketDestination& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix to use when exporting data. The prefix is prepended to all
     * results.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    AnalyticsS3BucketDestination& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}
  private:

    AnalyticsS3ExportFileFormat m_format{AnalyticsS3ExportFileFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_bucketAccountId;
    bool m_bucketAccountIdHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
