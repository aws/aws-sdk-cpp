/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/OcsfNumberField.h>
#include <aws/securityhub/model/NumberFilter.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Enables filtering of security findings based on numerical field values in
   * OCSF.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/OcsfNumberFilter">AWS
   * API Reference</a></p>
   */
  class OcsfNumberFilter
  {
  public:
    AWS_SECURITYHUB_API OcsfNumberFilter() = default;
    AWS_SECURITYHUB_API OcsfNumberFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API OcsfNumberFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field.</p>
     */
    inline OcsfNumberField GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(OcsfNumberField value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline OcsfNumberFilter& WithFieldName(OcsfNumberField value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    
    inline const NumberFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = NumberFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = NumberFilter>
    OcsfNumberFilter& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    OcsfNumberField m_fieldName{OcsfNumberField::NOT_SET};
    bool m_fieldNameHasBeenSet = false;

    NumberFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
