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
   * <p> The options for a TSV file. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/TsvVersionOptions">AWS
   * API Reference</a></p>
   */
  class TsvVersionOptions
  {
  public:
    AWS_OMICS_API TsvVersionOptions();
    AWS_OMICS_API TsvVersionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API TsvVersionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The store version's annotation type. </p>
     */
    inline const AnnotationType& GetAnnotationType() const{ return m_annotationType; }

    /**
     * <p> The store version's annotation type. </p>
     */
    inline bool AnnotationTypeHasBeenSet() const { return m_annotationTypeHasBeenSet; }

    /**
     * <p> The store version's annotation type. </p>
     */
    inline void SetAnnotationType(const AnnotationType& value) { m_annotationTypeHasBeenSet = true; m_annotationType = value; }

    /**
     * <p> The store version's annotation type. </p>
     */
    inline void SetAnnotationType(AnnotationType&& value) { m_annotationTypeHasBeenSet = true; m_annotationType = std::move(value); }

    /**
     * <p> The store version's annotation type. </p>
     */
    inline TsvVersionOptions& WithAnnotationType(const AnnotationType& value) { SetAnnotationType(value); return *this;}

    /**
     * <p> The store version's annotation type. </p>
     */
    inline TsvVersionOptions& WithAnnotationType(AnnotationType&& value) { SetAnnotationType(std::move(value)); return *this;}


    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline const Aws::Map<FormatToHeaderKey, Aws::String>& GetFormatToHeader() const{ return m_formatToHeader; }

    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline bool FormatToHeaderHasBeenSet() const { return m_formatToHeaderHasBeenSet; }

    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline void SetFormatToHeader(const Aws::Map<FormatToHeaderKey, Aws::String>& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader = value; }

    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline void SetFormatToHeader(Aws::Map<FormatToHeaderKey, Aws::String>&& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader = std::move(value); }

    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline TsvVersionOptions& WithFormatToHeader(const Aws::Map<FormatToHeaderKey, Aws::String>& value) { SetFormatToHeader(value); return *this;}

    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline TsvVersionOptions& WithFormatToHeader(Aws::Map<FormatToHeaderKey, Aws::String>&& value) { SetFormatToHeader(std::move(value)); return *this;}

    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline TsvVersionOptions& AddFormatToHeader(const FormatToHeaderKey& key, const Aws::String& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(key, value); return *this; }

    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline TsvVersionOptions& AddFormatToHeader(FormatToHeaderKey&& key, const Aws::String& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(std::move(key), value); return *this; }

    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline TsvVersionOptions& AddFormatToHeader(const FormatToHeaderKey& key, Aws::String&& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline TsvVersionOptions& AddFormatToHeader(FormatToHeaderKey&& key, Aws::String&& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline TsvVersionOptions& AddFormatToHeader(FormatToHeaderKey&& key, const char* value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(std::move(key), value); return *this; }

    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline TsvVersionOptions& AddFormatToHeader(const FormatToHeaderKey& key, const char* value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(key, value); return *this; }


    /**
     * <p> The TSV schema for an annotation store version. </p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>& GetSchema() const{ return m_schema; }

    /**
     * <p> The TSV schema for an annotation store version. </p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p> The TSV schema for an annotation store version. </p>
     */
    inline void SetSchema(const Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p> The TSV schema for an annotation store version. </p>
     */
    inline void SetSchema(Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p> The TSV schema for an annotation store version. </p>
     */
    inline TsvVersionOptions& WithSchema(const Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>& value) { SetSchema(value); return *this;}

    /**
     * <p> The TSV schema for an annotation store version. </p>
     */
    inline TsvVersionOptions& WithSchema(Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p> The TSV schema for an annotation store version. </p>
     */
    inline TsvVersionOptions& AddSchema(const Aws::Map<Aws::String, SchemaValueType>& value) { m_schemaHasBeenSet = true; m_schema.push_back(value); return *this; }

    /**
     * <p> The TSV schema for an annotation store version. </p>
     */
    inline TsvVersionOptions& AddSchema(Aws::Map<Aws::String, SchemaValueType>&& value) { m_schemaHasBeenSet = true; m_schema.push_back(std::move(value)); return *this; }

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
