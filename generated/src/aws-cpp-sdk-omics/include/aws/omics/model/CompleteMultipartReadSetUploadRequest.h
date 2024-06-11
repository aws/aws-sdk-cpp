/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/CompleteReadSetUploadPartListItem.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class CompleteMultipartReadSetUploadRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API CompleteMultipartReadSetUploadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CompleteMultipartReadSetUpload"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The sequence store ID for the store involved in the multipart upload.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = value; }
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::move(value); }
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId.assign(value); }
    inline CompleteMultipartReadSetUploadRequest& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}
    inline CompleteMultipartReadSetUploadRequest& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}
    inline CompleteMultipartReadSetUploadRequest& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the multipart upload.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }
    inline CompleteMultipartReadSetUploadRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}
    inline CompleteMultipartReadSetUploadRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}
    inline CompleteMultipartReadSetUploadRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The individual uploads or parts of a multipart upload.</p>
     */
    inline const Aws::Vector<CompleteReadSetUploadPartListItem>& GetParts() const{ return m_parts; }
    inline bool PartsHasBeenSet() const { return m_partsHasBeenSet; }
    inline void SetParts(const Aws::Vector<CompleteReadSetUploadPartListItem>& value) { m_partsHasBeenSet = true; m_parts = value; }
    inline void SetParts(Aws::Vector<CompleteReadSetUploadPartListItem>&& value) { m_partsHasBeenSet = true; m_parts = std::move(value); }
    inline CompleteMultipartReadSetUploadRequest& WithParts(const Aws::Vector<CompleteReadSetUploadPartListItem>& value) { SetParts(value); return *this;}
    inline CompleteMultipartReadSetUploadRequest& WithParts(Aws::Vector<CompleteReadSetUploadPartListItem>&& value) { SetParts(std::move(value)); return *this;}
    inline CompleteMultipartReadSetUploadRequest& AddParts(const CompleteReadSetUploadPartListItem& value) { m_partsHasBeenSet = true; m_parts.push_back(value); return *this; }
    inline CompleteMultipartReadSetUploadRequest& AddParts(CompleteReadSetUploadPartListItem&& value) { m_partsHasBeenSet = true; m_parts.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    Aws::Vector<CompleteReadSetUploadPartListItem> m_parts;
    bool m_partsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
