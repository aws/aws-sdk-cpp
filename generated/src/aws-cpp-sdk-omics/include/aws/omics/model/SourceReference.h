/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/SourceReferenceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about the source reference in a code repository, such as
   * a branch, tag, or commit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/SourceReference">AWS
   * API Reference</a></p>
   */
  class SourceReference
  {
  public:
    AWS_OMICS_API SourceReference() = default;
    AWS_OMICS_API SourceReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API SourceReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of source reference, such as branch, tag, or commit.</p>
     */
    inline SourceReferenceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SourceReferenceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SourceReference& WithType(SourceReferenceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the source reference, such as the branch name, tag name, or
     * commit ID.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    SourceReference& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    SourceReferenceType m_type{SourceReferenceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
