/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ResourcesNumberField.h>
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
   * <p>Enables filtering of Amazon Web Services resources based on numerical
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourcesNumberFilter">AWS
   * API Reference</a></p>
   */
  class ResourcesNumberFilter
  {
  public:
    AWS_SECURITYHUB_API ResourcesNumberFilter() = default;
    AWS_SECURITYHUB_API ResourcesNumberFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ResourcesNumberFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field.</p>
     */
    inline ResourcesNumberField GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(ResourcesNumberField value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline ResourcesNumberFilter& WithFieldName(ResourcesNumberField value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    
    inline const NumberFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = NumberFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = NumberFilter>
    ResourcesNumberFilter& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    ResourcesNumberField m_fieldName{ResourcesNumberField::NOT_SET};
    bool m_fieldNameHasBeenSet = false;

    NumberFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
