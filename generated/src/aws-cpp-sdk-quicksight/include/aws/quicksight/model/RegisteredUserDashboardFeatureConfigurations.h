/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/StatePersistenceConfigurations.h>
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


    /**
     * <p>The state persistence settings of an embedded dashboard.</p>
     */
    inline const StatePersistenceConfigurations& GetStatePersistence() const{ return m_statePersistence; }

    /**
     * <p>The state persistence settings of an embedded dashboard.</p>
     */
    inline bool StatePersistenceHasBeenSet() const { return m_statePersistenceHasBeenSet; }

    /**
     * <p>The state persistence settings of an embedded dashboard.</p>
     */
    inline void SetStatePersistence(const StatePersistenceConfigurations& value) { m_statePersistenceHasBeenSet = true; m_statePersistence = value; }

    /**
     * <p>The state persistence settings of an embedded dashboard.</p>
     */
    inline void SetStatePersistence(StatePersistenceConfigurations&& value) { m_statePersistenceHasBeenSet = true; m_statePersistence = std::move(value); }

    /**
     * <p>The state persistence settings of an embedded dashboard.</p>
     */
    inline RegisteredUserDashboardFeatureConfigurations& WithStatePersistence(const StatePersistenceConfigurations& value) { SetStatePersistence(value); return *this;}

    /**
     * <p>The state persistence settings of an embedded dashboard.</p>
     */
    inline RegisteredUserDashboardFeatureConfigurations& WithStatePersistence(StatePersistenceConfigurations&& value) { SetStatePersistence(std::move(value)); return *this;}


    /**
     * <p>The bookmarks configuration for an embedded dashboard in Amazon
     * QuickSight.</p>
     */
    inline const BookmarksConfigurations& GetBookmarks() const{ return m_bookmarks; }

    /**
     * <p>The bookmarks configuration for an embedded dashboard in Amazon
     * QuickSight.</p>
     */
    inline bool BookmarksHasBeenSet() const { return m_bookmarksHasBeenSet; }

    /**
     * <p>The bookmarks configuration for an embedded dashboard in Amazon
     * QuickSight.</p>
     */
    inline void SetBookmarks(const BookmarksConfigurations& value) { m_bookmarksHasBeenSet = true; m_bookmarks = value; }

    /**
     * <p>The bookmarks configuration for an embedded dashboard in Amazon
     * QuickSight.</p>
     */
    inline void SetBookmarks(BookmarksConfigurations&& value) { m_bookmarksHasBeenSet = true; m_bookmarks = std::move(value); }

    /**
     * <p>The bookmarks configuration for an embedded dashboard in Amazon
     * QuickSight.</p>
     */
    inline RegisteredUserDashboardFeatureConfigurations& WithBookmarks(const BookmarksConfigurations& value) { SetBookmarks(value); return *this;}

    /**
     * <p>The bookmarks configuration for an embedded dashboard in Amazon
     * QuickSight.</p>
     */
    inline RegisteredUserDashboardFeatureConfigurations& WithBookmarks(BookmarksConfigurations&& value) { SetBookmarks(std::move(value)); return *this;}

  private:

    StatePersistenceConfigurations m_statePersistence;
    bool m_statePersistenceHasBeenSet = false;

    BookmarksConfigurations m_bookmarks;
    bool m_bookmarksHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
