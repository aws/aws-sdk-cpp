/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/model/SimulationSoftwareSuiteType.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a simulation software suite.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SimulationSoftwareSuite">AWS
   * API Reference</a></p>
   */
  class SimulationSoftwareSuite
  {
  public:
    AWS_ROBOMAKER_API SimulationSoftwareSuite() = default;
    AWS_ROBOMAKER_API SimulationSoftwareSuite(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API SimulationSoftwareSuite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the simulation software suite. <code>SimulationRuntime</code> is
     * the only supported value.</p>
     */
    inline SimulationSoftwareSuiteType GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(SimulationSoftwareSuiteType value) { m_nameHasBeenSet = true; m_name = value; }
    inline SimulationSoftwareSuite& WithName(SimulationSoftwareSuiteType value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the simulation software suite. Not applicable for
     * <code>SimulationRuntime</code>.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    SimulationSoftwareSuite& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    SimulationSoftwareSuiteType m_name{SimulationSoftwareSuiteType::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
