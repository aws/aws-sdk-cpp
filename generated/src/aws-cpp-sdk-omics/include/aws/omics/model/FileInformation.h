/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>

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
    AWS_OMICS_API FileInformation();
    AWS_OMICS_API FileInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API FileInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file's content length.</p>
     */
    inline long long GetContentLength() const{ return m_contentLength; }

    /**
     * <p>The file's content length.</p>
     */
    inline bool ContentLengthHasBeenSet() const { return m_contentLengthHasBeenSet; }

    /**
     * <p>The file's content length.</p>
     */
    inline void SetContentLength(long long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }

    /**
     * <p>The file's content length.</p>
     */
    inline FileInformation& WithContentLength(long long value) { SetContentLength(value); return *this;}


    /**
     * <p>The file's part size.</p>
     */
    inline long long GetPartSize() const{ return m_partSize; }

    /**
     * <p>The file's part size.</p>
     */
    inline bool PartSizeHasBeenSet() const { return m_partSizeHasBeenSet; }

    /**
     * <p>The file's part size.</p>
     */
    inline void SetPartSize(long long value) { m_partSizeHasBeenSet = true; m_partSize = value; }

    /**
     * <p>The file's part size.</p>
     */
    inline FileInformation& WithPartSize(long long value) { SetPartSize(value); return *this;}


    /**
     * <p>The file's total parts.</p>
     */
    inline int GetTotalParts() const{ return m_totalParts; }

    /**
     * <p>The file's total parts.</p>
     */
    inline bool TotalPartsHasBeenSet() const { return m_totalPartsHasBeenSet; }

    /**
     * <p>The file's total parts.</p>
     */
    inline void SetTotalParts(int value) { m_totalPartsHasBeenSet = true; m_totalParts = value; }

    /**
     * <p>The file's total parts.</p>
     */
    inline FileInformation& WithTotalParts(int value) { SetTotalParts(value); return *this;}

  private:

    long long m_contentLength;
    bool m_contentLengthHasBeenSet = false;

    long long m_partSize;
    bool m_partSizeHasBeenSet = false;

    int m_totalParts;
    bool m_totalPartsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
