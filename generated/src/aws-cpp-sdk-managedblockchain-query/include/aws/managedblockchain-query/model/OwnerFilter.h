/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
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
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   * <p>The container for the owner information to filter by.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/OwnerFilter">AWS
   * API Reference</a></p>
   */
  class OwnerFilter
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API OwnerFilter();
    AWS_MANAGEDBLOCKCHAINQUERY_API OwnerFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API OwnerFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The contract or wallet address.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The contract or wallet address.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The contract or wallet address.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The contract or wallet address.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The contract or wallet address.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The contract or wallet address.</p>
     */
    inline OwnerFilter& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The contract or wallet address.</p>
     */
    inline OwnerFilter& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The contract or wallet address.</p>
     */
    inline OwnerFilter& WithAddress(const char* value) { SetAddress(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
