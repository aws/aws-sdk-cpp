/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class AbortMultipartReadSetUploadRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API AbortMultipartReadSetUploadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AbortMultipartReadSetUpload"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    /**
     * <p> The sequence store ID for the store involved in the multipart upload. </p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }

    /**
     * <p> The sequence store ID for the store involved in the multipart upload. </p>
     */
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }

    /**
     * <p> The sequence store ID for the store involved in the multipart upload. </p>
     */
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = value; }

    /**
     * <p> The sequence store ID for the store involved in the multipart upload. </p>
     */
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::move(value); }

    /**
     * <p> The sequence store ID for the store involved in the multipart upload. </p>
     */
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId.assign(value); }

    /**
     * <p> The sequence store ID for the store involved in the multipart upload. </p>
     */
    inline AbortMultipartReadSetUploadRequest& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}

    /**
     * <p> The sequence store ID for the store involved in the multipart upload. </p>
     */
    inline AbortMultipartReadSetUploadRequest& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}

    /**
     * <p> The sequence store ID for the store involved in the multipart upload. </p>
     */
    inline AbortMultipartReadSetUploadRequest& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}


    /**
     * <p> The ID for the multipart upload. </p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p> The ID for the multipart upload. </p>
     */
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }

    /**
     * <p> The ID for the multipart upload. </p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * <p> The ID for the multipart upload. </p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }

    /**
     * <p> The ID for the multipart upload. </p>
     */
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }

    /**
     * <p> The ID for the multipart upload. </p>
     */
    inline AbortMultipartReadSetUploadRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p> The ID for the multipart upload. </p>
     */
    inline AbortMultipartReadSetUploadRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p> The ID for the multipart upload. </p>
     */
    inline AbortMultipartReadSetUploadRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}

  private:

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
