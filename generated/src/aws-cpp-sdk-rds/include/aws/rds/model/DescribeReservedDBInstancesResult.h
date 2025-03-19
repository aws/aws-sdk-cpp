/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/ReservedDBInstance.h>
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
   * <code>DescribeReservedDBInstances</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ReservedDBInstanceMessage">AWS
   * API Reference</a></p>
   */
  class DescribeReservedDBInstancesResult
  {
  public:
    AWS_RDS_API DescribeReservedDBInstancesResult() = default;
    AWS_RDS_API DescribeReservedDBInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeReservedDBInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReservedDBInstancesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reserved DB instances.</p>
     */
    inline const Aws::Vector<ReservedDBInstance>& GetReservedDBInstances() const { return m_reservedDBInstances; }
    template<typename ReservedDBInstancesT = Aws::Vector<ReservedDBInstance>>
    void SetReservedDBInstances(ReservedDBInstancesT&& value) { m_reservedDBInstancesHasBeenSet = true; m_reservedDBInstances = std::forward<ReservedDBInstancesT>(value); }
    template<typename ReservedDBInstancesT = Aws::Vector<ReservedDBInstance>>
    DescribeReservedDBInstancesResult& WithReservedDBInstances(ReservedDBInstancesT&& value) { SetReservedDBInstances(std::forward<ReservedDBInstancesT>(value)); return *this;}
    template<typename ReservedDBInstancesT = ReservedDBInstance>
    DescribeReservedDBInstancesResult& AddReservedDBInstances(ReservedDBInstancesT&& value) { m_reservedDBInstancesHasBeenSet = true; m_reservedDBInstances.emplace_back(std::forward<ReservedDBInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeReservedDBInstancesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ReservedDBInstance> m_reservedDBInstances;
    bool m_reservedDBInstancesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
