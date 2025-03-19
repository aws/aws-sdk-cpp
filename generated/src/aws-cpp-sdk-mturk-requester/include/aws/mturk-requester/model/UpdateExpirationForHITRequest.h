/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class UpdateExpirationForHITRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API UpdateExpirationForHITRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateExpirationForHIT"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The HIT to update. </p>
     */
    inline const Aws::String& GetHITId() const { return m_hITId; }
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }
    template<typename HITIdT = Aws::String>
    void SetHITId(HITIdT&& value) { m_hITIdHasBeenSet = true; m_hITId = std::forward<HITIdT>(value); }
    template<typename HITIdT = Aws::String>
    UpdateExpirationForHITRequest& WithHITId(HITIdT&& value) { SetHITId(std::forward<HITIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time at which you want the HIT to expire </p>
     */
    inline const Aws::Utils::DateTime& GetExpireAt() const { return m_expireAt; }
    inline bool ExpireAtHasBeenSet() const { return m_expireAtHasBeenSet; }
    template<typename ExpireAtT = Aws::Utils::DateTime>
    void SetExpireAt(ExpireAtT&& value) { m_expireAtHasBeenSet = true; m_expireAt = std::forward<ExpireAtT>(value); }
    template<typename ExpireAtT = Aws::Utils::DateTime>
    UpdateExpirationForHITRequest& WithExpireAt(ExpireAtT&& value) { SetExpireAt(std::forward<ExpireAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet = false;

    Aws::Utils::DateTime m_expireAt{};
    bool m_expireAtHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
