/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/ValidDBInstanceModificationsMessage.h>
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
  class DescribeValidDBInstanceModificationsResult
  {
  public:
    AWS_RDS_API DescribeValidDBInstanceModificationsResult() = default;
    AWS_RDS_API DescribeValidDBInstanceModificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeValidDBInstanceModificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const ValidDBInstanceModificationsMessage& GetValidDBInstanceModificationsMessage() const { return m_validDBInstanceModificationsMessage; }
    template<typename ValidDBInstanceModificationsMessageT = ValidDBInstanceModificationsMessage>
    void SetValidDBInstanceModificationsMessage(ValidDBInstanceModificationsMessageT&& value) { m_validDBInstanceModificationsMessageHasBeenSet = true; m_validDBInstanceModificationsMessage = std::forward<ValidDBInstanceModificationsMessageT>(value); }
    template<typename ValidDBInstanceModificationsMessageT = ValidDBInstanceModificationsMessage>
    DescribeValidDBInstanceModificationsResult& WithValidDBInstanceModificationsMessage(ValidDBInstanceModificationsMessageT&& value) { SetValidDBInstanceModificationsMessage(std::forward<ValidDBInstanceModificationsMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeValidDBInstanceModificationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ValidDBInstanceModificationsMessage m_validDBInstanceModificationsMessage;
    bool m_validDBInstanceModificationsMessageHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
