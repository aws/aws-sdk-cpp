/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SnapshotFile.h>
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
   * <p>A structure that contains the information on the snapshot
   * files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotFileGroup">AWS
   * API Reference</a></p>
   */
  class SnapshotFileGroup
  {
  public:
    AWS_QUICKSIGHT_API SnapshotFileGroup();
    AWS_QUICKSIGHT_API SnapshotFileGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotFileGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of <code>SnapshotFile</code> objects that contain the information on
     * the snapshot files that need to be generated. This structure can hold 1
     * configuration at a time.</p>
     */
    inline const Aws::Vector<SnapshotFile>& GetFiles() const{ return m_files; }

    /**
     * <p>A list of <code>SnapshotFile</code> objects that contain the information on
     * the snapshot files that need to be generated. This structure can hold 1
     * configuration at a time.</p>
     */
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }

    /**
     * <p>A list of <code>SnapshotFile</code> objects that contain the information on
     * the snapshot files that need to be generated. This structure can hold 1
     * configuration at a time.</p>
     */
    inline void SetFiles(const Aws::Vector<SnapshotFile>& value) { m_filesHasBeenSet = true; m_files = value; }

    /**
     * <p>A list of <code>SnapshotFile</code> objects that contain the information on
     * the snapshot files that need to be generated. This structure can hold 1
     * configuration at a time.</p>
     */
    inline void SetFiles(Aws::Vector<SnapshotFile>&& value) { m_filesHasBeenSet = true; m_files = std::move(value); }

    /**
     * <p>A list of <code>SnapshotFile</code> objects that contain the information on
     * the snapshot files that need to be generated. This structure can hold 1
     * configuration at a time.</p>
     */
    inline SnapshotFileGroup& WithFiles(const Aws::Vector<SnapshotFile>& value) { SetFiles(value); return *this;}

    /**
     * <p>A list of <code>SnapshotFile</code> objects that contain the information on
     * the snapshot files that need to be generated. This structure can hold 1
     * configuration at a time.</p>
     */
    inline SnapshotFileGroup& WithFiles(Aws::Vector<SnapshotFile>&& value) { SetFiles(std::move(value)); return *this;}

    /**
     * <p>A list of <code>SnapshotFile</code> objects that contain the information on
     * the snapshot files that need to be generated. This structure can hold 1
     * configuration at a time.</p>
     */
    inline SnapshotFileGroup& AddFiles(const SnapshotFile& value) { m_filesHasBeenSet = true; m_files.push_back(value); return *this; }

    /**
     * <p>A list of <code>SnapshotFile</code> objects that contain the information on
     * the snapshot files that need to be generated. This structure can hold 1
     * configuration at a time.</p>
     */
    inline SnapshotFileGroup& AddFiles(SnapshotFile&& value) { m_filesHasBeenSet = true; m_files.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SnapshotFile> m_files;
    bool m_filesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
