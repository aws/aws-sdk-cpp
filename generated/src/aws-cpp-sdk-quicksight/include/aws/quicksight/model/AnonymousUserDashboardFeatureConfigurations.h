/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SharedViewConfigurations.h>
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
   * <p>The feature configuration for an embedded dashboard.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnonymousUserDashboardFeatureConfigurations">AWS
   * API Reference</a></p>
   */
  class AnonymousUserDashboardFeatureConfigurations
  {
  public:
    AWS_QUICKSIGHT_API AnonymousUserDashboardFeatureConfigurations();
    AWS_QUICKSIGHT_API AnonymousUserDashboardFeatureConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnonymousUserDashboardFeatureConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The shared view settings of an embedded dashboard.</p>
     */
    inline const SharedViewConfigurations& GetSharedView() const{ return m_sharedView; }
    inline bool SharedViewHasBeenSet() const { return m_sharedViewHasBeenSet; }
    inline void SetSharedView(const SharedViewConfigurations& value) { m_sharedViewHasBeenSet = true; m_sharedView = value; }
    inline void SetSharedView(SharedViewConfigurations&& value) { m_sharedViewHasBeenSet = true; m_sharedView = std::move(value); }
    inline AnonymousUserDashboardFeatureConfigurations& WithSharedView(const SharedViewConfigurations& value) { SetSharedView(value); return *this;}
    inline AnonymousUserDashboardFeatureConfigurations& WithSharedView(SharedViewConfigurations&& value) { SetSharedView(std::move(value)); return *this;}
    ///@}
  private:

    SharedViewConfigurations m_sharedView;
    bool m_sharedViewHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
