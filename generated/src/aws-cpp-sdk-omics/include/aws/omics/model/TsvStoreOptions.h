/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/AnnotationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/FormatToHeaderKey.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/SchemaValueType.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>File settings for a TSV store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/TsvStoreOptions">AWS
   * API Reference</a></p>
   */
  class TsvStoreOptions
  {
  public:
    AWS_OMICS_API TsvStoreOptions();
    AWS_OMICS_API TsvStoreOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API TsvStoreOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The store's annotation type.</p>
     */
    inline const AnnotationType& GetAnnotationType() const{ return m_annotationType; }

    /**
     * <p>The store's annotation type.</p>
     */
    inline bool AnnotationTypeHasBeenSet() const { return m_annotationTypeHasBeenSet; }

    /**
     * <p>The store's annotation type.</p>
     */
    inline void SetAnnotationType(const AnnotationType& value) { m_annotationTypeHasBeenSet = true; m_annotationType = value; }

    /**
     * <p>The store's annotation type.</p>
     */
    inline void SetAnnotationType(AnnotationType&& value) { m_annotationTypeHasBeenSet = true; m_annotationType = std::move(value); }

    /**
     * <p>The store's annotation type.</p>
     */
    inline TsvStoreOptions& WithAnnotationType(const AnnotationType& value) { SetAnnotationType(value); return *this;}

    /**
     * <p>The store's annotation type.</p>
     */
    inline TsvStoreOptions& WithAnnotationType(AnnotationType&& value) { SetAnnotationType(std::move(value)); return *this;}


    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline const Aws::Map<FormatToHeaderKey, Aws::String>& GetFormatToHeader() const{ return m_formatToHeader; }

    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline bool FormatToHeaderHasBeenSet() const { return m_formatToHeaderHasBeenSet; }

    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline void SetFormatToHeader(const Aws::Map<FormatToHeaderKey, Aws::String>& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader = value; }

    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline void SetFormatToHeader(Aws::Map<FormatToHeaderKey, Aws::String>&& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader = std::move(value); }

    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline TsvStoreOptions& WithFormatToHeader(const Aws::Map<FormatToHeaderKey, Aws::String>& value) { SetFormatToHeader(value); return *this;}

    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline TsvStoreOptions& WithFormatToHeader(Aws::Map<FormatToHeaderKey, Aws::String>&& value) { SetFormatToHeader(std::move(value)); return *this;}

    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline TsvStoreOptions& AddFormatToHeader(const FormatToHeaderKey& key, const Aws::String& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(key, value); return *this; }

    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline TsvStoreOptions& AddFormatToHeader(FormatToHeaderKey&& key, const Aws::String& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(std::move(key), value); return *this; }

    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline TsvStoreOptions& AddFormatToHeader(const FormatToHeaderKey& key, Aws::String&& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline TsvStoreOptions& AddFormatToHeader(FormatToHeaderKey&& key, Aws::String&& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline TsvStoreOptions& AddFormatToHeader(FormatToHeaderKey&& key, const char* value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(std::move(key), value); return *this; }

    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline TsvStoreOptions& AddFormatToHeader(const FormatToHeaderKey& key, const char* value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(key, value); return *this; }


    /**
     * <p>The store's schema.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>& GetSchema() const{ return m_schema; }

    /**
     * <p>The store's schema.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The store's schema.</p>
     */
    inline void SetSchema(const Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The store's schema.</p>
     */
    inline void SetSchema(Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The store's schema.</p>
     */
    inline TsvStoreOptions& WithSchema(const Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>& value) { SetSchema(value); return *this;}

    /**
     * <p>The store's schema.</p>
     */
    inline TsvStoreOptions& WithSchema(Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The store's schema.</p>
     */
    inline TsvStoreOptions& AddSchema(const Aws::Map<Aws::String, SchemaValueType>& value) { m_schemaHasBeenSet = true; m_schema.push_back(value); return *this; }

    /**
     * <p>The store's schema.</p>
     */
    inline TsvStoreOptions& AddSchema(Aws::Map<Aws::String, SchemaValueType>&& value) { m_schemaHasBeenSet = true; m_schema.push_back(std::move(value)); return *this; }

  private:

    AnnotationType m_annotationType;
    bool m_annotationTypeHasBeenSet = false;

    Aws::Map<FormatToHeaderKey, Aws::String> m_formatToHeader;
    bool m_formatToHeaderHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, SchemaValueType>> m_schema;
    bool m_schemaHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
