﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateJobPriorityRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API UpdateJobPriorityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobPriority"; }

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
    UpdateJobPriorityRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the job whose priority you want to update.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    UpdateJobPriorityRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority you want to assign to this job.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline UpdateJobPriorityRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
