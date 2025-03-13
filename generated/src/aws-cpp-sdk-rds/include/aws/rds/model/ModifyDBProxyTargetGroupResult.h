/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBProxyTargetGroup.h>
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
  class ModifyDBProxyTargetGroupResult
  {
  public:
    AWS_RDS_API ModifyDBProxyTargetGroupResult() = default;
    AWS_RDS_API ModifyDBProxyTargetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ModifyDBProxyTargetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The settings of the modified <code>DBProxyTarget</code>.</p>
     */
    inline const DBProxyTargetGroup& GetDBProxyTargetGroup() const { return m_dBProxyTargetGroup; }
    template<typename DBProxyTargetGroupT = DBProxyTargetGroup>
    void SetDBProxyTargetGroup(DBProxyTargetGroupT&& value) { m_dBProxyTargetGroupHasBeenSet = true; m_dBProxyTargetGroup = std::forward<DBProxyTargetGroupT>(value); }
    template<typename DBProxyTargetGroupT = DBProxyTargetGroup>
    ModifyDBProxyTargetGroupResult& WithDBProxyTargetGroup(DBProxyTargetGroupT&& value) { SetDBProxyTargetGroup(std::forward<DBProxyTargetGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyDBProxyTargetGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBProxyTargetGroup m_dBProxyTargetGroup;
    bool m_dBProxyTargetGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
