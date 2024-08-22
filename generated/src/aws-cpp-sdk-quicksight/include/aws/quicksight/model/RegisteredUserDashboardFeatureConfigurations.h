/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/StatePersistenceConfigurations.h>
#include <aws/quicksight/model/SharedViewConfigurations.h>
#include <aws/quicksight/model/BookmarksConfigurations.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredUserDashboardFeatureConfigurations">AWS
   * API Reference</a></p>
   */
  class RegisteredUserDashboardFeatureConfigurations
  {
  public:
    AWS_QUICKSIGHT_API RegisteredUserDashboardFeatureConfigurations();
    AWS_QUICKSIGHT_API RegisteredUserDashboardFeatureConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RegisteredUserDashboardFeatureConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state persistence settings of an embedded dashboard.</p>
     */
    inline const StatePersistenceConfigurations& GetStatePersistence() const{ return m_statePersistence; }
    inline bool StatePersistenceHasBeenSet() const { return m_statePersistenceHasBeenSet; }
    inline void SetStatePersistence(const StatePersistenceConfigurations& value) { m_statePersistenceHasBeenSet = true; m_statePersistence = value; }
    inline void SetStatePersistence(StatePersistenceConfigurations&& value) { m_statePersistenceHasBeenSet = true; m_statePersistence = std::move(value); }
    inline RegisteredUserDashboardFeatureConfigurations& WithStatePersistence(const StatePersistenceConfigurations& value) { SetStatePersistence(value); return *this;}
    inline RegisteredUserDashboardFeatureConfigurations& WithStatePersistence(StatePersistenceConfigurations&& value) { SetStatePersistence(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shared view settings of an embedded dashboard.</p>
     */
    inline const SharedViewConfigurations& GetSharedView() const{ return m_sharedView; }
    inline bool SharedViewHasBeenSet() const { return m_sharedViewHasBeenSet; }
    inline void SetSharedView(const SharedViewConfigurations& value) { m_sharedViewHasBeenSet = true; m_sharedView = value; }
    inline void SetSharedView(SharedViewConfigurations&& value) { m_sharedViewHasBeenSet = true; m_sharedView = std::move(value); }
    inline RegisteredUserDashboardFeatureConfigurations& WithSharedView(const SharedViewConfigurations& value) { SetSharedView(value); return *this;}
    inline RegisteredUserDashboardFeatureConfigurations& WithSharedView(SharedViewConfigurations&& value) { SetSharedView(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bookmarks configuration for an embedded dashboard in Amazon
     * QuickSight.</p>
     */
    inline const BookmarksConfigurations& GetBookmarks() const{ return m_bookmarks; }
    inline bool BookmarksHasBeenSet() const { return m_bookmarksHasBeenSet; }
    inline void SetBookmarks(const BookmarksConfigurations& value) { m_bookmarksHasBeenSet = true; m_bookmarks = value; }
    inline void SetBookmarks(BookmarksConfigurations&& value) { m_bookmarksHasBeenSet = true; m_bookmarks = std::move(value); }
    inline RegisteredUserDashboardFeatureConfigurations& WithBookmarks(const BookmarksConfigurations& value) { SetBookmarks(value); return *this;}
    inline RegisteredUserDashboardFeatureConfigurations& WithBookmarks(BookmarksConfigurations&& value) { SetBookmarks(std::move(value)); return *this;}
    ///@}
  private:

    StatePersistenceConfigurations m_statePersistence;
    bool m_statePersistenceHasBeenSet = false;

    SharedViewConfigurations m_sharedView;
    bool m_sharedViewHasBeenSet = false;

    BookmarksConfigurations m_bookmarks;
    bool m_bookmarksHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
