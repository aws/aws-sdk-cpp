/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/DBParameterGroup.h>
#include <aws/neptune/model/ResponseMetadata.h>
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
namespace Neptune
{
namespace Model
{
  class CreateDBParameterGroupResult
  {
  public:
    AWS_NEPTUNE_API CreateDBParameterGroupResult() = default;
    AWS_NEPTUNE_API CreateDBParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API CreateDBParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBParameterGroup& GetDBParameterGroup() const { return m_dBParameterGroup; }
    template<typename DBParameterGroupT = DBParameterGroup>
    void SetDBParameterGroup(DBParameterGroupT&& value) { m_dBParameterGroupHasBeenSet = true; m_dBParameterGroup = std::forward<DBParameterGroupT>(value); }
    template<typename DBParameterGroupT = DBParameterGroup>
    CreateDBParameterGroupResult& WithDBParameterGroup(DBParameterGroupT&& value) { SetDBParameterGroup(std::forward<DBParameterGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateDBParameterGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBParameterGroup m_dBParameterGroup;
    bool m_dBParameterGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
