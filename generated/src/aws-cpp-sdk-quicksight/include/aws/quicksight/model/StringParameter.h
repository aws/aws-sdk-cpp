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
   * <p>A string parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StringParameter">AWS
   * API Reference</a></p>
   */
  class StringParameter
  {
  public:
    AWS_QUICKSIGHT_API StringParameter();
    AWS_QUICKSIGHT_API StringParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StringParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A display name for a string parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for a string parameter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for a string parameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for a string parameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for a string parameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for a string parameter.</p>
     */
    inline StringParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for a string parameter.</p>
     */
    inline StringParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for a string parameter.</p>
     */
    inline StringParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The values of a string parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values of a string parameter.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values of a string parameter.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values of a string parameter.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values of a string parameter.</p>
     */
    inline StringParameter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values of a string parameter.</p>
     */
    inline StringParameter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values of a string parameter.</p>
     */
    inline StringParameter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values of a string parameter.</p>
     */
    inline StringParameter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values of a string parameter.</p>
     */
    inline StringParameter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
