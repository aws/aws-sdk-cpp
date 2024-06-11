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
   * <p>The metadata of the contract.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/ContractMetadata">AWS
   * API Reference</a></p>
   */
  class ContractMetadata
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractMetadata();
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the token contract.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ContractMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ContractMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ContractMetadata& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The symbol of the token contract.</p>
     */
    inline const Aws::String& GetSymbol() const{ return m_symbol; }
    inline bool SymbolHasBeenSet() const { return m_symbolHasBeenSet; }
    inline void SetSymbol(const Aws::String& value) { m_symbolHasBeenSet = true; m_symbol = value; }
    inline void SetSymbol(Aws::String&& value) { m_symbolHasBeenSet = true; m_symbol = std::move(value); }
    inline void SetSymbol(const char* value) { m_symbolHasBeenSet = true; m_symbol.assign(value); }
    inline ContractMetadata& WithSymbol(const Aws::String& value) { SetSymbol(value); return *this;}
    inline ContractMetadata& WithSymbol(Aws::String&& value) { SetSymbol(std::move(value)); return *this;}
    inline ContractMetadata& WithSymbol(const char* value) { SetSymbol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decimals used by the token contract.</p>
     */
    inline int GetDecimals() const{ return m_decimals; }
    inline bool DecimalsHasBeenSet() const { return m_decimalsHasBeenSet; }
    inline void SetDecimals(int value) { m_decimalsHasBeenSet = true; m_decimals = value; }
    inline ContractMetadata& WithDecimals(int value) { SetDecimals(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_symbol;
    bool m_symbolHasBeenSet = false;

    int m_decimals;
    bool m_decimalsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
