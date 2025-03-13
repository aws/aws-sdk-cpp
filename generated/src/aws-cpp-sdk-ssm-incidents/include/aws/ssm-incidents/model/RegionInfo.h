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
    AWS_SSMINCIDENTS_API RegionInfo() = default;
    AWS_SSMINCIDENTS_API RegionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API RegionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the data in this Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetSseKmsKeyId() const { return m_sseKmsKeyId; }
    inline bool SseKmsKeyIdHasBeenSet() const { return m_sseKmsKeyIdHasBeenSet; }
    template<typename SseKmsKeyIdT = Aws::String>
    void SetSseKmsKeyId(SseKmsKeyIdT&& value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId = std::forward<SseKmsKeyIdT>(value); }
    template<typename SseKmsKeyIdT = Aws::String>
    RegionInfo& WithSseKmsKeyId(SseKmsKeyIdT&& value) { SetSseKmsKeyId(std::forward<SseKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon Web Services Region in the replication set.</p>
     */
    inline RegionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RegionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RegionInfo& WithStatus(RegionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information displayed about the status of the Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    RegionInfo& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when Incident Manager updated the status of the Amazon Web
     * Services Region.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusUpdateDateTime() const { return m_statusUpdateDateTime; }
    inline bool StatusUpdateDateTimeHasBeenSet() const { return m_statusUpdateDateTimeHasBeenSet; }
    template<typename StatusUpdateDateTimeT = Aws::Utils::DateTime>
    void SetStatusUpdateDateTime(StatusUpdateDateTimeT&& value) { m_statusUpdateDateTimeHasBeenSet = true; m_statusUpdateDateTime = std::forward<StatusUpdateDateTimeT>(value); }
    template<typename StatusUpdateDateTimeT = Aws::Utils::DateTime>
    RegionInfo& WithStatusUpdateDateTime(StatusUpdateDateTimeT&& value) { SetStatusUpdateDateTime(std::forward<StatusUpdateDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sseKmsKeyId;
    bool m_sseKmsKeyIdHasBeenSet = false;

    RegionStatus m_status{RegionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_statusUpdateDateTime{};
    bool m_statusUpdateDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
