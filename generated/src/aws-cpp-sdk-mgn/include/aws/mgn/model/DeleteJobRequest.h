/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class DeleteJobRequest : public MgnRequest
  {
  public:
    AWS_MGN_API DeleteJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteJob"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Request to delete Job from service by Account ID.</p>
     */
    inline const Aws::String& GetAccountID() const { return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    template<typename AccountIDT = Aws::String>
    void SetAccountID(AccountIDT&& value) { m_accountIDHasBeenSet = true; m_accountID = std::forward<AccountIDT>(value); }
    template<typename AccountIDT = Aws::String>
    DeleteJobRequest& WithAccountID(AccountIDT&& value) { SetAccountID(std::forward<AccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to delete Job from service by Job ID.</p>
     */
    inline const Aws::String& GetJobID() const { return m_jobID; }
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
    template<typename JobIDT = Aws::String>
    void SetJobID(JobIDT&& value) { m_jobIDHasBeenSet = true; m_jobID = std::forward<JobIDT>(value); }
    template<typename JobIDT = Aws::String>
    DeleteJobRequest& WithJobID(JobIDT&& value) { SetJobID(std::forward<JobIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
