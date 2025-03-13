/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InventoryItemAttribute.h>
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
   * <p>The inventory item schema definition. Users can use this to compose inventory
   * query filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryItemSchema">AWS
   * API Reference</a></p>
   */
  class InventoryItemSchema
  {
  public:
    AWS_SSM_API InventoryItemSchema() = default;
    AWS_SSM_API InventoryItemSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryItemSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * Amazon Web Services. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    InventoryItemSchema& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    InventoryItemSchema& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline const Aws::Vector<InventoryItemAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<InventoryItemAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<InventoryItemAttribute>>
    InventoryItemSchema& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = InventoryItemAttribute>
    InventoryItemSchema& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The alias name of the inventory type. The alias name is used for display
     * purposes.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    InventoryItemSchema& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<InventoryItemAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
