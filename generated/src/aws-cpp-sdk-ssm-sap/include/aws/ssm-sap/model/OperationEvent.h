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
    AWS_SSMSAP_API OperationEvent();
    AWS_SSMSAP_API OperationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API OperationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of the operation event. For example, "Stop the EC2 instance
     * i-abcdefgh987654321".</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline OperationEvent& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline OperationEvent& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline OperationEvent& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource involved in the operations event.</p> <p>Contains
     * <code>ResourceArn</code> ARN and <code>ResourceType</code>.</p>
     */
    inline const Resource& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline OperationEvent& WithResource(const Resource& value) { SetResource(value); return *this;}
    inline OperationEvent& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation event. The possible statuses are:
     * <code>IN_PROGRESS</code>, <code>COMPLETED</code>, and <code>FAILED</code>.</p>
     */
    inline const OperationEventStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OperationEventStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OperationEventStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline OperationEvent& WithStatus(const OperationEventStatus& value) { SetStatus(value); return *this;}
    inline OperationEvent& WithStatus(OperationEventStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message relating to a specific operation event.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline OperationEvent& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline OperationEvent& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline OperationEvent& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the specified operation event.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline OperationEvent& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline OperationEvent& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    OperationEventStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
