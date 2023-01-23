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
    AWS_ROBOMAKER_API BatchDeleteWorldsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteWorlds"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorlds() const{ return m_worlds; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * delete.</p>
     */
    inline bool WorldsHasBeenSet() const { return m_worldsHasBeenSet; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * delete.</p>
     */
    inline void SetWorlds(const Aws::Vector<Aws::String>& value) { m_worldsHasBeenSet = true; m_worlds = value; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * delete.</p>
     */
    inline void SetWorlds(Aws::Vector<Aws::String>&& value) { m_worldsHasBeenSet = true; m_worlds = std::move(value); }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * delete.</p>
     */
    inline BatchDeleteWorldsRequest& WithWorlds(const Aws::Vector<Aws::String>& value) { SetWorlds(value); return *this;}

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * delete.</p>
     */
    inline BatchDeleteWorldsRequest& WithWorlds(Aws::Vector<Aws::String>&& value) { SetWorlds(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * delete.</p>
     */
    inline BatchDeleteWorldsRequest& AddWorlds(const Aws::String& value) { m_worldsHasBeenSet = true; m_worlds.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * delete.</p>
     */
    inline BatchDeleteWorldsRequest& AddWorlds(Aws::String&& value) { m_worldsHasBeenSet = true; m_worlds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * delete.</p>
     */
    inline BatchDeleteWorldsRequest& AddWorlds(const char* value) { m_worldsHasBeenSet = true; m_worlds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_worlds;
    bool m_worldsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
