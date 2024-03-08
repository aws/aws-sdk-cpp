/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/managedblockchain-query/model/ConfirmationStatus.h>
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
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   * <p>The container for the <code>ConfirmationStatusFilter</code> that filters for
   * the <a
   * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
   * <i>finality</i> </a> of the results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/ConfirmationStatusFilter">AWS
   * API Reference</a></p>
   */
  class ConfirmationStatusFilter
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ConfirmationStatusFilter();
    AWS_MANAGEDBLOCKCHAINQUERY_API ConfirmationStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API ConfirmationStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The container to determine whether to list results that have only reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finality are always part of
     * the response.</p>
     */
    inline const Aws::Vector<ConfirmationStatus>& GetInclude() const{ return m_include; }

    /**
     * <p>The container to determine whether to list results that have only reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finality are always part of
     * the response.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>The container to determine whether to list results that have only reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finality are always part of
     * the response.</p>
     */
    inline void SetInclude(const Aws::Vector<ConfirmationStatus>& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>The container to determine whether to list results that have only reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finality are always part of
     * the response.</p>
     */
    inline void SetInclude(Aws::Vector<ConfirmationStatus>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>The container to determine whether to list results that have only reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finality are always part of
     * the response.</p>
     */
    inline ConfirmationStatusFilter& WithInclude(const Aws::Vector<ConfirmationStatus>& value) { SetInclude(value); return *this;}

    /**
     * <p>The container to determine whether to list results that have only reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finality are always part of
     * the response.</p>
     */
    inline ConfirmationStatusFilter& WithInclude(Aws::Vector<ConfirmationStatus>&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p>The container to determine whether to list results that have only reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finality are always part of
     * the response.</p>
     */
    inline ConfirmationStatusFilter& AddInclude(const ConfirmationStatus& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }

    /**
     * <p>The container to determine whether to list results that have only reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finality are always part of
     * the response.</p>
     */
    inline ConfirmationStatusFilter& AddInclude(ConfirmationStatus&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ConfirmationStatus> m_include;
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
