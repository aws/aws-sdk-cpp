/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/DefaultClusterParameters.h>
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
  class DescribeDefaultClusterParametersResult
  {
  public:
    AWS_REDSHIFT_API DescribeDefaultClusterParametersResult() = default;
    AWS_REDSHIFT_API DescribeDefaultClusterParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeDefaultClusterParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DefaultClusterParameters& GetDefaultClusterParameters() const { return m_defaultClusterParameters; }
    template<typename DefaultClusterParametersT = DefaultClusterParameters>
    void SetDefaultClusterParameters(DefaultClusterParametersT&& value) { m_defaultClusterParametersHasBeenSet = true; m_defaultClusterParameters = std::forward<DefaultClusterParametersT>(value); }
    template<typename DefaultClusterParametersT = DefaultClusterParameters>
    DescribeDefaultClusterParametersResult& WithDefaultClusterParameters(DefaultClusterParametersT&& value) { SetDefaultClusterParameters(std::forward<DefaultClusterParametersT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDefaultClusterParametersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DefaultClusterParameters m_defaultClusterParameters;
    bool m_defaultClusterParametersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
