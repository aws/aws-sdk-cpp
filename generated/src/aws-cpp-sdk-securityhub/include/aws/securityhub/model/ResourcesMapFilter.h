/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ResourcesMapField.h>
#include <aws/securityhub/model/MapFilter.h>
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
   * <p>Enables filtering of Amazon Web Services resources based on key-value map
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourcesMapFilter">AWS
   * API Reference</a></p>
   */
  class ResourcesMapFilter
  {
  public:
    AWS_SECURITYHUB_API ResourcesMapFilter() = default;
    AWS_SECURITYHUB_API ResourcesMapFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ResourcesMapFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field.</p>
     */
    inline ResourcesMapField GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(ResourcesMapField value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline ResourcesMapFilter& WithFieldName(ResourcesMapField value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    
    inline const MapFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = MapFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = MapFilter>
    ResourcesMapFilter& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    ResourcesMapField m_fieldName{ResourcesMapField::NOT_SET};
    bool m_fieldNameHasBeenSet = false;

    MapFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
