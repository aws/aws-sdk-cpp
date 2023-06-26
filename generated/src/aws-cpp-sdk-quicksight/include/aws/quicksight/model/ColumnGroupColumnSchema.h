/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure describing the name, data type, and geographic role of the
   * columns.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnGroupColumnSchema">AWS
   * API Reference</a></p>
   */
  class ColumnGroupColumnSchema
  {
  public:
    AWS_QUICKSIGHT_API ColumnGroupColumnSchema();
    AWS_QUICKSIGHT_API ColumnGroupColumnSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnGroupColumnSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column group's column schema.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the column group's column schema.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the column group's column schema.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the column group's column schema.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the column group's column schema.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the column group's column schema.</p>
     */
    inline ColumnGroupColumnSchema& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the column group's column schema.</p>
     */
    inline ColumnGroupColumnSchema& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the column group's column schema.</p>
     */
    inline ColumnGroupColumnSchema& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
