/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class UpdateHITReviewStatusRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API UpdateHITReviewStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHITReviewStatus"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the HIT to update. </p>
     */
    inline const Aws::String& GetHITId() const { return m_hITId; }
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }
    template<typename HITIdT = Aws::String>
    void SetHITId(HITIdT&& value) { m_hITIdHasBeenSet = true; m_hITId = std::forward<HITIdT>(value); }
    template<typename HITIdT = Aws::String>
    UpdateHITReviewStatusRequest& WithHITId(HITIdT&& value) { SetHITId(std::forward<HITIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies how to update the HIT status. Default is <code>False</code>. </p>
     * <ul> <li> <p> Setting this to false will only transition a HIT from
     * <code>Reviewable</code> to <code>Reviewing</code> </p> </li> <li> <p> Setting
     * this to true will only transition a HIT from <code>Reviewing</code> to
     * <code>Reviewable</code> </p> </li> </ul>
     */
    inline bool GetRevert() const { return m_revert; }
    inline bool RevertHasBeenSet() const { return m_revertHasBeenSet; }
    inline void SetRevert(bool value) { m_revertHasBeenSet = true; m_revert = value; }
    inline UpdateHITReviewStatusRequest& WithRevert(bool value) { SetRevert(value); return *this;}
    ///@}
  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet = false;

    bool m_revert{false};
    bool m_revertHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
