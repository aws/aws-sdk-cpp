/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The default values of a string parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StringDatasetParameterDefaultValues">AWS
   * API Reference</a></p>
   */
  class StringDatasetParameterDefaultValues
  {
  public:
    AWS_QUICKSIGHT_API StringDatasetParameterDefaultValues();
    AWS_QUICKSIGHT_API StringDatasetParameterDefaultValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StringDatasetParameterDefaultValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of static default values for a given string parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStaticValues() const{ return m_staticValues; }

    /**
     * <p>A list of static default values for a given string parameter.</p>
     */
    inline bool StaticValuesHasBeenSet() const { return m_staticValuesHasBeenSet; }

    /**
     * <p>A list of static default values for a given string parameter.</p>
     */
    inline void SetStaticValues(const Aws::Vector<Aws::String>& value) { m_staticValuesHasBeenSet = true; m_staticValues = value; }

    /**
     * <p>A list of static default values for a given string parameter.</p>
     */
    inline void SetStaticValues(Aws::Vector<Aws::String>&& value) { m_staticValuesHasBeenSet = true; m_staticValues = std::move(value); }

    /**
     * <p>A list of static default values for a given string parameter.</p>
     */
    inline StringDatasetParameterDefaultValues& WithStaticValues(const Aws::Vector<Aws::String>& value) { SetStaticValues(value); return *this;}

    /**
     * <p>A list of static default values for a given string parameter.</p>
     */
    inline StringDatasetParameterDefaultValues& WithStaticValues(Aws::Vector<Aws::String>&& value) { SetStaticValues(std::move(value)); return *this;}

    /**
     * <p>A list of static default values for a given string parameter.</p>
     */
    inline StringDatasetParameterDefaultValues& AddStaticValues(const Aws::String& value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(value); return *this; }

    /**
     * <p>A list of static default values for a given string parameter.</p>
     */
    inline StringDatasetParameterDefaultValues& AddStaticValues(Aws::String&& value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of static default values for a given string parameter.</p>
     */
    inline StringDatasetParameterDefaultValues& AddStaticValues(const char* value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_staticValues;
    bool m_staticValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
