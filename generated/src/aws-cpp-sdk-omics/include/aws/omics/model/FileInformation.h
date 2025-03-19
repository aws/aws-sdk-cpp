/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ReadSetS3Access.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Details about a file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/FileInformation">AWS
   * API Reference</a></p>
   */
  class FileInformation
  {
  public:
    AWS_OMICS_API FileInformation() = default;
    AWS_OMICS_API FileInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API FileInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file's total parts.</p>
     */
    inline int GetTotalParts() const { return m_totalParts; }
    inline bool TotalPartsHasBeenSet() const { return m_totalPartsHasBeenSet; }
    inline void SetTotalParts(int value) { m_totalPartsHasBeenSet = true; m_totalParts = value; }
    inline FileInformation& WithTotalParts(int value) { SetTotalParts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file's part size.</p>
     */
    inline long long GetPartSize() const { return m_partSize; }
    inline bool PartSizeHasBeenSet() const { return m_partSizeHasBeenSet; }
    inline void SetPartSize(long long value) { m_partSizeHasBeenSet = true; m_partSize = value; }
    inline FileInformation& WithPartSize(long long value) { SetPartSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file's content length.</p>
     */
    inline long long GetContentLength() const { return m_contentLength; }
    inline bool ContentLengthHasBeenSet() const { return m_contentLengthHasBeenSet; }
    inline void SetContentLength(long long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }
    inline FileInformation& WithContentLength(long long value) { SetContentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI metadata of a sequence store.</p>
     */
    inline const ReadSetS3Access& GetS3Access() const { return m_s3Access; }
    inline bool S3AccessHasBeenSet() const { return m_s3AccessHasBeenSet; }
    template<typename S3AccessT = ReadSetS3Access>
    void SetS3Access(S3AccessT&& value) { m_s3AccessHasBeenSet = true; m_s3Access = std::forward<S3AccessT>(value); }
    template<typename S3AccessT = ReadSetS3Access>
    FileInformation& WithS3Access(S3AccessT&& value) { SetS3Access(std::forward<S3AccessT>(value)); return *this;}
    ///@}
  private:

    int m_totalParts{0};
    bool m_totalPartsHasBeenSet = false;

    long long m_partSize{0};
    bool m_partSizeHasBeenSet = false;

    long long m_contentLength{0};
    bool m_contentLengthHasBeenSet = false;

    ReadSetS3Access m_s3Access;
    bool m_s3AccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
