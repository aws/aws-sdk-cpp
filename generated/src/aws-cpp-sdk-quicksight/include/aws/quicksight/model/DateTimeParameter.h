/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A date-time parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DateTimeParameter">AWS
   * API Reference</a></p>
   */
  class DateTimeParameter
  {
  public:
    AWS_QUICKSIGHT_API DateTimeParameter();
    AWS_QUICKSIGHT_API DateTimeParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimeParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A display name for the date-time parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DateTimeParameter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DateTimeParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DateTimeParameter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for the date-time parameter.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::Utils::DateTime>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::Utils::DateTime>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline DateTimeParameter& WithValues(const Aws::Vector<Aws::Utils::DateTime>& value) { SetValues(value); return *this;}
    inline DateTimeParameter& WithValues(Aws::Vector<Aws::Utils::DateTime>&& value) { SetValues(std::move(value)); return *this;}
    inline DateTimeParameter& AddValues(const Aws::Utils::DateTime& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline DateTimeParameter& AddValues(Aws::Utils::DateTime&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
