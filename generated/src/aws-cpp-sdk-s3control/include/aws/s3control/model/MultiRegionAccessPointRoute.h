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
   * <p>A structure for a Multi-Region Access Point that indicates where Amazon S3
   * traffic can be routed. Routes can be either active or passive. Active routes can
   * process Amazon S3 requests through the Multi-Region Access Point, but passive
   * routes are not eligible to process Amazon S3 requests. </p> <p>Each route
   * contains the Amazon S3 bucket name and the Amazon Web Services Region that the
   * bucket is located in. The route also includes the
   * <code>TrafficDialPercentage</code> value, which shows whether the bucket and
   * Region are active (indicated by a value of <code>100</code>) or passive
   * (indicated by a value of <code>0</code>).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/MultiRegionAccessPointRoute">AWS
   * API Reference</a></p>
   */
  class MultiRegionAccessPointRoute
  {
  public:
    AWS_S3CONTROL_API MultiRegionAccessPointRoute() = default;
    AWS_S3CONTROL_API MultiRegionAccessPointRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API MultiRegionAccessPointRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket for which you'll submit a routing
     * configuration change. Either the <code>Bucket</code> or the <code>Region</code>
     * value must be provided. If both are provided, the bucket must be in the
     * specified Region.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    MultiRegionAccessPointRoute& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region to which you'll be submitting a routing
     * configuration change. Either the <code>Bucket</code> or the <code>Region</code>
     * value must be provided. If both are provided, the bucket must be in the
     * specified Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    MultiRegionAccessPointRoute& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The traffic state for the specified bucket or Amazon Web Services Region.
     * </p> <p>A value of <code>0</code> indicates a passive state, which means that no
     * new traffic will be routed to the Region. </p> <p>A value of <code>100</code>
     * indicates an active state, which means that traffic will be routed to the
     * specified Region. </p> <p>When the routing configuration for a Region is changed
     * from active to passive, any in-progress operations (uploads, copies, deletes,
     * and so on) to the formerly active Region will continue to run to until a final
     * success or failure status is reached.</p> <p>If all Regions in the routing
     * configuration are designated as passive, you'll receive an
     * <code>InvalidRequest</code> error.</p>
     */
    inline int GetTrafficDialPercentage() const { return m_trafficDialPercentage; }
    inline bool TrafficDialPercentageHasBeenSet() const { return m_trafficDialPercentageHasBeenSet; }
    inline void SetTrafficDialPercentage(int value) { m_trafficDialPercentageHasBeenSet = true; m_trafficDialPercentage = value; }
    inline MultiRegionAccessPointRoute& WithTrafficDialPercentage(int value) { SetTrafficDialPercentage(value); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    int m_trafficDialPercentage{0};
    bool m_trafficDialPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
