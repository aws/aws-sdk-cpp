/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>Contains details for an approver.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/ApprovalTeamRequestApprover">AWS
   * API Reference</a></p>
   */
  class ApprovalTeamRequestApprover
  {
  public:
    AWS_MPA_API ApprovalTeamRequestApprover() = default;
    AWS_MPA_API ApprovalTeamRequestApprover(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API ApprovalTeamRequestApprover& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID for the user.</p>
     */
    inline const Aws::String& GetPrimaryIdentityId() const { return m_primaryIdentityId; }
    inline bool PrimaryIdentityIdHasBeenSet() const { return m_primaryIdentityIdHasBeenSet; }
    template<typename PrimaryIdentityIdT = Aws::String>
    void SetPrimaryIdentityId(PrimaryIdentityIdT&& value) { m_primaryIdentityIdHasBeenSet = true; m_primaryIdentityId = std::forward<PrimaryIdentityIdT>(value); }
    template<typename PrimaryIdentityIdT = Aws::String>
    ApprovalTeamRequestApprover& WithPrimaryIdentityId(PrimaryIdentityIdT&& value) { SetPrimaryIdentityId(std::forward<PrimaryIdentityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the identity source. The identity source
     * manages the user authentication for approvers.</p>
     */
    inline const Aws::String& GetPrimaryIdentitySourceArn() const { return m_primaryIdentitySourceArn; }
    inline bool PrimaryIdentitySourceArnHasBeenSet() const { return m_primaryIdentitySourceArnHasBeenSet; }
    template<typename PrimaryIdentitySourceArnT = Aws::String>
    void SetPrimaryIdentitySourceArn(PrimaryIdentitySourceArnT&& value) { m_primaryIdentitySourceArnHasBeenSet = true; m_primaryIdentitySourceArn = std::forward<PrimaryIdentitySourceArnT>(value); }
    template<typename PrimaryIdentitySourceArnT = Aws::String>
    ApprovalTeamRequestApprover& WithPrimaryIdentitySourceArn(PrimaryIdentitySourceArnT&& value) { SetPrimaryIdentitySourceArn(std::forward<PrimaryIdentitySourceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_primaryIdentityId;
    bool m_primaryIdentityIdHasBeenSet = false;

    Aws::String m_primaryIdentitySourceArn;
    bool m_primaryIdentitySourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
