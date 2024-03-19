/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>

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
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   * <p>This container specifies filtering attributes related to
   * <code>BITCOIN_VOUT</code> event types</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/VoutFilter">AWS
   * API Reference</a></p>
   */
  class VoutFilter
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API VoutFilter();
    AWS_MANAGEDBLOCKCHAINQUERY_API VoutFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API VoutFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies if the transaction output is spent or unspent.</p>
     */
    inline bool GetVoutSpent() const{ return m_voutSpent; }

    /**
     * <p>Specifies if the transaction output is spent or unspent.</p>
     */
    inline bool VoutSpentHasBeenSet() const { return m_voutSpentHasBeenSet; }

    /**
     * <p>Specifies if the transaction output is spent or unspent.</p>
     */
    inline void SetVoutSpent(bool value) { m_voutSpentHasBeenSet = true; m_voutSpent = value; }

    /**
     * <p>Specifies if the transaction output is spent or unspent.</p>
     */
    inline VoutFilter& WithVoutSpent(bool value) { SetVoutSpent(value); return *this;}

  private:

    bool m_voutSpent;
    bool m_voutSpentHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
