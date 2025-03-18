/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class BatchDeleteWorldsRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API BatchDeleteWorldsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteWorlds"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorlds() const { return m_worlds; }
    inline bool WorldsHasBeenSet() const { return m_worldsHasBeenSet; }
    template<typename WorldsT = Aws::Vector<Aws::String>>
    void SetWorlds(WorldsT&& value) { m_worldsHasBeenSet = true; m_worlds = std::forward<WorldsT>(value); }
    template<typename WorldsT = Aws::Vector<Aws::String>>
    BatchDeleteWorldsRequest& WithWorlds(WorldsT&& value) { SetWorlds(std::forward<WorldsT>(value)); return *this;}
    template<typename WorldsT = Aws::String>
    BatchDeleteWorldsRequest& AddWorlds(WorldsT&& value) { m_worldsHasBeenSet = true; m_worlds.emplace_back(std::forward<WorldsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_worlds;
    bool m_worldsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
