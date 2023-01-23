/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-query/model/Type.h>
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

  /**
   * <p>Mapping for named parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ParameterMapping">AWS
   * API Reference</a></p>
   */
  class ParameterMapping
  {
  public:
    AWS_TIMESTREAMQUERY_API ParameterMapping();
    AWS_TIMESTREAMQUERY_API ParameterMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ParameterMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Parameter name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Parameter name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Parameter name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Parameter name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Parameter name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Parameter name.</p>
     */
    inline ParameterMapping& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Parameter name.</p>
     */
    inline ParameterMapping& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Parameter name.</p>
     */
    inline ParameterMapping& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Type& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline ParameterMapping& WithType(const Type& value) { SetType(value); return *this;}

    
    inline ParameterMapping& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
