/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/model/RenderingEngineType.h>
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
   * <p>Information about a rendering engine.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RenderingEngine">AWS
   * API Reference</a></p>
   */
  class RenderingEngine
  {
  public:
    AWS_ROBOMAKER_API RenderingEngine() = default;
    AWS_ROBOMAKER_API RenderingEngine(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API RenderingEngine& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rendering engine.</p>
     */
    inline RenderingEngineType GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(RenderingEngineType value) { m_nameHasBeenSet = true; m_name = value; }
    inline RenderingEngine& WithName(RenderingEngineType value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the rendering engine.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    RenderingEngine& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    RenderingEngineType m_name{RenderingEngineType::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
