/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>The option that determines the decimal places configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DecimalPlacesConfiguration">AWS
   * API Reference</a></p>
   */
  class DecimalPlacesConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DecimalPlacesConfiguration();
    AWS_QUICKSIGHT_API DecimalPlacesConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DecimalPlacesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The values of the decimal places.</p>
     */
    inline long long GetDecimalPlaces() const{ return m_decimalPlaces; }

    /**
     * <p>The values of the decimal places.</p>
     */
    inline bool DecimalPlacesHasBeenSet() const { return m_decimalPlacesHasBeenSet; }

    /**
     * <p>The values of the decimal places.</p>
     */
    inline void SetDecimalPlaces(long long value) { m_decimalPlacesHasBeenSet = true; m_decimalPlaces = value; }

    /**
     * <p>The values of the decimal places.</p>
     */
    inline DecimalPlacesConfiguration& WithDecimalPlaces(long long value) { SetDecimalPlaces(value); return *this;}

  private:

    long long m_decimalPlaces;
    bool m_decimalPlacesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
