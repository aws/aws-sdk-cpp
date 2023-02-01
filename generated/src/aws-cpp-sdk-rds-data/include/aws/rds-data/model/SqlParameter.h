/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds-data/model/Field.h>
#include <aws/rds-data/model/TypeHint.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>A parameter used in a SQL statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/SqlParameter">AWS
   * API Reference</a></p>
   */
  class SqlParameter
  {
  public:
    AWS_RDSDATASERVICE_API SqlParameter();
    AWS_RDSDATASERVICE_API SqlParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API SqlParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline SqlParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline SqlParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline SqlParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the parameter.</p>
     */
    inline const Field& GetValue() const{ return m_value; }

    /**
     * <p>The value of the parameter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the parameter.</p>
     */
    inline void SetValue(const Field& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the parameter.</p>
     */
    inline void SetValue(Field&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the parameter.</p>
     */
    inline SqlParameter& WithValue(const Field& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the parameter.</p>
     */
    inline SqlParameter& WithValue(Field&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>A hint that specifies the correct object type for data type mapping. Possible
     * values are as follows:</p> <ul> <li> <p> <code>DATE</code> - The corresponding
     * <code>String</code> parameter value is sent as an object of <code>DATE</code>
     * type to the database. The accepted format is <code>YYYY-MM-DD</code>.</p> </li>
     * <li> <p> <code>DECIMAL</code> - The corresponding <code>String</code> parameter
     * value is sent as an object of <code>DECIMAL</code> type to the database.</p>
     * </li> <li> <p> <code>JSON</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>JSON</code> type to the
     * database.</p> </li> <li> <p> <code>TIME</code> - The corresponding
     * <code>String</code> parameter value is sent as an object of <code>TIME</code>
     * type to the database. The accepted format is <code>HH:MM:SS[.FFF]</code>.</p>
     * </li> <li> <p> <code>TIMESTAMP</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>TIMESTAMP</code> type to the
     * database. The accepted format is <code>YYYY-MM-DD HH:MM:SS[.FFF]</code>.</p>
     * </li> <li> <p> <code>UUID</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>UUID</code> type to the database.
     * </p> </li> </ul>
     */
    inline const TypeHint& GetTypeHint() const{ return m_typeHint; }

    /**
     * <p>A hint that specifies the correct object type for data type mapping. Possible
     * values are as follows:</p> <ul> <li> <p> <code>DATE</code> - The corresponding
     * <code>String</code> parameter value is sent as an object of <code>DATE</code>
     * type to the database. The accepted format is <code>YYYY-MM-DD</code>.</p> </li>
     * <li> <p> <code>DECIMAL</code> - The corresponding <code>String</code> parameter
     * value is sent as an object of <code>DECIMAL</code> type to the database.</p>
     * </li> <li> <p> <code>JSON</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>JSON</code> type to the
     * database.</p> </li> <li> <p> <code>TIME</code> - The corresponding
     * <code>String</code> parameter value is sent as an object of <code>TIME</code>
     * type to the database. The accepted format is <code>HH:MM:SS[.FFF]</code>.</p>
     * </li> <li> <p> <code>TIMESTAMP</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>TIMESTAMP</code> type to the
     * database. The accepted format is <code>YYYY-MM-DD HH:MM:SS[.FFF]</code>.</p>
     * </li> <li> <p> <code>UUID</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>UUID</code> type to the database.
     * </p> </li> </ul>
     */
    inline bool TypeHintHasBeenSet() const { return m_typeHintHasBeenSet; }

    /**
     * <p>A hint that specifies the correct object type for data type mapping. Possible
     * values are as follows:</p> <ul> <li> <p> <code>DATE</code> - The corresponding
     * <code>String</code> parameter value is sent as an object of <code>DATE</code>
     * type to the database. The accepted format is <code>YYYY-MM-DD</code>.</p> </li>
     * <li> <p> <code>DECIMAL</code> - The corresponding <code>String</code> parameter
     * value is sent as an object of <code>DECIMAL</code> type to the database.</p>
     * </li> <li> <p> <code>JSON</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>JSON</code> type to the
     * database.</p> </li> <li> <p> <code>TIME</code> - The corresponding
     * <code>String</code> parameter value is sent as an object of <code>TIME</code>
     * type to the database. The accepted format is <code>HH:MM:SS[.FFF]</code>.</p>
     * </li> <li> <p> <code>TIMESTAMP</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>TIMESTAMP</code> type to the
     * database. The accepted format is <code>YYYY-MM-DD HH:MM:SS[.FFF]</code>.</p>
     * </li> <li> <p> <code>UUID</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>UUID</code> type to the database.
     * </p> </li> </ul>
     */
    inline void SetTypeHint(const TypeHint& value) { m_typeHintHasBeenSet = true; m_typeHint = value; }

    /**
     * <p>A hint that specifies the correct object type for data type mapping. Possible
     * values are as follows:</p> <ul> <li> <p> <code>DATE</code> - The corresponding
     * <code>String</code> parameter value is sent as an object of <code>DATE</code>
     * type to the database. The accepted format is <code>YYYY-MM-DD</code>.</p> </li>
     * <li> <p> <code>DECIMAL</code> - The corresponding <code>String</code> parameter
     * value is sent as an object of <code>DECIMAL</code> type to the database.</p>
     * </li> <li> <p> <code>JSON</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>JSON</code> type to the
     * database.</p> </li> <li> <p> <code>TIME</code> - The corresponding
     * <code>String</code> parameter value is sent as an object of <code>TIME</code>
     * type to the database. The accepted format is <code>HH:MM:SS[.FFF]</code>.</p>
     * </li> <li> <p> <code>TIMESTAMP</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>TIMESTAMP</code> type to the
     * database. The accepted format is <code>YYYY-MM-DD HH:MM:SS[.FFF]</code>.</p>
     * </li> <li> <p> <code>UUID</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>UUID</code> type to the database.
     * </p> </li> </ul>
     */
    inline void SetTypeHint(TypeHint&& value) { m_typeHintHasBeenSet = true; m_typeHint = std::move(value); }

    /**
     * <p>A hint that specifies the correct object type for data type mapping. Possible
     * values are as follows:</p> <ul> <li> <p> <code>DATE</code> - The corresponding
     * <code>String</code> parameter value is sent as an object of <code>DATE</code>
     * type to the database. The accepted format is <code>YYYY-MM-DD</code>.</p> </li>
     * <li> <p> <code>DECIMAL</code> - The corresponding <code>String</code> parameter
     * value is sent as an object of <code>DECIMAL</code> type to the database.</p>
     * </li> <li> <p> <code>JSON</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>JSON</code> type to the
     * database.</p> </li> <li> <p> <code>TIME</code> - The corresponding
     * <code>String</code> parameter value is sent as an object of <code>TIME</code>
     * type to the database. The accepted format is <code>HH:MM:SS[.FFF]</code>.</p>
     * </li> <li> <p> <code>TIMESTAMP</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>TIMESTAMP</code> type to the
     * database. The accepted format is <code>YYYY-MM-DD HH:MM:SS[.FFF]</code>.</p>
     * </li> <li> <p> <code>UUID</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>UUID</code> type to the database.
     * </p> </li> </ul>
     */
    inline SqlParameter& WithTypeHint(const TypeHint& value) { SetTypeHint(value); return *this;}

    /**
     * <p>A hint that specifies the correct object type for data type mapping. Possible
     * values are as follows:</p> <ul> <li> <p> <code>DATE</code> - The corresponding
     * <code>String</code> parameter value is sent as an object of <code>DATE</code>
     * type to the database. The accepted format is <code>YYYY-MM-DD</code>.</p> </li>
     * <li> <p> <code>DECIMAL</code> - The corresponding <code>String</code> parameter
     * value is sent as an object of <code>DECIMAL</code> type to the database.</p>
     * </li> <li> <p> <code>JSON</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>JSON</code> type to the
     * database.</p> </li> <li> <p> <code>TIME</code> - The corresponding
     * <code>String</code> parameter value is sent as an object of <code>TIME</code>
     * type to the database. The accepted format is <code>HH:MM:SS[.FFF]</code>.</p>
     * </li> <li> <p> <code>TIMESTAMP</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>TIMESTAMP</code> type to the
     * database. The accepted format is <code>YYYY-MM-DD HH:MM:SS[.FFF]</code>.</p>
     * </li> <li> <p> <code>UUID</code> - The corresponding <code>String</code>
     * parameter value is sent as an object of <code>UUID</code> type to the database.
     * </p> </li> </ul>
     */
    inline SqlParameter& WithTypeHint(TypeHint&& value) { SetTypeHint(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Field m_value;
    bool m_valueHasBeenSet = false;

    TypeHint m_typeHint;
    bool m_typeHintHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
