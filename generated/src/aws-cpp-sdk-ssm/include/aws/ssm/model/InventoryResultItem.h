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
    AWS_SSM_API InventoryResultItem() = default;
    AWS_SSM_API InventoryResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the inventory result item type.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    InventoryResultItem& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version for the inventory result item/</p>
     */
    inline const Aws::String& GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    template<typename SchemaVersionT = Aws::String>
    void SetSchemaVersion(SchemaVersionT&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::forward<SchemaVersionT>(value); }
    template<typename SchemaVersionT = Aws::String>
    InventoryResultItem& WithSchemaVersion(SchemaVersionT&& value) { SetSchemaVersion(std::forward<SchemaVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time inventory item data was captured.</p>
     */
    inline const Aws::String& GetCaptureTime() const { return m_captureTime; }
    inline bool CaptureTimeHasBeenSet() const { return m_captureTimeHasBeenSet; }
    template<typename CaptureTimeT = Aws::String>
    void SetCaptureTime(CaptureTimeT&& value) { m_captureTimeHasBeenSet = true; m_captureTime = std::forward<CaptureTimeT>(value); }
    template<typename CaptureTimeT = Aws::String>
    InventoryResultItem& WithCaptureTime(CaptureTimeT&& value) { SetCaptureTime(std::forward<CaptureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline const Aws::String& GetContentHash() const { return m_contentHash; }
    inline bool ContentHashHasBeenSet() const { return m_contentHashHasBeenSet; }
    template<typename ContentHashT = Aws::String>
    void SetContentHash(ContentHashT&& value) { m_contentHashHasBeenSet = true; m_contentHash = std::forward<ContentHashT>(value); }
    template<typename ContentHashT = Aws::String>
    InventoryResultItem& WithContentHash(ContentHashT&& value) { SetContentHash(std::forward<ContentHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains all the inventory data of the item type. Results include attribute
     * names and values. </p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    InventoryResultItem& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    template<typename ContentT = Aws::Map<Aws::String, Aws::String>>
    InventoryResultItem& AddContent(ContentT&& value) { m_contentHasBeenSet = true; m_content.emplace_back(std::forward<ContentT>(value)); return *this; }
    ///@}
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
