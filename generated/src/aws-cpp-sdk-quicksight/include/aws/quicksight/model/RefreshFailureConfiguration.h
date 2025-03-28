/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RefreshFailureEmailAlert.h>
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
   * <p>The failure configuration of a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RefreshFailureConfiguration">AWS
   * API Reference</a></p>
   */
  class RefreshFailureConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RefreshFailureConfiguration() = default;
    AWS_QUICKSIGHT_API RefreshFailureConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RefreshFailureConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email alert configuration for a dataset refresh failure.</p>
     */
    inline const RefreshFailureEmailAlert& GetEmailAlert() const { return m_emailAlert; }
    inline bool EmailAlertHasBeenSet() const { return m_emailAlertHasBeenSet; }
    template<typename EmailAlertT = RefreshFailureEmailAlert>
    void SetEmailAlert(EmailAlertT&& value) { m_emailAlertHasBeenSet = true; m_emailAlert = std::forward<EmailAlertT>(value); }
    template<typename EmailAlertT = RefreshFailureEmailAlert>
    RefreshFailureConfiguration& WithEmailAlert(EmailAlertT&& value) { SetEmailAlert(std::forward<EmailAlertT>(value)); return *this;}
    ///@}
  private:

    RefreshFailureEmailAlert m_emailAlert;
    bool m_emailAlertHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
