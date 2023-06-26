/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>A dimension is a name/value pair that is part of the identity of a metric.
   * Because dimensions are part of the unique identifier for a metric, whenever you
   * add a unique name/value pair to one of your metrics, you are creating a new
   * variation of that metric. For example, many Amazon EC2 metrics publish
   * <code>InstanceId</code> as a dimension name, and the actual instance ID as the
   * value for that dimension.</p> <p>You can assign up to 30 dimensions to a
   * metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/Dimension">AWS
   * API Reference</a></p>
   */
  class Dimension
  {
  public:
    AWS_CLOUDWATCH_API Dimension();
    AWS_CLOUDWATCH_API Dimension(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API Dimension& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the dimension. Dimension names must contain only ASCII
     * characters, must include at least one non-whitespace character, and cannot start
     * with a colon (<code>:</code>). ASCII control characters are not supported as
     * part of dimension names.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the dimension. Dimension names must contain only ASCII
     * characters, must include at least one non-whitespace character, and cannot start
     * with a colon (<code>:</code>). ASCII control characters are not supported as
     * part of dimension names.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the dimension. Dimension names must contain only ASCII
     * characters, must include at least one non-whitespace character, and cannot start
     * with a colon (<code>:</code>). ASCII control characters are not supported as
     * part of dimension names.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the dimension. Dimension names must contain only ASCII
     * characters, must include at least one non-whitespace character, and cannot start
     * with a colon (<code>:</code>). ASCII control characters are not supported as
     * part of dimension names.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the dimension. Dimension names must contain only ASCII
     * characters, must include at least one non-whitespace character, and cannot start
     * with a colon (<code>:</code>). ASCII control characters are not supported as
     * part of dimension names.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the dimension. Dimension names must contain only ASCII
     * characters, must include at least one non-whitespace character, and cannot start
     * with a colon (<code>:</code>). ASCII control characters are not supported as
     * part of dimension names.</p>
     */
    inline Dimension& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the dimension. Dimension names must contain only ASCII
     * characters, must include at least one non-whitespace character, and cannot start
     * with a colon (<code>:</code>). ASCII control characters are not supported as
     * part of dimension names.</p>
     */
    inline Dimension& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dimension. Dimension names must contain only ASCII
     * characters, must include at least one non-whitespace character, and cannot start
     * with a colon (<code>:</code>). ASCII control characters are not supported as
     * part of dimension names.</p>
     */
    inline Dimension& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the dimension. Dimension values must contain only ASCII
     * characters and must include at least one non-whitespace character. ASCII control
     * characters are not supported as part of dimension values.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the dimension. Dimension values must contain only ASCII
     * characters and must include at least one non-whitespace character. ASCII control
     * characters are not supported as part of dimension values.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the dimension. Dimension values must contain only ASCII
     * characters and must include at least one non-whitespace character. ASCII control
     * characters are not supported as part of dimension values.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the dimension. Dimension values must contain only ASCII
     * characters and must include at least one non-whitespace character. ASCII control
     * characters are not supported as part of dimension values.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the dimension. Dimension values must contain only ASCII
     * characters and must include at least one non-whitespace character. ASCII control
     * characters are not supported as part of dimension values.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the dimension. Dimension values must contain only ASCII
     * characters and must include at least one non-whitespace character. ASCII control
     * characters are not supported as part of dimension values.</p>
     */
    inline Dimension& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the dimension. Dimension values must contain only ASCII
     * characters and must include at least one non-whitespace character. ASCII control
     * characters are not supported as part of dimension values.</p>
     */
    inline Dimension& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the dimension. Dimension values must contain only ASCII
     * characters and must include at least one non-whitespace character. ASCII control
     * characters are not supported as part of dimension values.</p>
     */
    inline Dimension& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
