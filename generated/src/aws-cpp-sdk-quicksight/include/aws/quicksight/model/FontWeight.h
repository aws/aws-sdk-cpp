/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FontWeightName.h>
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
   * <p>The option that determines the text display weight, or
   * boldness.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FontWeight">AWS
   * API Reference</a></p>
   */
  class FontWeight
  {
  public:
    AWS_QUICKSIGHT_API FontWeight() = default;
    AWS_QUICKSIGHT_API FontWeight(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FontWeight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lexical name for the level of boldness of the text display.</p>
     */
    inline FontWeightName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(FontWeightName value) { m_nameHasBeenSet = true; m_name = value; }
    inline FontWeight& WithName(FontWeightName value) { SetName(value); return *this;}
    ///@}
  private:

    FontWeightName m_name{FontWeightName::NOT_SET};
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
