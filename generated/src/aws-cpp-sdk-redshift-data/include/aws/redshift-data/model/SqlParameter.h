/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
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
namespace RedshiftDataAPIService
{
namespace Model
{

  /**
   * <p>A parameter used in a SQL statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/SqlParameter">AWS
   * API Reference</a></p>
   */
  class SqlParameter
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API SqlParameter();
    AWS_REDSHIFTDATAAPISERVICE_API SqlParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API SqlParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The value of the parameter. Amazon Redshift implicitly converts to the proper
     * data type. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/c_Supported_data_types.html">Data
     * types</a> in the <i>Amazon Redshift Database Developer Guide</i>. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the parameter. Amazon Redshift implicitly converts to the proper
     * data type. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/c_Supported_data_types.html">Data
     * types</a> in the <i>Amazon Redshift Database Developer Guide</i>. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the parameter. Amazon Redshift implicitly converts to the proper
     * data type. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/c_Supported_data_types.html">Data
     * types</a> in the <i>Amazon Redshift Database Developer Guide</i>. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the parameter. Amazon Redshift implicitly converts to the proper
     * data type. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/c_Supported_data_types.html">Data
     * types</a> in the <i>Amazon Redshift Database Developer Guide</i>. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the parameter. Amazon Redshift implicitly converts to the proper
     * data type. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/c_Supported_data_types.html">Data
     * types</a> in the <i>Amazon Redshift Database Developer Guide</i>. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the parameter. Amazon Redshift implicitly converts to the proper
     * data type. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/c_Supported_data_types.html">Data
     * types</a> in the <i>Amazon Redshift Database Developer Guide</i>. </p>
     */
    inline SqlParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the parameter. Amazon Redshift implicitly converts to the proper
     * data type. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/c_Supported_data_types.html">Data
     * types</a> in the <i>Amazon Redshift Database Developer Guide</i>. </p>
     */
    inline SqlParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the parameter. Amazon Redshift implicitly converts to the proper
     * data type. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/c_Supported_data_types.html">Data
     * types</a> in the <i>Amazon Redshift Database Developer Guide</i>. </p>
     */
    inline SqlParameter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
