/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/Snapshot">AWS
   * API Reference</a></p>
   */
  class Snapshot
  {
  public:
    AWS_WORKSPACES_API Snapshot() = default;
    AWS_WORKSPACES_API Snapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Snapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotTime() const { return m_snapshotTime; }
    inline bool SnapshotTimeHasBeenSet() const { return m_snapshotTimeHasBeenSet; }
    template<typename SnapshotTimeT = Aws::Utils::DateTime>
    void SetSnapshotTime(SnapshotTimeT&& value) { m_snapshotTimeHasBeenSet = true; m_snapshotTime = std::forward<SnapshotTimeT>(value); }
    template<typename SnapshotTimeT = Aws::Utils::DateTime>
    Snapshot& WithSnapshotTime(SnapshotTimeT&& value) { SetSnapshotTime(std::forward<SnapshotTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_snapshotTime{};
    bool m_snapshotTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
