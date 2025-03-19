/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SnapshotFile.h>
#include <aws/quicksight/model/SnapshotJobS3Result.h>
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
   * <p>A structure that contains information on the generated snapshot file
   * groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotJobResultFileGroup">AWS
   * API Reference</a></p>
   */
  class SnapshotJobResultFileGroup
  {
  public:
    AWS_QUICKSIGHT_API SnapshotJobResultFileGroup() = default;
    AWS_QUICKSIGHT_API SnapshotJobResultFileGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotJobResultFileGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of <code>SnapshotFile</code> objects.</p>
     */
    inline const Aws::Vector<SnapshotFile>& GetFiles() const { return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    template<typename FilesT = Aws::Vector<SnapshotFile>>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = Aws::Vector<SnapshotFile>>
    SnapshotJobResultFileGroup& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
    template<typename FilesT = SnapshotFile>
    SnapshotJobResultFileGroup& AddFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files.emplace_back(std::forward<FilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of <code>SnapshotJobS3Result</code> objects.</p>
     */
    inline const Aws::Vector<SnapshotJobS3Result>& GetS3Results() const { return m_s3Results; }
    inline bool S3ResultsHasBeenSet() const { return m_s3ResultsHasBeenSet; }
    template<typename S3ResultsT = Aws::Vector<SnapshotJobS3Result>>
    void SetS3Results(S3ResultsT&& value) { m_s3ResultsHasBeenSet = true; m_s3Results = std::forward<S3ResultsT>(value); }
    template<typename S3ResultsT = Aws::Vector<SnapshotJobS3Result>>
    SnapshotJobResultFileGroup& WithS3Results(S3ResultsT&& value) { SetS3Results(std::forward<S3ResultsT>(value)); return *this;}
    template<typename S3ResultsT = SnapshotJobS3Result>
    SnapshotJobResultFileGroup& AddS3Results(S3ResultsT&& value) { m_s3ResultsHasBeenSet = true; m_s3Results.emplace_back(std::forward<S3ResultsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SnapshotFile> m_files;
    bool m_filesHasBeenSet = false;

    Aws::Vector<SnapshotJobS3Result> m_s3Results;
    bool m_s3ResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
