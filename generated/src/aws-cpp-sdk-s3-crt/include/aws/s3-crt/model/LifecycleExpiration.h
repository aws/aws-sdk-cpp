﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Container for the expiration for the lifecycle of the object.</p> <p>For more
   * information see, <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-lifecycle-mgmt.html">Managing
   * your storage lifecycle</a> in the <i>Amazon S3 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/LifecycleExpiration">AWS
   * API Reference</a></p>
   */
  class LifecycleExpiration
  {
  public:
    AWS_S3CRT_API LifecycleExpiration() = default;
    AWS_S3CRT_API LifecycleExpiration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API LifecycleExpiration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Indicates at what date the object is to be moved or deleted. The date value
     * must conform to the ISO 8601 format. The time is always midnight UTC.</p> 
     * <p>This parameter applies to general purpose buckets only. It is not supported
     * for directory bucket lifecycle configurations.</p> 
     */
    inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::Utils::DateTime>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::Utils::DateTime>
    LifecycleExpiration& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the lifetime, in days, of the objects that are subject to the rule.
     * The value must be a non-zero positive integer.</p>
     */
    inline int GetDays() const { return m_days; }
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }
    inline LifecycleExpiration& WithDays(int value) { SetDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon S3 will remove a delete marker with no noncurrent
     * versions. If set to true, the delete marker will be expired; if set to false the
     * policy takes no action. This cannot be specified with Days or Date in a
     * Lifecycle Expiration Policy.</p>  <p>This parameter applies to general
     * purpose buckets only. It is not supported for directory bucket lifecycle
     * configurations.</p> 
     */
    inline bool GetExpiredObjectDeleteMarker() const { return m_expiredObjectDeleteMarker; }
    inline bool ExpiredObjectDeleteMarkerHasBeenSet() const { return m_expiredObjectDeleteMarkerHasBeenSet; }
    inline void SetExpiredObjectDeleteMarker(bool value) { m_expiredObjectDeleteMarkerHasBeenSet = true; m_expiredObjectDeleteMarker = value; }
    inline LifecycleExpiration& WithExpiredObjectDeleteMarker(bool value) { SetExpiredObjectDeleteMarker(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_date{};
    bool m_dateHasBeenSet = false;

    int m_days{0};
    bool m_daysHasBeenSet = false;

    bool m_expiredObjectDeleteMarker{false};
    bool m_expiredObjectDeleteMarkerHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
