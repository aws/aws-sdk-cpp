/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snowball/model/JobState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings
   * associated with a specific job. The <code>Notification</code> object is returned
   * as a part of the response syntax of the <code>DescribeJob</code> action in the
   * <code>JobMetadata</code> data type.</p> <p>When the notification settings are
   * defined during job creation, you can choose to notify based on a specific set of
   * job states using the <code>JobStatesToNotify</code> array of strings, or you can
   * specify that you want to have Amazon SNS notifications sent out for all job
   * states with <code>NotifyAll</code> set to true.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/Notification">AWS
   * API Reference</a></p>
   */
  class Notification
  {
  public:
    AWS_SNOWBALL_API Notification() = default;
    AWS_SNOWBALL_API Notification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Notification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The new SNS <code>TopicArn</code> that you want to associate with this job.
     * You can create Amazon Resource Names (ARNs) for topics by using the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_CreateTopic.html">CreateTopic</a>
     * Amazon SNS API action.</p> <p>You can subscribe email addresses to an Amazon SNS
     * topic through the Amazon Web Services Management Console, or by using the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Subscribe.html">Subscribe</a>
     * Amazon Simple Notification Service (Amazon SNS) API action.</p>
     */
    inline const Aws::String& GetSnsTopicARN() const { return m_snsTopicARN; }
    inline bool SnsTopicARNHasBeenSet() const { return m_snsTopicARNHasBeenSet; }
    template<typename SnsTopicARNT = Aws::String>
    void SetSnsTopicARN(SnsTopicARNT&& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = std::forward<SnsTopicARNT>(value); }
    template<typename SnsTopicARNT = Aws::String>
    Notification& WithSnsTopicARN(SnsTopicARNT&& value) { SetSnsTopicARN(std::forward<SnsTopicARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of job states that will trigger a notification for this job.</p>
     */
    inline const Aws::Vector<JobState>& GetJobStatesToNotify() const { return m_jobStatesToNotify; }
    inline bool JobStatesToNotifyHasBeenSet() const { return m_jobStatesToNotifyHasBeenSet; }
    template<typename JobStatesToNotifyT = Aws::Vector<JobState>>
    void SetJobStatesToNotify(JobStatesToNotifyT&& value) { m_jobStatesToNotifyHasBeenSet = true; m_jobStatesToNotify = std::forward<JobStatesToNotifyT>(value); }
    template<typename JobStatesToNotifyT = Aws::Vector<JobState>>
    Notification& WithJobStatesToNotify(JobStatesToNotifyT&& value) { SetJobStatesToNotify(std::forward<JobStatesToNotifyT>(value)); return *this;}
    inline Notification& AddJobStatesToNotify(JobState value) { m_jobStatesToNotifyHasBeenSet = true; m_jobStatesToNotify.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any change in job state will trigger a notification for this job.</p>
     */
    inline bool GetNotifyAll() const { return m_notifyAll; }
    inline bool NotifyAllHasBeenSet() const { return m_notifyAllHasBeenSet; }
    inline void SetNotifyAll(bool value) { m_notifyAllHasBeenSet = true; m_notifyAll = value; }
    inline Notification& WithNotifyAll(bool value) { SetNotifyAll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to send SNS notifications for the person picking up the device
     * (identified during job creation).</p>
     */
    inline const Aws::String& GetDevicePickupSnsTopicARN() const { return m_devicePickupSnsTopicARN; }
    inline bool DevicePickupSnsTopicARNHasBeenSet() const { return m_devicePickupSnsTopicARNHasBeenSet; }
    template<typename DevicePickupSnsTopicARNT = Aws::String>
    void SetDevicePickupSnsTopicARN(DevicePickupSnsTopicARNT&& value) { m_devicePickupSnsTopicARNHasBeenSet = true; m_devicePickupSnsTopicARN = std::forward<DevicePickupSnsTopicARNT>(value); }
    template<typename DevicePickupSnsTopicARNT = Aws::String>
    Notification& WithDevicePickupSnsTopicARN(DevicePickupSnsTopicARNT&& value) { SetDevicePickupSnsTopicARN(std::forward<DevicePickupSnsTopicARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snsTopicARN;
    bool m_snsTopicARNHasBeenSet = false;

    Aws::Vector<JobState> m_jobStatesToNotify;
    bool m_jobStatesToNotifyHasBeenSet = false;

    bool m_notifyAll{false};
    bool m_notifyAllHasBeenSet = false;

    Aws::String m_devicePickupSnsTopicARN;
    bool m_devicePickupSnsTopicARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
