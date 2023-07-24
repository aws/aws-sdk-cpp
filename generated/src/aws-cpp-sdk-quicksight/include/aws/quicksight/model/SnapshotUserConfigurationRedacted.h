/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SnapshotAnonymousUserRedacted.h>
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
   * <p>A structure that contains information about the users that the dashboard
   * snapshot is generated for. Sensitive user information is excluded.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotUserConfigurationRedacted">AWS
   * API Reference</a></p>
   */
  class SnapshotUserConfigurationRedacted
  {
  public:
    AWS_QUICKSIGHT_API SnapshotUserConfigurationRedacted();
    AWS_QUICKSIGHT_API SnapshotUserConfigurationRedacted(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotUserConfigurationRedacted& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An array of records that describe anonymous users that the dashboard
     * snapshot is generated for. Sensitive user information is excluded. </p>
     */
    inline const Aws::Vector<SnapshotAnonymousUserRedacted>& GetAnonymousUsers() const{ return m_anonymousUsers; }

    /**
     * <p> An array of records that describe anonymous users that the dashboard
     * snapshot is generated for. Sensitive user information is excluded. </p>
     */
    inline bool AnonymousUsersHasBeenSet() const { return m_anonymousUsersHasBeenSet; }

    /**
     * <p> An array of records that describe anonymous users that the dashboard
     * snapshot is generated for. Sensitive user information is excluded. </p>
     */
    inline void SetAnonymousUsers(const Aws::Vector<SnapshotAnonymousUserRedacted>& value) { m_anonymousUsersHasBeenSet = true; m_anonymousUsers = value; }

    /**
     * <p> An array of records that describe anonymous users that the dashboard
     * snapshot is generated for. Sensitive user information is excluded. </p>
     */
    inline void SetAnonymousUsers(Aws::Vector<SnapshotAnonymousUserRedacted>&& value) { m_anonymousUsersHasBeenSet = true; m_anonymousUsers = std::move(value); }

    /**
     * <p> An array of records that describe anonymous users that the dashboard
     * snapshot is generated for. Sensitive user information is excluded. </p>
     */
    inline SnapshotUserConfigurationRedacted& WithAnonymousUsers(const Aws::Vector<SnapshotAnonymousUserRedacted>& value) { SetAnonymousUsers(value); return *this;}

    /**
     * <p> An array of records that describe anonymous users that the dashboard
     * snapshot is generated for. Sensitive user information is excluded. </p>
     */
    inline SnapshotUserConfigurationRedacted& WithAnonymousUsers(Aws::Vector<SnapshotAnonymousUserRedacted>&& value) { SetAnonymousUsers(std::move(value)); return *this;}

    /**
     * <p> An array of records that describe anonymous users that the dashboard
     * snapshot is generated for. Sensitive user information is excluded. </p>
     */
    inline SnapshotUserConfigurationRedacted& AddAnonymousUsers(const SnapshotAnonymousUserRedacted& value) { m_anonymousUsersHasBeenSet = true; m_anonymousUsers.push_back(value); return *this; }

    /**
     * <p> An array of records that describe anonymous users that the dashboard
     * snapshot is generated for. Sensitive user information is excluded. </p>
     */
    inline SnapshotUserConfigurationRedacted& AddAnonymousUsers(SnapshotAnonymousUserRedacted&& value) { m_anonymousUsersHasBeenSet = true; m_anonymousUsers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SnapshotAnonymousUserRedacted> m_anonymousUsers;
    bool m_anonymousUsersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
