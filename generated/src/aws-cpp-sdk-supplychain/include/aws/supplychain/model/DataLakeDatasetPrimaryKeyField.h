/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
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
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The detail of the primary key field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataLakeDatasetPrimaryKeyField">AWS
   * API Reference</a></p>
   */
  class DataLakeDatasetPrimaryKeyField
  {
  public:
    AWS_SUPPLYCHAIN_API DataLakeDatasetPrimaryKeyField() = default;
    AWS_SUPPLYCHAIN_API DataLakeDatasetPrimaryKeyField(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataLakeDatasetPrimaryKeyField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the primary key field.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataLakeDatasetPrimaryKeyField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
