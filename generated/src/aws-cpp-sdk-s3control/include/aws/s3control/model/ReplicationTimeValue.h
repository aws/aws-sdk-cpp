/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>

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
   * <p>A container that specifies the time value for S3 Replication Time Control (S3
   * RTC). This value is also used for the replication metrics
   * <code>EventThreshold</code> element. </p>  <p>This is not supported by
   * Amazon S3 on Outposts buckets.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ReplicationTimeValue">AWS
   * API Reference</a></p>
   */
  class ReplicationTimeValue
  {
  public:
    AWS_S3CONTROL_API ReplicationTimeValue();
    AWS_S3CONTROL_API ReplicationTimeValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ReplicationTimeValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Contains an integer that specifies the time period in minutes. </p> <p>Valid
     * value: 15</p>
     */
    inline int GetMinutes() const{ return m_minutes; }

    /**
     * <p>Contains an integer that specifies the time period in minutes. </p> <p>Valid
     * value: 15</p>
     */
    inline bool MinutesHasBeenSet() const { return m_minutesHasBeenSet; }

    /**
     * <p>Contains an integer that specifies the time period in minutes. </p> <p>Valid
     * value: 15</p>
     */
    inline void SetMinutes(int value) { m_minutesHasBeenSet = true; m_minutes = value; }

    /**
     * <p>Contains an integer that specifies the time period in minutes. </p> <p>Valid
     * value: 15</p>
     */
    inline ReplicationTimeValue& WithMinutes(int value) { SetMinutes(value); return *this;}

  private:

    int m_minutes;
    bool m_minutesHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
