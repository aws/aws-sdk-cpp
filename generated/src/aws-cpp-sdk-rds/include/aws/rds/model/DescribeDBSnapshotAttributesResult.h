/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBSnapshotAttributesResult.h>
#include <aws/rds/model/ResponseMetadata.h>
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
namespace RDS
{
namespace Model
{
  class DescribeDBSnapshotAttributesResult
  {
  public:
    AWS_RDS_API DescribeDBSnapshotAttributesResult() = default;
    AWS_RDS_API DescribeDBSnapshotAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBSnapshotAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBSnapshotAttributesResult& GetDBSnapshotAttributesResult() const { return m_dBSnapshotAttributesResult; }
    template<typename DBSnapshotAttributesResultT = DBSnapshotAttributesResult>
    void SetDBSnapshotAttributesResult(DBSnapshotAttributesResultT&& value) { m_dBSnapshotAttributesResultHasBeenSet = true; m_dBSnapshotAttributesResult = std::forward<DBSnapshotAttributesResultT>(value); }
    template<typename DBSnapshotAttributesResultT = DBSnapshotAttributesResult>
    DescribeDBSnapshotAttributesResult& WithDBSnapshotAttributesResult(DBSnapshotAttributesResultT&& value) { SetDBSnapshotAttributesResult(std::forward<DBSnapshotAttributesResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBSnapshotAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBSnapshotAttributesResult m_dBSnapshotAttributesResult;
    bool m_dBSnapshotAttributesResultHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
