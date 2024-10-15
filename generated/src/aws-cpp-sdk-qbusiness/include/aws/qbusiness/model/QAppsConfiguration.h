/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/QAppsControlMode.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration information about Amazon Q Apps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/QAppsConfiguration">AWS
   * API Reference</a></p>
   */
  class QAppsConfiguration
  {
  public:
    AWS_QBUSINESS_API QAppsConfiguration();
    AWS_QBUSINESS_API QAppsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API QAppsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status information about whether end users can create and use Amazon Q Apps
     * in the web experience.</p>
     */
    inline const QAppsControlMode& GetQAppsControlMode() const{ return m_qAppsControlMode; }
    inline bool QAppsControlModeHasBeenSet() const { return m_qAppsControlModeHasBeenSet; }
    inline void SetQAppsControlMode(const QAppsControlMode& value) { m_qAppsControlModeHasBeenSet = true; m_qAppsControlMode = value; }
    inline void SetQAppsControlMode(QAppsControlMode&& value) { m_qAppsControlModeHasBeenSet = true; m_qAppsControlMode = std::move(value); }
    inline QAppsConfiguration& WithQAppsControlMode(const QAppsControlMode& value) { SetQAppsControlMode(value); return *this;}
    inline QAppsConfiguration& WithQAppsControlMode(QAppsControlMode&& value) { SetQAppsControlMode(std::move(value)); return *this;}
    ///@}
  private:

    QAppsControlMode m_qAppsControlMode;
    bool m_qAppsControlModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
