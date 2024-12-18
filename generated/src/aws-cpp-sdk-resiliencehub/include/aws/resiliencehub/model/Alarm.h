/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Indicates the Amazon CloudWatch alarm detected while running an
   * assessment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/Alarm">AWS
   * API Reference</a></p>
   */
  class Alarm
  {
  public:
    AWS_RESILIENCEHUB_API Alarm();
    AWS_RESILIENCEHUB_API Alarm(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Alarm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Amazon CloudWatch alarm.</p>
     */
    inline const Aws::String& GetAlarmArn() const{ return m_alarmArn; }
    inline bool AlarmArnHasBeenSet() const { return m_alarmArnHasBeenSet; }
    inline void SetAlarmArn(const Aws::String& value) { m_alarmArnHasBeenSet = true; m_alarmArn = value; }
    inline void SetAlarmArn(Aws::String&& value) { m_alarmArnHasBeenSet = true; m_alarmArn = std::move(value); }
    inline void SetAlarmArn(const char* value) { m_alarmArnHasBeenSet = true; m_alarmArn.assign(value); }
    inline Alarm& WithAlarmArn(const Aws::String& value) { SetAlarmArn(value); return *this;}
    inline Alarm& WithAlarmArn(Aws::String&& value) { SetAlarmArn(std::move(value)); return *this;}
    inline Alarm& WithAlarmArn(const char* value) { SetAlarmArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the source of the Amazon CloudWatch alarm. That is, it indicates if
     * the alarm was created using Resilience Hub recommendation
     * (<code>AwsResilienceHub</code>), or if you had created the alarm in Amazon
     * CloudWatch (<code>Customer</code>).</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline Alarm& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline Alarm& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline Alarm& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}
  private:

    Aws::String m_alarmArn;
    bool m_alarmArnHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
