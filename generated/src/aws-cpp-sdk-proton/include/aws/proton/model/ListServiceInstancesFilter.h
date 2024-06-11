/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ListServiceInstancesFilterBy.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>A filtering criterion to scope down the result list of the
   * <a>ListServiceInstances</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ListServiceInstancesFilter">AWS
   * API Reference</a></p>
   */
  class ListServiceInstancesFilter
  {
  public:
    AWS_PROTON_API ListServiceInstancesFilter();
    AWS_PROTON_API ListServiceInstancesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ListServiceInstancesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a filtering criterion.</p>
     */
    inline const ListServiceInstancesFilterBy& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const ListServiceInstancesFilterBy& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(ListServiceInstancesFilterBy&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline ListServiceInstancesFilter& WithKey(const ListServiceInstancesFilterBy& value) { SetKey(value); return *this;}
    inline ListServiceInstancesFilter& WithKey(ListServiceInstancesFilterBy&& value) { SetKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value to filter by.</p> <p>With the date/time keys
     * (<code>*At{Before,After}</code>), the value is a valid <a
     * href="https://datatracker.ietf.org/doc/html/rfc3339.html">RFC 3339</a> string
     * with no UTC offset and with an optional fractional precision (for example,
     * <code>1985-04-12T23:20:50.52Z</code>).</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ListServiceInstancesFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ListServiceInstancesFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ListServiceInstancesFilter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    ListServiceInstancesFilterBy m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
