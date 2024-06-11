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
    AWS_RDS_API DescribeDBClusterBacktracksResult();
    AWS_RDS_API DescribeDBClusterBacktracksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBClusterBacktracksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeDBClusterBacktracks</code> request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeDBClusterBacktracksResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDBClusterBacktracksResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDBClusterBacktracksResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of backtracks for the user.</p>
     */
    inline const Aws::Vector<DBClusterBacktrack>& GetDBClusterBacktracks() const{ return m_dBClusterBacktracks; }
    inline void SetDBClusterBacktracks(const Aws::Vector<DBClusterBacktrack>& value) { m_dBClusterBacktracks = value; }
    inline void SetDBClusterBacktracks(Aws::Vector<DBClusterBacktrack>&& value) { m_dBClusterBacktracks = std::move(value); }
    inline DescribeDBClusterBacktracksResult& WithDBClusterBacktracks(const Aws::Vector<DBClusterBacktrack>& value) { SetDBClusterBacktracks(value); return *this;}
    inline DescribeDBClusterBacktracksResult& WithDBClusterBacktracks(Aws::Vector<DBClusterBacktrack>&& value) { SetDBClusterBacktracks(std::move(value)); return *this;}
    inline DescribeDBClusterBacktracksResult& AddDBClusterBacktracks(const DBClusterBacktrack& value) { m_dBClusterBacktracks.push_back(value); return *this; }
    inline DescribeDBClusterBacktracksResult& AddDBClusterBacktracks(DBClusterBacktrack&& value) { m_dBClusterBacktracks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeDBClusterBacktracksResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeDBClusterBacktracksResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<DBClusterBacktrack> m_dBClusterBacktracks;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
