/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3BucketDestination.h>
#include <aws/s3control/model/CloudWatchMetrics.h>
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
   * <p>A container to specify the properties of your S3 Storage Lens metrics export,
   * including the destination, schema, and format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensDataExport">AWS
   * API Reference</a></p>
   */
  class StorageLensDataExport
  {
  public:
    AWS_S3CONTROL_API StorageLensDataExport() = default;
    AWS_S3CONTROL_API StorageLensDataExport(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensDataExport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A container for the bucket where the S3 Storage Lens metrics export will be
     * located.</p>  <p>This bucket must be located in the same Region as the
     * storage lens configuration. </p> 
     */
    inline const S3BucketDestination& GetS3BucketDestination() const { return m_s3BucketDestination; }
    inline bool S3BucketDestinationHasBeenSet() const { return m_s3BucketDestinationHasBeenSet; }
    template<typename S3BucketDestinationT = S3BucketDestination>
    void SetS3BucketDestination(S3BucketDestinationT&& value) { m_s3BucketDestinationHasBeenSet = true; m_s3BucketDestination = std::forward<S3BucketDestinationT>(value); }
    template<typename S3BucketDestinationT = S3BucketDestination>
    StorageLensDataExport& WithS3BucketDestination(S3BucketDestinationT&& value) { SetS3BucketDestination(std::forward<S3BucketDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for enabling Amazon CloudWatch publishing for S3 Storage Lens
     * metrics.</p>
     */
    inline const CloudWatchMetrics& GetCloudWatchMetrics() const { return m_cloudWatchMetrics; }
    inline bool CloudWatchMetricsHasBeenSet() const { return m_cloudWatchMetricsHasBeenSet; }
    template<typename CloudWatchMetricsT = CloudWatchMetrics>
    void SetCloudWatchMetrics(CloudWatchMetricsT&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics = std::forward<CloudWatchMetricsT>(value); }
    template<typename CloudWatchMetricsT = CloudWatchMetrics>
    StorageLensDataExport& WithCloudWatchMetrics(CloudWatchMetricsT&& value) { SetCloudWatchMetrics(std::forward<CloudWatchMetricsT>(value)); return *this;}
    ///@}
  private:

    S3BucketDestination m_s3BucketDestination;
    bool m_s3BucketDestinationHasBeenSet = false;

    CloudWatchMetrics m_cloudWatchMetrics;
    bool m_cloudWatchMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
