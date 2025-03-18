﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/StatePersistenceConfigurations.h>
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
   * <p>The feature configurations of an embedded Amazon QuickSight
   * console.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredUserConsoleFeatureConfigurations">AWS
   * API Reference</a></p>
   */
  class RegisteredUserConsoleFeatureConfigurations
  {
  public:
    AWS_QUICKSIGHT_API RegisteredUserConsoleFeatureConfigurations() = default;
    AWS_QUICKSIGHT_API RegisteredUserConsoleFeatureConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RegisteredUserConsoleFeatureConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state persistence configurations of an embedded Amazon QuickSight
     * console.</p>
     */
    inline const StatePersistenceConfigurations& GetStatePersistence() const { return m_statePersistence; }
    inline bool StatePersistenceHasBeenSet() const { return m_statePersistenceHasBeenSet; }
    template<typename StatePersistenceT = StatePersistenceConfigurations>
    void SetStatePersistence(StatePersistenceT&& value) { m_statePersistenceHasBeenSet = true; m_statePersistence = std::forward<StatePersistenceT>(value); }
    template<typename StatePersistenceT = StatePersistenceConfigurations>
    RegisteredUserConsoleFeatureConfigurations& WithStatePersistence(StatePersistenceT&& value) { SetStatePersistence(std::forward<StatePersistenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shared view settings of an embedded dashboard.</p>
     */
    inline const SharedViewConfigurations& GetSharedView() const { return m_sharedView; }
    inline bool SharedViewHasBeenSet() const { return m_sharedViewHasBeenSet; }
    template<typename SharedViewT = SharedViewConfigurations>
    void SetSharedView(SharedViewT&& value) { m_sharedViewHasBeenSet = true; m_sharedView = std::forward<SharedViewT>(value); }
    template<typename SharedViewT = SharedViewConfigurations>
    RegisteredUserConsoleFeatureConfigurations& WithSharedView(SharedViewT&& value) { SetSharedView(std::forward<SharedViewT>(value)); return *this;}
    ///@}
  private:

    StatePersistenceConfigurations m_statePersistence;
    bool m_statePersistenceHasBeenSet = false;

    SharedViewConfigurations m_sharedView;
    bool m_sharedViewHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
