﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TextFieldControlDisplayOptions.h>
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
   * <p>The default options that correspond to the <code>TextField</code> filter
   * control type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultTextFieldControlOptions">AWS
   * API Reference</a></p>
   */
  class DefaultTextFieldControlOptions
  {
  public:
    AWS_QUICKSIGHT_API DefaultTextFieldControlOptions();
    AWS_QUICKSIGHT_API DefaultTextFieldControlOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultTextFieldControlOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const TextFieldControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    inline void SetDisplayOptions(const TextFieldControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }
    inline void SetDisplayOptions(TextFieldControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }
    inline DefaultTextFieldControlOptions& WithDisplayOptions(const TextFieldControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}
    inline DefaultTextFieldControlOptions& WithDisplayOptions(TextFieldControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}
    ///@}
  private:

    TextFieldControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
