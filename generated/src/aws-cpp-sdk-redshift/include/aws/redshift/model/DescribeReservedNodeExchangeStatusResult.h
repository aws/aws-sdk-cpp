/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ReservedNodeExchangeStatus.h>
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
  class DescribeReservedNodeExchangeStatusResult
  {
  public:
    AWS_REDSHIFT_API DescribeReservedNodeExchangeStatusResult();
    AWS_REDSHIFT_API DescribeReservedNodeExchangeStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeReservedNodeExchangeStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The details of the reserved-node exchange request, including the status,
     * request time, source reserved-node identifier, and additional details.</p>
     */
    inline const Aws::Vector<ReservedNodeExchangeStatus>& GetReservedNodeExchangeStatusDetails() const{ return m_reservedNodeExchangeStatusDetails; }

    /**
     * <p>The details of the reserved-node exchange request, including the status,
     * request time, source reserved-node identifier, and additional details.</p>
     */
    inline void SetReservedNodeExchangeStatusDetails(const Aws::Vector<ReservedNodeExchangeStatus>& value) { m_reservedNodeExchangeStatusDetails = value; }

    /**
     * <p>The details of the reserved-node exchange request, including the status,
     * request time, source reserved-node identifier, and additional details.</p>
     */
    inline void SetReservedNodeExchangeStatusDetails(Aws::Vector<ReservedNodeExchangeStatus>&& value) { m_reservedNodeExchangeStatusDetails = std::move(value); }

    /**
     * <p>The details of the reserved-node exchange request, including the status,
     * request time, source reserved-node identifier, and additional details.</p>
     */
    inline DescribeReservedNodeExchangeStatusResult& WithReservedNodeExchangeStatusDetails(const Aws::Vector<ReservedNodeExchangeStatus>& value) { SetReservedNodeExchangeStatusDetails(value); return *this;}

    /**
     * <p>The details of the reserved-node exchange request, including the status,
     * request time, source reserved-node identifier, and additional details.</p>
     */
    inline DescribeReservedNodeExchangeStatusResult& WithReservedNodeExchangeStatusDetails(Aws::Vector<ReservedNodeExchangeStatus>&& value) { SetReservedNodeExchangeStatusDetails(std::move(value)); return *this;}

    /**
     * <p>The details of the reserved-node exchange request, including the status,
     * request time, source reserved-node identifier, and additional details.</p>
     */
    inline DescribeReservedNodeExchangeStatusResult& AddReservedNodeExchangeStatusDetails(const ReservedNodeExchangeStatus& value) { m_reservedNodeExchangeStatusDetails.push_back(value); return *this; }

    /**
     * <p>The details of the reserved-node exchange request, including the status,
     * request time, source reserved-node identifier, and additional details.</p>
     */
    inline DescribeReservedNodeExchangeStatusResult& AddReservedNodeExchangeStatusDetails(ReservedNodeExchangeStatus&& value) { m_reservedNodeExchangeStatusDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request.</p>
     */
    inline DescribeReservedNodeExchangeStatusResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request.</p>
     */
    inline DescribeReservedNodeExchangeStatusResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request.</p>
     */
    inline DescribeReservedNodeExchangeStatusResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeReservedNodeExchangeStatusResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeReservedNodeExchangeStatusResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ReservedNodeExchangeStatus> m_reservedNodeExchangeStatusDetails;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
