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
    AWS_REDSHIFT_API CreateSnapshotCopyGrantResult();
    AWS_REDSHIFT_API CreateSnapshotCopyGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateSnapshotCopyGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const SnapshotCopyGrant& GetSnapshotCopyGrant() const{ return m_snapshotCopyGrant; }

    
    inline void SetSnapshotCopyGrant(const SnapshotCopyGrant& value) { m_snapshotCopyGrant = value; }

    
    inline void SetSnapshotCopyGrant(SnapshotCopyGrant&& value) { m_snapshotCopyGrant = std::move(value); }

    
    inline CreateSnapshotCopyGrantResult& WithSnapshotCopyGrant(const SnapshotCopyGrant& value) { SetSnapshotCopyGrant(value); return *this;}

    
    inline CreateSnapshotCopyGrantResult& WithSnapshotCopyGrant(SnapshotCopyGrant&& value) { SetSnapshotCopyGrant(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateSnapshotCopyGrantResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateSnapshotCopyGrantResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    SnapshotCopyGrant m_snapshotCopyGrant;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
