/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
    AWS_TIMESTREAMQUERY_API ColumnInfo() = default;
    AWS_TIMESTREAMQUERY_API ColumnInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ColumnInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the result set column. The name of the result set is available
     * for columns of all data types except for arrays. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ColumnInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the result set column. The data type can be a scalar or
     * complex. Scalar data types are integers, strings, doubles, Booleans, and others.
     * Complex data types are types such as arrays, rows, and others. </p>
     */
    inline const Type& GetType() const{
      return *m_type;
    }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Type>
    void SetType(TypeT&& value) {
      m_typeHasBeenSet = true; 
      m_type = Aws::MakeShared<Type>("ColumnInfo", std::forward<TypeT>(value));
    }
    template<typename TypeT = Type>
    ColumnInfo& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    std::shared_ptr<Type> m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
