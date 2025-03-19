/**
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
    AWS_OMICS_API GetReferenceRequest() = default;

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
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetReferenceRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const { return m_referenceStoreId; }
    inline bool ReferenceStoreIdHasBeenSet() const { return m_referenceStoreIdHasBeenSet; }
    template<typename ReferenceStoreIdT = Aws::String>
    void SetReferenceStoreId(ReferenceStoreIdT&& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = std::forward<ReferenceStoreIdT>(value); }
    template<typename ReferenceStoreIdT = Aws::String>
    GetReferenceRequest& WithReferenceStoreId(ReferenceStoreIdT&& value) { SetReferenceStoreId(std::forward<ReferenceStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range to retrieve.</p>
     */
    inline const Aws::String& GetRange() const { return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    template<typename RangeT = Aws::String>
    void SetRange(RangeT&& value) { m_rangeHasBeenSet = true; m_range = std::forward<RangeT>(value); }
    template<typename RangeT = Aws::String>
    GetReferenceRequest& WithRange(RangeT&& value) { SetRange(std::forward<RangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part number to retrieve.</p>
     */
    inline int GetPartNumber() const { return m_partNumber; }
    inline bool PartNumberHasBeenSet() const { return m_partNumberHasBeenSet; }
    inline void SetPartNumber(int value) { m_partNumberHasBeenSet = true; m_partNumber = value; }
    inline GetReferenceRequest& WithPartNumber(int value) { SetPartNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file to retrieve.</p>
     */
    inline ReferenceFile GetFile() const { return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    inline void SetFile(ReferenceFile value) { m_fileHasBeenSet = true; m_file = value; }
    inline GetReferenceRequest& WithFile(ReferenceFile value) { SetFile(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_referenceStoreId;
    bool m_referenceStoreIdHasBeenSet = false;

    Aws::String m_range;
    bool m_rangeHasBeenSet = false;

    int m_partNumber{0};
    bool m_partNumberHasBeenSet = false;

    ReferenceFile m_file{ReferenceFile::NOT_SET};
    bool m_fileHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
