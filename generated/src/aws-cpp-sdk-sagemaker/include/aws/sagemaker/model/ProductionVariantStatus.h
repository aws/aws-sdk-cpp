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
    AWS_SAGEMAKER_API ProductionVariantStatus() = default;
    AWS_SAGEMAKER_API ProductionVariantStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline VariantStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(VariantStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProductionVariantStatus& WithStatus(VariantStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that describes the status of the production variant.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ProductionVariantStatus& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the current status change.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ProductionVariantStatus& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    VariantStatus m_status{VariantStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
