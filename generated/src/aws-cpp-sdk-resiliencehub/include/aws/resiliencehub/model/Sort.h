/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Indicates the sorting order of the fields in the metrics.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/Sort">AWS
   * API Reference</a></p>
   */
  class Sort
  {
  public:
    AWS_RESILIENCEHUB_API Sort() = default;
    AWS_RESILIENCEHUB_API Sort(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Sort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the name or identifier of the field or attribute that should be
     * used as the basis for sorting the metrics.</p>
     */
    inline bool GetAscending() const { return m_ascending; }
    inline bool AscendingHasBeenSet() const { return m_ascendingHasBeenSet; }
    inline void SetAscending(bool value) { m_ascendingHasBeenSet = true; m_ascending = value; }
    inline Sort& WithAscending(bool value) { SetAscending(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the order in which you want to sort the metrics. By default, the
     * list is sorted in ascending order. To sort the list in descending order, set
     * this field to False.</p>
     */
    inline const Aws::String& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = Aws::String>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = Aws::String>
    Sort& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}
  private:

    bool m_ascending{false};
    bool m_ascendingHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
