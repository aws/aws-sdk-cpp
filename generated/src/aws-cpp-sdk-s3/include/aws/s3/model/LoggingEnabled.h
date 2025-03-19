/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/TargetObjectKeyFormat.h>
#include <aws/s3/model/TargetGrant.h>
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
   * <p>Describes where logs are stored and the prefix that Amazon S3 assigns to all
   * log object keys for a bucket. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTBucketPUTlogging.html">PUT
   * Bucket logging</a> in the <i>Amazon S3 API Reference</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/LoggingEnabled">AWS
   * API Reference</a></p>
   */
  class LoggingEnabled
  {
  public:
    AWS_S3_API LoggingEnabled() = default;
    AWS_S3_API LoggingEnabled(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API LoggingEnabled& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the bucket where you want Amazon S3 to store server access logs.
     * You can have your logs delivered to any bucket that you own, including the same
     * bucket that is being logged. You can also configure multiple buckets to deliver
     * their logs to the same target bucket. In this case, you should choose a
     * different <code>TargetPrefix</code> for each source bucket so that the delivered
     * log files can be distinguished by key.</p>
     */
    inline const Aws::String& GetTargetBucket() const { return m_targetBucket; }
    inline bool TargetBucketHasBeenSet() const { return m_targetBucketHasBeenSet; }
    template<typename TargetBucketT = Aws::String>
    void SetTargetBucket(TargetBucketT&& value) { m_targetBucketHasBeenSet = true; m_targetBucket = std::forward<TargetBucketT>(value); }
    template<typename TargetBucketT = Aws::String>
    LoggingEnabled& WithTargetBucket(TargetBucketT&& value) { SetTargetBucket(std::forward<TargetBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for granting information.</p> <p>Buckets that use the bucket owner
     * enforced setting for Object Ownership don't support target grants. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/enable-server-access-logging.html#grant-log-delivery-permissions-general">Permissions
     * for server access log delivery</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::Vector<TargetGrant>& GetTargetGrants() const { return m_targetGrants; }
    inline bool TargetGrantsHasBeenSet() const { return m_targetGrantsHasBeenSet; }
    template<typename TargetGrantsT = Aws::Vector<TargetGrant>>
    void SetTargetGrants(TargetGrantsT&& value) { m_targetGrantsHasBeenSet = true; m_targetGrants = std::forward<TargetGrantsT>(value); }
    template<typename TargetGrantsT = Aws::Vector<TargetGrant>>
    LoggingEnabled& WithTargetGrants(TargetGrantsT&& value) { SetTargetGrants(std::forward<TargetGrantsT>(value)); return *this;}
    template<typename TargetGrantsT = TargetGrant>
    LoggingEnabled& AddTargetGrants(TargetGrantsT&& value) { m_targetGrantsHasBeenSet = true; m_targetGrants.emplace_back(std::forward<TargetGrantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A prefix for all log object keys. If you store log files from multiple Amazon
     * S3 buckets in a single bucket, you can use a prefix to distinguish which log
     * files came from which bucket.</p>
     */
    inline const Aws::String& GetTargetPrefix() const { return m_targetPrefix; }
    inline bool TargetPrefixHasBeenSet() const { return m_targetPrefixHasBeenSet; }
    template<typename TargetPrefixT = Aws::String>
    void SetTargetPrefix(TargetPrefixT&& value) { m_targetPrefixHasBeenSet = true; m_targetPrefix = std::forward<TargetPrefixT>(value); }
    template<typename TargetPrefixT = Aws::String>
    LoggingEnabled& WithTargetPrefix(TargetPrefixT&& value) { SetTargetPrefix(std::forward<TargetPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 key format for log objects.</p>
     */
    inline const TargetObjectKeyFormat& GetTargetObjectKeyFormat() const { return m_targetObjectKeyFormat; }
    inline bool TargetObjectKeyFormatHasBeenSet() const { return m_targetObjectKeyFormatHasBeenSet; }
    template<typename TargetObjectKeyFormatT = TargetObjectKeyFormat>
    void SetTargetObjectKeyFormat(TargetObjectKeyFormatT&& value) { m_targetObjectKeyFormatHasBeenSet = true; m_targetObjectKeyFormat = std::forward<TargetObjectKeyFormatT>(value); }
    template<typename TargetObjectKeyFormatT = TargetObjectKeyFormat>
    LoggingEnabled& WithTargetObjectKeyFormat(TargetObjectKeyFormatT&& value) { SetTargetObjectKeyFormat(std::forward<TargetObjectKeyFormatT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetBucket;
    bool m_targetBucketHasBeenSet = false;

    Aws::Vector<TargetGrant> m_targetGrants;
    bool m_targetGrantsHasBeenSet = false;

    Aws::String m_targetPrefix;
    bool m_targetPrefixHasBeenSet = false;

    TargetObjectKeyFormat m_targetObjectKeyFormat;
    bool m_targetObjectKeyFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
