/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>

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
namespace Shield
{
namespace Model
{

  /**
   * <p>Statistics objects for the various data types in <a>AttackVolume</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AttackVolumeStatistics">AWS
   * API Reference</a></p>
   */
  class AttackVolumeStatistics
  {
  public:
    AWS_SHIELD_API AttackVolumeStatistics();
    AWS_SHIELD_API AttackVolumeStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API AttackVolumeStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum attack volume observed for the given unit.</p>
     */
    inline double GetMax() const{ return m_max; }

    /**
     * <p>The maximum attack volume observed for the given unit.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum attack volume observed for the given unit.</p>
     */
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum attack volume observed for the given unit.</p>
     */
    inline AttackVolumeStatistics& WithMax(double value) { SetMax(value); return *this;}

  private:

    double m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
