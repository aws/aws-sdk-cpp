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
    AWS_ROBOMAKER_API SimulationSoftwareSuite();
    AWS_ROBOMAKER_API SimulationSoftwareSuite(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API SimulationSoftwareSuite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the simulation software suite.</p>
     */
    inline const SimulationSoftwareSuiteType& GetName() const{ return m_name; }

    /**
     * <p>The name of the simulation software suite.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the simulation software suite.</p>
     */
    inline void SetName(const SimulationSoftwareSuiteType& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the simulation software suite.</p>
     */
    inline void SetName(SimulationSoftwareSuiteType&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the simulation software suite.</p>
     */
    inline SimulationSoftwareSuite& WithName(const SimulationSoftwareSuiteType& value) { SetName(value); return *this;}

    /**
     * <p>The name of the simulation software suite.</p>
     */
    inline SimulationSoftwareSuite& WithName(SimulationSoftwareSuiteType&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The version of the simulation software suite.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the simulation software suite.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the simulation software suite.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the simulation software suite.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the simulation software suite.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the simulation software suite.</p>
     */
    inline SimulationSoftwareSuite& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the simulation software suite.</p>
     */
    inline SimulationSoftwareSuite& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the simulation software suite.</p>
     */
    inline SimulationSoftwareSuite& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    SimulationSoftwareSuiteType m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
