/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <memory>

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
namespace TimestreamQuery
{
namespace Model
{
  class Type;

  /**
   * <p> Contains the metadata for query results such as the column names, data
   * types, and other attributes. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ColumnInfo">AWS
   * API Reference</a></p>
   */
  class ColumnInfo
  {
  public:
    AWS_TIMESTREAMQUERY_API ColumnInfo();
    AWS_TIMESTREAMQUERY_API ColumnInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ColumnInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the result set column. The name of the result set is available
     * for columns of all data types except for arrays. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the result set column. The name of the result set is available
     * for columns of all data types except for arrays. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the result set column. The name of the result set is available
     * for columns of all data types except for arrays. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the result set column. The name of the result set is available
     * for columns of all data types except for arrays. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the result set column. The name of the result set is available
     * for columns of all data types except for arrays. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the result set column. The name of the result set is available
     * for columns of all data types except for arrays. </p>
     */
    inline ColumnInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the result set column. The name of the result set is available
     * for columns of all data types except for arrays. </p>
     */
    inline ColumnInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the result set column. The name of the result set is available
     * for columns of all data types except for arrays. </p>
     */
    inline ColumnInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type of the result set column. The data type can be a scalar or
     * complex. Scalar data types are integers, strings, doubles, Booleans, and others.
     * Complex data types are types such as arrays, rows, and others. </p>
     */
    AWS_TIMESTREAMQUERY_API const Type& GetType() const;

    /**
     * <p>The data type of the result set column. The data type can be a scalar or
     * complex. Scalar data types are integers, strings, doubles, Booleans, and others.
     * Complex data types are types such as arrays, rows, and others. </p>
     */
    AWS_TIMESTREAMQUERY_API bool TypeHasBeenSet() const;

    /**
     * <p>The data type of the result set column. The data type can be a scalar or
     * complex. Scalar data types are integers, strings, doubles, Booleans, and others.
     * Complex data types are types such as arrays, rows, and others. </p>
     */
    AWS_TIMESTREAMQUERY_API void SetType(const Type& value);

    /**
     * <p>The data type of the result set column. The data type can be a scalar or
     * complex. Scalar data types are integers, strings, doubles, Booleans, and others.
     * Complex data types are types such as arrays, rows, and others. </p>
     */
    AWS_TIMESTREAMQUERY_API void SetType(Type&& value);

    /**
     * <p>The data type of the result set column. The data type can be a scalar or
     * complex. Scalar data types are integers, strings, doubles, Booleans, and others.
     * Complex data types are types such as arrays, rows, and others. </p>
     */
    AWS_TIMESTREAMQUERY_API ColumnInfo& WithType(const Type& value);

    /**
     * <p>The data type of the result set column. The data type can be a scalar or
     * complex. Scalar data types are integers, strings, doubles, Booleans, and others.
     * Complex data types are types such as arrays, rows, and others. </p>
     */
    AWS_TIMESTREAMQUERY_API ColumnInfo& WithType(Type&& value);

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    std::shared_ptr<Type> m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
