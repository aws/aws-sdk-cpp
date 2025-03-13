/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReadSetPartSource.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class UploadReadSetPartRequest : public StreamingOmicsRequest
  {
  public:
    AWS_OMICS_API UploadReadSetPartRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UploadReadSetPart"; }

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_OMICS_API bool SignBody() const override { return false; }


    ///@{
    /**
     * <p>The Sequence Store ID used for the multipart upload.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const { return m_sequenceStoreId; }
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }
    template<typename SequenceStoreIdT = Aws::String>
    void SetSequenceStoreId(SequenceStoreIdT&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::forward<SequenceStoreIdT>(value); }
    template<typename SequenceStoreIdT = Aws::String>
    UploadReadSetPartRequest& WithSequenceStoreId(SequenceStoreIdT&& value) { SetSequenceStoreId(std::forward<SequenceStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the initiated multipart upload.</p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    UploadReadSetPartRequest& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source file for an upload part.</p>
     */
    inline ReadSetPartSource GetPartSource() const { return m_partSource; }
    inline bool PartSourceHasBeenSet() const { return m_partSourceHasBeenSet; }
    inline void SetPartSource(ReadSetPartSource value) { m_partSourceHasBeenSet = true; m_partSource = value; }
    inline UploadReadSetPartRequest& WithPartSource(ReadSetPartSource value) { SetPartSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the part being uploaded.</p>
     */
    inline int GetPartNumber() const { return m_partNumber; }
    inline bool PartNumberHasBeenSet() const { return m_partNumberHasBeenSet; }
    inline void SetPartNumber(int value) { m_partNumberHasBeenSet = true; m_partNumber = value; }
    inline UploadReadSetPartRequest& WithPartNumber(int value) { SetPartNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    ReadSetPartSource m_partSource{ReadSetPartSource::NOT_SET};
    bool m_partSourceHasBeenSet = false;

    int m_partNumber{0};
    bool m_partNumberHasBeenSet = false;

  };

} // namespace Model
} // namespace Omics
} // namespace Aws
