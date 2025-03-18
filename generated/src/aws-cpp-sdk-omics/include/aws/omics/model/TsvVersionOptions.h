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
    AWS_OMICS_API TsvVersionOptions() = default;
    AWS_OMICS_API TsvVersionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API TsvVersionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The store version's annotation type. </p>
     */
    inline AnnotationType GetAnnotationType() const { return m_annotationType; }
    inline bool AnnotationTypeHasBeenSet() const { return m_annotationTypeHasBeenSet; }
    inline void SetAnnotationType(AnnotationType value) { m_annotationTypeHasBeenSet = true; m_annotationType = value; }
    inline TsvVersionOptions& WithAnnotationType(AnnotationType value) { SetAnnotationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The annotation store version's header key to column name mapping. </p>
     */
    inline const Aws::Map<FormatToHeaderKey, Aws::String>& GetFormatToHeader() const { return m_formatToHeader; }
    inline bool FormatToHeaderHasBeenSet() const { return m_formatToHeaderHasBeenSet; }
    template<typename FormatToHeaderT = Aws::Map<FormatToHeaderKey, Aws::String>>
    void SetFormatToHeader(FormatToHeaderT&& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader = std::forward<FormatToHeaderT>(value); }
    template<typename FormatToHeaderT = Aws::Map<FormatToHeaderKey, Aws::String>>
    TsvVersionOptions& WithFormatToHeader(FormatToHeaderT&& value) { SetFormatToHeader(std::forward<FormatToHeaderT>(value)); return *this;}
    inline TsvVersionOptions& AddFormatToHeader(FormatToHeaderKey key, Aws::String value) {
      m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The TSV schema for an annotation store version. </p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>>
    TsvVersionOptions& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    template<typename SchemaT = Aws::Map<Aws::String, SchemaValueType>>
    TsvVersionOptions& AddSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema.emplace_back(std::forward<SchemaT>(value)); return *this; }
    ///@}
  private:

    AnnotationType m_annotationType{AnnotationType::NOT_SET};
    bool m_annotationTypeHasBeenSet = false;

    Aws::Map<FormatToHeaderKey, Aws::String> m_formatToHeader;
    bool m_formatToHeaderHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, SchemaValueType>> m_schema;
    bool m_schemaHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
