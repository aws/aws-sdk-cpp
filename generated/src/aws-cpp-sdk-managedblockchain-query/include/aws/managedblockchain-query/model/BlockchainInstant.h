/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The container for time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/BlockchainInstant">AWS
   * API Reference</a></p>
   */
  class BlockchainInstant
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API BlockchainInstant();
    AWS_MANAGEDBLOCKCHAINQUERY_API BlockchainInstant(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API BlockchainInstant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The container of the <code>Timestamp</code> of the blockchain instant.</p>
     *  <p>This <code>timestamp</code> will only be recorded up to the
     * second.</p> 
     */
    inline const Aws::Utils::DateTime& GetTime() const{ return m_time; }

    /**
     * <p>The container of the <code>Timestamp</code> of the blockchain instant.</p>
     *  <p>This <code>timestamp</code> will only be recorded up to the
     * second.</p> 
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>The container of the <code>Timestamp</code> of the blockchain instant.</p>
     *  <p>This <code>timestamp</code> will only be recorded up to the
     * second.</p> 
     */
    inline void SetTime(const Aws::Utils::DateTime& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>The container of the <code>Timestamp</code> of the blockchain instant.</p>
     *  <p>This <code>timestamp</code> will only be recorded up to the
     * second.</p> 
     */
    inline void SetTime(Aws::Utils::DateTime&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p>The container of the <code>Timestamp</code> of the blockchain instant.</p>
     *  <p>This <code>timestamp</code> will only be recorded up to the
     * second.</p> 
     */
    inline BlockchainInstant& WithTime(const Aws::Utils::DateTime& value) { SetTime(value); return *this;}

    /**
     * <p>The container of the <code>Timestamp</code> of the blockchain instant.</p>
     *  <p>This <code>timestamp</code> will only be recorded up to the
     * second.</p> 
     */
    inline BlockchainInstant& WithTime(Aws::Utils::DateTime&& value) { SetTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_time;
    bool m_timeHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
