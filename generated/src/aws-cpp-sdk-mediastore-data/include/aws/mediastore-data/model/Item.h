/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore-data/model/ItemType.h>
#include <aws/core/utils/DateTime.h>
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
namespace MediaStoreData
{
namespace Model
{

  /**
   * <p>A metadata entry for a folder or object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/Item">AWS
   * API Reference</a></p>
   */
  class Item
  {
  public:
    AWS_MEDIASTOREDATA_API Item();
    AWS_MEDIASTOREDATA_API Item(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIASTOREDATA_API Item& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIASTOREDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the item.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Item& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Item& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Item& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The item type (folder or object).</p>
     */
    inline const ItemType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ItemType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Item& WithType(const ItemType& value) { SetType(value); return *this;}
    inline Item& WithType(ItemType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag that represents a unique instance of the item.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }
    inline Item& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline Item& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline Item& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the item was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline Item& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline Item& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the item.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline Item& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline Item& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline Item& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of the item in bytes.</p>
     */
    inline long long GetContentLength() const{ return m_contentLength; }
    inline bool ContentLengthHasBeenSet() const { return m_contentLengthHasBeenSet; }
    inline void SetContentLength(long long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }
    inline Item& WithContentLength(long long value) { SetContentLength(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ItemType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    long long m_contentLength;
    bool m_contentLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
