/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBClusterBacktrack.h>
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
   * <code>DescribeDBClusterBacktracks</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterBacktrackMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBClusterBacktracksResult
  {
  public:
    AWS_RDS_API DescribeDBClusterBacktracksResult() = default;
    AWS_RDS_API DescribeDBClusterBacktracksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBClusterBacktracksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeDBClusterBacktracks</code> request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBClusterBacktracksResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of backtracks for the user.</p>
     */
    inline const Aws::Vector<DBClusterBacktrack>& GetDBClusterBacktracks() const { return m_dBClusterBacktracks; }
    template<typename DBClusterBacktracksT = Aws::Vector<DBClusterBacktrack>>
    void SetDBClusterBacktracks(DBClusterBacktracksT&& value) { m_dBClusterBacktracksHasBeenSet = true; m_dBClusterBacktracks = std::forward<DBClusterBacktracksT>(value); }
    template<typename DBClusterBacktracksT = Aws::Vector<DBClusterBacktrack>>
    DescribeDBClusterBacktracksResult& WithDBClusterBacktracks(DBClusterBacktracksT&& value) { SetDBClusterBacktracks(std::forward<DBClusterBacktracksT>(value)); return *this;}
    template<typename DBClusterBacktracksT = DBClusterBacktrack>
    DescribeDBClusterBacktracksResult& AddDBClusterBacktracks(DBClusterBacktracksT&& value) { m_dBClusterBacktracksHasBeenSet = true; m_dBClusterBacktracks.emplace_back(std::forward<DBClusterBacktracksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBClusterBacktracksResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<DBClusterBacktrack> m_dBClusterBacktracks;
    bool m_dBClusterBacktracksHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
