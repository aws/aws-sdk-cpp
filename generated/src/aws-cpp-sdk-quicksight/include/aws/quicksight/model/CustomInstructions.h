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
   * <p>Instructions that provide additional guidance and context for response
   * generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomInstructions">AWS
   * API Reference</a></p>
   */
  class CustomInstructions
  {
  public:
    AWS_QUICKSIGHT_API CustomInstructions() = default;
    AWS_QUICKSIGHT_API CustomInstructions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomInstructions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A text field for providing additional guidance or context for response
     * generation.</p>
     */
    inline const Aws::String& GetCustomInstructionsString() const { return m_customInstructionsString; }
    inline bool CustomInstructionsStringHasBeenSet() const { return m_customInstructionsStringHasBeenSet; }
    template<typename CustomInstructionsStringT = Aws::String>
    void SetCustomInstructionsString(CustomInstructionsStringT&& value) { m_customInstructionsStringHasBeenSet = true; m_customInstructionsString = std::forward<CustomInstructionsStringT>(value); }
    template<typename CustomInstructionsStringT = Aws::String>
    CustomInstructions& WithCustomInstructionsString(CustomInstructionsStringT&& value) { SetCustomInstructionsString(std::forward<CustomInstructionsStringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customInstructionsString;
    bool m_customInstructionsStringHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
