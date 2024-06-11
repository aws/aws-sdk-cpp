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


    ///@{
    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline const FileInformation& GetSource1() const{ return m_source1; }
    inline bool Source1HasBeenSet() const { return m_source1HasBeenSet; }
    inline void SetSource1(const FileInformation& value) { m_source1HasBeenSet = true; m_source1 = value; }
    inline void SetSource1(FileInformation&& value) { m_source1HasBeenSet = true; m_source1 = std::move(value); }
    inline ReadSetFiles& WithSource1(const FileInformation& value) { SetSource1(value); return *this;}
    inline ReadSetFiles& WithSource1(FileInformation&& value) { SetSource1(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline const FileInformation& GetSource2() const{ return m_source2; }
    inline bool Source2HasBeenSet() const { return m_source2HasBeenSet; }
    inline void SetSource2(const FileInformation& value) { m_source2HasBeenSet = true; m_source2 = value; }
    inline void SetSource2(FileInformation&& value) { m_source2HasBeenSet = true; m_source2 = std::move(value); }
    inline ReadSetFiles& WithSource2(const FileInformation& value) { SetSource2(value); return *this;}
    inline ReadSetFiles& WithSource2(FileInformation&& value) { SetSource2(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files' index.</p>
     */
    inline const FileInformation& GetIndex() const{ return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(const FileInformation& value) { m_indexHasBeenSet = true; m_index = value; }
    inline void SetIndex(FileInformation&& value) { m_indexHasBeenSet = true; m_index = std::move(value); }
    inline ReadSetFiles& WithIndex(const FileInformation& value) { SetIndex(value); return *this;}
    inline ReadSetFiles& WithIndex(FileInformation&& value) { SetIndex(std::move(value)); return *this;}
    ///@}
  private:

    FileInformation m_source1;
    bool m_source1HasBeenSet = false;

    FileInformation m_source2;
    bool m_source2HasBeenSet = false;

    FileInformation m_index;
    bool m_indexHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
