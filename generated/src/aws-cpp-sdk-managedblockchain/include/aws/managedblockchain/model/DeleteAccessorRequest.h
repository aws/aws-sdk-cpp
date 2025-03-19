/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class DeleteAccessorRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API DeleteAccessorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccessor"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline const Aws::String& GetAccessorId() const { return m_accessorId; }
    inline bool AccessorIdHasBeenSet() const { return m_accessorIdHasBeenSet; }
    template<typename AccessorIdT = Aws::String>
    void SetAccessorId(AccessorIdT&& value) { m_accessorIdHasBeenSet = true; m_accessorId = std::forward<AccessorIdT>(value); }
    template<typename AccessorIdT = Aws::String>
    DeleteAccessorRequest& WithAccessorId(AccessorIdT&& value) { SetAccessorId(std::forward<AccessorIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessorId;
    bool m_accessorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
