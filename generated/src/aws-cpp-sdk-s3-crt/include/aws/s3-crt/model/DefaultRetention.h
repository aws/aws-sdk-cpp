﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ObjectLockRetentionMode.h>
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
   * <p>The container element for optionally specifying the default Object Lock
   * retention settings for new objects placed in the specified bucket.</p> 
   * <ul> <li> <p>The <code>DefaultRetention</code> settings require both a mode and
   * a period.</p> </li> <li> <p>The <code>DefaultRetention</code> period can be
   * either <code>Days</code> or <code>Years</code> but you must select one. You
   * cannot specify <code>Days</code> and <code>Years</code> at the same time.</p>
   * </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DefaultRetention">AWS
   * API Reference</a></p>
   */
  class DefaultRetention
  {
  public:
    AWS_S3CRT_API DefaultRetention() = default;
    AWS_S3CRT_API DefaultRetention(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API DefaultRetention& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The default Object Lock retention mode you want to apply to new objects
     * placed in the specified bucket. Must be used with either <code>Days</code> or
     * <code>Years</code>.</p>
     */
    inline ObjectLockRetentionMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ObjectLockRetentionMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline DefaultRetention& WithMode(ObjectLockRetentionMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that you want to specify for the default retention period.
     * Must be used with <code>Mode</code>.</p>
     */
    inline int GetDays() const { return m_days; }
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }
    inline DefaultRetention& WithDays(int value) { SetDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of years that you want to specify for the default retention
     * period. Must be used with <code>Mode</code>.</p>
     */
    inline int GetYears() const { return m_years; }
    inline bool YearsHasBeenSet() const { return m_yearsHasBeenSet; }
    inline void SetYears(int value) { m_yearsHasBeenSet = true; m_years = value; }
    inline DefaultRetention& WithYears(int value) { SetYears(value); return *this;}
    ///@}
  private:

    ObjectLockRetentionMode m_mode{ObjectLockRetentionMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    int m_days{0};
    bool m_daysHasBeenSet = false;

    int m_years{0};
    bool m_yearsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
