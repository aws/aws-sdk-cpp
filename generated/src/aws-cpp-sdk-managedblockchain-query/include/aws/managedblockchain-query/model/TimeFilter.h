/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/BlockchainInstant.h>
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
   * <p>This container is used to specify a time frame.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/TimeFilter">AWS
   * API Reference</a></p>
   */
  class TimeFilter
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API TimeFilter();
    AWS_MANAGEDBLOCKCHAINQUERY_API TimeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API TimeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const BlockchainInstant& GetFrom() const{ return m_from; }

    
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    
    inline void SetFrom(const BlockchainInstant& value) { m_fromHasBeenSet = true; m_from = value; }

    
    inline void SetFrom(BlockchainInstant&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    
    inline TimeFilter& WithFrom(const BlockchainInstant& value) { SetFrom(value); return *this;}

    
    inline TimeFilter& WithFrom(BlockchainInstant&& value) { SetFrom(std::move(value)); return *this;}


    
    inline const BlockchainInstant& GetTo() const{ return m_to; }

    
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    
    inline void SetTo(const BlockchainInstant& value) { m_toHasBeenSet = true; m_to = value; }

    
    inline void SetTo(BlockchainInstant&& value) { m_toHasBeenSet = true; m_to = std::move(value); }

    
    inline TimeFilter& WithTo(const BlockchainInstant& value) { SetTo(value); return *this;}

    
    inline TimeFilter& WithTo(BlockchainInstant&& value) { SetTo(std::move(value)); return *this;}

  private:

    BlockchainInstant m_from;
    bool m_fromHasBeenSet = false;

    BlockchainInstant m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
