/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>An action to remove a member from a Managed Blockchain network as the result
   * of a removal proposal that is <code>APPROVED</code>. The member and all
   * associated resources are deleted from the network.</p> <p>Applies only to
   * Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/RemoveAction">AWS
   * API Reference</a></p>
   */
  class RemoveAction
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API RemoveAction() = default;
    AWS_MANAGEDBLOCKCHAIN_API RemoveAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API RemoveAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the member to remove.</p>
     */
    inline const Aws::String& GetMemberId() const { return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    template<typename MemberIdT = Aws::String>
    void SetMemberId(MemberIdT&& value) { m_memberIdHasBeenSet = true; m_memberId = std::forward<MemberIdT>(value); }
    template<typename MemberIdT = Aws::String>
    RemoveAction& WithMemberId(MemberIdT&& value) { SetMemberId(std::forward<MemberIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
