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
    AWS_WELLARCHITECTED_API NotificationSummary() = default;
    AWS_WELLARCHITECTED_API NotificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API NotificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of notification.</p>
     */
    inline NotificationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(NotificationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline NotificationSummary& WithType(NotificationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary of lens upgrade.</p>
     */
    inline const LensUpgradeSummary& GetLensUpgradeSummary() const { return m_lensUpgradeSummary; }
    inline bool LensUpgradeSummaryHasBeenSet() const { return m_lensUpgradeSummaryHasBeenSet; }
    template<typename LensUpgradeSummaryT = LensUpgradeSummary>
    void SetLensUpgradeSummary(LensUpgradeSummaryT&& value) { m_lensUpgradeSummaryHasBeenSet = true; m_lensUpgradeSummary = std::forward<LensUpgradeSummaryT>(value); }
    template<typename LensUpgradeSummaryT = LensUpgradeSummary>
    NotificationSummary& WithLensUpgradeSummary(LensUpgradeSummaryT&& value) { SetLensUpgradeSummary(std::forward<LensUpgradeSummaryT>(value)); return *this;}
    ///@}
  private:

    NotificationType m_type{NotificationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    LensUpgradeSummary m_lensUpgradeSummary;
    bool m_lensUpgradeSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
