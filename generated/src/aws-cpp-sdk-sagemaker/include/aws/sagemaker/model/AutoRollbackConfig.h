/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Alarm.h>
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
   * <p>Automatic rollback configuration for handling endpoint deployment failures
   * and recovery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoRollbackConfig">AWS
   * API Reference</a></p>
   */
  class AutoRollbackConfig
  {
  public:
    AWS_SAGEMAKER_API AutoRollbackConfig();
    AWS_SAGEMAKER_API AutoRollbackConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoRollbackConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of CloudWatch alarms in your account that are configured to monitor
     * metrics on an endpoint. If any alarms are tripped during a deployment, SageMaker
     * rolls back the deployment.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const{ return m_alarms; }

    /**
     * <p>List of CloudWatch alarms in your account that are configured to monitor
     * metrics on an endpoint. If any alarms are tripped during a deployment, SageMaker
     * rolls back the deployment.</p>
     */
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }

    /**
     * <p>List of CloudWatch alarms in your account that are configured to monitor
     * metrics on an endpoint. If any alarms are tripped during a deployment, SageMaker
     * rolls back the deployment.</p>
     */
    inline void SetAlarms(const Aws::Vector<Alarm>& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /**
     * <p>List of CloudWatch alarms in your account that are configured to monitor
     * metrics on an endpoint. If any alarms are tripped during a deployment, SageMaker
     * rolls back the deployment.</p>
     */
    inline void SetAlarms(Aws::Vector<Alarm>&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }

    /**
     * <p>List of CloudWatch alarms in your account that are configured to monitor
     * metrics on an endpoint. If any alarms are tripped during a deployment, SageMaker
     * rolls back the deployment.</p>
     */
    inline AutoRollbackConfig& WithAlarms(const Aws::Vector<Alarm>& value) { SetAlarms(value); return *this;}

    /**
     * <p>List of CloudWatch alarms in your account that are configured to monitor
     * metrics on an endpoint. If any alarms are tripped during a deployment, SageMaker
     * rolls back the deployment.</p>
     */
    inline AutoRollbackConfig& WithAlarms(Aws::Vector<Alarm>&& value) { SetAlarms(std::move(value)); return *this;}

    /**
     * <p>List of CloudWatch alarms in your account that are configured to monitor
     * metrics on an endpoint. If any alarms are tripped during a deployment, SageMaker
     * rolls back the deployment.</p>
     */
    inline AutoRollbackConfig& AddAlarms(const Alarm& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

    /**
     * <p>List of CloudWatch alarms in your account that are configured to monitor
     * metrics on an endpoint. If any alarms are tripped during a deployment, SageMaker
     * rolls back the deployment.</p>
     */
    inline AutoRollbackConfig& AddAlarms(Alarm&& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
