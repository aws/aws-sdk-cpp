/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/DayOfWeekName.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>An enumeration of days of the week used for scheduling maintenance
   * windows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DayOfWeek">AWS API
   * Reference</a></p>
   */
  class DayOfWeek
  {
  public:
    AWS_ODB_API DayOfWeek() = default;
    AWS_ODB_API DayOfWeek(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API DayOfWeek& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the day of the week.</p>
     */
    inline DayOfWeekName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(DayOfWeekName value) { m_nameHasBeenSet = true; m_name = value; }
    inline DayOfWeek& WithName(DayOfWeekName value) { SetName(value); return *this;}
    ///@}
  private:

    DayOfWeekName m_name{DayOfWeekName::NOT_SET};
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
