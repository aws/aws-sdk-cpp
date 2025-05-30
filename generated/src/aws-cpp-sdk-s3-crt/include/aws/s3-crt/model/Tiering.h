﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/IntelligentTieringAccessTier.h>
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
namespace S3Crt
{
namespace Model
{

  /**
   * <p>The S3 Intelligent-Tiering storage class is designed to optimize storage
   * costs by automatically moving data to the most cost-effective storage access
   * tier, without additional operational overhead.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Tiering">AWS API
   * Reference</a></p>
   */
  class Tiering
  {
  public:
    AWS_S3CRT_API Tiering() = default;
    AWS_S3CRT_API Tiering(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API Tiering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The number of consecutive days of no access after which an object will be
     * eligible to be transitioned to the corresponding tier. The minimum number of
     * days specified for Archive Access tier must be at least 90 days and Deep Archive
     * Access tier must be at least 180 days. The maximum can be up to 2 years (730
     * days).</p>
     */
    inline int GetDays() const { return m_days; }
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }
    inline Tiering& WithDays(int value) { SetDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 Intelligent-Tiering access tier. See <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
     * class for automatically optimizing frequently and infrequently accessed
     * objects</a> for a list of access tiers in the S3 Intelligent-Tiering storage
     * class.</p>
     */
    inline IntelligentTieringAccessTier GetAccessTier() const { return m_accessTier; }
    inline bool AccessTierHasBeenSet() const { return m_accessTierHasBeenSet; }
    inline void SetAccessTier(IntelligentTieringAccessTier value) { m_accessTierHasBeenSet = true; m_accessTier = value; }
    inline Tiering& WithAccessTier(IntelligentTieringAccessTier value) { SetAccessTier(value); return *this;}
    ///@}
  private:

    int m_days{0};
    bool m_daysHasBeenSet = false;

    IntelligentTieringAccessTier m_accessTier{IntelligentTieringAccessTier::NOT_SET};
    bool m_accessTierHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
