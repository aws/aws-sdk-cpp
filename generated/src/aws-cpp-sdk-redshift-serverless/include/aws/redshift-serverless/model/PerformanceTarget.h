/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/PerformanceTargetStatus.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>An object that represents the price performance target settings for the
   * workgroup.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/PerformanceTarget">AWS
   * API Reference</a></p>
   */
  class PerformanceTarget
  {
  public:
    AWS_REDSHIFTSERVERLESS_API PerformanceTarget() = default;
    AWS_REDSHIFTSERVERLESS_API PerformanceTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API PerformanceTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target price performance level for the workgroup. Valid values include 1,
     * 25, 50, 75, and 100. These correspond to the price performance levels LOW_COST,
     * ECONOMICAL, BALANCED, RESOURCEFUL, and HIGH_PERFORMANCE.</p>
     */
    inline int GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(int value) { m_levelHasBeenSet = true; m_level = value; }
    inline PerformanceTarget& WithLevel(int value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the price performance target is enabled for the workgroup.</p>
     */
    inline PerformanceTargetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PerformanceTargetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PerformanceTarget& WithStatus(PerformanceTargetStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    int m_level{0};
    bool m_levelHasBeenSet = false;

    PerformanceTargetStatus m_status{PerformanceTargetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
