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
    AWS_RESILIENCEHUB_API Alarm() = default;
    AWS_RESILIENCEHUB_API Alarm(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Alarm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Amazon CloudWatch alarm.</p>
     */
    inline const Aws::String& GetAlarmArn() const { return m_alarmArn; }
    inline bool AlarmArnHasBeenSet() const { return m_alarmArnHasBeenSet; }
    template<typename AlarmArnT = Aws::String>
    void SetAlarmArn(AlarmArnT&& value) { m_alarmArnHasBeenSet = true; m_alarmArn = std::forward<AlarmArnT>(value); }
    template<typename AlarmArnT = Aws::String>
    Alarm& WithAlarmArn(AlarmArnT&& value) { SetAlarmArn(std::forward<AlarmArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the source of the Amazon CloudWatch alarm. That is, it indicates if
     * the alarm was created using Resilience Hub recommendation
     * (<code>AwsResilienceHub</code>), or if you had created the alarm in Amazon
     * CloudWatch (<code>Customer</code>).</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    Alarm& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
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
