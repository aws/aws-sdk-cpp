/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/OwnershipControls.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class GetBucketOwnershipControlsResult
  {
  public:
    AWS_S3_API GetBucketOwnershipControlsResult() = default;
    AWS_S3_API GetBucketOwnershipControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketOwnershipControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The <code>OwnershipControls</code> (BucketOwnerEnforced,
     * BucketOwnerPreferred, or ObjectWriter) currently in effect for this Amazon S3
     * bucket.</p>
     */
    inline const OwnershipControls& GetOwnershipControls() const { return m_ownershipControls; }
    template<typename OwnershipControlsT = OwnershipControls>
    void SetOwnershipControls(OwnershipControlsT&& value) { m_ownershipControlsHasBeenSet = true; m_ownershipControls = std::forward<OwnershipControlsT>(value); }
    template<typename OwnershipControlsT = OwnershipControls>
    GetBucketOwnershipControlsResult& WithOwnershipControls(OwnershipControlsT&& value) { SetOwnershipControls(std::forward<OwnershipControlsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketOwnershipControlsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OwnershipControls m_ownershipControls;
    bool m_ownershipControlsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
