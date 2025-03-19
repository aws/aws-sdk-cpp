/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A container for what Amazon S3 Storage Lens configuration
   * includes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/Include">AWS
   * API Reference</a></p>
   */
  class Include
  {
  public:
    AWS_S3CONTROL_API Include() = default;
    AWS_S3CONTROL_API Include(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API Include& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A container for the S3 Storage Lens bucket includes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuckets() const { return m_buckets; }
    inline bool BucketsHasBeenSet() const { return m_bucketsHasBeenSet; }
    template<typename BucketsT = Aws::Vector<Aws::String>>
    void SetBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets = std::forward<BucketsT>(value); }
    template<typename BucketsT = Aws::Vector<Aws::String>>
    Include& WithBuckets(BucketsT&& value) { SetBuckets(std::forward<BucketsT>(value)); return *this;}
    template<typename BucketsT = Aws::String>
    Include& AddBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets.emplace_back(std::forward<BucketsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A container for the S3 Storage Lens Region includes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    Include& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    Include& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_buckets;
    bool m_bucketsHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
