/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AnonymousUserSnapshotJobResult.h>
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
   * <p>An object that provides information on the result of a snapshot job. This
   * object provides information about the job, the job status, and the location of
   * the generated file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotJobResult">AWS
   * API Reference</a></p>
   */
  class SnapshotJobResult
  {
  public:
    AWS_QUICKSIGHT_API SnapshotJobResult() = default;
    AWS_QUICKSIGHT_API SnapshotJobResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotJobResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of <code>AnonymousUserSnapshotJobResult</code> objects that contain
     * information on anonymous users and their user configurations. This data provided
     * by you when you make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline const Aws::Vector<AnonymousUserSnapshotJobResult>& GetAnonymousUsers() const { return m_anonymousUsers; }
    inline bool AnonymousUsersHasBeenSet() const { return m_anonymousUsersHasBeenSet; }
    template<typename AnonymousUsersT = Aws::Vector<AnonymousUserSnapshotJobResult>>
    void SetAnonymousUsers(AnonymousUsersT&& value) { m_anonymousUsersHasBeenSet = true; m_anonymousUsers = std::forward<AnonymousUsersT>(value); }
    template<typename AnonymousUsersT = Aws::Vector<AnonymousUserSnapshotJobResult>>
    SnapshotJobResult& WithAnonymousUsers(AnonymousUsersT&& value) { SetAnonymousUsers(std::forward<AnonymousUsersT>(value)); return *this;}
    template<typename AnonymousUsersT = AnonymousUserSnapshotJobResult>
    SnapshotJobResult& AddAnonymousUsers(AnonymousUsersT&& value) { m_anonymousUsersHasBeenSet = true; m_anonymousUsers.emplace_back(std::forward<AnonymousUsersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AnonymousUserSnapshotJobResult> m_anonymousUsers;
    bool m_anonymousUsersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
