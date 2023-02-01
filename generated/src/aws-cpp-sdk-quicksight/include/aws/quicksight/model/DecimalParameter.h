/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A decimal parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DecimalParameter">AWS
   * API Reference</a></p>
   */
  class DecimalParameter
  {
  public:
    AWS_QUICKSIGHT_API DecimalParameter();
    AWS_QUICKSIGHT_API DecimalParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DecimalParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A display name for the decimal parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the decimal parameter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the decimal parameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the decimal parameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the decimal parameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the decimal parameter.</p>
     */
    inline DecimalParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the decimal parameter.</p>
     */
    inline DecimalParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the decimal parameter.</p>
     */
    inline DecimalParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The values for the decimal parameter.</p>
     */
    inline const Aws::Vector<double>& GetValues() const{ return m_values; }

    /**
     * <p>The values for the decimal parameter.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values for the decimal parameter.</p>
     */
    inline void SetValues(const Aws::Vector<double>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values for the decimal parameter.</p>
     */
    inline void SetValues(Aws::Vector<double>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values for the decimal parameter.</p>
     */
    inline DecimalParameter& WithValues(const Aws::Vector<double>& value) { SetValues(value); return *this;}

    /**
     * <p>The values for the decimal parameter.</p>
     */
    inline DecimalParameter& WithValues(Aws::Vector<double>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values for the decimal parameter.</p>
     */
    inline DecimalParameter& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
