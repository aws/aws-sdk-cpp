/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/RegionStatus.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Information about a Amazon Web Services Region in your replication
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/RegionInfo">AWS
   * API Reference</a></p>
   */
  class RegionInfo
  {
  public:
    AWS_SSMINCIDENTS_API RegionInfo();
    AWS_SSMINCIDENTS_API RegionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API RegionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the data in this Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetSseKmsKeyId() const{ return m_sseKmsKeyId; }
    inline bool SseKmsKeyIdHasBeenSet() const { return m_sseKmsKeyIdHasBeenSet; }
    inline void SetSseKmsKeyId(const Aws::String& value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId = value; }
    inline void SetSseKmsKeyId(Aws::String&& value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId = std::move(value); }
    inline void SetSseKmsKeyId(const char* value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId.assign(value); }
    inline RegionInfo& WithSseKmsKeyId(const Aws::String& value) { SetSseKmsKeyId(value); return *this;}
    inline RegionInfo& WithSseKmsKeyId(Aws::String&& value) { SetSseKmsKeyId(std::move(value)); return *this;}
    inline RegionInfo& WithSseKmsKeyId(const char* value) { SetSseKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon Web Services Region in the replication set.</p>
     */
    inline const RegionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RegionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RegionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RegionInfo& WithStatus(const RegionStatus& value) { SetStatus(value); return *this;}
    inline RegionInfo& WithStatus(RegionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information displayed about the status of the Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline RegionInfo& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline RegionInfo& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline RegionInfo& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when Incident Manager updated the status of the Amazon Web
     * Services Region.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusUpdateDateTime() const{ return m_statusUpdateDateTime; }
    inline bool StatusUpdateDateTimeHasBeenSet() const { return m_statusUpdateDateTimeHasBeenSet; }
    inline void SetStatusUpdateDateTime(const Aws::Utils::DateTime& value) { m_statusUpdateDateTimeHasBeenSet = true; m_statusUpdateDateTime = value; }
    inline void SetStatusUpdateDateTime(Aws::Utils::DateTime&& value) { m_statusUpdateDateTimeHasBeenSet = true; m_statusUpdateDateTime = std::move(value); }
    inline RegionInfo& WithStatusUpdateDateTime(const Aws::Utils::DateTime& value) { SetStatusUpdateDateTime(value); return *this;}
    inline RegionInfo& WithStatusUpdateDateTime(Aws::Utils::DateTime&& value) { SetStatusUpdateDateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sseKmsKeyId;
    bool m_sseKmsKeyIdHasBeenSet = false;

    RegionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_statusUpdateDateTime;
    bool m_statusUpdateDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
