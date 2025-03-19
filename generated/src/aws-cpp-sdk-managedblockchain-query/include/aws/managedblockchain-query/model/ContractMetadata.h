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
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractMetadata() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API ContractMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the token contract.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContractMetadata& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The symbol of the token contract.</p>
     */
    inline const Aws::String& GetSymbol() const { return m_symbol; }
    inline bool SymbolHasBeenSet() const { return m_symbolHasBeenSet; }
    template<typename SymbolT = Aws::String>
    void SetSymbol(SymbolT&& value) { m_symbolHasBeenSet = true; m_symbol = std::forward<SymbolT>(value); }
    template<typename SymbolT = Aws::String>
    ContractMetadata& WithSymbol(SymbolT&& value) { SetSymbol(std::forward<SymbolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decimals used by the token contract.</p>
     */
    inline int GetDecimals() const { return m_decimals; }
    inline bool DecimalsHasBeenSet() const { return m_decimalsHasBeenSet; }
    inline void SetDecimals(int value) { m_decimalsHasBeenSet = true; m_decimals = value; }
    inline ContractMetadata& WithDecimals(int value) { SetDecimals(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_symbol;
    bool m_symbolHasBeenSet = false;

    int m_decimals{0};
    bool m_decimalsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
