/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The inventory result item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryResultItem">AWS
   * API Reference</a></p>
   */
  class InventoryResultItem
  {
  public:
    AWS_SSM_API InventoryResultItem();
    AWS_SSM_API InventoryResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the inventory result item type.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the inventory result item type.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the inventory result item type.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the inventory result item type.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the inventory result item type.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the inventory result item type.</p>
     */
    inline InventoryResultItem& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the inventory result item type.</p>
     */
    inline InventoryResultItem& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the inventory result item type.</p>
     */
    inline InventoryResultItem& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The schema version for the inventory result item/</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The schema version for the inventory result item/</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The schema version for the inventory result item/</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version for the inventory result item/</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The schema version for the inventory result item/</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The schema version for the inventory result item/</p>
     */
    inline InventoryResultItem& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The schema version for the inventory result item/</p>
     */
    inline InventoryResultItem& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The schema version for the inventory result item/</p>
     */
    inline InventoryResultItem& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The time inventory item data was captured.</p>
     */
    inline const Aws::String& GetCaptureTime() const{ return m_captureTime; }

    /**
     * <p>The time inventory item data was captured.</p>
     */
    inline bool CaptureTimeHasBeenSet() const { return m_captureTimeHasBeenSet; }

    /**
     * <p>The time inventory item data was captured.</p>
     */
    inline void SetCaptureTime(const Aws::String& value) { m_captureTimeHasBeenSet = true; m_captureTime = value; }

    /**
     * <p>The time inventory item data was captured.</p>
     */
    inline void SetCaptureTime(Aws::String&& value) { m_captureTimeHasBeenSet = true; m_captureTime = std::move(value); }

    /**
     * <p>The time inventory item data was captured.</p>
     */
    inline void SetCaptureTime(const char* value) { m_captureTimeHasBeenSet = true; m_captureTime.assign(value); }

    /**
     * <p>The time inventory item data was captured.</p>
     */
    inline InventoryResultItem& WithCaptureTime(const Aws::String& value) { SetCaptureTime(value); return *this;}

    /**
     * <p>The time inventory item data was captured.</p>
     */
    inline InventoryResultItem& WithCaptureTime(Aws::String&& value) { SetCaptureTime(std::move(value)); return *this;}

    /**
     * <p>The time inventory item data was captured.</p>
     */
    inline InventoryResultItem& WithCaptureTime(const char* value) { SetCaptureTime(value); return *this;}


    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline const Aws::String& GetContentHash() const{ return m_contentHash; }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline bool ContentHashHasBeenSet() const { return m_contentHashHasBeenSet; }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline void SetContentHash(const Aws::String& value) { m_contentHashHasBeenSet = true; m_contentHash = value; }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline void SetContentHash(Aws::String&& value) { m_contentHashHasBeenSet = true; m_contentHash = std::move(value); }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline void SetContentHash(const char* value) { m_contentHashHasBeenSet = true; m_contentHash.assign(value); }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline InventoryResultItem& WithContentHash(const Aws::String& value) { SetContentHash(value); return *this;}

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline InventoryResultItem& WithContentHash(Aws::String&& value) { SetContentHash(std::move(value)); return *this;}

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline InventoryResultItem& WithContentHash(const char* value) { SetContentHash(value); return *this;}


    /**
     * <p>Contains all the inventory data of the item type. Results include attribute
     * names and values. </p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetContent() const{ return m_content; }

    /**
     * <p>Contains all the inventory data of the item type. Results include attribute
     * names and values. </p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>Contains all the inventory data of the item type. Results include attribute
     * names and values. </p>
     */
    inline void SetContent(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>Contains all the inventory data of the item type. Results include attribute
     * names and values. </p>
     */
    inline void SetContent(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>Contains all the inventory data of the item type. Results include attribute
     * names and values. </p>
     */
    inline InventoryResultItem& WithContent(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetContent(value); return *this;}

    /**
     * <p>Contains all the inventory data of the item type. Results include attribute
     * names and values. </p>
     */
    inline InventoryResultItem& WithContent(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>Contains all the inventory data of the item type. Results include attribute
     * names and values. </p>
     */
    inline InventoryResultItem& AddContent(const Aws::Map<Aws::String, Aws::String>& value) { m_contentHasBeenSet = true; m_content.push_back(value); return *this; }

    /**
     * <p>Contains all the inventory data of the item type. Results include attribute
     * names and values. </p>
     */
    inline InventoryResultItem& AddContent(Aws::Map<Aws::String, Aws::String>&& value) { m_contentHasBeenSet = true; m_content.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_captureTime;
    bool m_captureTimeHasBeenSet = false;

    Aws::String m_contentHash;
    bool m_contentHashHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
