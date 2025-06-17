/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/OcsfStringField.h>
#include <aws/securityhub/model/StringFilter.h>
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
   * <p>Enables filtering of security findings based on string field values in
   * OCSF.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/OcsfStringFilter">AWS
   * API Reference</a></p>
   */
  class OcsfStringFilter
  {
  public:
    AWS_SECURITYHUB_API OcsfStringFilter() = default;
    AWS_SECURITYHUB_API OcsfStringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API OcsfStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field.</p>
     */
    inline OcsfStringField GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(OcsfStringField value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline OcsfStringFilter& WithFieldName(OcsfStringField value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    
    inline const StringFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = StringFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = StringFilter>
    OcsfStringFilter& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    OcsfStringField m_fieldName{OcsfStringField::NOT_SET};
    bool m_fieldNameHasBeenSet = false;

    StringFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
