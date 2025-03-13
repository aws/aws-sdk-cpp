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
   * <p>A set of genome reference files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReferenceFiles">AWS
   * API Reference</a></p>
   */
  class ReferenceFiles
  {
  public:
    AWS_OMICS_API ReferenceFiles() = default;
    AWS_OMICS_API ReferenceFiles(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReferenceFiles& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline const FileInformation& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = FileInformation>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = FileInformation>
    ReferenceFiles& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
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
    ReferenceFiles& WithIndex(IndexT&& value) { SetIndex(std::forward<IndexT>(value)); return *this;}
    ///@}
  private:

    FileInformation m_source;
    bool m_sourceHasBeenSet = false;

    FileInformation m_index;
    bool m_indexHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
