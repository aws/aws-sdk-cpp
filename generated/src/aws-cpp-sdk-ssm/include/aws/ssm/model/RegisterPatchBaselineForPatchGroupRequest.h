/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class RegisterPatchBaselineForPatchGroupRequest : public SSMRequest
  {
  public:
    AWS_SSM_API RegisterPatchBaselineForPatchGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterPatchBaselineForPatchGroup"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the patch baseline to register with the patch group.</p>
     */
    inline const Aws::String& GetBaselineId() const { return m_baselineId; }
    inline bool BaselineIdHasBeenSet() const { return m_baselineIdHasBeenSet; }
    template<typename BaselineIdT = Aws::String>
    void SetBaselineId(BaselineIdT&& value) { m_baselineIdHasBeenSet = true; m_baselineId = std::forward<BaselineIdT>(value); }
    template<typename BaselineIdT = Aws::String>
    RegisterPatchBaselineForPatchGroupRequest& WithBaselineId(BaselineIdT&& value) { SetBaselineId(std::forward<BaselineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the patch group to be registered with the patch baseline.</p>
     */
    inline const Aws::String& GetPatchGroup() const { return m_patchGroup; }
    inline bool PatchGroupHasBeenSet() const { return m_patchGroupHasBeenSet; }
    template<typename PatchGroupT = Aws::String>
    void SetPatchGroup(PatchGroupT&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::forward<PatchGroupT>(value); }
    template<typename PatchGroupT = Aws::String>
    RegisterPatchBaselineForPatchGroupRequest& WithPatchGroup(PatchGroupT&& value) { SetPatchGroup(std::forward<PatchGroupT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet = false;

    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
