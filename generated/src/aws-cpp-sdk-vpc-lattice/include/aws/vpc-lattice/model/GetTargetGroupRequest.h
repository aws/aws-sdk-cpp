/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class GetTargetGroupRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API GetTargetGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTargetGroup"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupIdentifier() const { return m_targetGroupIdentifier; }
    inline bool TargetGroupIdentifierHasBeenSet() const { return m_targetGroupIdentifierHasBeenSet; }
    template<typename TargetGroupIdentifierT = Aws::String>
    void SetTargetGroupIdentifier(TargetGroupIdentifierT&& value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier = std::forward<TargetGroupIdentifierT>(value); }
    template<typename TargetGroupIdentifierT = Aws::String>
    GetTargetGroupRequest& WithTargetGroupIdentifier(TargetGroupIdentifierT&& value) { SetTargetGroupIdentifier(std::forward<TargetGroupIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetGroupIdentifier;
    bool m_targetGroupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
