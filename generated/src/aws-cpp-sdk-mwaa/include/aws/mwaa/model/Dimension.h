/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p> <b>Internal only</b>. Represents the dimensions of a metric. To learn more
   * about the metrics published to Amazon CloudWatch, see <a
   * href="https://docs.aws.amazon.com/mwaa/latest/userguide/cw-metrics.html">Amazon
   * MWAA performance metrics in Amazon CloudWatch</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/Dimension">AWS API
   * Reference</a></p>
   */
  class Dimension
  {
  public:
    AWS_MWAA_API Dimension();
    AWS_MWAA_API Dimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Dimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <b>Internal only</b>. The name of the dimension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> <b>Internal only</b>. The name of the dimension.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> <b>Internal only</b>. The name of the dimension.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> <b>Internal only</b>. The name of the dimension.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> <b>Internal only</b>. The name of the dimension.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> <b>Internal only</b>. The name of the dimension.</p>
     */
    inline Dimension& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> <b>Internal only</b>. The name of the dimension.</p>
     */
    inline Dimension& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> <b>Internal only</b>. The name of the dimension.</p>
     */
    inline Dimension& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> <b>Internal only</b>. The value of the dimension.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> <b>Internal only</b>. The value of the dimension.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> <b>Internal only</b>. The value of the dimension.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> <b>Internal only</b>. The value of the dimension.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> <b>Internal only</b>. The value of the dimension.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> <b>Internal only</b>. The value of the dimension.</p>
     */
    inline Dimension& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> <b>Internal only</b>. The value of the dimension.</p>
     */
    inline Dimension& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> <b>Internal only</b>. The value of the dimension.</p>
     */
    inline Dimension& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
