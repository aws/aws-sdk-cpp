/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KPIVisualStandardLayoutType.h>
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
   * <p>The standard layout of the KPI visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPIVisualStandardLayout">AWS
   * API Reference</a></p>
   */
  class KPIVisualStandardLayout
  {
  public:
    AWS_QUICKSIGHT_API KPIVisualStandardLayout();
    AWS_QUICKSIGHT_API KPIVisualStandardLayout(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIVisualStandardLayout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The standard layout type.</p>
     */
    inline const KPIVisualStandardLayoutType& GetType() const{ return m_type; }

    /**
     * <p>The standard layout type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The standard layout type.</p>
     */
    inline void SetType(const KPIVisualStandardLayoutType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The standard layout type.</p>
     */
    inline void SetType(KPIVisualStandardLayoutType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The standard layout type.</p>
     */
    inline KPIVisualStandardLayout& WithType(const KPIVisualStandardLayoutType& value) { SetType(value); return *this;}

    /**
     * <p>The standard layout type.</p>
     */
    inline KPIVisualStandardLayout& WithType(KPIVisualStandardLayoutType&& value) { SetType(std::move(value)); return *this;}

  private:

    KPIVisualStandardLayoutType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
