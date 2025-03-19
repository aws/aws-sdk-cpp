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
    AWS_OMICS_API TsvStoreOptions() = default;
    AWS_OMICS_API TsvStoreOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API TsvStoreOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The store's annotation type.</p>
     */
    inline AnnotationType GetAnnotationType() const { return m_annotationType; }
    inline bool AnnotationTypeHasBeenSet() const { return m_annotationTypeHasBeenSet; }
    inline void SetAnnotationType(AnnotationType value) { m_annotationTypeHasBeenSet = true; m_annotationType = value; }
    inline TsvStoreOptions& WithAnnotationType(AnnotationType value) { SetAnnotationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's header key to column name mapping.</p>
     */
    inline const Aws::Map<FormatToHeaderKey, Aws::String>& GetFormatToHeader() const { return m_formatToHeader; }
    inline bool FormatToHeaderHasBeenSet() const { return m_formatToHeaderHasBeenSet; }
    template<typename FormatToHeaderT = Aws::Map<FormatToHeaderKey, Aws::String>>
    void SetFormatToHeader(FormatToHeaderT&& value) { m_formatToHeaderHasBeenSet = true; m_formatToHeader = std::forward<FormatToHeaderT>(value); }
    template<typename FormatToHeaderT = Aws::Map<FormatToHeaderKey, Aws::String>>
    TsvStoreOptions& WithFormatToHeader(FormatToHeaderT&& value) { SetFormatToHeader(std::forward<FormatToHeaderT>(value)); return *this;}
    inline TsvStoreOptions& AddFormatToHeader(FormatToHeaderKey key, Aws::String value) {
      m_formatToHeaderHasBeenSet = true; m_formatToHeader.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The store's schema.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::Vector<Aws::Map<Aws::String, SchemaValueType>>>
    TsvStoreOptions& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    template<typename SchemaT = Aws::Map<Aws::String, SchemaValueType>>
    TsvStoreOptions& AddSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema.emplace_back(std::forward<SchemaT>(value)); return *this; }
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
