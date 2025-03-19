/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/Resource.h>
#include <aws/ssm-sap/model/OperationEventStatus.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>An operation event returns details for an operation, including key milestones
   * which can be used to monitor and track operations in progress.</p> <p>Operation
   * events contain:</p> <ul> <li> <p>Description string</p> </li> <li> <p>Resource,
   * including its ARN and type</p> </li> <li> <p>Status</p> </li> <li>
   * <p>StatusMessage string</p> </li> <li> <p>TimeStamp</p> </li> </ul> <p>Operation
   * event examples include StartApplication or StopApplication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/OperationEvent">AWS
   * API Reference</a></p>
   */
  class OperationEvent
  {
  public:
    AWS_SSMSAP_API OperationEvent() = default;
    AWS_SSMSAP_API OperationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API OperationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of the operation event. For example, "Stop the EC2 instance
     * i-abcdefgh987654321".</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    OperationEvent& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource involved in the operations event.</p> <p>Contains
     * <code>ResourceArn</code> ARN and <code>ResourceType</code>.</p>
     */
    inline const Resource& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Resource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Resource>
    OperationEvent& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation event. The possible statuses are:
     * <code>IN_PROGRESS</code>, <code>COMPLETED</code>, and <code>FAILED</code>.</p>
     */
    inline OperationEventStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OperationEventStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OperationEvent& WithStatus(OperationEventStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message relating to a specific operation event.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    OperationEvent& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the specified operation event.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    OperationEvent& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    OperationEventStatus m_status{OperationEventStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
