/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InventoryAttributeDataType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Attributes are the entries within the inventory item content. It contains
   * name and value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryItemAttribute">AWS
   * API Reference</a></p>
   */
  class InventoryItemAttribute
  {
  public:
    AWS_SSM_API InventoryItemAttribute();
    AWS_SSM_API InventoryItemAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryItemAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the inventory item attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InventoryItemAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InventoryItemAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InventoryItemAttribute& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the inventory item attribute. </p>
     */
    inline const InventoryAttributeDataType& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const InventoryAttributeDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(InventoryAttributeDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline InventoryItemAttribute& WithDataType(const InventoryAttributeDataType& value) { SetDataType(value); return *this;}
    inline InventoryItemAttribute& WithDataType(InventoryAttributeDataType&& value) { SetDataType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InventoryAttributeDataType m_dataType;
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
