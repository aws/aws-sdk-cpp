/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides a single value and metadata about that value as part of an array of
   * query results for a standard metric that applies to an application, campaign, or
   * journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ResultRowValue">AWS
   * API Reference</a></p>
   */
  class ResultRowValue
  {
  public:
    AWS_PINPOINT_API ResultRowValue();
    AWS_PINPOINT_API ResultRowValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ResultRowValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The friendly name of the metric whose value is specified by the Value
     * property.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The friendly name of the metric whose value is specified by the Value
     * property.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The friendly name of the metric whose value is specified by the Value
     * property.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The friendly name of the metric whose value is specified by the Value
     * property.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The friendly name of the metric whose value is specified by the Value
     * property.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The friendly name of the metric whose value is specified by the Value
     * property.</p>
     */
    inline ResultRowValue& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The friendly name of the metric whose value is specified by the Value
     * property.</p>
     */
    inline ResultRowValue& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the metric whose value is specified by the Value
     * property.</p>
     */
    inline ResultRowValue& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The data type of the value specified by the Value property.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The data type of the value specified by the Value property.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The data type of the value specified by the Value property.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The data type of the value specified by the Value property.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The data type of the value specified by the Value property.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The data type of the value specified by the Value property.</p>
     */
    inline ResultRowValue& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The data type of the value specified by the Value property.</p>
     */
    inline ResultRowValue& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The data type of the value specified by the Value property.</p>
     */
    inline ResultRowValue& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>In a Values object, the value for the metric that the query retrieved data
     * for. In a GroupedBys object, the value for the field that was used to group data
     * in a result set that contains multiple results (Values objects).</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>In a Values object, the value for the metric that the query retrieved data
     * for. In a GroupedBys object, the value for the field that was used to group data
     * in a result set that contains multiple results (Values objects).</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>In a Values object, the value for the metric that the query retrieved data
     * for. In a GroupedBys object, the value for the field that was used to group data
     * in a result set that contains multiple results (Values objects).</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>In a Values object, the value for the metric that the query retrieved data
     * for. In a GroupedBys object, the value for the field that was used to group data
     * in a result set that contains multiple results (Values objects).</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>In a Values object, the value for the metric that the query retrieved data
     * for. In a GroupedBys object, the value for the field that was used to group data
     * in a result set that contains multiple results (Values objects).</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>In a Values object, the value for the metric that the query retrieved data
     * for. In a GroupedBys object, the value for the field that was used to group data
     * in a result set that contains multiple results (Values objects).</p>
     */
    inline ResultRowValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>In a Values object, the value for the metric that the query retrieved data
     * for. In a GroupedBys object, the value for the field that was used to group data
     * in a result set that contains multiple results (Values objects).</p>
     */
    inline ResultRowValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>In a Values object, the value for the metric that the query retrieved data
     * for. In a GroupedBys object, the value for the field that was used to group data
     * in a result set that contains multiple results (Values objects).</p>
     */
    inline ResultRowValue& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
