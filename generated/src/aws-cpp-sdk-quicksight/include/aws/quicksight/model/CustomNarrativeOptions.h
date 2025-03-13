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
   * <p>The custom narrative options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomNarrativeOptions">AWS
   * API Reference</a></p>
   */
  class CustomNarrativeOptions
  {
  public:
    AWS_QUICKSIGHT_API CustomNarrativeOptions() = default;
    AWS_QUICKSIGHT_API CustomNarrativeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomNarrativeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The string input of custom narrative.</p>
     */
    inline const Aws::String& GetNarrative() const { return m_narrative; }
    inline bool NarrativeHasBeenSet() const { return m_narrativeHasBeenSet; }
    template<typename NarrativeT = Aws::String>
    void SetNarrative(NarrativeT&& value) { m_narrativeHasBeenSet = true; m_narrative = std::forward<NarrativeT>(value); }
    template<typename NarrativeT = Aws::String>
    CustomNarrativeOptions& WithNarrative(NarrativeT&& value) { SetNarrative(std::forward<NarrativeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_narrative;
    bool m_narrativeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
