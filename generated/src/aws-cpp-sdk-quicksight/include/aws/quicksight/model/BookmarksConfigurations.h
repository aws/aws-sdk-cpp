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
   * <p>The bookmarks configuration of an embedded dashboard.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BookmarksConfigurations">AWS
   * API Reference</a></p>
   */
  class BookmarksConfigurations
  {
  public:
    AWS_QUICKSIGHT_API BookmarksConfigurations();
    AWS_QUICKSIGHT_API BookmarksConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BookmarksConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean value that determines whether a user can bookmark an embedded
     * dashboard.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>A Boolean value that determines whether a user can bookmark an embedded
     * dashboard.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>A Boolean value that determines whether a user can bookmark an embedded
     * dashboard.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>A Boolean value that determines whether a user can bookmark an embedded
     * dashboard.</p>
     */
    inline BookmarksConfigurations& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
