/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/VariantStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes the status of the production variant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantStatus">AWS
   * API Reference</a></p>
   */
  class ProductionVariantStatus
  {
  public:
    AWS_SAGEMAKER_API ProductionVariantStatus();
    AWS_SAGEMAKER_API ProductionVariantStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p> <ul> <li> <p> <code>Creating</code>: Creating
     * inference resources for the production variant.</p> </li> <li> <p>
     * <code>Deleting</code>: Terminating inference resources for the production
     * variant.</p> </li> <li> <p> <code>Updating</code>: Updating capacity for the
     * production variant.</p> </li> <li> <p> <code>ActivatingTraffic</code>: Turning
     * on traffic for the production variant.</p> </li> <li> <p> <code>Baking</code>:
     * Waiting period to monitor the CloudWatch alarms in the automatic rollback
     * configuration.</p> </li> </ul>
     */
    inline const VariantStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p> <ul> <li> <p> <code>Creating</code>: Creating
     * inference resources for the production variant.</p> </li> <li> <p>
     * <code>Deleting</code>: Terminating inference resources for the production
     * variant.</p> </li> <li> <p> <code>Updating</code>: Updating capacity for the
     * production variant.</p> </li> <li> <p> <code>ActivatingTraffic</code>: Turning
     * on traffic for the production variant.</p> </li> <li> <p> <code>Baking</code>:
     * Waiting period to monitor the CloudWatch alarms in the automatic rollback
     * configuration.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p> <ul> <li> <p> <code>Creating</code>: Creating
     * inference resources for the production variant.</p> </li> <li> <p>
     * <code>Deleting</code>: Terminating inference resources for the production
     * variant.</p> </li> <li> <p> <code>Updating</code>: Updating capacity for the
     * production variant.</p> </li> <li> <p> <code>ActivatingTraffic</code>: Turning
     * on traffic for the production variant.</p> </li> <li> <p> <code>Baking</code>:
     * Waiting period to monitor the CloudWatch alarms in the automatic rollback
     * configuration.</p> </li> </ul>
     */
    inline void SetStatus(const VariantStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p> <ul> <li> <p> <code>Creating</code>: Creating
     * inference resources for the production variant.</p> </li> <li> <p>
     * <code>Deleting</code>: Terminating inference resources for the production
     * variant.</p> </li> <li> <p> <code>Updating</code>: Updating capacity for the
     * production variant.</p> </li> <li> <p> <code>ActivatingTraffic</code>: Turning
     * on traffic for the production variant.</p> </li> <li> <p> <code>Baking</code>:
     * Waiting period to monitor the CloudWatch alarms in the automatic rollback
     * configuration.</p> </li> </ul>
     */
    inline void SetStatus(VariantStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p> <ul> <li> <p> <code>Creating</code>: Creating
     * inference resources for the production variant.</p> </li> <li> <p>
     * <code>Deleting</code>: Terminating inference resources for the production
     * variant.</p> </li> <li> <p> <code>Updating</code>: Updating capacity for the
     * production variant.</p> </li> <li> <p> <code>ActivatingTraffic</code>: Turning
     * on traffic for the production variant.</p> </li> <li> <p> <code>Baking</code>:
     * Waiting period to monitor the CloudWatch alarms in the automatic rollback
     * configuration.</p> </li> </ul>
     */
    inline ProductionVariantStatus& WithStatus(const VariantStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p> <ul> <li> <p> <code>Creating</code>: Creating
     * inference resources for the production variant.</p> </li> <li> <p>
     * <code>Deleting</code>: Terminating inference resources for the production
     * variant.</p> </li> <li> <p> <code>Updating</code>: Updating capacity for the
     * production variant.</p> </li> <li> <p> <code>ActivatingTraffic</code>: Turning
     * on traffic for the production variant.</p> </li> <li> <p> <code>Baking</code>:
     * Waiting period to monitor the CloudWatch alarms in the automatic rollback
     * configuration.</p> </li> </ul>
     */
    inline ProductionVariantStatus& WithStatus(VariantStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A message that describes the status of the production variant.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A message that describes the status of the production variant.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A message that describes the status of the production variant.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A message that describes the status of the production variant.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A message that describes the status of the production variant.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A message that describes the status of the production variant.</p>
     */
    inline ProductionVariantStatus& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A message that describes the status of the production variant.</p>
     */
    inline ProductionVariantStatus& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message that describes the status of the production variant.</p>
     */
    inline ProductionVariantStatus& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The start time of the current status change.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the current status change.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the current status change.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the current status change.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the current status change.</p>
     */
    inline ProductionVariantStatus& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the current status change.</p>
     */
    inline ProductionVariantStatus& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    VariantStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
