﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ReplicationTimeStatus.h>
#include <aws/s3control/model/ReplicationTimeValue.h>
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
   * <p>A container that specifies S3 Replication Time Control (S3 RTC) related
   * information, including whether S3 RTC is enabled and the time when all objects
   * and operations on objects must be replicated.</p>  <p>This is not
   * supported by Amazon S3 on Outposts buckets.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ReplicationTime">AWS
   * API Reference</a></p>
   */
  class ReplicationTime
  {
  public:
    AWS_S3CONTROL_API ReplicationTime() = default;
    AWS_S3CONTROL_API ReplicationTime(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ReplicationTime& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies whether S3 Replication Time Control (S3 RTC) is enabled. </p>
     */
    inline ReplicationTimeStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReplicationTimeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReplicationTime& WithStatus(ReplicationTimeStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container that specifies the time by which replication should be complete
     * for all objects and operations on objects. </p>
     */
    inline const ReplicationTimeValue& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = ReplicationTimeValue>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = ReplicationTimeValue>
    ReplicationTime& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}
  private:

    ReplicationTimeStatus m_status{ReplicationTimeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ReplicationTimeValue m_time;
    bool m_timeHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
