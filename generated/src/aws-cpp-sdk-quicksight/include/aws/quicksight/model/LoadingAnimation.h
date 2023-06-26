/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
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
   * <p>The configuration of loading animation in free-form layout. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LoadingAnimation">AWS
   * API Reference</a></p>
   */
  class LoadingAnimation
  {
  public:
    AWS_QUICKSIGHT_API LoadingAnimation();
    AWS_QUICKSIGHT_API LoadingAnimation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LoadingAnimation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The visibility configuration of <code>LoadingAnimation</code>.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility configuration of <code>LoadingAnimation</code>.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility configuration of <code>LoadingAnimation</code>.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility configuration of <code>LoadingAnimation</code>.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility configuration of <code>LoadingAnimation</code>.</p>
     */
    inline LoadingAnimation& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility configuration of <code>LoadingAnimation</code>.</p>
     */
    inline LoadingAnimation& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}

  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
