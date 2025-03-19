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
    AWS_OMICS_API ReadSetFiles() = default;
    AWS_OMICS_API ReadSetFiles(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReadSetFiles& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline const FileInformation& GetSource1() const { return m_source1; }
    inline bool Source1HasBeenSet() const { return m_source1HasBeenSet; }
    template<typename Source1T = FileInformation>
    void SetSource1(Source1T&& value) { m_source1HasBeenSet = true; m_source1 = std::forward<Source1T>(value); }
    template<typename Source1T = FileInformation>
    ReadSetFiles& WithSource1(Source1T&& value) { SetSource1(std::forward<Source1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline const FileInformation& GetSource2() const { return m_source2; }
    inline bool Source2HasBeenSet() const { return m_source2HasBeenSet; }
    template<typename Source2T = FileInformation>
    void SetSource2(Source2T&& value) { m_source2HasBeenSet = true; m_source2 = std::forward<Source2T>(value); }
    template<typename Source2T = FileInformation>
    ReadSetFiles& WithSource2(Source2T&& value) { SetSource2(std::forward<Source2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files' index.</p>
     */
    inline const FileInformation& GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    template<typename IndexT = FileInformation>
    void SetIndex(IndexT&& value) { m_indexHasBeenSet = true; m_index = std::forward<IndexT>(value); }
    template<typename IndexT = FileInformation>
    ReadSetFiles& WithIndex(IndexT&& value) { SetIndex(std::forward<IndexT>(value)); return *this;}
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
