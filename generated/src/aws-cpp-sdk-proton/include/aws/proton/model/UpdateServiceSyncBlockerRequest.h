/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateServiceSyncBlockerRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateServiceSyncBlockerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceSyncBlocker"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the service sync blocker.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateServiceSyncBlockerRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the service sync blocker was resolved.</p>
     */
    inline const Aws::String& GetResolvedReason() const { return m_resolvedReason; }
    inline bool ResolvedReasonHasBeenSet() const { return m_resolvedReasonHasBeenSet; }
    template<typename ResolvedReasonT = Aws::String>
    void SetResolvedReason(ResolvedReasonT&& value) { m_resolvedReasonHasBeenSet = true; m_resolvedReason = std::forward<ResolvedReasonT>(value); }
    template<typename ResolvedReasonT = Aws::String>
    UpdateServiceSyncBlockerRequest& WithResolvedReason(ResolvedReasonT&& value) { SetResolvedReason(std::forward<ResolvedReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resolvedReason;
    bool m_resolvedReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
