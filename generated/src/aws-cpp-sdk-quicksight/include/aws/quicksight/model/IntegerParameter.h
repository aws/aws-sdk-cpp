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
   * <p>An integer parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IntegerParameter">AWS
   * API Reference</a></p>
   */
  class IntegerParameter
  {
  public:
    AWS_QUICKSIGHT_API IntegerParameter();
    AWS_QUICKSIGHT_API IntegerParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API IntegerParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the integer parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the integer parameter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the integer parameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the integer parameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the integer parameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the integer parameter.</p>
     */
    inline IntegerParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the integer parameter.</p>
     */
    inline IntegerParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the integer parameter.</p>
     */
    inline IntegerParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The values for the integer parameter.</p>
     */
    inline const Aws::Vector<long long>& GetValues() const{ return m_values; }

    /**
     * <p>The values for the integer parameter.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values for the integer parameter.</p>
     */
    inline void SetValues(const Aws::Vector<long long>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values for the integer parameter.</p>
     */
    inline void SetValues(Aws::Vector<long long>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values for the integer parameter.</p>
     */
    inline IntegerParameter& WithValues(const Aws::Vector<long long>& value) { SetValues(value); return *this;}

    /**
     * <p>The values for the integer parameter.</p>
     */
    inline IntegerParameter& WithValues(Aws::Vector<long long>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values for the integer parameter.</p>
     */
    inline IntegerParameter& AddValues(long long value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<long long> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
