/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/OcsfBooleanField.h>
#include <aws/securityhub/model/BooleanFilter.h>
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
   * <p>Enables filtering of security findings based on boolean field values in
   * OCSF.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/OcsfBooleanFilter">AWS
   * API Reference</a></p>
   */
  class OcsfBooleanFilter
  {
  public:
    AWS_SECURITYHUB_API OcsfBooleanFilter() = default;
    AWS_SECURITYHUB_API OcsfBooleanFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API OcsfBooleanFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field.</p>
     */
    inline OcsfBooleanField GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(OcsfBooleanField value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline OcsfBooleanFilter& WithFieldName(OcsfBooleanField value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    
    inline const BooleanFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = BooleanFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = BooleanFilter>
    OcsfBooleanFilter& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    OcsfBooleanField m_fieldName{OcsfBooleanField::NOT_SET};
    bool m_fieldNameHasBeenSet = false;

    BooleanFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
