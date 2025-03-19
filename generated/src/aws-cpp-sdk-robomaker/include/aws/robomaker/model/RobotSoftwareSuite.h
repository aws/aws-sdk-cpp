/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/model/RobotSoftwareSuiteType.h>
#include <aws/robomaker/model/RobotSoftwareSuiteVersionType.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a robot software suite.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RobotSoftwareSuite">AWS
   * API Reference</a></p>
   */
  class RobotSoftwareSuite
  {
  public:
    AWS_ROBOMAKER_API RobotSoftwareSuite() = default;
    AWS_ROBOMAKER_API RobotSoftwareSuite(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API RobotSoftwareSuite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the robot software suite. <code>General</code> is the only
     * supported value.</p>
     */
    inline RobotSoftwareSuiteType GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(RobotSoftwareSuiteType value) { m_nameHasBeenSet = true; m_name = value; }
    inline RobotSoftwareSuite& WithName(RobotSoftwareSuiteType value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the robot software suite. Not applicable for General software
     * suite.</p>
     */
    inline RobotSoftwareSuiteVersionType GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(RobotSoftwareSuiteVersionType value) { m_versionHasBeenSet = true; m_version = value; }
    inline RobotSoftwareSuite& WithVersion(RobotSoftwareSuiteVersionType value) { SetVersion(value); return *this;}
    ///@}
  private:

    RobotSoftwareSuiteType m_name{RobotSoftwareSuiteType::NOT_SET};
    bool m_nameHasBeenSet = false;

    RobotSoftwareSuiteVersionType m_version{RobotSoftwareSuiteVersionType::NOT_SET};
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
