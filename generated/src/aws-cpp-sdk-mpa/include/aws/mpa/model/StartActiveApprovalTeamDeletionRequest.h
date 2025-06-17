/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/MPARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MPA
{
namespace Model
{

  /**
   */
  class StartActiveApprovalTeamDeletionRequest : public MPARequest
  {
  public:
    AWS_MPA_API StartActiveApprovalTeamDeletionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartActiveApprovalTeamDeletion"; }

    AWS_MPA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Number of days between when the team approves the delete request and when the
     * team is deleted.</p>
     */
    inline int GetPendingWindowDays() const { return m_pendingWindowDays; }
    inline bool PendingWindowDaysHasBeenSet() const { return m_pendingWindowDaysHasBeenSet; }
    inline void SetPendingWindowDays(int value) { m_pendingWindowDaysHasBeenSet = true; m_pendingWindowDays = value; }
    inline StartActiveApprovalTeamDeletionRequest& WithPendingWindowDays(int value) { SetPendingWindowDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the team.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    StartActiveApprovalTeamDeletionRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    int m_pendingWindowDays{0};
    bool m_pendingWindowDaysHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
