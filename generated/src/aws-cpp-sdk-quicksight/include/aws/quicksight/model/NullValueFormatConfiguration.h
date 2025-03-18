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
   * <p>The options that determine the null value format configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NullValueFormatConfiguration">AWS
   * API Reference</a></p>
   */
  class NullValueFormatConfiguration
  {
  public:
    AWS_QUICKSIGHT_API NullValueFormatConfiguration() = default;
    AWS_QUICKSIGHT_API NullValueFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NullValueFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the null string of null values.</p>
     */
    inline const Aws::String& GetNullString() const { return m_nullString; }
    inline bool NullStringHasBeenSet() const { return m_nullStringHasBeenSet; }
    template<typename NullStringT = Aws::String>
    void SetNullString(NullStringT&& value) { m_nullStringHasBeenSet = true; m_nullString = std::forward<NullStringT>(value); }
    template<typename NullStringT = Aws::String>
    NullValueFormatConfiguration& WithNullString(NullStringT&& value) { SetNullString(std::forward<NullStringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nullString;
    bool m_nullStringHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
