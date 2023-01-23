/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/FileInformation.h>
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
   * <p>Files in a read set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReadSetFiles">AWS
   * API Reference</a></p>
   */
  class ReadSetFiles
  {
  public:
    AWS_OMICS_API ReadSetFiles();
    AWS_OMICS_API ReadSetFiles(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReadSetFiles& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The files' index.</p>
     */
    inline const FileInformation& GetIndex() const{ return m_index; }

    /**
     * <p>The files' index.</p>
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * <p>The files' index.</p>
     */
    inline void SetIndex(const FileInformation& value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * <p>The files' index.</p>
     */
    inline void SetIndex(FileInformation&& value) { m_indexHasBeenSet = true; m_index = std::move(value); }

    /**
     * <p>The files' index.</p>
     */
    inline ReadSetFiles& WithIndex(const FileInformation& value) { SetIndex(value); return *this;}

    /**
     * <p>The files' index.</p>
     */
    inline ReadSetFiles& WithIndex(FileInformation&& value) { SetIndex(std::move(value)); return *this;}


    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline const FileInformation& GetSource1() const{ return m_source1; }

    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline bool Source1HasBeenSet() const { return m_source1HasBeenSet; }

    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline void SetSource1(const FileInformation& value) { m_source1HasBeenSet = true; m_source1 = value; }

    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline void SetSource1(FileInformation&& value) { m_source1HasBeenSet = true; m_source1 = std::move(value); }

    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline ReadSetFiles& WithSource1(const FileInformation& value) { SetSource1(value); return *this;}

    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline ReadSetFiles& WithSource1(FileInformation&& value) { SetSource1(std::move(value)); return *this;}


    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline const FileInformation& GetSource2() const{ return m_source2; }

    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline bool Source2HasBeenSet() const { return m_source2HasBeenSet; }

    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline void SetSource2(const FileInformation& value) { m_source2HasBeenSet = true; m_source2 = value; }

    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline void SetSource2(FileInformation&& value) { m_source2HasBeenSet = true; m_source2 = std::move(value); }

    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline ReadSetFiles& WithSource2(const FileInformation& value) { SetSource2(value); return *this;}

    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline ReadSetFiles& WithSource2(FileInformation&& value) { SetSource2(std::move(value)); return *this;}

  private:

    FileInformation m_index;
    bool m_indexHasBeenSet = false;

    FileInformation m_source1;
    bool m_source1HasBeenSet = false;

    FileInformation m_source2;
    bool m_source2HasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
