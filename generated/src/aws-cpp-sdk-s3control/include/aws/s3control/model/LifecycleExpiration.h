/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>The container of the Outposts bucket lifecycle expiration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/LifecycleExpiration">AWS
   * API Reference</a></p>
   */
  class LifecycleExpiration
  {
  public:
    AWS_S3CONTROL_API LifecycleExpiration();
    AWS_S3CONTROL_API LifecycleExpiration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API LifecycleExpiration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Indicates at what date the object is to be deleted. Should be in GMT ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline LifecycleExpiration& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}
    inline LifecycleExpiration& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the lifetime, in days, of the objects that are subject to the rule.
     * The value must be a non-zero positive integer.</p>
     */
    inline int GetDays() const{ return m_days; }
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }
    inline LifecycleExpiration& WithDays(int value) { SetDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon S3 will remove a delete marker with no noncurrent
     * versions. If set to true, the delete marker will be expired. If set to false,
     * the policy takes no action. This cannot be specified with Days or Date in a
     * Lifecycle Expiration Policy.</p>
     */
    inline bool GetExpiredObjectDeleteMarker() const{ return m_expiredObjectDeleteMarker; }
    inline bool ExpiredObjectDeleteMarkerHasBeenSet() const { return m_expiredObjectDeleteMarkerHasBeenSet; }
    inline void SetExpiredObjectDeleteMarker(bool value) { m_expiredObjectDeleteMarkerHasBeenSet = true; m_expiredObjectDeleteMarker = value; }
    inline LifecycleExpiration& WithExpiredObjectDeleteMarker(bool value) { SetExpiredObjectDeleteMarker(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;

    int m_days;
    bool m_daysHasBeenSet = false;

    bool m_expiredObjectDeleteMarker;
    bool m_expiredObjectDeleteMarkerHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
