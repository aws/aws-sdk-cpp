/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/managedblockchain-query/model/BatchGetTokenBalanceInputItem.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   */
  class BatchGetTokenBalanceRequest : public ManagedBlockchainQueryRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API BatchGetTokenBalanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetTokenBalance"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    /**
     * <p>An array of <code>BatchGetTokenBalanceInputItem</code> objects whose balance
     * is being requested.</p>
     */
    inline const Aws::Vector<BatchGetTokenBalanceInputItem>& GetGetTokenBalanceInputs() const{ return m_getTokenBalanceInputs; }

    /**
     * <p>An array of <code>BatchGetTokenBalanceInputItem</code> objects whose balance
     * is being requested.</p>
     */
    inline bool GetTokenBalanceInputsHasBeenSet() const { return m_getTokenBalanceInputsHasBeenSet; }

    /**
     * <p>An array of <code>BatchGetTokenBalanceInputItem</code> objects whose balance
     * is being requested.</p>
     */
    inline void SetGetTokenBalanceInputs(const Aws::Vector<BatchGetTokenBalanceInputItem>& value) { m_getTokenBalanceInputsHasBeenSet = true; m_getTokenBalanceInputs = value; }

    /**
     * <p>An array of <code>BatchGetTokenBalanceInputItem</code> objects whose balance
     * is being requested.</p>
     */
    inline void SetGetTokenBalanceInputs(Aws::Vector<BatchGetTokenBalanceInputItem>&& value) { m_getTokenBalanceInputsHasBeenSet = true; m_getTokenBalanceInputs = std::move(value); }

    /**
     * <p>An array of <code>BatchGetTokenBalanceInputItem</code> objects whose balance
     * is being requested.</p>
     */
    inline BatchGetTokenBalanceRequest& WithGetTokenBalanceInputs(const Aws::Vector<BatchGetTokenBalanceInputItem>& value) { SetGetTokenBalanceInputs(value); return *this;}

    /**
     * <p>An array of <code>BatchGetTokenBalanceInputItem</code> objects whose balance
     * is being requested.</p>
     */
    inline BatchGetTokenBalanceRequest& WithGetTokenBalanceInputs(Aws::Vector<BatchGetTokenBalanceInputItem>&& value) { SetGetTokenBalanceInputs(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BatchGetTokenBalanceInputItem</code> objects whose balance
     * is being requested.</p>
     */
    inline BatchGetTokenBalanceRequest& AddGetTokenBalanceInputs(const BatchGetTokenBalanceInputItem& value) { m_getTokenBalanceInputsHasBeenSet = true; m_getTokenBalanceInputs.push_back(value); return *this; }

    /**
     * <p>An array of <code>BatchGetTokenBalanceInputItem</code> objects whose balance
     * is being requested.</p>
     */
    inline BatchGetTokenBalanceRequest& AddGetTokenBalanceInputs(BatchGetTokenBalanceInputItem&& value) { m_getTokenBalanceInputsHasBeenSet = true; m_getTokenBalanceInputs.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchGetTokenBalanceInputItem> m_getTokenBalanceInputs;
    bool m_getTokenBalanceInputsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
