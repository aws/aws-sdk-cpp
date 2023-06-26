/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>The configuration for a custom label on a
   * <code>ReferenceLine</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReferenceLineCustomLabelConfiguration">AWS
   * API Reference</a></p>
   */
  class ReferenceLineCustomLabelConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ReferenceLineCustomLabelConfiguration();
    AWS_QUICKSIGHT_API ReferenceLineCustomLabelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReferenceLineCustomLabelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string text of the custom label.</p>
     */
    inline const Aws::String& GetCustomLabel() const{ return m_customLabel; }

    /**
     * <p>The string text of the custom label.</p>
     */
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }

    /**
     * <p>The string text of the custom label.</p>
     */
    inline void SetCustomLabel(const Aws::String& value) { m_customLabelHasBeenSet = true; m_customLabel = value; }

    /**
     * <p>The string text of the custom label.</p>
     */
    inline void SetCustomLabel(Aws::String&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::move(value); }

    /**
     * <p>The string text of the custom label.</p>
     */
    inline void SetCustomLabel(const char* value) { m_customLabelHasBeenSet = true; m_customLabel.assign(value); }

    /**
     * <p>The string text of the custom label.</p>
     */
    inline ReferenceLineCustomLabelConfiguration& WithCustomLabel(const Aws::String& value) { SetCustomLabel(value); return *this;}

    /**
     * <p>The string text of the custom label.</p>
     */
    inline ReferenceLineCustomLabelConfiguration& WithCustomLabel(Aws::String&& value) { SetCustomLabel(std::move(value)); return *this;}

    /**
     * <p>The string text of the custom label.</p>
     */
    inline ReferenceLineCustomLabelConfiguration& WithCustomLabel(const char* value) { SetCustomLabel(value); return *this;}

  private:

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
