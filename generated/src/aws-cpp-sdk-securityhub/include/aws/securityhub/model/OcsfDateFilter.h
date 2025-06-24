/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/OcsfDateField.h>
#include <aws/securityhub/model/DateFilter.h>
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
   * <p>Enables filtering of security findings based on date and timestamp fields in
   * OCSF.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/OcsfDateFilter">AWS
   * API Reference</a></p>
   */
  class OcsfDateFilter
  {
  public:
    AWS_SECURITYHUB_API OcsfDateFilter() = default;
    AWS_SECURITYHUB_API OcsfDateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API OcsfDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field.</p>
     */
    inline OcsfDateField GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(OcsfDateField value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline OcsfDateFilter& WithFieldName(OcsfDateField value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    
    inline const DateFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = DateFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = DateFilter>
    OcsfDateFilter& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    OcsfDateField m_fieldName{OcsfDateField::NOT_SET};
    bool m_fieldNameHasBeenSet = false;

    DateFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
