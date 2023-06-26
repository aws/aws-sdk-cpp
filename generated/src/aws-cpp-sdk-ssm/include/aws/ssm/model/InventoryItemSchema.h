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
    AWS_SSM_API InventoryItemSchema();
    AWS_SSM_API InventoryItemSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryItemSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * Amazon Web Services. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * Amazon Web Services. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * Amazon Web Services. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * Amazon Web Services. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * Amazon Web Services. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * Amazon Web Services. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline InventoryItemSchema& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * Amazon Web Services. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline InventoryItemSchema& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * Amazon Web Services. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline InventoryItemSchema& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline InventoryItemSchema& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline InventoryItemSchema& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline InventoryItemSchema& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline const Aws::Vector<InventoryItemAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline void SetAttributes(const Aws::Vector<InventoryItemAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline void SetAttributes(Aws::Vector<InventoryItemAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline InventoryItemSchema& WithAttributes(const Aws::Vector<InventoryItemAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline InventoryItemSchema& WithAttributes(Aws::Vector<InventoryItemAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline InventoryItemSchema& AddAttributes(const InventoryItemAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline InventoryItemSchema& AddAttributes(InventoryItemAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The alias name of the inventory type. The alias name is used for display
     * purposes.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The alias name of the inventory type. The alias name is used for display
     * purposes.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The alias name of the inventory type. The alias name is used for display
     * purposes.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The alias name of the inventory type. The alias name is used for display
     * purposes.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The alias name of the inventory type. The alias name is used for display
     * purposes.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The alias name of the inventory type. The alias name is used for display
     * purposes.</p>
     */
    inline InventoryItemSchema& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The alias name of the inventory type. The alias name is used for display
     * purposes.</p>
     */
    inline InventoryItemSchema& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The alias name of the inventory type. The alias name is used for display
     * purposes.</p>
     */
    inline InventoryItemSchema& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

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
