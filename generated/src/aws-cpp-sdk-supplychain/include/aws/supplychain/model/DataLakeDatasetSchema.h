/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supplychain/model/DataLakeDatasetSchemaField.h>
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
   * <p>The schema details of the dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataLakeDatasetSchema">AWS
   * API Reference</a></p>
   */
  class DataLakeDatasetSchema
  {
  public:
    AWS_SUPPLYCHAIN_API DataLakeDatasetSchema();
    AWS_SUPPLYCHAIN_API DataLakeDatasetSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataLakeDatasetSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dataset schema.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataLakeDatasetSchema& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataLakeDatasetSchema& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataLakeDatasetSchema& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of field details of the dataset schema.</p>
     */
    inline const Aws::Vector<DataLakeDatasetSchemaField>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<DataLakeDatasetSchemaField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<DataLakeDatasetSchemaField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline DataLakeDatasetSchema& WithFields(const Aws::Vector<DataLakeDatasetSchemaField>& value) { SetFields(value); return *this;}
    inline DataLakeDatasetSchema& WithFields(Aws::Vector<DataLakeDatasetSchemaField>&& value) { SetFields(std::move(value)); return *this;}
    inline DataLakeDatasetSchema& AddFields(const DataLakeDatasetSchemaField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline DataLakeDatasetSchema& AddFields(DataLakeDatasetSchemaField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<DataLakeDatasetSchemaField> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
