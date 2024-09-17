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
    AWS_OMICS_API ReferenceFiles();
    AWS_OMICS_API ReferenceFiles(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReferenceFiles& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline const FileInformation& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const FileInformation& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(FileInformation&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline ReferenceFiles& WithSource(const FileInformation& value) { SetSource(value); return *this;}
    inline ReferenceFiles& WithSource(FileInformation&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files' index.</p>
     */
    inline const FileInformation& GetIndex() const{ return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(const FileInformation& value) { m_indexHasBeenSet = true; m_index = value; }
    inline void SetIndex(FileInformation&& value) { m_indexHasBeenSet = true; m_index = std::move(value); }
    inline ReferenceFiles& WithIndex(const FileInformation& value) { SetIndex(value); return *this;}
    inline ReferenceFiles& WithIndex(FileInformation&& value) { SetIndex(std::move(value)); return *this;}
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
