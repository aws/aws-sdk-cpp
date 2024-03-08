/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>An optional parameter that overrides the validation strategy for all analyses
   * and dashboards before the resource is imported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobOverrideValidationStrategy">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobOverrideValidationStrategy
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideValidationStrategy();
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideValidationStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobOverrideValidationStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean value that indicates whether to import all analyses and dashboards
     * under strict or lenient mode.</p>
     */
    inline bool GetStrictModeForAllResources() const{ return m_strictModeForAllResources; }

    /**
     * <p>A Boolean value that indicates whether to import all analyses and dashboards
     * under strict or lenient mode.</p>
     */
    inline bool StrictModeForAllResourcesHasBeenSet() const { return m_strictModeForAllResourcesHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether to import all analyses and dashboards
     * under strict or lenient mode.</p>
     */
    inline void SetStrictModeForAllResources(bool value) { m_strictModeForAllResourcesHasBeenSet = true; m_strictModeForAllResources = value; }

    /**
     * <p>A Boolean value that indicates whether to import all analyses and dashboards
     * under strict or lenient mode.</p>
     */
    inline AssetBundleImportJobOverrideValidationStrategy& WithStrictModeForAllResources(bool value) { SetStrictModeForAllResources(value); return *this;}

  private:

    bool m_strictModeForAllResources;
    bool m_strictModeForAllResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
