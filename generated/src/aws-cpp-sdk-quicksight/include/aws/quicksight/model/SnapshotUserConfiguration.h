/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SnapshotAnonymousUser.h>
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
   * snapshot is generated for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotUserConfiguration">AWS
   * API Reference</a></p>
   */
  class SnapshotUserConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SnapshotUserConfiguration() = default;
    AWS_QUICKSIGHT_API SnapshotUserConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotUserConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of records that describe the anonymous users that the dashboard
     * snapshot is generated for.</p>
     */
    inline const Aws::Vector<SnapshotAnonymousUser>& GetAnonymousUsers() const { return m_anonymousUsers; }
    inline bool AnonymousUsersHasBeenSet() const { return m_anonymousUsersHasBeenSet; }
    template<typename AnonymousUsersT = Aws::Vector<SnapshotAnonymousUser>>
    void SetAnonymousUsers(AnonymousUsersT&& value) { m_anonymousUsersHasBeenSet = true; m_anonymousUsers = std::forward<AnonymousUsersT>(value); }
    template<typename AnonymousUsersT = Aws::Vector<SnapshotAnonymousUser>>
    SnapshotUserConfiguration& WithAnonymousUsers(AnonymousUsersT&& value) { SetAnonymousUsers(std::forward<AnonymousUsersT>(value)); return *this;}
    template<typename AnonymousUsersT = SnapshotAnonymousUser>
    SnapshotUserConfiguration& AddAnonymousUsers(AnonymousUsersT&& value) { m_anonymousUsersHasBeenSet = true; m_anonymousUsers.emplace_back(std::forward<AnonymousUsersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SnapshotAnonymousUser> m_anonymousUsers;
    bool m_anonymousUsersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
