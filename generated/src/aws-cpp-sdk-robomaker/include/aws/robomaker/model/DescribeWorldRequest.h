/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
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
  class DescribeWorldRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API DescribeWorldRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorld"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (arn) of the world you want to describe.</p>
     */
    inline const Aws::String& GetWorld() const{ return m_world; }

    /**
     * <p>The Amazon Resource Name (arn) of the world you want to describe.</p>
     */
    inline bool WorldHasBeenSet() const { return m_worldHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (arn) of the world you want to describe.</p>
     */
    inline void SetWorld(const Aws::String& value) { m_worldHasBeenSet = true; m_world = value; }

    /**
     * <p>The Amazon Resource Name (arn) of the world you want to describe.</p>
     */
    inline void SetWorld(Aws::String&& value) { m_worldHasBeenSet = true; m_world = std::move(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world you want to describe.</p>
     */
    inline void SetWorld(const char* value) { m_worldHasBeenSet = true; m_world.assign(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world you want to describe.</p>
     */
    inline DescribeWorldRequest& WithWorld(const Aws::String& value) { SetWorld(value); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world you want to describe.</p>
     */
    inline DescribeWorldRequest& WithWorld(Aws::String&& value) { SetWorld(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world you want to describe.</p>
     */
    inline DescribeWorldRequest& WithWorld(const char* value) { SetWorld(value); return *this;}

  private:

    Aws::String m_world;
    bool m_worldHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
