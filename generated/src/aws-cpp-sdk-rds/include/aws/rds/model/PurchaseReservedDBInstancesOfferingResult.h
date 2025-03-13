/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/ReservedDBInstance.h>
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
  class PurchaseReservedDBInstancesOfferingResult
  {
  public:
    AWS_RDS_API PurchaseReservedDBInstancesOfferingResult() = default;
    AWS_RDS_API PurchaseReservedDBInstancesOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API PurchaseReservedDBInstancesOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const ReservedDBInstance& GetReservedDBInstance() const { return m_reservedDBInstance; }
    template<typename ReservedDBInstanceT = ReservedDBInstance>
    void SetReservedDBInstance(ReservedDBInstanceT&& value) { m_reservedDBInstanceHasBeenSet = true; m_reservedDBInstance = std::forward<ReservedDBInstanceT>(value); }
    template<typename ReservedDBInstanceT = ReservedDBInstance>
    PurchaseReservedDBInstancesOfferingResult& WithReservedDBInstance(ReservedDBInstanceT&& value) { SetReservedDBInstance(std::forward<ReservedDBInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    PurchaseReservedDBInstancesOfferingResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ReservedDBInstance m_reservedDBInstance;
    bool m_reservedDBInstanceHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
