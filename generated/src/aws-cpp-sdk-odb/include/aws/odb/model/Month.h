/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/MonthName.h>
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
   * <p>An enumeration of months used for scheduling maintenance
   * windows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/Month">AWS API
   * Reference</a></p>
   */
  class Month
  {
  public:
    AWS_ODB_API Month() = default;
    AWS_ODB_API Month(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Month& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the month.</p>
     */
    inline MonthName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(MonthName value) { m_nameHasBeenSet = true; m_name = value; }
    inline Month& WithName(MonthName value) { SetName(value); return *this;}
    ///@}
  private:

    MonthName m_name{MonthName::NOT_SET};
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
