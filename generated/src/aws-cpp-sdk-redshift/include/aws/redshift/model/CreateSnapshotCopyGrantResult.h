/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/SnapshotCopyGrant.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
namespace Redshift
{
namespace Model
{
  class CreateSnapshotCopyGrantResult
  {
  public:
    AWS_REDSHIFT_API CreateSnapshotCopyGrantResult() = default;
    AWS_REDSHIFT_API CreateSnapshotCopyGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateSnapshotCopyGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const SnapshotCopyGrant& GetSnapshotCopyGrant() const { return m_snapshotCopyGrant; }
    template<typename SnapshotCopyGrantT = SnapshotCopyGrant>
    void SetSnapshotCopyGrant(SnapshotCopyGrantT&& value) { m_snapshotCopyGrantHasBeenSet = true; m_snapshotCopyGrant = std::forward<SnapshotCopyGrantT>(value); }
    template<typename SnapshotCopyGrantT = SnapshotCopyGrant>
    CreateSnapshotCopyGrantResult& WithSnapshotCopyGrant(SnapshotCopyGrantT&& value) { SetSnapshotCopyGrant(std::forward<SnapshotCopyGrantT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateSnapshotCopyGrantResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    SnapshotCopyGrant m_snapshotCopyGrant;
    bool m_snapshotCopyGrantHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
