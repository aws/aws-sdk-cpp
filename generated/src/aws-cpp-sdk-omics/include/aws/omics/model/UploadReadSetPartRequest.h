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
    AWS_OMICS_API UploadReadSetPartRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UploadReadSetPart"; }

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_OMICS_API bool SignBody() const override { return false; }


    /**
     * <p> The Sequence Store ID used for the multipart upload. </p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }

    /**
     * <p> The Sequence Store ID used for the multipart upload. </p>
     */
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }

    /**
     * <p> The Sequence Store ID used for the multipart upload. </p>
     */
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = value; }

    /**
     * <p> The Sequence Store ID used for the multipart upload. </p>
     */
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::move(value); }

    /**
     * <p> The Sequence Store ID used for the multipart upload. </p>
     */
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId.assign(value); }

    /**
     * <p> The Sequence Store ID used for the multipart upload. </p>
     */
    inline UploadReadSetPartRequest& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}

    /**
     * <p> The Sequence Store ID used for the multipart upload. </p>
     */
    inline UploadReadSetPartRequest& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}

    /**
     * <p> The Sequence Store ID used for the multipart upload. </p>
     */
    inline UploadReadSetPartRequest& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}


    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline UploadReadSetPartRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline UploadReadSetPartRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline UploadReadSetPartRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}


    /**
     * <p> The source file for an upload part. </p>
     */
    inline const ReadSetPartSource& GetPartSource() const{ return m_partSource; }

    /**
     * <p> The source file for an upload part. </p>
     */
    inline bool PartSourceHasBeenSet() const { return m_partSourceHasBeenSet; }

    /**
     * <p> The source file for an upload part. </p>
     */
    inline void SetPartSource(const ReadSetPartSource& value) { m_partSourceHasBeenSet = true; m_partSource = value; }

    /**
     * <p> The source file for an upload part. </p>
     */
    inline void SetPartSource(ReadSetPartSource&& value) { m_partSourceHasBeenSet = true; m_partSource = std::move(value); }

    /**
     * <p> The source file for an upload part. </p>
     */
    inline UploadReadSetPartRequest& WithPartSource(const ReadSetPartSource& value) { SetPartSource(value); return *this;}

    /**
     * <p> The source file for an upload part. </p>
     */
    inline UploadReadSetPartRequest& WithPartSource(ReadSetPartSource&& value) { SetPartSource(std::move(value)); return *this;}


    /**
     * <p> The number of the part being uploaded. </p>
     */
    inline int GetPartNumber() const{ return m_partNumber; }

    /**
     * <p> The number of the part being uploaded. </p>
     */
    inline bool PartNumberHasBeenSet() const { return m_partNumberHasBeenSet; }

    /**
     * <p> The number of the part being uploaded. </p>
     */
    inline void SetPartNumber(int value) { m_partNumberHasBeenSet = true; m_partNumber = value; }

    /**
     * <p> The number of the part being uploaded. </p>
     */
    inline UploadReadSetPartRequest& WithPartNumber(int value) { SetPartNumber(value); return *this;}

  private:

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    ReadSetPartSource m_partSource;
    bool m_partSourceHasBeenSet = false;

    int m_partNumber;
    bool m_partNumberHasBeenSet = false;

  };

} // namespace Model
} // namespace Omics
} // namespace Aws
