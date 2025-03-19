/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataLakeDatasetSchemaFieldType.h>
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
   * <p>The dataset field details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataLakeDatasetSchemaField">AWS
   * API Reference</a></p>
   */
  class DataLakeDatasetSchemaField
  {
  public:
    AWS_SUPPLYCHAIN_API DataLakeDatasetSchemaField() = default;
    AWS_SUPPLYCHAIN_API DataLakeDatasetSchemaField(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataLakeDatasetSchemaField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dataset field name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataLakeDatasetSchemaField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset field type.</p>
     */
    inline DataLakeDatasetSchemaFieldType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataLakeDatasetSchemaFieldType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataLakeDatasetSchemaField& WithType(DataLakeDatasetSchemaFieldType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicate if the field is required or not.</p>
     */
    inline bool GetIsRequired() const { return m_isRequired; }
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }
    inline DataLakeDatasetSchemaField& WithIsRequired(bool value) { SetIsRequired(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataLakeDatasetSchemaFieldType m_type{DataLakeDatasetSchemaFieldType::NOT_SET};
    bool m_typeHasBeenSet = false;

    bool m_isRequired{false};
    bool m_isRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
