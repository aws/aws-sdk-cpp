/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ExplicitHierarchy.h>
#include <aws/quicksight/model/DateTimeHierarchy.h>
#include <aws/quicksight/model/PredefinedHierarchy.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The option that determines the hierarchy of the fields for a visual
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnHierarchy">AWS
   * API Reference</a></p>
   */
  class ColumnHierarchy
  {
  public:
    AWS_QUICKSIGHT_API ColumnHierarchy() = default;
    AWS_QUICKSIGHT_API ColumnHierarchy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnHierarchy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The option that determines the hierarchy of the fields that are built within
     * a visual's field wells. These fields can't be duplicated to other visuals.</p>
     */
    inline const ExplicitHierarchy& GetExplicitHierarchy() const { return m_explicitHierarchy; }
    inline bool ExplicitHierarchyHasBeenSet() const { return m_explicitHierarchyHasBeenSet; }
    template<typename ExplicitHierarchyT = ExplicitHierarchy>
    void SetExplicitHierarchy(ExplicitHierarchyT&& value) { m_explicitHierarchyHasBeenSet = true; m_explicitHierarchy = std::forward<ExplicitHierarchyT>(value); }
    template<typename ExplicitHierarchyT = ExplicitHierarchy>
    ColumnHierarchy& WithExplicitHierarchy(ExplicitHierarchyT&& value) { SetExplicitHierarchy(std::forward<ExplicitHierarchyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option that determines the hierarchy of any <code>DateTime</code>
     * fields.</p>
     */
    inline const DateTimeHierarchy& GetDateTimeHierarchy() const { return m_dateTimeHierarchy; }
    inline bool DateTimeHierarchyHasBeenSet() const { return m_dateTimeHierarchyHasBeenSet; }
    template<typename DateTimeHierarchyT = DateTimeHierarchy>
    void SetDateTimeHierarchy(DateTimeHierarchyT&& value) { m_dateTimeHierarchyHasBeenSet = true; m_dateTimeHierarchy = std::forward<DateTimeHierarchyT>(value); }
    template<typename DateTimeHierarchyT = DateTimeHierarchy>
    ColumnHierarchy& WithDateTimeHierarchy(DateTimeHierarchyT&& value) { SetDateTimeHierarchy(std::forward<DateTimeHierarchyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option that determines the hierarchy of the fields that are defined
     * during data preparation. These fields are available to use in any analysis that
     * uses the data source.</p>
     */
    inline const PredefinedHierarchy& GetPredefinedHierarchy() const { return m_predefinedHierarchy; }
    inline bool PredefinedHierarchyHasBeenSet() const { return m_predefinedHierarchyHasBeenSet; }
    template<typename PredefinedHierarchyT = PredefinedHierarchy>
    void SetPredefinedHierarchy(PredefinedHierarchyT&& value) { m_predefinedHierarchyHasBeenSet = true; m_predefinedHierarchy = std::forward<PredefinedHierarchyT>(value); }
    template<typename PredefinedHierarchyT = PredefinedHierarchy>
    ColumnHierarchy& WithPredefinedHierarchy(PredefinedHierarchyT&& value) { SetPredefinedHierarchy(std::forward<PredefinedHierarchyT>(value)); return *this;}
    ///@}
  private:

    ExplicitHierarchy m_explicitHierarchy;
    bool m_explicitHierarchyHasBeenSet = false;

    DateTimeHierarchy m_dateTimeHierarchy;
    bool m_dateTimeHierarchyHasBeenSet = false;

    PredefinedHierarchy m_predefinedHierarchy;
    bool m_predefinedHierarchyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
