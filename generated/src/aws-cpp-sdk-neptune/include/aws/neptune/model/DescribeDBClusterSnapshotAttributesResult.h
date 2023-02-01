/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/DBClusterSnapshotAttributesResult.h>
#include <aws/neptune/model/ResponseMetadata.h>
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
namespace Neptune
{
namespace Model
{
  class DescribeDBClusterSnapshotAttributesResult
  {
  public:
    AWS_NEPTUNE_API DescribeDBClusterSnapshotAttributesResult();
    AWS_NEPTUNE_API DescribeDBClusterSnapshotAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API DescribeDBClusterSnapshotAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBClusterSnapshotAttributesResult& GetDBClusterSnapshotAttributesResult() const{ return m_dBClusterSnapshotAttributesResult; }

    
    inline void SetDBClusterSnapshotAttributesResult(const DBClusterSnapshotAttributesResult& value) { m_dBClusterSnapshotAttributesResult = value; }

    
    inline void SetDBClusterSnapshotAttributesResult(DBClusterSnapshotAttributesResult&& value) { m_dBClusterSnapshotAttributesResult = std::move(value); }

    
    inline DescribeDBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributesResult(const DBClusterSnapshotAttributesResult& value) { SetDBClusterSnapshotAttributesResult(value); return *this;}

    
    inline DescribeDBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributesResult(DBClusterSnapshotAttributesResult&& value) { SetDBClusterSnapshotAttributesResult(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBClusterSnapshotAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBClusterSnapshotAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBClusterSnapshotAttributesResult m_dBClusterSnapshotAttributesResult;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
