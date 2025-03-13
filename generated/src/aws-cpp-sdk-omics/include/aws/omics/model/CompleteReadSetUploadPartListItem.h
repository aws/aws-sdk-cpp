/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ReadSetPartSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Part of the response to the CompleteReadSetUpload API, including metadata.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CompleteReadSetUploadPartListItem">AWS
   * API Reference</a></p>
   */
  class CompleteReadSetUploadPartListItem
  {
  public:
    AWS_OMICS_API CompleteReadSetUploadPartListItem() = default;
    AWS_OMICS_API CompleteReadSetUploadPartListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API CompleteReadSetUploadPartListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A number identifying the part in a read set upload. </p>
     */
    inline int GetPartNumber() const { return m_partNumber; }
    inline bool PartNumberHasBeenSet() const { return m_partNumberHasBeenSet; }
    inline void SetPartNumber(int value) { m_partNumberHasBeenSet = true; m_partNumber = value; }
    inline CompleteReadSetUploadPartListItem& WithPartNumber(int value) { SetPartNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source file of the part being uploaded. </p>
     */
    inline ReadSetPartSource GetPartSource() const { return m_partSource; }
    inline bool PartSourceHasBeenSet() const { return m_partSourceHasBeenSet; }
    inline void SetPartSource(ReadSetPartSource value) { m_partSourceHasBeenSet = true; m_partSource = value; }
    inline CompleteReadSetUploadPartListItem& WithPartSource(ReadSetPartSource value) { SetPartSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier used to confirm that parts are being added to the
     * correct upload. </p>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    CompleteReadSetUploadPartListItem& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}
  private:

    int m_partNumber{0};
    bool m_partNumberHasBeenSet = false;

    ReadSetPartSource m_partSource{ReadSetPartSource::NOT_SET};
    bool m_partSourceHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
