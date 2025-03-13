/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBProxyTarget.h>
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
  class RegisterDBProxyTargetsResult
  {
  public:
    AWS_RDS_API RegisterDBProxyTargetsResult() = default;
    AWS_RDS_API RegisterDBProxyTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API RegisterDBProxyTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>One or more <code>DBProxyTarget</code> objects that are created when you
     * register targets with a target group.</p>
     */
    inline const Aws::Vector<DBProxyTarget>& GetDBProxyTargets() const { return m_dBProxyTargets; }
    template<typename DBProxyTargetsT = Aws::Vector<DBProxyTarget>>
    void SetDBProxyTargets(DBProxyTargetsT&& value) { m_dBProxyTargetsHasBeenSet = true; m_dBProxyTargets = std::forward<DBProxyTargetsT>(value); }
    template<typename DBProxyTargetsT = Aws::Vector<DBProxyTarget>>
    RegisterDBProxyTargetsResult& WithDBProxyTargets(DBProxyTargetsT&& value) { SetDBProxyTargets(std::forward<DBProxyTargetsT>(value)); return *this;}
    template<typename DBProxyTargetsT = DBProxyTarget>
    RegisterDBProxyTargetsResult& AddDBProxyTargets(DBProxyTargetsT&& value) { m_dBProxyTargetsHasBeenSet = true; m_dBProxyTargets.emplace_back(std::forward<DBProxyTargetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    RegisterDBProxyTargetsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DBProxyTarget> m_dBProxyTargets;
    bool m_dBProxyTargetsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
