/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/RequestedJobStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Control
{
namespace Model
{

  /**
   */
  class UpdateJobStatusRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API UpdateJobStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobStatus"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    UpdateJobStatusRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job whose status you want to update.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    UpdateJobStatusRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status that you want to move the specified job to.</p>
     */
    inline RequestedJobStatus GetRequestedJobStatus() const { return m_requestedJobStatus; }
    inline bool RequestedJobStatusHasBeenSet() const { return m_requestedJobStatusHasBeenSet; }
    inline void SetRequestedJobStatus(RequestedJobStatus value) { m_requestedJobStatusHasBeenSet = true; m_requestedJobStatus = value; }
    inline UpdateJobStatusRequest& WithRequestedJobStatus(RequestedJobStatus value) { SetRequestedJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the reason why you want to change the specified job's
     * status. This field can be any string up to the maximum length.</p>
     */
    inline const Aws::String& GetStatusUpdateReason() const { return m_statusUpdateReason; }
    inline bool StatusUpdateReasonHasBeenSet() const { return m_statusUpdateReasonHasBeenSet; }
    template<typename StatusUpdateReasonT = Aws::String>
    void SetStatusUpdateReason(StatusUpdateReasonT&& value) { m_statusUpdateReasonHasBeenSet = true; m_statusUpdateReason = std::forward<StatusUpdateReasonT>(value); }
    template<typename StatusUpdateReasonT = Aws::String>
    UpdateJobStatusRequest& WithStatusUpdateReason(StatusUpdateReasonT&& value) { SetStatusUpdateReason(std::forward<StatusUpdateReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    RequestedJobStatus m_requestedJobStatus{RequestedJobStatus::NOT_SET};
    bool m_requestedJobStatusHasBeenSet = false;

    Aws::String m_statusUpdateReason;
    bool m_statusUpdateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
