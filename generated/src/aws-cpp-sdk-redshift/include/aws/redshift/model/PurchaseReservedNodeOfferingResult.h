/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/ReservedNode.h>
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
  class PurchaseReservedNodeOfferingResult
  {
  public:
    AWS_REDSHIFT_API PurchaseReservedNodeOfferingResult();
    AWS_REDSHIFT_API PurchaseReservedNodeOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API PurchaseReservedNodeOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ReservedNode& GetReservedNode() const{ return m_reservedNode; }

    
    inline void SetReservedNode(const ReservedNode& value) { m_reservedNode = value; }

    
    inline void SetReservedNode(ReservedNode&& value) { m_reservedNode = std::move(value); }

    
    inline PurchaseReservedNodeOfferingResult& WithReservedNode(const ReservedNode& value) { SetReservedNode(value); return *this;}

    
    inline PurchaseReservedNodeOfferingResult& WithReservedNode(ReservedNode&& value) { SetReservedNode(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline PurchaseReservedNodeOfferingResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline PurchaseReservedNodeOfferingResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ReservedNode m_reservedNode;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
