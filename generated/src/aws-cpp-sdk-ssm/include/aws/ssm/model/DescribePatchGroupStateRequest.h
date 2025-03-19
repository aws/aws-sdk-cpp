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
  class DescribePatchGroupStateRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribePatchGroupStateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePatchGroupState"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the patch group whose patch snapshot should be retrieved.</p>
     */
    inline const Aws::String& GetPatchGroup() const { return m_patchGroup; }
    inline bool PatchGroupHasBeenSet() const { return m_patchGroupHasBeenSet; }
    template<typename PatchGroupT = Aws::String>
    void SetPatchGroup(PatchGroupT&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::forward<PatchGroupT>(value); }
    template<typename PatchGroupT = Aws::String>
    DescribePatchGroupStateRequest& WithPatchGroup(PatchGroupT&& value) { SetPatchGroup(std::forward<PatchGroupT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
