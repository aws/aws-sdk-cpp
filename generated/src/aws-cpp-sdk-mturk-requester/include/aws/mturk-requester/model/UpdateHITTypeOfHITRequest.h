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
  class UpdateHITTypeOfHITRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API UpdateHITTypeOfHITRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHITTypeOfHIT"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The HIT to update.</p>
     */
    inline const Aws::String& GetHITId() const { return m_hITId; }
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }
    template<typename HITIdT = Aws::String>
    void SetHITId(HITIdT&& value) { m_hITIdHasBeenSet = true; m_hITId = std::forward<HITIdT>(value); }
    template<typename HITIdT = Aws::String>
    UpdateHITTypeOfHITRequest& WithHITId(HITIdT&& value) { SetHITId(std::forward<HITIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the new HIT type.</p>
     */
    inline const Aws::String& GetHITTypeId() const { return m_hITTypeId; }
    inline bool HITTypeIdHasBeenSet() const { return m_hITTypeIdHasBeenSet; }
    template<typename HITTypeIdT = Aws::String>
    void SetHITTypeId(HITTypeIdT&& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = std::forward<HITTypeIdT>(value); }
    template<typename HITTypeIdT = Aws::String>
    UpdateHITTypeOfHITRequest& WithHITTypeId(HITTypeIdT&& value) { SetHITTypeId(std::forward<HITTypeIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet = false;

    Aws::String m_hITTypeId;
    bool m_hITTypeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
