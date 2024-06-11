﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/ReservedDBInstancesOffering.h>
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
  /**
   * <p>Contains the result of a successful invocation of the
   * <code>DescribeReservedDBInstancesOfferings</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ReservedDBInstancesOfferingMessage">AWS
   * API Reference</a></p>
   */
  class DescribeReservedDBInstancesOfferingsResult
  {
  public:
    AWS_RDS_API DescribeReservedDBInstancesOfferingsResult();
    AWS_RDS_API DescribeReservedDBInstancesOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeReservedDBInstancesOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeReservedDBInstancesOfferingsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeReservedDBInstancesOfferingsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeReservedDBInstancesOfferingsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reserved DB instance offerings.</p>
     */
    inline const Aws::Vector<ReservedDBInstancesOffering>& GetReservedDBInstancesOfferings() const{ return m_reservedDBInstancesOfferings; }
    inline void SetReservedDBInstancesOfferings(const Aws::Vector<ReservedDBInstancesOffering>& value) { m_reservedDBInstancesOfferings = value; }
    inline void SetReservedDBInstancesOfferings(Aws::Vector<ReservedDBInstancesOffering>&& value) { m_reservedDBInstancesOfferings = std::move(value); }
    inline DescribeReservedDBInstancesOfferingsResult& WithReservedDBInstancesOfferings(const Aws::Vector<ReservedDBInstancesOffering>& value) { SetReservedDBInstancesOfferings(value); return *this;}
    inline DescribeReservedDBInstancesOfferingsResult& WithReservedDBInstancesOfferings(Aws::Vector<ReservedDBInstancesOffering>&& value) { SetReservedDBInstancesOfferings(std::move(value)); return *this;}
    inline DescribeReservedDBInstancesOfferingsResult& AddReservedDBInstancesOfferings(const ReservedDBInstancesOffering& value) { m_reservedDBInstancesOfferings.push_back(value); return *this; }
    inline DescribeReservedDBInstancesOfferingsResult& AddReservedDBInstancesOfferings(ReservedDBInstancesOffering&& value) { m_reservedDBInstancesOfferings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeReservedDBInstancesOfferingsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeReservedDBInstancesOfferingsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<ReservedDBInstancesOffering> m_reservedDBInstancesOfferings;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
