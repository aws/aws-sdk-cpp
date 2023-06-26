/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/NotificationType.h>
#include <aws/wellarchitected/model/LensUpgradeSummary.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A notification summary return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/NotificationSummary">AWS
   * API Reference</a></p>
   */
  class NotificationSummary
  {
  public:
    AWS_WELLARCHITECTED_API NotificationSummary();
    AWS_WELLARCHITECTED_API NotificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API NotificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of notification.</p>
     */
    inline const NotificationType& GetType() const{ return m_type; }

    /**
     * <p>The type of notification.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of notification.</p>
     */
    inline void SetType(const NotificationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of notification.</p>
     */
    inline void SetType(NotificationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of notification.</p>
     */
    inline NotificationSummary& WithType(const NotificationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of notification.</p>
     */
    inline NotificationSummary& WithType(NotificationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Summary of lens upgrade.</p>
     */
    inline const LensUpgradeSummary& GetLensUpgradeSummary() const{ return m_lensUpgradeSummary; }

    /**
     * <p>Summary of lens upgrade.</p>
     */
    inline bool LensUpgradeSummaryHasBeenSet() const { return m_lensUpgradeSummaryHasBeenSet; }

    /**
     * <p>Summary of lens upgrade.</p>
     */
    inline void SetLensUpgradeSummary(const LensUpgradeSummary& value) { m_lensUpgradeSummaryHasBeenSet = true; m_lensUpgradeSummary = value; }

    /**
     * <p>Summary of lens upgrade.</p>
     */
    inline void SetLensUpgradeSummary(LensUpgradeSummary&& value) { m_lensUpgradeSummaryHasBeenSet = true; m_lensUpgradeSummary = std::move(value); }

    /**
     * <p>Summary of lens upgrade.</p>
     */
    inline NotificationSummary& WithLensUpgradeSummary(const LensUpgradeSummary& value) { SetLensUpgradeSummary(value); return *this;}

    /**
     * <p>Summary of lens upgrade.</p>
     */
    inline NotificationSummary& WithLensUpgradeSummary(LensUpgradeSummary&& value) { SetLensUpgradeSummary(std::move(value)); return *this;}

  private:

    NotificationType m_type;
    bool m_typeHasBeenSet = false;

    LensUpgradeSummary m_lensUpgradeSummary;
    bool m_lensUpgradeSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
