/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SnapshotJobResultFileGroup.h>
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
   * <p>A structure that contains the file groups that are requested for the artifact
   * generation in a <code>StartDashboardSnapshotJob</code> API call. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnonymousUserSnapshotJobResult">AWS
   * API Reference</a></p>
   */
  class AnonymousUserSnapshotJobResult
  {
  public:
    AWS_QUICKSIGHT_API AnonymousUserSnapshotJobResult() = default;
    AWS_QUICKSIGHT_API AnonymousUserSnapshotJobResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnonymousUserSnapshotJobResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of <code>SnapshotJobResultFileGroup</code> objects that contain
     * information on the files that are requested during a
     * <code>StartDashboardSnapshotJob</code> API call. If the job succeeds, these
     * objects contain the location where the snapshot artifacts are stored. If the job
     * fails, the objects contain information about the error that caused the job to
     * fail.</p>
     */
    inline const Aws::Vector<SnapshotJobResultFileGroup>& GetFileGroups() const { return m_fileGroups; }
    inline bool FileGroupsHasBeenSet() const { return m_fileGroupsHasBeenSet; }
    template<typename FileGroupsT = Aws::Vector<SnapshotJobResultFileGroup>>
    void SetFileGroups(FileGroupsT&& value) { m_fileGroupsHasBeenSet = true; m_fileGroups = std::forward<FileGroupsT>(value); }
    template<typename FileGroupsT = Aws::Vector<SnapshotJobResultFileGroup>>
    AnonymousUserSnapshotJobResult& WithFileGroups(FileGroupsT&& value) { SetFileGroups(std::forward<FileGroupsT>(value)); return *this;}
    template<typename FileGroupsT = SnapshotJobResultFileGroup>
    AnonymousUserSnapshotJobResult& AddFileGroups(FileGroupsT&& value) { m_fileGroupsHasBeenSet = true; m_fileGroups.emplace_back(std::forward<FileGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SnapshotJobResultFileGroup> m_fileGroups;
    bool m_fileGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
