/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/AccountAttribute.h>
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
  class DescribeAccountAttributesResult
  {
  public:
    AWS_REDSHIFT_API DescribeAccountAttributesResult() = default;
    AWS_REDSHIFT_API DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeAccountAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of attributes assigned to an account.</p>
     */
    inline const Aws::Vector<AccountAttribute>& GetAccountAttributes() const { return m_accountAttributes; }
    template<typename AccountAttributesT = Aws::Vector<AccountAttribute>>
    void SetAccountAttributes(AccountAttributesT&& value) { m_accountAttributesHasBeenSet = true; m_accountAttributes = std::forward<AccountAttributesT>(value); }
    template<typename AccountAttributesT = Aws::Vector<AccountAttribute>>
    DescribeAccountAttributesResult& WithAccountAttributes(AccountAttributesT&& value) { SetAccountAttributes(std::forward<AccountAttributesT>(value)); return *this;}
    template<typename AccountAttributesT = AccountAttribute>
    DescribeAccountAttributesResult& AddAccountAttributes(AccountAttributesT&& value) { m_accountAttributesHasBeenSet = true; m_accountAttributes.emplace_back(std::forward<AccountAttributesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAccountAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountAttribute> m_accountAttributes;
    bool m_accountAttributesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
