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
    AWS_QUICKSIGHT_API SnapshotJobResultFileGroup();
    AWS_QUICKSIGHT_API SnapshotJobResultFileGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotJobResultFileGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A list of <code>SnapshotFile</code> objects.</p>
     */
    inline const Aws::Vector<SnapshotFile>& GetFiles() const{ return m_files; }

    /**
     * <p> A list of <code>SnapshotFile</code> objects.</p>
     */
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }

    /**
     * <p> A list of <code>SnapshotFile</code> objects.</p>
     */
    inline void SetFiles(const Aws::Vector<SnapshotFile>& value) { m_filesHasBeenSet = true; m_files = value; }

    /**
     * <p> A list of <code>SnapshotFile</code> objects.</p>
     */
    inline void SetFiles(Aws::Vector<SnapshotFile>&& value) { m_filesHasBeenSet = true; m_files = std::move(value); }

    /**
     * <p> A list of <code>SnapshotFile</code> objects.</p>
     */
    inline SnapshotJobResultFileGroup& WithFiles(const Aws::Vector<SnapshotFile>& value) { SetFiles(value); return *this;}

    /**
     * <p> A list of <code>SnapshotFile</code> objects.</p>
     */
    inline SnapshotJobResultFileGroup& WithFiles(Aws::Vector<SnapshotFile>&& value) { SetFiles(std::move(value)); return *this;}

    /**
     * <p> A list of <code>SnapshotFile</code> objects.</p>
     */
    inline SnapshotJobResultFileGroup& AddFiles(const SnapshotFile& value) { m_filesHasBeenSet = true; m_files.push_back(value); return *this; }

    /**
     * <p> A list of <code>SnapshotFile</code> objects.</p>
     */
    inline SnapshotJobResultFileGroup& AddFiles(SnapshotFile&& value) { m_filesHasBeenSet = true; m_files.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of <code>SnapshotJobS3Result</code> objects.</p>
     */
    inline const Aws::Vector<SnapshotJobS3Result>& GetS3Results() const{ return m_s3Results; }

    /**
     * <p> A list of <code>SnapshotJobS3Result</code> objects.</p>
     */
    inline bool S3ResultsHasBeenSet() const { return m_s3ResultsHasBeenSet; }

    /**
     * <p> A list of <code>SnapshotJobS3Result</code> objects.</p>
     */
    inline void SetS3Results(const Aws::Vector<SnapshotJobS3Result>& value) { m_s3ResultsHasBeenSet = true; m_s3Results = value; }

    /**
     * <p> A list of <code>SnapshotJobS3Result</code> objects.</p>
     */
    inline void SetS3Results(Aws::Vector<SnapshotJobS3Result>&& value) { m_s3ResultsHasBeenSet = true; m_s3Results = std::move(value); }

    /**
     * <p> A list of <code>SnapshotJobS3Result</code> objects.</p>
     */
    inline SnapshotJobResultFileGroup& WithS3Results(const Aws::Vector<SnapshotJobS3Result>& value) { SetS3Results(value); return *this;}

    /**
     * <p> A list of <code>SnapshotJobS3Result</code> objects.</p>
     */
    inline SnapshotJobResultFileGroup& WithS3Results(Aws::Vector<SnapshotJobS3Result>&& value) { SetS3Results(std::move(value)); return *this;}

    /**
     * <p> A list of <code>SnapshotJobS3Result</code> objects.</p>
     */
    inline SnapshotJobResultFileGroup& AddS3Results(const SnapshotJobS3Result& value) { m_s3ResultsHasBeenSet = true; m_s3Results.push_back(value); return *this; }

    /**
     * <p> A list of <code>SnapshotJobS3Result</code> objects.</p>
     */
    inline SnapshotJobResultFileGroup& AddS3Results(SnapshotJobS3Result&& value) { m_s3ResultsHasBeenSet = true; m_s3Results.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SnapshotFile> m_files;
    bool m_filesHasBeenSet = false;

    Aws::Vector<SnapshotJobS3Result> m_s3Results;
    bool m_s3ResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
