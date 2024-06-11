﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceFile.h>
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
  class GetReferenceRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API GetReferenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReference"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_OMICS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The reference's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline GetReferenceRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetReferenceRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetReferenceRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const{ return m_referenceStoreId; }
    inline bool ReferenceStoreIdHasBeenSet() const { return m_referenceStoreIdHasBeenSet; }
    inline void SetReferenceStoreId(const Aws::String& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = value; }
    inline void SetReferenceStoreId(Aws::String&& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = std::move(value); }
    inline void SetReferenceStoreId(const char* value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId.assign(value); }
    inline GetReferenceRequest& WithReferenceStoreId(const Aws::String& value) { SetReferenceStoreId(value); return *this;}
    inline GetReferenceRequest& WithReferenceStoreId(Aws::String&& value) { SetReferenceStoreId(std::move(value)); return *this;}
    inline GetReferenceRequest& WithReferenceStoreId(const char* value) { SetReferenceStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range to retrieve.</p>
     */
    inline const Aws::String& GetRange() const{ return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(const Aws::String& value) { m_rangeHasBeenSet = true; m_range = value; }
    inline void SetRange(Aws::String&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }
    inline void SetRange(const char* value) { m_rangeHasBeenSet = true; m_range.assign(value); }
    inline GetReferenceRequest& WithRange(const Aws::String& value) { SetRange(value); return *this;}
    inline GetReferenceRequest& WithRange(Aws::String&& value) { SetRange(std::move(value)); return *this;}
    inline GetReferenceRequest& WithRange(const char* value) { SetRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part number to retrieve.</p>
     */
    inline int GetPartNumber() const{ return m_partNumber; }
    inline bool PartNumberHasBeenSet() const { return m_partNumberHasBeenSet; }
    inline void SetPartNumber(int value) { m_partNumberHasBeenSet = true; m_partNumber = value; }
    inline GetReferenceRequest& WithPartNumber(int value) { SetPartNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file to retrieve.</p>
     */
    inline const ReferenceFile& GetFile() const{ return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    inline void SetFile(const ReferenceFile& value) { m_fileHasBeenSet = true; m_file = value; }
    inline void SetFile(ReferenceFile&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }
    inline GetReferenceRequest& WithFile(const ReferenceFile& value) { SetFile(value); return *this;}
    inline GetReferenceRequest& WithFile(ReferenceFile&& value) { SetFile(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_referenceStoreId;
    bool m_referenceStoreIdHasBeenSet = false;

    Aws::String m_range;
    bool m_rangeHasBeenSet = false;

    int m_partNumber;
    bool m_partNumberHasBeenSet = false;

    ReferenceFile m_file;
    bool m_fileHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
