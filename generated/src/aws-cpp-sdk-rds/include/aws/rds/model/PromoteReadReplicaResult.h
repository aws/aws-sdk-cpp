/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBInstance.h>
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
  class PromoteReadReplicaResult
  {
  public:
    AWS_RDS_API PromoteReadReplicaResult() = default;
    AWS_RDS_API PromoteReadReplicaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API PromoteReadReplicaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBInstance& GetDBInstance() const { return m_dBInstance; }
    template<typename DBInstanceT = DBInstance>
    void SetDBInstance(DBInstanceT&& value) { m_dBInstanceHasBeenSet = true; m_dBInstance = std::forward<DBInstanceT>(value); }
    template<typename DBInstanceT = DBInstance>
    PromoteReadReplicaResult& WithDBInstance(DBInstanceT&& value) { SetDBInstance(std::forward<DBInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    PromoteReadReplicaResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBInstance m_dBInstance;
    bool m_dBInstanceHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
