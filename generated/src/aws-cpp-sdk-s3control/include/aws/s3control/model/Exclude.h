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
   * <p>A container for what Amazon S3 Storage Lens will exclude.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/Exclude">AWS
   * API Reference</a></p>
   */
  class Exclude
  {
  public:
    AWS_S3CONTROL_API Exclude();
    AWS_S3CONTROL_API Exclude(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API Exclude& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container for the S3 Storage Lens bucket excludes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuckets() const{ return m_buckets; }

    /**
     * <p>A container for the S3 Storage Lens bucket excludes.</p>
     */
    inline bool BucketsHasBeenSet() const { return m_bucketsHasBeenSet; }

    /**
     * <p>A container for the S3 Storage Lens bucket excludes.</p>
     */
    inline void SetBuckets(const Aws::Vector<Aws::String>& value) { m_bucketsHasBeenSet = true; m_buckets = value; }

    /**
     * <p>A container for the S3 Storage Lens bucket excludes.</p>
     */
    inline void SetBuckets(Aws::Vector<Aws::String>&& value) { m_bucketsHasBeenSet = true; m_buckets = std::move(value); }

    /**
     * <p>A container for the S3 Storage Lens bucket excludes.</p>
     */
    inline Exclude& WithBuckets(const Aws::Vector<Aws::String>& value) { SetBuckets(value); return *this;}

    /**
     * <p>A container for the S3 Storage Lens bucket excludes.</p>
     */
    inline Exclude& WithBuckets(Aws::Vector<Aws::String>&& value) { SetBuckets(std::move(value)); return *this;}

    /**
     * <p>A container for the S3 Storage Lens bucket excludes.</p>
     */
    inline Exclude& AddBuckets(const Aws::String& value) { m_bucketsHasBeenSet = true; m_buckets.push_back(value); return *this; }

    /**
     * <p>A container for the S3 Storage Lens bucket excludes.</p>
     */
    inline Exclude& AddBuckets(Aws::String&& value) { m_bucketsHasBeenSet = true; m_buckets.push_back(std::move(value)); return *this; }

    /**
     * <p>A container for the S3 Storage Lens bucket excludes.</p>
     */
    inline Exclude& AddBuckets(const char* value) { m_bucketsHasBeenSet = true; m_buckets.push_back(value); return *this; }


    /**
     * <p>A container for the S3 Storage Lens Region excludes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>A container for the S3 Storage Lens Region excludes.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>A container for the S3 Storage Lens Region excludes.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>A container for the S3 Storage Lens Region excludes.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>A container for the S3 Storage Lens Region excludes.</p>
     */
    inline Exclude& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>A container for the S3 Storage Lens Region excludes.</p>
     */
    inline Exclude& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>A container for the S3 Storage Lens Region excludes.</p>
     */
    inline Exclude& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>A container for the S3 Storage Lens Region excludes.</p>
     */
    inline Exclude& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>A container for the S3 Storage Lens Region excludes.</p>
     */
    inline Exclude& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_buckets;
    bool m_bucketsHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
