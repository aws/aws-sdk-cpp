/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MPA
{
namespace Model
{

  /**
   * <p>Strategy for how an approval team grants approval.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/MofNApprovalStrategy">AWS
   * API Reference</a></p>
   */
  class MofNApprovalStrategy
  {
  public:
    AWS_MPA_API MofNApprovalStrategy() = default;
    AWS_MPA_API MofNApprovalStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API MofNApprovalStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Minimum number of approvals (M) required for a total number of approvers
     * (N).</p>
     */
    inline int GetMinApprovalsRequired() const { return m_minApprovalsRequired; }
    inline bool MinApprovalsRequiredHasBeenSet() const { return m_minApprovalsRequiredHasBeenSet; }
    inline void SetMinApprovalsRequired(int value) { m_minApprovalsRequiredHasBeenSet = true; m_minApprovalsRequired = value; }
    inline MofNApprovalStrategy& WithMinApprovalsRequired(int value) { SetMinApprovalsRequired(value); return *this;}
    ///@}
  private:

    int m_minApprovalsRequired{0};
    bool m_minApprovalsRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
