/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>An Amazon CloudWatch alarm configured to monitor metrics on an
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Alarm">AWS API
   * Reference</a></p>
   */
  class Alarm
  {
  public:
    AWS_SAGEMAKER_API Alarm();
    AWS_SAGEMAKER_API Alarm(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Alarm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a CloudWatch alarm in your account.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }

    /**
     * <p>The name of a CloudWatch alarm in your account.</p>
     */
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }

    /**
     * <p>The name of a CloudWatch alarm in your account.</p>
     */
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The name of a CloudWatch alarm in your account.</p>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }

    /**
     * <p>The name of a CloudWatch alarm in your account.</p>
     */
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }

    /**
     * <p>The name of a CloudWatch alarm in your account.</p>
     */
    inline Alarm& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}

    /**
     * <p>The name of a CloudWatch alarm in your account.</p>
     */
    inline Alarm& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}

    /**
     * <p>The name of a CloudWatch alarm in your account.</p>
     */
    inline Alarm& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}

  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
