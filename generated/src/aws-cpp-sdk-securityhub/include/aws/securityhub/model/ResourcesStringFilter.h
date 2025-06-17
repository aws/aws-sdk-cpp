/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ResourcesStringField.h>
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
   * <p>Enables filtering of Amazon Web Services resources based on string field
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourcesStringFilter">AWS
   * API Reference</a></p>
   */
  class ResourcesStringFilter
  {
  public:
    AWS_SECURITYHUB_API ResourcesStringFilter() = default;
    AWS_SECURITYHUB_API ResourcesStringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ResourcesStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field.</p>
     */
    inline ResourcesStringField GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(ResourcesStringField value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline ResourcesStringFilter& WithFieldName(ResourcesStringField value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    
    inline const StringFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = StringFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = StringFilter>
    ResourcesStringFilter& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    ResourcesStringField m_fieldName{ResourcesStringField::NOT_SET};
    bool m_fieldNameHasBeenSet = false;

    StringFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
