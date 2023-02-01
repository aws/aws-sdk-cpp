/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LocalNavigationConfiguration.h>
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
   * <p>The navigation operation that navigates between different sheets in the same
   * analysis.</p> <p>This is a union type structure. For this structure to be valid,
   * only one of the attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomActionNavigationOperation">AWS
   * API Reference</a></p>
   */
  class CustomActionNavigationOperation
  {
  public:
    AWS_QUICKSIGHT_API CustomActionNavigationOperation();
    AWS_QUICKSIGHT_API CustomActionNavigationOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomActionNavigationOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration that chooses the navigation target.</p>
     */
    inline const LocalNavigationConfiguration& GetLocalNavigationConfiguration() const{ return m_localNavigationConfiguration; }

    /**
     * <p>The configuration that chooses the navigation target.</p>
     */
    inline bool LocalNavigationConfigurationHasBeenSet() const { return m_localNavigationConfigurationHasBeenSet; }

    /**
     * <p>The configuration that chooses the navigation target.</p>
     */
    inline void SetLocalNavigationConfiguration(const LocalNavigationConfiguration& value) { m_localNavigationConfigurationHasBeenSet = true; m_localNavigationConfiguration = value; }

    /**
     * <p>The configuration that chooses the navigation target.</p>
     */
    inline void SetLocalNavigationConfiguration(LocalNavigationConfiguration&& value) { m_localNavigationConfigurationHasBeenSet = true; m_localNavigationConfiguration = std::move(value); }

    /**
     * <p>The configuration that chooses the navigation target.</p>
     */
    inline CustomActionNavigationOperation& WithLocalNavigationConfiguration(const LocalNavigationConfiguration& value) { SetLocalNavigationConfiguration(value); return *this;}

    /**
     * <p>The configuration that chooses the navigation target.</p>
     */
    inline CustomActionNavigationOperation& WithLocalNavigationConfiguration(LocalNavigationConfiguration&& value) { SetLocalNavigationConfiguration(std::move(value)); return *this;}

  private:

    LocalNavigationConfiguration m_localNavigationConfiguration;
    bool m_localNavigationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
