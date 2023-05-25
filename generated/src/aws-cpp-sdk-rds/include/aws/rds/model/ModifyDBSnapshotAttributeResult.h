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
  class ModifyDBSnapshotAttributeResult
  {
  public:
    AWS_RDS_API ModifyDBSnapshotAttributeResult();
    AWS_RDS_API ModifyDBSnapshotAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ModifyDBSnapshotAttributeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBSnapshotAttributesResult& GetDBSnapshotAttributesResult() const{ return m_dBSnapshotAttributesResult; }

    
    inline void SetDBSnapshotAttributesResult(const DBSnapshotAttributesResult& value) { m_dBSnapshotAttributesResult = value; }

    
    inline void SetDBSnapshotAttributesResult(DBSnapshotAttributesResult&& value) { m_dBSnapshotAttributesResult = std::move(value); }

    
    inline ModifyDBSnapshotAttributeResult& WithDBSnapshotAttributesResult(const DBSnapshotAttributesResult& value) { SetDBSnapshotAttributesResult(value); return *this;}

    
    inline ModifyDBSnapshotAttributeResult& WithDBSnapshotAttributesResult(DBSnapshotAttributesResult&& value) { SetDBSnapshotAttributesResult(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyDBSnapshotAttributeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyDBSnapshotAttributeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBSnapshotAttributesResult m_dBSnapshotAttributesResult;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
